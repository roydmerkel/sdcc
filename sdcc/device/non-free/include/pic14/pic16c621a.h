/*
 * This declarations of the PIC16C621A MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-04-13 17:23:02 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#ifndef __PIC16C621A_H__
#define __PIC16C621A_H__

//==============================================================================
//
//	Register Addresses
//
//==============================================================================

#ifndef NO_ADDR_DEFINES

#define INDF_ADDR               0x0000
#define TMR0_ADDR               0x0001
#define PCL_ADDR                0x0002
#define STATUS_ADDR             0x0003
#define FSR_ADDR                0x0004
#define PORTA_ADDR              0x0005
#define PORTB_ADDR              0x0006
#define PCLATH_ADDR             0x000A
#define INTCON_ADDR             0x000B
#define PIR1_ADDR               0x000C
#define CMCON_ADDR              0x001F
#define OPTION_REG_ADDR         0x0081
#define TRISA_ADDR              0x0085
#define TRISB_ADDR              0x0086
#define PIE1_ADDR               0x008C
#define PCON_ADDR               0x008E
#define VRCON_ADDR              0x009F

#endif // #ifndef NO_ADDR_DEFINES

//==============================================================================
//
//	Register Definitions
//
//==============================================================================

extern __at(0x0000) __sfr INDF;
extern __at(0x0001) __sfr TMR0;
extern __at(0x0002) __sfr PCL;

//==============================================================================
//        STATUS Bits

extern __at(0x0003) __sfr STATUS;

typedef union
  {
  struct
    {
    unsigned C                  : 1;
    unsigned DC                 : 1;
    unsigned Z                  : 1;
    unsigned NOT_PD             : 1;
    unsigned NOT_TO             : 1;
    unsigned RP0                : 1;
    unsigned RP1                : 1;
    unsigned IRP                : 1;
    };

  struct
    {
    unsigned                    : 5;
    unsigned RP                 : 2;
    unsigned                    : 1;
    };
  } __STATUSbits_t;

extern __at(0x0003) volatile __STATUSbits_t STATUSbits;

#define _C                      0x01
#define _DC                     0x02
#define _Z                      0x04
#define _NOT_PD                 0x08
#define _NOT_TO                 0x10
#define _RP0                    0x20
#define _RP1                    0x40
#define _IRP                    0x80

//==============================================================================

extern __at(0x0004) __sfr FSR;

//==============================================================================
//        PORTA Bits

extern __at(0x0005) __sfr PORTA;

typedef union
  {
  struct
    {
    unsigned RA0                : 1;
    unsigned RA1                : 1;
    unsigned RA2                : 1;
    unsigned RA3                : 1;
    unsigned RA4                : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned RA                 : 5;
    unsigned                    : 3;
    };
  } __PORTAbits_t;

extern __at(0x0005) volatile __PORTAbits_t PORTAbits;

#define _RA0                    0x01
#define _RA1                    0x02
#define _RA2                    0x04
#define _RA3                    0x08
#define _RA4                    0x10

//==============================================================================


//==============================================================================
//        PORTB Bits

extern __at(0x0006) __sfr PORTB;

typedef struct
  {
  unsigned RB0                  : 1;
  unsigned RB1                  : 1;
  unsigned RB2                  : 1;
  unsigned RB3                  : 1;
  unsigned RB4                  : 1;
  unsigned RB5                  : 1;
  unsigned RB6                  : 1;
  unsigned RB7                  : 1;
  } __PORTBbits_t;

extern __at(0x0006) volatile __PORTBbits_t PORTBbits;

#define _RB0                    0x01
#define _RB1                    0x02
#define _RB2                    0x04
#define _RB3                    0x08
#define _RB4                    0x10
#define _RB5                    0x20
#define _RB6                    0x40
#define _RB7                    0x80

//==============================================================================

extern __at(0x000A) __sfr PCLATH;

//==============================================================================
//        INTCON Bits

extern __at(0x000B) __sfr INTCON;

typedef union
  {
  struct
    {
    unsigned RBIF               : 1;
    unsigned INTF               : 1;
    unsigned T0IF               : 1;
    unsigned RBIE               : 1;
    unsigned INTE               : 1;
    unsigned T0IE               : 1;
    unsigned PEIE               : 1;
    unsigned GIE                : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned TMR0IF             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned TMR0IE             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __INTCONbits_t;

extern __at(0x000B) volatile __INTCONbits_t INTCONbits;

#define _RBIF                   0x01
#define _INTF                   0x02
#define _T0IF                   0x04
#define _TMR0IF                 0x04
#define _RBIE                   0x08
#define _INTE                   0x10
#define _T0IE                   0x20
#define _TMR0IE                 0x20
#define _PEIE                   0x40
#define _GIE                    0x80

//==============================================================================


//==============================================================================
//        PIR1 Bits

extern __at(0x000C) __sfr PIR1;

typedef struct
  {
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned CMIF                 : 1;
  unsigned                      : 1;
  } __PIR1bits_t;

extern __at(0x000C) volatile __PIR1bits_t PIR1bits;

#define _CMIF                   0x40

//==============================================================================


//==============================================================================
//        CMCON Bits

extern __at(0x001F) __sfr CMCON;

typedef union
  {
  struct
    {
    unsigned CM0                : 1;
    unsigned CM1                : 1;
    unsigned CM2                : 1;
    unsigned CIS                : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned C1OUT              : 1;
    unsigned C2OUT              : 1;
    };

  struct
    {
    unsigned CM                 : 3;
    unsigned                    : 5;
    };
  } __CMCONbits_t;

extern __at(0x001F) volatile __CMCONbits_t CMCONbits;

#define _CM0                    0x01
#define _CM1                    0x02
#define _CM2                    0x04
#define _CIS                    0x08
#define _C1OUT                  0x40
#define _C2OUT                  0x80

//==============================================================================


//==============================================================================
//        OPTION_REG Bits

extern __at(0x0081) __sfr OPTION_REG;

typedef union
  {
  struct
    {
    unsigned PS0                : 1;
    unsigned PS1                : 1;
    unsigned PS2                : 1;
    unsigned PSA                : 1;
    unsigned T0SE               : 1;
    unsigned T0CS               : 1;
    unsigned INTEDG             : 1;
    unsigned NOT_RBPU           : 1;
    };

  struct
    {
    unsigned PS                 : 3;
    unsigned                    : 5;
    };
  } __OPTION_REGbits_t;

extern __at(0x0081) volatile __OPTION_REGbits_t OPTION_REGbits;

#define _PS0                    0x01
#define _PS1                    0x02
#define _PS2                    0x04
#define _PSA                    0x08
#define _T0SE                   0x10
#define _T0CS                   0x20
#define _INTEDG                 0x40
#define _NOT_RBPU               0x80

//==============================================================================


//==============================================================================
//        TRISA Bits

extern __at(0x0085) __sfr TRISA;

typedef union
  {
  struct
    {
    unsigned TRISA0             : 1;
    unsigned TRISA1             : 1;
    unsigned TRISA2             : 1;
    unsigned TRISA3             : 1;
    unsigned TRISA4             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned TRISA              : 5;
    unsigned                    : 3;
    };
  } __TRISAbits_t;

extern __at(0x0085) volatile __TRISAbits_t TRISAbits;

#define _TRISA0                 0x01
#define _TRISA1                 0x02
#define _TRISA2                 0x04
#define _TRISA3                 0x08
#define _TRISA4                 0x10

//==============================================================================


//==============================================================================
//        TRISB Bits

extern __at(0x0086) __sfr TRISB;

typedef struct
  {
  unsigned TRISB0               : 1;
  unsigned TRISB1               : 1;
  unsigned TRISB2               : 1;
  unsigned TRISB3               : 1;
  unsigned TRISB4               : 1;
  unsigned TRISB5               : 1;
  unsigned TRISB6               : 1;
  unsigned TRISB7               : 1;
  } __TRISBbits_t;

extern __at(0x0086) volatile __TRISBbits_t TRISBbits;

#define _TRISB0                 0x01
#define _TRISB1                 0x02
#define _TRISB2                 0x04
#define _TRISB3                 0x08
#define _TRISB4                 0x10
#define _TRISB5                 0x20
#define _TRISB6                 0x40
#define _TRISB7                 0x80

//==============================================================================


//==============================================================================
//        PIE1 Bits

extern __at(0x008C) __sfr PIE1;

typedef struct
  {
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned CMIE                 : 1;
  unsigned                      : 1;
  } __PIE1bits_t;

extern __at(0x008C) volatile __PIE1bits_t PIE1bits;

#define _CMIE                   0x40

//==============================================================================


//==============================================================================
//        PCON Bits

extern __at(0x008E) __sfr PCON;

typedef union
  {
  struct
    {
    unsigned NOT_BOR            : 1;
    unsigned NOT_POR            : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned NOT_BO             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __PCONbits_t;

extern __at(0x008E) volatile __PCONbits_t PCONbits;

#define _NOT_BOR                0x01
#define _NOT_BO                 0x01
#define _NOT_POR                0x02

//==============================================================================


//==============================================================================
//        VRCON Bits

extern __at(0x009F) __sfr VRCON;

typedef union
  {
  struct
    {
    unsigned VR0                : 1;
    unsigned VR1                : 1;
    unsigned VR2                : 1;
    unsigned VR3                : 1;
    unsigned                    : 1;
    unsigned VRR                : 1;
    unsigned VROE               : 1;
    unsigned VREN               : 1;
    };

  struct
    {
    unsigned VR                 : 4;
    unsigned                    : 4;
    };
  } __VRCONbits_t;

extern __at(0x009F) volatile __VRCONbits_t VRCONbits;

#define _VR0                    0x01
#define _VR1                    0x02
#define _VR2                    0x04
#define _VR3                    0x08
#define _VRR                    0x20
#define _VROE                   0x40
#define _VREN                   0x80

//==============================================================================


//==============================================================================
//
//        Configuration Bits
//
//==============================================================================

#define _CONFIG                 0x2007

//----------------------------- CONFIG Options -------------------------------

#define _FOSC_LP                0x3FFC  // LP oscillator.
#define _LP_OSC                 0x3FFC  // LP oscillator.
#define _FOSC_XT                0x3FFD  // XT oscillator.
#define _XT_OSC                 0x3FFD  // XT oscillator.
#define _FOSC_HS                0x3FFE  // HS oscillator.
#define _HS_OSC                 0x3FFE  // HS oscillator.
#define _FOSC_RC                0x3FFF  // RC oscillator.
#define _RC_OSC                 0x3FFF  // RC oscillator.
#define _WDTE_OFF               0x3FFB  // WDT disabled.
#define _WDT_OFF                0x3FFB  // WDT disabled.
#define _WDTE_ON                0x3FFF  // WDT enabled.
#define _WDT_ON                 0x3FFF  // WDT enabled.
#define _PWRTE_ON               0x3FF7  // PWRT enabled.
#define _PWRTE_OFF              0x3FFF  // PWRT disabled.
#define _CP_ALL                 0x00CF  // All memory is code protected.
#define _CP_50                  0x15DF  // 0200h-03FFh code protected.
#define _CP_OFF                 0x3FFF  // Code protection off.
#define _BOREN_OFF              0x3FBF  // BOR disabled.
#define _BODEN_OFF              0x3FBF  // BOR disabled.
#define _BOREN_ON               0x3FFF  // BOR enabled.
#define _BODEN_ON               0x3FFF  // BOR enabled.

//==============================================================================

#define _IDLOC0                 0x2000
#define _IDLOC1                 0x2001
#define _IDLOC2                 0x2002
#define _IDLOC3                 0x2003

//==============================================================================

#ifndef NO_BIT_DEFINES

#define CM0                     CMCONbits.CM0                   // bit 0
#define CM1                     CMCONbits.CM1                   // bit 1
#define CM2                     CMCONbits.CM2                   // bit 2
#define CIS                     CMCONbits.CIS                   // bit 3
#define C1OUT                   CMCONbits.C1OUT                 // bit 6
#define C2OUT                   CMCONbits.C2OUT                 // bit 7

#define RBIF                    INTCONbits.RBIF                 // bit 0
#define INTF                    INTCONbits.INTF                 // bit 1
#define T0IF                    INTCONbits.T0IF                 // bit 2, shadows bit in INTCONbits
#define TMR0IF                  INTCONbits.TMR0IF               // bit 2, shadows bit in INTCONbits
#define RBIE                    INTCONbits.RBIE                 // bit 3
#define INTE                    INTCONbits.INTE                 // bit 4
#define T0IE                    INTCONbits.T0IE                 // bit 5, shadows bit in INTCONbits
#define TMR0IE                  INTCONbits.TMR0IE               // bit 5, shadows bit in INTCONbits
#define PEIE                    INTCONbits.PEIE                 // bit 6
#define GIE                     INTCONbits.GIE                  // bit 7

#define PS0                     OPTION_REGbits.PS0              // bit 0
#define PS1                     OPTION_REGbits.PS1              // bit 1
#define PS2                     OPTION_REGbits.PS2              // bit 2
#define PSA                     OPTION_REGbits.PSA              // bit 3
#define T0SE                    OPTION_REGbits.T0SE             // bit 4
#define T0CS                    OPTION_REGbits.T0CS             // bit 5
#define INTEDG                  OPTION_REGbits.INTEDG           // bit 6
#define NOT_RBPU                OPTION_REGbits.NOT_RBPU         // bit 7

#define NOT_BOR                 PCONbits.NOT_BOR                // bit 0, shadows bit in PCONbits
#define NOT_BO                  PCONbits.NOT_BO                 // bit 0, shadows bit in PCONbits
#define NOT_POR                 PCONbits.NOT_POR                // bit 1

#define CMIE                    PIE1bits.CMIE                   // bit 6

#define CMIF                    PIR1bits.CMIF                   // bit 6

#define RA0                     PORTAbits.RA0                   // bit 0
#define RA1                     PORTAbits.RA1                   // bit 1
#define RA2                     PORTAbits.RA2                   // bit 2
#define RA3                     PORTAbits.RA3                   // bit 3
#define RA4                     PORTAbits.RA4                   // bit 4

#define RB0                     PORTBbits.RB0                   // bit 0
#define RB1                     PORTBbits.RB1                   // bit 1
#define RB2                     PORTBbits.RB2                   // bit 2
#define RB3                     PORTBbits.RB3                   // bit 3
#define RB4                     PORTBbits.RB4                   // bit 4
#define RB5                     PORTBbits.RB5                   // bit 5
#define RB6                     PORTBbits.RB6                   // bit 6
#define RB7                     PORTBbits.RB7                   // bit 7

#define C                       STATUSbits.C                    // bit 0
#define DC                      STATUSbits.DC                   // bit 1
#define Z                       STATUSbits.Z                    // bit 2
#define NOT_PD                  STATUSbits.NOT_PD               // bit 3
#define NOT_TO                  STATUSbits.NOT_TO               // bit 4
#define RP0                     STATUSbits.RP0                  // bit 5
#define RP1                     STATUSbits.RP1                  // bit 6
#define IRP                     STATUSbits.IRP                  // bit 7

#define TRISA0                  TRISAbits.TRISA0                // bit 0
#define TRISA1                  TRISAbits.TRISA1                // bit 1
#define TRISA2                  TRISAbits.TRISA2                // bit 2
#define TRISA3                  TRISAbits.TRISA3                // bit 3
#define TRISA4                  TRISAbits.TRISA4                // bit 4

#define TRISB0                  TRISBbits.TRISB0                // bit 0
#define TRISB1                  TRISBbits.TRISB1                // bit 1
#define TRISB2                  TRISBbits.TRISB2                // bit 2
#define TRISB3                  TRISBbits.TRISB3                // bit 3
#define TRISB4                  TRISBbits.TRISB4                // bit 4
#define TRISB5                  TRISBbits.TRISB5                // bit 5
#define TRISB6                  TRISBbits.TRISB6                // bit 6
#define TRISB7                  TRISBbits.TRISB7                // bit 7

#define VR0                     VRCONbits.VR0                   // bit 0
#define VR1                     VRCONbits.VR1                   // bit 1
#define VR2                     VRCONbits.VR2                   // bit 2
#define VR3                     VRCONbits.VR3                   // bit 3
#define VRR                     VRCONbits.VRR                   // bit 5
#define VROE                    VRCONbits.VROE                  // bit 6
#define VREN                    VRCONbits.VREN                  // bit 7

#endif // #ifndef NO_BIT_DEFINES

#endif // #ifndef __PIC16C621A_H__
