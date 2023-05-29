/*
 * Copyright (c) 2022, sakumisu
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "usbh_core.h"
#include "usb_audio.h"
#include <stdio.h>
#include <FreeRTOS.h>

USB_NOCACHE_RAM_SECTION USB_MEM_ALIGNX uint8_t midi_buffer[512];

struct usbh_urb cdc_bulkin_urb;
struct usbh_urb cdc_bulkout_urb;

struct usbh_midi
{
    struct usbh_hubport *hport;

    uint8_t intf;        /* interface number */
    usbh_pipe_t bulkin;  /* BULK IN endpoint */
    usbh_pipe_t bulkout; /* BULK OUT endpoint */
};

#define DEV_FORMAT "/dev/midi"

static int usbh_midi_connect(struct usbh_hubport *hport, uint8_t intf)
{
    // printf("class connect");
    struct usbh_endpoint_cfg ep_cfg = {0};
    struct usb_endpoint_descriptor *ep_desc;
    int ret;

    struct usbh_midi *midi_class = usb_malloc(sizeof(struct usbh_midi));
    if (midi_class == NULL)
    {
        USB_LOG_ERR("Fail to alloc midi_class\r\n");
        return -ENOMEM;
    }

    memset(midi_class, 0, sizeof(struct usbh_midi));
    midi_class->hport = hport;
    midi_class->intf = intf;

    hport->config.intf[intf].priv = midi_class;

    for (uint8_t i = 0; i < hport->config.intf[intf].altsetting[0].intf_desc.bNumEndpoints; i++)
    {
        ep_desc = &hport->config.intf[intf].altsetting[0].ep[i].ep_desc;

        if (ep_desc->bEndpointAddress & 0x80)
        {
            usbh_hport_activate_epx(&midi_class->bulkin, hport, ep_desc);
        }
        else
        {
            usbh_hport_activate_epx(&midi_class->bulkout, hport, ep_desc);
        }
    }

    strncpy(hport->config.intf[intf].devname, DEV_FORMAT, CONFIG_USBHOST_DEV_NAMELEN);

    USB_LOG_INFO("Register MIDI Class:%s\r\n", hport->config.intf[intf].devname);

    // return ret;
    return 0;
}

static int usbh_midi_disconnect(struct usbh_hubport *hport, uint8_t intf)
{
    int ret = 0;

    struct usbh_midi *midi_class = (struct usbh_midi *)hport->config.intf[intf].priv;

    if (midi_class)
    {
        if (midi_class->bulkin)
        {
            usbh_pipe_free(midi_class->bulkin);
        }

        if (midi_class->bulkout)
        {
            usbh_pipe_free(midi_class->bulkout);
        }

        if (hport->config.intf[intf].devname[0] != '\0')
        {
            USB_LOG_INFO("Unregister MIDI Class:%s\r\n", hport->config.intf[intf].devname);
        }

        memset(midi_class, 0, sizeof(struct usbh_midi));
        usb_free(midi_class);
    }

    return ret;
}

static const struct usbh_class_driver midi_streaming_class_driver = {
    .driver_name = "midi_streaming",
    .connect = usbh_midi_connect,
    .disconnect = usbh_midi_disconnect};

CLASS_INFO_DEFINE const struct usbh_class_info midi_streaming_class_info = {
    .match_flags = USB_CLASS_MATCH_INTF_CLASS | USB_CLASS_MATCH_INTF_SUBCLASS,
    .class = USB_DEVICE_CLASS_AUDIO,
    .subclass = AUDIO_SUBCLASS_MIDISTREAMING,
    .protocol = 0x00,
    .vid = 0x00,
    .pid = 0x00,
    .class_driver = &midi_streaming_class_driver};

/* -------------------------- */

void usbh_cdc_acm_callback(void *arg, int nbytes)
{
    // struct usbh_cdc_acm *cdc_acm_class = (struct usbh_cdc_acm *)arg;

    if (nbytes > 0)
    {
        for (size_t i = 0; i < nbytes; i++)
        {
            USB_LOG_RAW("0x%02x ", midi_buffer[i]);
        }
        USB_LOG_RAW("nbytes:%d\r\n", nbytes);
    }
}

static void usbh_midi_thread(void *argument)
{
    int ret;
    struct usbh_midi *midi_class;

    while (1)
    {
    find_class:
        midi_class = (struct usbh_midi *)usbh_find_class_instance("/dev/midi");
        if (midi_class == NULL)
        {
            USB_LOG_RAW("do not find /dev/midi\r\n");
            usb_osal_msleep(1000);
            continue;
        }
        memset(midi_buffer, 0, 512);

        // usbh_bulk_urb_fill(&cdc_bulkin_urb, midi_class->bulkin, midi_buffer, 64, 3000, NULL, NULL);
        // ret = usbh_submit_urb(&cdc_bulkin_urb);
        // if (ret < 0)
        // {
        //     USB_LOG_RAW("bulk in error,ret:%d\r\n", ret);
        // }
        // else
        // {
        //     USB_LOG_RAW("recv over:%d\r\n", cdc_bulkin_urb.actual_length);
        //     for (size_t i = 0; i < cdc_bulkin_urb.actual_length; i++)
        //     {
        //         USB_LOG_RAW("0x%02x ", midi_buffer[i]);
        //     }
        // }

        // USB_LOG_RAW("\r\n");
        // const uint8_t data1[10] = {0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x08, 0x14};

        // memcpy(midi_buffer, data1, 8);
        // usbh_bulk_urb_fill(&cdc_bulkout_urb, midi_class->bulkout, midi_buffer, 8, 3000, NULL, NULL);
        // ret = usbh_submit_urb(&cdc_bulkout_urb);
        // if (ret < 0)
        // {
        //     USB_LOG_RAW("bulk out error,ret:%d\r\n", ret);
        // }
        // else
        // {
        //     USB_LOG_RAW("send over:%d\r\n", cdc_bulkout_urb.actual_length);
        // }

        // usbh_bulk_urb_fill(&cdc_bulkin_urb, midi_class->bulkin, midi_buffer, 64, 3000, usbh_cdc_acm_callback, midi_class);
        // ret = usbh_submit_urb(&cdc_bulkin_urb);
        // if (ret < 0)
        // {
        //     USB_LOG_RAW("bulk in error,ret:%d\r\n", ret);
        // }
        // else
        // {
        // }

        while (1)
        {
            midi_class = (struct usbh_midi *)usbh_find_class_instance(DEV_FORMAT);
            if (midi_class == NULL)
            {
                goto find_class;
            }
            else
            {
                usbh_bulk_urb_fill(&cdc_bulkin_urb, midi_class->bulkin, midi_buffer, 64, 0, usbh_cdc_acm_callback, midi_class);
                ret = usbh_submit_urb(&cdc_bulkin_urb);
            }
            usb_osal_msleep(10);
        }
    }
}

void usb_midi_start(void)
{
    usb_osal_thread_create("usbh_midi", 2048, CONFIG_USBHOST_PSC_PRIO + 1, usbh_midi_thread, NULL);
}