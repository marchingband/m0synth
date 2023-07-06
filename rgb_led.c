#include "bflb_mtimer.h"
#include "bflb_timer.h"
#include "bflb_gpio.h"

#include "board.h"

#define RGB_CLOCK_DIV 39
// #define RGB_CLOCK_DIV 14
#define LED_GPIO GPIO_PIN_10
#define RGB_TIMER_COMP_ID TIMER_COMP_ID_0

#define NUM_BIT_BITS (24 * 3)

struct bflb_device_s *timer0;
struct bflb_device_s *gpio;

struct bflb_timer_config_s cfg;

uint8_t white[3] = {127, 127, 127};
uint32_t color = 0;
uint8_t rgb_sig[NUM_BIT_BITS] = {0};

size_t p = 0;

int test = 0;

void rgb_led_init(){
    timer0 = bflb_device_get_by_name("timer0");

    /* timer clk = clock_source/(div + 1)*/
    cfg.counter_mode = TIMER_COUNTER_MODE_PROLOAD;
    cfg.clock_source = TIMER_CLKSRC_XTAL;
    cfg.clock_div = RGB_CLOCK_DIV;
    cfg.trigger_comp_id = RGB_TIMER_COMP_ID;
    cfg.comp0_val = 1000000;
    cfg.comp1_val = 2000000;
    cfg.comp2_val = 3000000;
    cfg.preload_val = 0;
    bflb_timer_init(timer0, &cfg);

    gpio = bflb_device_get_by_name("gpio");
    bflb_gpio_init(gpio, LED_GPIO, GPIO_OUTPUT | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_0);
    bflb_gpio_reset(gpio, LED_GPIO);
}

void timer0_isr(int irq, void *arg)
{
    bool status = bflb_timer_get_compint_status(timer0, RGB_TIMER_COMP_ID);
    if (status) {
        bflb_timer_compint_clear(timer0, RGB_TIMER_COMP_ID);
        printf("isr");
        // if(p < NUM_BIT_BITS)
        // {
        //     uint32_t val = rgb_sig[p];
        //     p += 1;
        //     if(val == 0)
        //     {
        //         bflb_gpio_reset(gpio, LED_GPIO);
        //     }
        //     else
        //     {
        //         bflb_gpio_set(gpio, LED_GPIO);
        //     }
        // }
        // else
        // {
        //     p = 0;
        //     bflb_timer_stop(timer0);
        //     bflb_irq_disable(timer0->irq_num);
        //     bflb_gpio_reset(gpio, LED_GPIO);
        //     bflb_mtimer_delay_us(90);
        //     printf("done\n\n");
        // }
        // if(test == 0)
        // {
        //     bflb_gpio_reset(gpio, LED_GPIO);
        //     test = 1;
        // }
        // else
        // {
        //     bflb_gpio_set(gpio, LED_GPIO);
        //     test = 0;
        // }
    }
}

void rgb_send_color(void){
    // print the array
    // for(int i=0; i<24; i++)
    // {
    //     int bit = (color >> i) & 0x1;
    //     int pos = i * 3;
    //     if( bit == 0 )
    //     {
    //         rgb_sig[pos]     = 1;
    //         rgb_sig[pos + 1] = 0;
    //         rgb_sig[pos + 2] = 0;
    //     }
    //     else
    //     {
    //         rgb_sig[pos]     = 1;
    //         rgb_sig[pos + 1] = 1;
    //         rgb_sig[pos + 2] = 0;
    //     }
    // }

    // // log the array
    // for(int i=0; i< NUM_BIT_BITS; i++)
    // {
    //     printf("|%d", rgb_sig[i]);
    // }
    // printf("\n");

    // start the transfer
    bflb_irq_attach(timer0->irq_num, timer0_isr, NULL);
    bflb_irq_enable(timer0->irq_num);
    bflb_timer_start(timer0);
    
}

void rgb_led_white(){
    // printf("send white\n");
    // color = (white[0]) | (white[1] << 8) | (white[2] << 16);
    rgb_send_color();
}

