/*
 * Copyright (c) 2022, sakumisu
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "usbh_core.h"
#include "usb_audio.h"

struct usbh_midi {
    struct usbh_hubport *hport;

    uint8_t intf;          /* interface number */
    usbh_pipe_t bulkin;  /* BULK IN endpoint */
    usbh_pipe_t bulkout; /* BULK OUT endpoint */
};

#define DEV_FORMAT "/dev/midi"

static int usbh_midi_connect(struct usbh_hubport *hport, uint8_t intf)
{
    struct usbh_endpoint_cfg ep_cfg = { 0 };
    struct usb_endpoint_descriptor *ep_desc;
    int ret;

    struct usbh_midi *midi_class = usb_malloc(sizeof(struct usbh_midi));
    if (midi_class == NULL) {
        USB_LOG_ERR("Fail to alloc midi_class\r\n");
        return -ENOMEM;
    }

    memset(midi_class, 0, sizeof(struct usbh_midi));
    midi_class->hport = hport;
    midi_class->intf = intf;

    hport->config.intf[intf].priv = midi_class;

    for (uint8_t i = 0; i < hport->config.intf[intf].altsetting[0].intf_desc.bNumEndpoints; i++) {
        ep_desc = &hport->config.intf[intf + 1].altsetting[0].ep[i].ep_desc;

        if (ep_desc->bEndpointAddress & 0x80) {
            usbh_hport_activate_epx(&midi_class->bulkin, hport, ep_desc);
        } else {
            usbh_hport_activate_epx(&midi_class->bulkout, hport, ep_desc);
        }
    }

    strncpy(hport->config.intf[intf].devname, DEV_FORMAT, CONFIG_USBHOST_DEV_NAMELEN);

    USB_LOG_INFO("Register MIDI Class:%s\r\n", hport->config.intf[intf].devname);

    return ret;
}

static int usbh_midi_disconnect(struct usbh_hubport *hport, uint8_t intf)
{
    int ret = 0;

    struct usbh_midi *midi_class = (struct usbh_midi *)hport->config.intf[intf].priv;

    if (midi_class) {
        if (midi_class->bulkin) {
            usbh_pipe_free(midi_class->bulkin);
        }

        if (midi_class->bulkout) {
            usbh_pipe_free(midi_class->bulkout);
        }

        if (hport->config.intf[intf].devname[0] != '\0') {
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
    .disconnect = usbh_midi_disconnect
};

CLASS_INFO_DEFINE const struct usbh_class_info midi_streaming_class_info = {
    .match_flags = USB_CLASS_MATCH_INTF_CLASS | USB_CLASS_MATCH_INTF_SUBCLASS,
    .class = USB_DEVICE_CLASS_AUDIO,
    .subclass = AUDIO_SUBCLASS_MIDISTREAMING,
    .protocol = 0x00,
    .vid = 0x00,
    .pid = 0x00,
    .class_driver = &midi_streaming_class_driver
};