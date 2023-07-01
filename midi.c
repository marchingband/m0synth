#include "bflb_mtimer.h"
#include "bflb_uart.h"
#include "bflb_gpio.h"
#include <string.h>
#include "math.h"
#include "dsp.h"

#define MIDI_NOTE_OFF 8
#define MIDI_NOTE_ON 9
#define MIDI_PROGRAM_CHANGE 12
#define MIDI_CC 11
#define MIDI_CC_VOLUME 7
#define MIDI_CC_PAN 10
#define MIDI_CC_EXP 11
#define MIDI_CC_SUSTAIN 64
#define MIDI_CC_RELEASE 72
#define MIDI_CC_MUTE 120
#define MIDI_CC_RESET 121

#define MIDI_CC_EQ_BASS 20
#define MIDI_CC_EQ_TREBLE 21

uint8_t *getMidiMsg(void);
uint8_t getMidiMsgLen(void);
bool parse(uint8_t byte);
void init_midi_parser(void);

void play(uint8_t note);
void stop(uint8_t note);
void set_note(uint8_t note);
void set_filter(uint8_t val);

static struct bflb_device_s *uart0;
int ch;

// UIGlue {
// 	UIGlue *uiInterface;
// 	void (*openVerticalBox)(UIGlue *uiInterface, char* key);
// 	void (*openHorizontalBox)(UIGlue *uiInterface, char* key);
// 	void (*closeBox)(UIGlue *uiInterface);
// 	void (*declare)(UIGlue *uiInterface, float *p, const char* key, const char* val);

// 	void (*addVerticalSlider)(UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
// 	void (*addHorizontalSlider)(UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
// 	void (*addNumEntry)(UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);

// 	void (*addVerticalBargraph)(UIGlue *uiInterface, const char *name, float *p, float f1, float f2);
// 	void (*addButton)(UIGlue *uiInterface, const char *name, float *p);
// };

struct CC {
    float *p;
    float min;
    float max;
    float init;
    float step;
    float mul;
    char name[20];
};

struct CC CCs[127] = {0};
float *pitch = 0;
float *gate = 0;

void extract(const char *name, float *p, float init, float min, float max, float step)
{
    // we can ignore the pitch and gate, and just calibrate for CC's
    for(int i=0; i<127; i++)
    {
        struct CC *cc = &CCs[i];
        if(cc->p == p){
            cc->min = min;
            cc->max = max;
            cc->init = init;
            cc->step = step;
            float steps = (max - min) / step;
            float per = steps / 127.0;
            cc->mul = per;
            strcpy(cc->name, name);
            break;
        }
        printf("failed to find cc for %s\n", name);
        /*

        set = out / per (round)
        
        min 0 | max 100 | step 1   | steps 100  | per 0.787 | in 65 | out 51.155
        min 0 | max 100 | step 0.1 | steps 1000 | per 7.87  | in 65 | out 51.155
        min 0 | max 2   | step 1   | steps 2    | per 0.015 | in 65 | out 1.02
        
        */
    }
}

void *declare(UIGlue *uiInterface, float *p, const char* key, const char* val){
    if(strcmp("midi", key) == 0) // its a cc
    {
        long num = strtol(val, NULL, 10);

        struct CC *cc = &CCs[num];
        cc->p = p;
    }
    else if(strcmp("pitch", key) == 0) // its the pitch
    {
        pitch = p;
    }
    else if(strcmp("gate", key) == 0) // its the gate
    {
        gate = p;
    }
};

void handle_midi(uint8_t *msg, uint8_t len)
{
    // printf("msg len %d -> %d %d %d\n", len, msg[0], msg[1], msg[2]);
    uint8_t channel = msg[0] & 0b00001111;
    uint8_t code = (msg[0] >> 4) & 0b00001111;
    switch (code)
    {
    case MIDI_NOTE_ON:
    {
        uint8_t note = msg[1] & 0b01111111;
        // uint8_t velocity = msg[2] & 0b01111111;
        // set_note(note);
        // play(note);
        *gate = 1;
        *pitch = note; // the dsp converts to hz
        break;
    }
    case MIDI_NOTE_OFF:
    {
        uint8_t note = msg[1] & 0b01111111;
        // stop(note);
        *gate = 0;
        break;
    }
    case MIDI_PROGRAM_CHANGE:
    {
        uint8_t voice = msg[1] & 0b01111111;
        break;
    }
    case MIDI_CC:
    {
        uint8_t cc_num = msg[1] & 0b01111111;
        uint8_t cc_val = msg[2] & 0b01111111;
        {
            struct CC cc = CCs[cc_num];
            if(cc.p == 0)
            {
                printf("got unknown CC %d\n", cc_num);
                break;
            }
            float steps = cc.mul * (float)cc_val;
            int whole_steps = round(steps);
            float val = (cc.step * whole_steps) + cc.min;
            *cc.p = val;
            // printf("cc%-2d::%12f -> %s\n", cc_num, val, cc.name );
        }
        break;
    }
    default:
        break;
    }
}

static void uart_receive_isr(int irq, void *arg)
{
    uint32_t intstatus = bflb_uart_get_intstatus(uart0);

    if (intstatus & UART_INTSTS_RX_FIFO)
    {
        while (bflb_uart_rxavailable(uart0))
        {
            uint8_t ch = bflb_uart_getchar(uart0);
            int ret = parse(ch);
            // printf("got %d, ret is %d", ch, ret);
            if (ret)
            {
                handle_midi(getMidiMsg(), getMidiMsgLen());
            }
            // printf("0x%02x\r\n", ch);
        }
    }

    if (intstatus & UART_INTSTS_RTO)
    {
        bflb_uart_int_clear(uart0, UART_INTCLR_RTO);
    }
}

void poll_uart(void)
{
    ch = bflb_uart_getchar(uart0);
    if (ch != -1)
    {
        int ret = parse(ch);
        if (ret)
        {
            handle_midi(getMidiMsg(), getMidiMsgLen());
        }
    }
}

void usb_midi_in(char ch)
{
    int ret = parse(ch);
    if (ret)
    {
        handle_midi(getMidiMsg(), getMidiMsgLen());
    }
}

void uart_receive_init(void)
{

    init_midi_parser();

    uart0 = bflb_device_get_by_name("uart0");
    // bflb_uart_feature_control(uart0, UART_CMD_SET_RX_FIFO_THREHOLD, 0);

    // bflb_irq_attach(uart0->irq_num, uart_receive_isr, uart0);
    // bflb_irq_enable(uart0->irq_num);
    // bflb_uart_rxint_mask(uart0, false);
}