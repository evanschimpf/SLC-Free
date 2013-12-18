//*****************************************************************************
//*****************************************************************************
//  FILENAME:  INSAMP.h
//  Version: 2.2, Updated on 2012/9/21 at 11:59:7
//  Generated by PSoC Designer 5.3.2710
//
//  DESCRIPTION: C declarations for a two-OpAmp Instrumentation Amplifier
//               topology in the 22/24/27/28xxx family of PSoC devices
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef INSAMP_INCLUDE
#define INSAMP_INCLUDE

#include <m8c.h>

#pragma fastcall16 INSAMP_Start
#pragma fastcall16 INSAMP_SetPower
#pragma fastcall16 INSAMP_SetGain
#pragma fastcall16 INSAMP_Stop

//-------------------------------------------------
// Prototypes of the INSAMP API.
//-------------------------------------------------
extern void INSAMP_Start(BYTE bPower);
extern void INSAMP_SetPower(BYTE bPower);
extern void INSAMP_SetGain(BYTE bGain);
extern void INSAMP_Stop(void);

//-------------------------------------------------
// Defines for INSAMP API's.
//-------------------------------------------------
#define INSAMP_OFF         0
#define INSAMP_LOWPOWER    1
#define INSAMP_MEDPOWER    2
#define INSAMP_HIGHPOWER   3

#define INSAMP_G16_0  0x00
#define INSAMP_G8_00  0x10
#define INSAMP_G5_33  0x20
#define INSAMP_G4_00  0x30
#define INSAMP_G3_20  0x40
#define INSAMP_G2_67  0x50
#define INSAMP_G2_27  0x60
#define INSAMP_G2_00  0x70


//-------------------------------------------------
// Hardware Register Definitions
//-------------------------------------------------

#pragma ioport  INSAMP_INV_CR0: 0x071
BYTE            INSAMP_INV_CR0;
#pragma ioport  INSAMP_INV_CR1: 0x072
BYTE            INSAMP_INV_CR1;
#pragma ioport  INSAMP_INV_CR2: 0x073
BYTE            INSAMP_INV_CR2;
#pragma ioport  INSAMP_INV_CR3: 0x070
BYTE            INSAMP_INV_CR3;

#pragma ioport  INSAMP_NON_INV_CR0: 0x075
BYTE            INSAMP_NON_INV_CR0;
#pragma ioport  INSAMP_NON_INV_CR1: 0x076
BYTE            INSAMP_NON_INV_CR1;
#pragma ioport  INSAMP_NON_INV_CR2: 0x077
BYTE            INSAMP_NON_INV_CR2;
#pragma ioport  INSAMP_NON_INV_CR3: 0x074
BYTE            INSAMP_NON_INV_CR3;

#endif
// end of file INSAMP.h