#include "bflb_mtimer.h"
#include "bflb_spi.h"
#include "bflb_dma.h"

#include "board.h"

// #define RGB_CLOCK_DIV 39
#define RGB_CLOCK_DIV 0
#define LED_GPIO GPIO_PIN_10
#define RGB_TIMER_COMP_ID TIMER_COMP_ID_0

#define NUM_BIT_BITS (24 * 3)

#define BL616 1

struct bflb_device_s *spi0;
struct bflb_device_s *dma0_ch0;
struct bflb_device_s *dma0_ch1;

uint8_t white[3] = {127, 127, 127};
uint32_t color = 0;
uint8_t rgb_sig[NUM_BIT_BITS] = {0};

static ATTR_NOCACHE_NOINIT_RAM_SECTION uint32_t tx_buffer[256];
static ATTR_NOCACHE_NOINIT_RAM_SECTION uint32_t rx_buffer[256];

static volatile uint8_t dma_tc_flag0 = 0;
static volatile uint8_t dma_tc_flag1 = 0;

void sram_init()
{
    uint32_t i;

    for (i = 0; i < 256; i++) {
        tx_buffer[i] = i * 0x1010101;
        rx_buffer[i] = 0;
    }
}

void rgb_led_init(){
    struct bflb_dma_channel_lli_pool_s tx_llipool[1];
    struct bflb_dma_channel_lli_transfer_s tx_transfers[1];
    struct bflb_dma_channel_lli_pool_s rx_llipool[1];
    struct bflb_dma_channel_lli_transfer_s rx_transfers[1];

    struct bflb_spi_config_s spi_cfg = {
        .freq = 1 * 1000 * 1000,
        .role = SPI_ROLE_MASTER,
        .mode = SPI_MODE0,
        .data_width = SPI_DATA_WIDTH_24BIT,
        .bit_order = SPI_BIT_MSB,
        .byte_order = SPI_BYTE_LSB,
        .tx_fifo_threshold = 0,
        .rx_fifo_threshold = 0,
    };

    struct bflb_dma_channel_config_s tx_config = {
        .direction = DMA_MEMORY_TO_PERIPH,
        .src_req = DMA_REQUEST_NONE,
        .dst_req = DMA_REQUEST_SPI0_TX,
        .src_addr_inc = DMA_ADDR_INCREMENT_ENABLE,
        .dst_addr_inc = DMA_ADDR_INCREMENT_DISABLE,
        .src_burst_count = DMA_BURST_INCR1,
        .dst_burst_count = DMA_BURST_INCR1,
        .src_width = DMA_DATA_WIDTH_32BIT,
        .dst_width = DMA_DATA_WIDTH_32BIT,
    };

    struct bflb_dma_channel_config_s rx_config = {
        .direction = DMA_PERIPH_TO_MEMORY,
        .src_req = DMA_REQUEST_SPI0_RX,
        .dst_req = DMA_REQUEST_NONE,
        .src_addr_inc = DMA_ADDR_INCREMENT_DISABLE,
        .dst_addr_inc = DMA_ADDR_INCREMENT_ENABLE,
        .src_burst_count = DMA_BURST_INCR1,
        .dst_burst_count = DMA_BURST_INCR1,
        .src_width = DMA_DATA_WIDTH_32BIT,
        .dst_width = DMA_DATA_WIDTH_32BIT,
    };

    board_spi0_gpio_init();
    sram_init();

    spi0 = bflb_device_get_by_name("spi0");
    bflb_spi_init(spi0, &spi_cfg);
    bflb_spi_link_txdma(spi0, true);
    bflb_spi_link_rxdma(spi0, true);

    printf("\n\rspi dma test\n\r");

    dma0_ch0 = bflb_device_get_by_name("dma0_ch0");
    dma0_ch1 = bflb_device_get_by_name("dma0_ch1");

    bflb_dma_channel_init(dma0_ch0, &tx_config);
    bflb_dma_channel_init(dma0_ch1, &rx_config);

    bflb_dma_channel_irq_attach(dma0_ch0, dma0_ch0_isr, NULL);
    bflb_dma_channel_irq_attach(dma0_ch1, dma0_ch1_isr, NULL);

    tx_transfers[0].src_addr = (uint32_t)tx_buffer;
    tx_transfers[0].dst_addr = (uint32_t)DMA_ADDR_SPI0_TDR;
    tx_transfers[0].nbytes = 256 * 4;

    rx_transfers[0].src_addr = (uint32_t)DMA_ADDR_SPI0_RDR;
    rx_transfers[0].dst_addr = (uint32_t)rx_buffer;
    rx_transfers[0].nbytes = 256 * 4;

    bflb_dma_channel_lli_reload(dma0_ch0, tx_llipool, 1, tx_transfers, 1);
    bflb_dma_channel_lli_reload(dma0_ch1, rx_llipool, 1, rx_transfers, 1);
    bflb_dma_channel_start(dma0_ch0);
    bflb_dma_channel_start(dma0_ch1);

    while (dma_tc_flag0 != 1) {
        bflb_mtimer_delay_ms(1);
    }
    // while (dma_tc_flag1 != 1) {
    //     bflb_mtimer_delay_ms(1);
    // }

    // for (uint32_t i = 0; i < 256; i++) {
    //     if (rx_buffer[i] != tx_buffer[i]) {
    //         printf("error! index %ld: send 0x%08lX but read 0x%08lX\n\r", i, tx_buffer[i], rx_buffer[i]);
    //     }
    // }

    printf("\n\rtest end\n\r");

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

