/*******************************************************************************
 * @file descriptors.h
 * @brief USB descriptors header file.
 *******************************************************************************/

//=============================================================================
// inc/descriptors.h: generated by Hardware Configurator
//
// This file will be regenerated when saving a document. leave the sections
// inside the "$[...]" comment tags alone or they will be overwritten!
//=============================================================================
#ifndef __SILICON_LABS_DESCRIPTORS_H
#define __SILICON_LABS_DESCRIPTORS_H

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <si_toolchain.h>
#include <endian.h>
#include <stdlib.h>
#include <string.h>
#include <efm8_usb.h>

#ifdef __cplusplus
extern "C" {
#endif

extern uint8_t dynamic_serial[2 * 17];

// $[Vendor ID]
#define USB_VENDOR_ID                      htole16(0x20a0)
// [Vendor ID]$

// $[Product ID]
#define USB_PRODUCT_ID                     htole16(0x4287)
// [Product ID]$

#define HID_PACKET_SIZE 					64

extern SI_SEGMENT_VARIABLE(ReportDescriptor0[34], const uint8_t, SI_SEG_CODE);

#if 0
// $[HID Report Descriptors]
extern SI_SEGMENT_VARIABLE(ReportDescriptor0[0], const uint8_t, SI_SEG_CODE);
// [HID Report Descriptors]$
#endif

extern SI_SEGMENT_VARIABLE(deviceDesc[], const USB_DeviceDescriptor_TypeDef, SI_SEG_CODE);
extern SI_SEGMENT_VARIABLE(configDesc[], const uint8_t, SI_SEG_CODE);
extern SI_SEGMENT_VARIABLE(initstruct, const USBD_Init_TypeDef, SI_SEG_XDATA);

#ifdef __cplusplus
}
#endif

#endif
