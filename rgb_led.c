#include "bflb_mtimer.h"
#include "bflb_timer.h"
#include "bflb_gpio.h"

#include "board.h"

#define NUM_BIT_BITS (24 * 3)

struct bflb_device_s *timer0;
struct bflb_device_s *gpio;

struct bflb_timer_config_s cfg;

uint8_t white[3] = {127, 127, 127};
uint32_t color = 0;
uint8_t sig[NUM_BIT_BITS] = {0};

size_t p = 0;

void rgb_led_init(){
    timer0 = bflb_device_get_by_name("timer0");

    /* timer clk = clock_source/(div + 1)*/
    cfg.counter_mode = TIMER_COUNTER_MODE_PROLOAD;
    cfg.clock_source = TIMER_CLKSRC_NO;
    cfg.clock_div = 12;
    cfg.trigger_comp_id = TIMER_COMP_ID_0;
    cfg.comp0_val = 1;
    cfg.preload_val = 0;
    cfg.clock_source = TIMER_CLKSRC_XTAL;
    bflb_timer_init(timer0, &cfg);

    gpio = bflb_device_get_by_name("gpio");
    bflb_gpio_init(gpio, GPIO_PIN_0, GPIO_OUTPUT | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_0);
}

void timer0_isr(int irq, void *arg)
{
    bool status = bflb_timer_get_compint_status(timer0, TIMER_COMP_ID_0);
    if (status) {
        bflb_timer_compint_clear(timer0, TIMER_COMP_ID_0);
        if(p < NUM_BIT_BITS)
        {
            uint32_t val = sig[p];
            p += 1;
        }
        else
        {
            p = 0;
            bflb_timer_stop(timer0);
            bflb_irq_disable(timer0->irq_num);
        }
    }
}

void rgb_send_color(void){
    // print the array
    for(int i=0; i<24; i++)
    {
        int bit = (color >> i) & 0x1;
        int pos = i * 3;
        if( bit == 0 )
        {
            sig[pos]     = 1;
            sig[pos + 1] = 0;
            sig[pos + 2] = 0;
        }
        else
        {
            sig[pos]     = 1;
            sig[pos + 1] = 1;
            sig[pos + 2] = 0;
        }
    }

    // start the transfer
    bflb_irq_attach(timer0->irq_num, timer0_isr, NULL);
    bflb_irq_enable(timer0->irq_num);
    bflb_timer_start(timer0);
    bflb_mtimer_delay_us(90);
}

void rgb_led_white(){
    color = (white[0]) | (white[1] << 8) | (white[2] << 16);
    rgb_send_color();
}

