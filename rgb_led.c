#include "bflb_mtimer.h"
#include "bflb_timer.h"
#include "bflb_gpio.h"

#include "board.h"

// #define RGB_CLOCK_DIV 39
#define RGB_CLOCK_DIV 0
#define LED_GPIO GPIO_PIN_10
#define RGB_TIMER_COMP_ID TIMER_COMP_ID_0

#define NUM_BIT_BITS (24 * 3)

struct bflb_device_s *timer0;
struct bflb_device_s *gpio;

uint8_t white[3] = {127, 127, 127};
uint32_t color = 0;
uint8_t rgb_sig[NUM_BIT_BITS] = {0};


/*
color

fixed  |           RED          |           GRN          |           BLU          |

fixed  |ss       ss       ss    |   ss       ss       ss |      ss       ss       |
chars  |  1234567  1234567  1234|567  1234567  1234567  1|234567  1234567  1234567|
chars  |  0xxxxxx  0xxxxxx  0xxx|xxx  0xxxxxx  0xxxxxx  0|xxxxxx  0xxxxxx  0xxxxxx|

output |0  x  x  0  x  x  0  x  |x  0  x  x  0  x  x  0  |x  x  0  x  x  0  x  x  |

desired|0  1  1  0  1  1  0  1  |1  0  1  1  0  1  1  0  |1  1  0  1  1  0  1  1  |
chars  |  0110110  0110110  0110|110  0110110  0110110  0|110110  0110110  0110110|

value  |           109          |           182          |           219          |


*/

char msg[8] = {
    0b0110110,
    0b0110110,
    0b0110110,
    0b0110110,
    0b0110110,
    0b0110110,
    0b0110110,
    0b0110110
};

size_t p = 0;

int test = 0;

void rgb_led_init(){
    ;
}


void rgb_send_color(void){
    // print the array
    for(int i=0; i<24; i++)
    {
        int bit = (color >> i) & 0x1;
        int pos = i * 3;
        if( bit == 0 )
        {
            rgb_sig[pos]     = 1;
            rgb_sig[pos + 1] = 0;
            rgb_sig[pos + 2] = 0;
        }
        else
        {
            rgb_sig[pos]     = 1;
            rgb_sig[pos + 1] = 1;
            rgb_sig[pos + 2] = 0;
        }
    }

    // // log the array
    // for(int i=0; i< NUM_BIT_BITS; i++)
    // {
    //     printf("|%d", rgb_sig[i]);
    // }
    // printf("\n");

    // start the transfer
    
}

void rgb_led_white(){
    printf("send white\n");
    color = (white[0]) | (white[1] << 8) | (white[2] << 16);
    rgb_send_color();
}

