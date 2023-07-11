#include "bflb_uart.h"
#include <math.h>
#include <stdlib.h>

#include "bflb_mtimer.h"
#include "bflb_adc.h"
#include "bflb_audac.h"
#include "bflb_gpio.h"
#include "bflb_dma.h"
#include "bflb_gpio.h"
#include "bflb_uart.h"

#include "bl616_glb.h"
#include "bflb_i2s.h"
#include "bl616_glb_gpio.h"
#include "bl616_irq.h"
#include "board.h"

#include "bflb_core.h"

#include "usbh_core.h"
#include <FreeRTOS.h>

#include "rgb_led.h"

void dsp_run(int16_t *dest);
void dsp_init(size_t buf_size);
void uart_receive_init(void);
void poll_uart(void);
void usb_midi_start(void);

void test(void);
void print_bench(void);

static int min(int a, int b)
{
    return (a < b ? a : b);
}

static int max(int a, int b)
{
    return (a > b ? a : b);
}

#define BUF_SIZE 64

static uint16_t tic[BUF_SIZE];
static uint16_t toc[BUF_SIZE];

struct bflb_device_s *audac_dma_hd;
struct bflb_device_s *audac_hd;

uint32_t dma_lli_cnt_tic;
static struct bflb_dma_channel_lli_pool_s lli_pool_tic[10];
struct bflb_dma_channel_lli_transfer_s transfers_tic[1];

uint32_t dma_lli_cnt_toc;
static struct bflb_dma_channel_lli_pool_s lli_pool_toc[10];
struct bflb_dma_channel_lli_transfer_s transfers_toc[1];

static void compute(int tictoc)
{
    uint16_t *dest = tictoc == 0 ? tic : toc;
    dsp_run(dest);
}

void refresh_dma(int tictoc)
{
    if (tictoc)
    {
        transfers_toc[0].src_addr = (uint32_t)toc;
        transfers_toc[0].dst_addr = (uint32_t)DMA_ADDR_AUDAC_TDR;
        transfers_toc[0].nbytes = sizeof(toc);
        bflb_l1c_dcache_clean_range(toc, sizeof(toc));
        dma_lli_cnt_toc = bflb_dma_channel_lli_reload(audac_dma_hd, lli_pool_toc, 10, transfers_toc, 1);
        bflb_dma_channel_start(audac_dma_hd);
    }
    else
    {
        transfers_tic[0].src_addr = (uint32_t)tic;
        transfers_tic[0].dst_addr = (uint32_t)DMA_ADDR_AUDAC_TDR;
        transfers_tic[0].nbytes = sizeof(tic);
        bflb_l1c_dcache_clean_range(tic, sizeof(tic));
        dma_lli_cnt_tic = bflb_dma_channel_lli_reload(audac_dma_hd, lli_pool_tic, 10, transfers_tic, 1);
        bflb_dma_channel_start(audac_dma_hd);
    }
}

void audio_dma_callback(void *arg)
{
    static int tictoc = 1;
    refresh_dma(tictoc);
    compute(tictoc == 0 ? 1 : 0);
    tictoc = tictoc == 0 ? 1 : 0;
}

/* audio gpio init*/
void audac_gpio_init(void)
{
    struct bflb_device_s *gpio;

    gpio = bflb_device_get_by_name("gpio");

    /* audac pwm output mode */
    bflb_gpio_init(gpio, GPIO_PIN_14, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);
    bflb_gpio_init(gpio, GPIO_PIN_15, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);

    // bflb_gpio_init(gpio, GPIO_PIN_22, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);
    // bflb_gpio_init(gpio, GPIO_PIN_23, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);

    // bflb_gpio_init(gpio, GPIO_PIN_27, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);
    // bflb_gpio_init(gpio, GPIO_PIN_28, GPIO_FUNC_AUDAC_PWM | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_2);

    /* PA enable */
    // bflb_gpio_init(gpio, GPIO_PIN_10, GPIO_OUTPUT | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_0);
    // bflb_gpio_init(gpio, GPIO_PIN_11, GPIO_OUTPUT | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_0);
    // bflb_gpio_set(gpio, GPIO_PIN_10);
    // bflb_gpio_set(gpio, GPIO_PIN_11);
}

void audac_dma_init(void)
{
    struct bflb_dma_channel_config_s audac_dma_cfg;

    audac_dma_cfg.direction = DMA_MEMORY_TO_PERIPH;
    audac_dma_cfg.src_req = DMA_REQUEST_NONE;
    audac_dma_cfg.dst_req = DMA_REQUEST_AUDAC_TX;
    audac_dma_cfg.src_addr_inc = DMA_ADDR_INCREMENT_ENABLE;
    audac_dma_cfg.dst_addr_inc = DMA_ADDR_INCREMENT_DISABLE;
    audac_dma_cfg.src_burst_count = DMA_BURST_INCR8;
    audac_dma_cfg.dst_burst_count = DMA_BURST_INCR8;
    audac_dma_cfg.src_width = DMA_DATA_WIDTH_16BIT;
    audac_dma_cfg.dst_width = DMA_DATA_WIDTH_16BIT;

    audac_dma_hd = bflb_device_get_by_name("dma0_ch0");
    bflb_dma_channel_init(audac_dma_hd, &audac_dma_cfg);
    bflb_dma_channel_irq_attach(audac_dma_hd, audio_dma_callback, NULL);

    transfers_tic[0].src_addr = (uint32_t)tic;
    transfers_tic[0].dst_addr = (uint32_t)DMA_ADDR_AUDAC_TDR;
    transfers_tic[0].nbytes = sizeof(tic);

    bflb_l1c_dcache_clean_range(tic, sizeof(tic));
    dma_lli_cnt_tic = bflb_dma_channel_lli_reload(audac_dma_hd, lli_pool_tic, 10, transfers_tic, 1);
    bflb_dma_channel_start(audac_dma_hd);
    // dma_lli_cnt = bflb_dma_channel_lli_reload(audac_dma_hd, lli_pool, 10, transfers, 2);
    // bflb_dma_channel_lli_link_head(audac_dma_hd, lli_pool, dma_lli_cnt);

    // transfers[0].src_addr = (uint32_t)sin_0db_l32_r16_2ch;
    // transfers[0].dst_addr = (uint32_t)DMA_ADDR_AUDAC_TDR;
    // transfers[0].nbytes = sizeof(sin_0db_l32_r16_2ch);

    // transfers[1].src_addr = (uint32_t)sin_0db_l32_r16_2ch_2;
    // transfers[1].dst_addr = (uint32_t)DMA_ADDR_AUDAC_TDR;
    // transfers[1].nbytes = sizeof(sin_0db_l32_r16_2ch_2);

    // bflb_l1c_dcache_clean_range(sin_0db_l32_r16_2ch, sizeof(sin_0db_l32_r16_2ch));
    // bflb_l1c_dcache_clean_range(sin_0db_l32_r16_2ch_2, sizeof(sin_0db_l32_r16_2ch_2));
    // dma_lli_cnt = bflb_dma_channel_lli_reload(audac_dma_hd, lli_pool, 10, transfers, 2);
    // bflb_dma_channel_lli_link_head(audac_dma_hd, lli_pool, dma_lli_cnt);
}

/* audio dac init */
static void audac_init(void)
{
    struct bflb_audac_init_config_s audac_init_cfg = {
        .sampling_rate = AUDAC_SAMPLING_RATE_32K,
        .output_mode = AUDAC_OUTPUT_MODE_PWM,
        .source_channels_num = AUDAC_SOURCE_CHANNEL_DUAL,
        .mixer_mode = AUDAC_MIXER_MODE_ONLY_L,
        .data_format = AUDAC_DATA_FORMAT_16BIT,
        .fifo_threshold = 7,
    };

    struct bflb_audac_volume_config_s audac_volume_cfg = {
        .mute_ramp_en = true,
        .mute_up_ramp_rate = AUDAC_RAMP_RATE_FS_32,
        .mute_down_ramp_rate = AUDAC_RAMP_RATE_FS_8,
        .volume_update_mode = AUDAC_VOLUME_UPDATE_MODE_RAMP,
        .volume_ramp_rate = AUDAC_RAMP_RATE_FS_128,
        .volume_zero_cross_timeout = AUDAC_RAMP_RATE_FS_128,
    };

    /* clock cfg */
    GLB_Config_AUDIO_PLL_To_491P52M();
    GLB_PER_Clock_UnGate(GLB_AHB_CLOCK_AUDIO);

    /* audac init */
    audac_hd = bflb_device_get_by_name("audac");
    bflb_audac_init(audac_hd, &audac_init_cfg);
    bflb_audac_feature_control(audac_hd, AUDAC_CMD_SET_VOLUME_VAL, (size_t)(-15 * 2));
    bflb_audac_volume_init(audac_hd, &audac_volume_cfg);
    /* audac enable dma */
    bflb_audac_link_rxdma(audac_hd, true);
}

/* ADC */
struct bflb_adc_channel_s chan[] = {
    {.pos_chan = ADC_CHANNEL_5,
     .neg_chan = ADC_CHANNEL_GND},
    {.pos_chan = ADC_CHANNEL_6,
     .neg_chan = ADC_CHANNEL_GND},
};

#define NUM_ADC_CHANNELS 2
struct bflb_device_s *adc;
int32_t adc_1 = 0;
int32_t adc_2 = 0;

static void adc_init(void)
{
    struct bflb_device_s *gpio;
    gpio = bflb_device_get_by_name("gpio");

    /* ADC_CH5 */
    bflb_gpio_init(gpio, GPIO_PIN_13, GPIO_ANALOG | GPIO_SMT_EN | GPIO_DRV_0);
    /* ADC_CH6 */
    bflb_gpio_init(gpio, GPIO_PIN_12, GPIO_ANALOG | GPIO_SMT_EN | GPIO_DRV_0);

    adc = bflb_device_get_by_name("adc");

    /* adc clock = XCLK / 2 / 32 */
    struct bflb_adc_config_s cfg;
    cfg.clk_div = ADC_CLK_DIV_32;
    cfg.scan_conv_mode = true;
    cfg.continuous_conv_mode = false;
    cfg.differential_mode = false;
    cfg.resolution = ADC_RESOLUTION_16B;
    cfg.vref = ADC_VREF_3P2V;

    bflb_adc_init(adc, &cfg);
    bflb_adc_channel_config(adc, chan, NUM_ADC_CHANNELS);
}

static void adc_read(void)
{
    bflb_adc_start_conversion(adc);

    while (bflb_adc_get_count(adc) < NUM_ADC_CHANNELS)
    {
        bflb_mtimer_delay_ms(1);
    }

    struct bflb_adc_result_s result;

    uint32_t raw_data = bflb_adc_read_raw(adc);
    bflb_adc_parse_result(adc, &raw_data, &result, 1);
    adc_1 = result.millivolt;

    raw_data = bflb_adc_read_raw(adc);
    bflb_adc_parse_result(adc, &raw_data, &result, 1);
    adc_2 = result.millivolt;
}

static void handle_pots(void)
{
    // fHslider0 = (float) adc_1;
    // float vol = -(((float) adc_2 / 3200.0f ) * 96.0f);
    // fHslider1 = vol;
}

/* MAIN */

// char led_msg[16] = {
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0110110,
//     0b0000110,
// };

// char led_msg2[16] = {
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0010010,
//     0b0000010,
// };

uint16_t data[16] = {0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010, 0b1010101010101010};

void swgpio_send(void)
{
    GLB_GPIO_Fifo_Push(data, 16);
    GLB_GPIO_Fifo_Enable();
}

void gpio_sig_init(void)
{
    GLB_GPIO_Cfg_Type gpioCfg = {
        .gpioPin = GLB_GPIO_PIN_11,
        .gpioFun = GPIO_FUN_GPIO,
        .gpioMode = GPIO_OUTPUT_VALUE_MODE,
        .pullType = GPIO_PULL_NONE,
        .drive = 1,
        .smtCtrl = 0
    };
    GLB_GPIO_Init(&gpioCfg);

    GLB_GPIO_FIFO_CFG_Type fifoCfg = {
        .code0FirstTime = 1,   // uint8_t code0FirstTime;              /*!< The clock num of code0 first send */
        .code1FirstTime = 5,   // uint8_t code1FirstTime;              /*!< The clock num of code1 first send */
        .codeTotalTime = 10,   // uint16_t codeTotalTime;              /*!< The total clock num of code0/1(high + low */
        .code0Phase = 0,       // GLB_GPIO_FIFO_PHASE_Type code0Phase; /*!< low or high level of code0 first send */
        .code1Phase = 1,       // GLB_GPIO_FIFO_PHASE_Type code1Phase; /*!< low or high level of code1 first send */
        .idle = 1,             // GLB_GPIO_FIFO_IDLE_Type idle;        /*!< the I/O idle level */
        .fifoDmaThreshold = 1, // uint8_t fifoDmaThreshold;            /*!< FIFO threshold */
        .fifoDmaEnable = 1,    // BL_Fun_Type fifoDmaEnable;           /*!< Enable or disable DMA of GPIO */
        .latch = 0             // GLB_GPIO_FIFO_LATCH_Type latch;      /*!< Write or set/clr GPIO level */
    };
    GLB_GPIO_Fifo_Init(&fifoCfg);

    

    // GLB_GPIO_Fifo_Push(data, 16);

    // GLB_GPIO_Fifo_Enable();

}

static void i2s_gpio_init()
{
    struct bflb_device_s *gpio;
    gpio = bflb_device_get_by_name("gpio");
    bflb_gpio_init(gpio, GPIO_PIN_16, GPIO_FUNC_I2S | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_1);
    bflb_gpio_init(gpio, GPIO_PIN_17, GPIO_FUNC_I2S | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_1);
    bflb_gpio_init(gpio, GPIO_PIN_10, GPIO_FUNC_I2S | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_1);
    bflb_gpio_init(gpio, GPIO_PIN_11, GPIO_FUNC_I2S | GPIO_ALTERNATE | GPIO_PULLUP | GPIO_SMT_EN | GPIO_DRV_1);
}


static ATTR_NOCACHE_NOINIT_RAM_SECTION uint16_t tx_buffer[512] __ALIGNED(4);
static volatile uint8_t dma_tc_flag0 = 0;
struct bflb_device_s *dma0_ch1;

void dma0_ch1_isr(void *arg)
{
    dma_tc_flag0++;
    printf("tc done\r\n");
    bflb_dma_channel_stop(dma0_ch1);
}

static void i2s_init(void)
{    

    i2s_gpio_init();

    struct bflb_device_s *i2s0;

    tx_buffer[0] = 0b1101101101101101;
    tx_buffer[1] = 0b1011011011011011;
    tx_buffer[2] = 0b0110110110110110;
    tx_buffer[3] = 0b0110110110110110;
    tx_buffer[4] = 0b0110110110000000;
    
    for (int i=5; i < 256; i++) {
        tx_buffer[i] = 0;
    }

    tx_buffer[256] = 0b1001001001001001;
    tx_buffer[257] = 0b0010010010010010;
    tx_buffer[258] = 0b0100100100100100;
    tx_buffer[259] = 0b1001001001001001;
    tx_buffer[260] = 0b0010010000000000;

    for (int i=261; i < 512; i++) {
        tx_buffer[i] = 0;
    }



    struct bflb_dma_channel_lli_pool_s tx_llipool[1];
    struct bflb_dma_channel_lli_transfer_s tx_transfers[1];

    struct bflb_i2s_config_s i2s_cfg = {
        .bclk_freq_hz = 100000 * 16 * 2, /* bclk = Sampling_rate * frame_width * channel_num */
        .role = I2S_ROLE_MASTER,
        .format_mode = I2S_MODE_LEFT_JUSTIFIED,
        .channel_mode = I2S_CHANNEL_MODE_NUM_2,
        .frame_width = I2S_SLOT_WIDTH_16,
        .data_width = I2S_SLOT_WIDTH_16,
        .fs_offset_cycle = 0,
        .tx_fifo_threshold = 0,
        .rx_fifo_threshold = 0,
    };
    struct bflb_dma_channel_config_s tx_config = {
        .direction = DMA_MEMORY_TO_PERIPH,
        .src_req = DMA_REQUEST_NONE,
        .dst_req = DMA_REQUEST_I2S_TX,
        .src_addr_inc = DMA_ADDR_INCREMENT_ENABLE,
        .dst_addr_inc = DMA_ADDR_INCREMENT_DISABLE,
        .src_burst_count = DMA_BURST_INCR1,
        .dst_burst_count = DMA_BURST_INCR1,
        .src_width = DMA_DATA_WIDTH_16BIT,
        .dst_width = DMA_DATA_WIDTH_16BIT,
    };

    struct bflb_dma_channel_config_s rx_config = {
        .direction = DMA_PERIPH_TO_MEMORY,
        .src_req = DMA_REQUEST_I2S_RX,
        .dst_req = DMA_REQUEST_NONE,
        .src_addr_inc = DMA_ADDR_INCREMENT_DISABLE,
        .dst_addr_inc = DMA_ADDR_INCREMENT_ENABLE,
        .src_burst_count = DMA_BURST_INCR1,
        .dst_burst_count = DMA_BURST_INCR1,
        .src_width = DMA_DATA_WIDTH_16BIT,
        .dst_width = DMA_DATA_WIDTH_16BIT,
    };

    board_i2s_gpio_init();

    i2s0 = bflb_device_get_by_name("i2s0");
    bflb_i2s_init(i2s0, &i2s_cfg);
    bflb_i2s_link_txdma(i2s0, true);

    printf("\n\ri2s dma test\n\r");
    dma0_ch1 = bflb_device_get_by_name("dma0_ch1");
    bflb_dma_channel_init(dma0_ch1, &tx_config);
    bflb_dma_channel_irq_attach(dma0_ch1, dma0_ch1_isr, NULL);

    tx_transfers[0].src_addr = (uint32_t)tx_buffer;
    tx_transfers[0].dst_addr = (uint32_t)DMA_ADDR_I2S_TDR;
    tx_transfers[0].nbytes = sizeof(tx_buffer);

    uint32_t num = bflb_dma_channel_lli_reload(dma0_ch1, tx_llipool, 1, tx_transfers, 1);
    // bflb_dma_channel_lli_link_head(dma0_ch1, tx_llipool, num);
    bflb_dma_channel_start(dma0_ch1);

    bflb_i2s_feature_control(i2s0, I2S_CMD_DATA_ENABLE, I2S_CMD_DATA_ENABLE_TX | I2S_CMD_DATA_ENABLE_RX);
    printf("\n\rtest end\n\r");


}

int main(void)
{
    /* board init */
    board_init();

    /* initialize rgb driver */
    // rgb_led_init();

    /* start usb */
    printf("Starting usb host task...\r\n");
    usbh_initialize();

    /* dsp init */
    dsp_init(BUF_SIZE);

    /* gpio init */
    audac_gpio_init();

    /* adc init */
    // adc_init();

    /* audac init */
    audac_init();

    /* dma init */
    audac_dma_init();
    bflb_dma_channel_start(audac_dma_hd);

    /* audac start */
    bflb_audac_feature_control(audac_hd, AUDAC_CMD_PLAY_START, 0);

    /* uart midi */
    uart_receive_init();

    /* usb midi host */
    usb_midi_start();

    i2s_init();


    // // printf("uart is irq %d with prio %d\n", uart_int_num, uart_prio);
    // // printf("audac is irq %d with prio %d\n", audac_int_num, audac_prio);
    // // int cnt = 0;
    // // bool bench = true;
    // rgb_led_white();
    vTaskStartScheduler();
    
    // gpio_sig_init();

    while (1)
    {
        // uint64_t start = bflb_mtimer_get_time_us();x
        // if(bench && (cnt++ > 100000)){
        //     print_bench();
        //     bench = false;
        // }
        // poll_uart();
        // bflb_mtimer_delay_ms(1000);
        // printf("1000ms = %d us", (int)(bflb_mtimer_get_time_us() - start));
        // adc_read();
        // handle_pots();
        // printf("testing\n");
        // swgpio_send();
        bflb_mtimer_delay_ms(500);
        // bflb_mtimer_delay_ms(200);
    }
}

