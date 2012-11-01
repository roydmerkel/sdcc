/*
 * This declarations of the PIC16F628 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-11-01 17:30:07 UTC.
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

#ifndef __PIC16F628_H__
#define __PIC16F628_H__

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
#define TMR1_ADDR               0x000E
#define TMR1L_ADDR              0x000E
#define TMR1H_ADDR              0x000F
#define T1CON_ADDR              0x0010
#define TMR2_ADDR               0x0011
#define T2CON_ADDR              0x0012
#define CCPR1_ADDR              0x0015
#define CCPR1L_ADDR             0x0015
#define CCPR1H_ADDR             0x0016
#define CCP1CON_ADDR            0x0017
#define RCSTA_ADDR              0x0018
#define TXREG_ADDR              0x0019
#define RCREG_ADDR              0x001A
#define CMCON_ADDR              0x001F
#define OPTION_REG_ADDR         0x0081
#define TRISA_ADDR              0x0085
#define TRISB_ADDR              0x0086
#define PIE1_ADDR               0x008C
#define PCON_ADDR               0x008E
#define PR2_ADDR                0x0092
#define TXSTA_ADDR              0x0098
#define SPBRG_ADDR              0x0099
#define EEDATA_ADDR             0x009A
#define EEADR_ADDR              0x009B
#define EECON1_ADDR             0x009C
#define EECON2_ADDR             0x009D
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

typedef struct
  {
  unsigned RA0                  : 1;
  unsigned RA1                  : 1;
  unsigned RA2                  : 1;
  unsigned RA3                  : 1;
  unsigned RA4                  : 1;
  unsigned RA5                  : 1;
  unsigned RA6                  : 1;
  unsigned RA7                  : 1;
  } __PORTAbits_t;

extern __at(0x0005) volatile __PORTAbits_t PORTAbits;

#define _RA0                    0x01
#define _RA1                    0x02
#define _RA2                    0x04
#define _RA3                    0x08
#define _RA4                    0x10
#define _RA5                    0x20
#define _RA6                    0x40
#define _RA7                    0x80

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
  unsigned TMR1IF               : 1;
  unsigned TMR2IF               : 1;
  unsigned CCP1IF               : 1;
  unsigned                      : 1;
  unsigned TXIF                 : 1;
  unsigned RCIF                 : 1;
  unsigned CMIF                 : 1;
  unsigned EEIF                 : 1;
  } __PIR1bits_t;

extern __at(0x000C) volatile __PIR1bits_t PIR1bits;

#define _TMR1IF                 0x01
#define _TMR2IF                 0x02
#define _CCP1IF                 0x04
#define _TXIF                   0x10
#define _RCIF                   0x20
#define _CMIF                   0x40
#define _EEIF                   0x80

//==============================================================================

extern __at(0x000E) __sfr TMR1;
extern __at(0x000E) __sfr TMR1L;
extern __at(0x000F) __sfr TMR1H;

//==============================================================================
//        T1CON Bits

extern __at(0x0010) __sfr T1CON;

typedef union
  {
  struct
    {
    unsigned TMR1ON             : 1;
    unsigned TMR1CS             : 1;
    unsigned NOT_T1SYNC         : 1;
    unsigned T1OSCEN            : 1;
    unsigned T1CKPS0            : 1;
    unsigned T1CKPS1            : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 4;
    unsigned T1CKPS             : 2;
    unsigned                    : 2;
    };
  } __T1CONbits_t;

extern __at(0x0010) volatile __T1CONbits_t T1CONbits;

#define _TMR1ON                 0x01
#define _TMR1CS                 0x02
#define _NOT_T1SYNC             0x04
#define _T1OSCEN                0x08
#define _T1CKPS0                0x10
#define _T1CKPS1                0x20

//==============================================================================

extern __at(0x0011) __sfr TMR2;

//==============================================================================
//        T2CON Bits

extern __at(0x0012) __sfr T2CON;

typedef union
  {
  struct
    {
    unsigned T2CKPS0            : 1;
    unsigned T2CKPS1            : 1;
    unsigned TMR2ON             : 1;
    unsigned TOUTPS0            : 1;
    unsigned TOUTPS1            : 1;
    unsigned TOUTPS2            : 1;
    unsigned TOUTPS3            : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned T2CKPS             : 2;
    unsigned                    : 6;
    };

  struct
    {
    unsigned                    : 3;
    unsigned TOUTPS             : 4;
    unsigned                    : 1;
    };
  } __T2CONbits_t;

extern __at(0x0012) volatile __T2CONbits_t T2CONbits;

#define _T2CKPS0                0x01
#define _T2CKPS1                0x02
#define _TMR2ON                 0x04
#define _TOUTPS0                0x08
#define _TOUTPS1                0x10
#define _TOUTPS2                0x20
#define _TOUTPS3                0x40

//==============================================================================

extern __at(0x0015) __sfr CCPR1;
extern __at(0x0015) __sfr CCPR1L;
extern __at(0x0016) __sfr CCPR1H;

//==============================================================================
//        CCP1CON Bits

extern __at(0x0017) __sfr CCP1CON;

typedef union
  {
  struct
    {
    unsigned CCP1M0             : 1;
    unsigned CCP1M1             : 1;
    unsigned CCP1M2             : 1;
    unsigned CCP1M3             : 1;
    unsigned CCP1Y              : 1;
    unsigned CCP1X              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned CCP1M              : 4;
    unsigned                    : 4;
    };
  } __CCP1CONbits_t;

extern __at(0x0017) volatile __CCP1CONbits_t CCP1CONbits;

#define _CCP1M0                 0x01
#define _CCP1M1                 0x02
#define _CCP1M2                 0x04
#define _CCP1M3                 0x08
#define _CCP1Y                  0x10
#define _CCP1X                  0x20

//==============================================================================


//==============================================================================
//        RCSTA Bits

extern __at(0x0018) __sfr RCSTA;

typedef union
  {
  struct
    {
    unsigned RX9D               : 1;
    unsigned OERR               : 1;
    unsigned FERR               : 1;
    unsigned ADEN               : 1;
    unsigned CREN               : 1;
    unsigned SREN               : 1;
    unsigned RX9                : 1;
    unsigned SPEN               : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned ADDEN              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __RCSTAbits_t;

extern __at(0x0018) volatile __RCSTAbits_t RCSTAbits;

#define _RX9D                   0x01
#define _OERR                   0x02
#define _FERR                   0x04
#define _ADEN                   0x08
#define _ADDEN                  0x08
#define _CREN                   0x10
#define _SREN                   0x20
#define _RX9                    0x40
#define _SPEN                   0x80

//==============================================================================

extern __at(0x0019) __sfr TXREG;
extern __at(0x001A) __sfr RCREG;

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
    unsigned C1INV              : 1;
    unsigned C2INV              : 1;
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
#define _C1INV                  0x10
#define _C2INV                  0x20
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

typedef struct
  {
  unsigned TRISA0               : 1;
  unsigned TRISA1               : 1;
  unsigned TRISA2               : 1;
  unsigned TRISA3               : 1;
  unsigned TRISA4               : 1;
  unsigned TRISA5               : 1;
  unsigned TRISA6               : 1;
  unsigned TRISA7               : 1;
  } __TRISAbits_t;

extern __at(0x0085) volatile __TRISAbits_t TRISAbits;

#define _TRISA0                 0x01
#define _TRISA1                 0x02
#define _TRISA2                 0x04
#define _TRISA3                 0x08
#define _TRISA4                 0x10
#define _TRISA5                 0x20
#define _TRISA6                 0x40
#define _TRISA7                 0x80

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
  unsigned TMR1IE               : 1;
  unsigned TMR2IE               : 1;
  unsigned CCP1IE               : 1;
  unsigned                      : 1;
  unsigned TXIE                 : 1;
  unsigned RCIE                 : 1;
  unsigned CMIE                 : 1;
  unsigned EEIE                 : 1;
  } __PIE1bits_t;

extern __at(0x008C) volatile __PIE1bits_t PIE1bits;

#define _TMR1IE                 0x01
#define _TMR2IE                 0x02
#define _CCP1IE                 0x04
#define _TXIE                   0x10
#define _RCIE                   0x20
#define _CMIE                   0x40
#define _EEIE                   0x80

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
    unsigned OSCF               : 1;
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

  struct
    {
    unsigned NOT_BOD            : 1;
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
#define _NOT_BOD                0x01
#define _NOT_POR                0x02
#define _OSCF                   0x08

//==============================================================================

extern __at(0x0092) __sfr PR2;

//==============================================================================
//        TXSTA Bits

extern __at(0x0098) __sfr TXSTA;

typedef struct
  {
  unsigned TX9D                 : 1;
  unsigned TRMT                 : 1;
  unsigned BRGH                 : 1;
  unsigned                      : 1;
  unsigned SYNC                 : 1;
  unsigned TXEN                 : 1;
  unsigned TX9                  : 1;
  unsigned CSRC                 : 1;
  } __TXSTAbits_t;

extern __at(0x0098) volatile __TXSTAbits_t TXSTAbits;

#define _TX9D                   0x01
#define _TRMT                   0x02
#define _BRGH                   0x04
#define _SYNC                   0x10
#define _TXEN                   0x20
#define _TX9                    0x40
#define _CSRC                   0x80

//==============================================================================

extern __at(0x0099) __sfr SPBRG;
extern __at(0x009A) __sfr EEDATA;
extern __at(0x009B) __sfr EEADR;

//==============================================================================
//        EECON1 Bits

extern __at(0x009C) __sfr EECON1;

typedef struct
  {
  unsigned RD                   : 1;
  unsigned WR                   : 1;
  unsigned WREN                 : 1;
  unsigned WRERR                : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  } __EECON1bits_t;

extern __at(0x009C) volatile __EECON1bits_t EECON1bits;

#define _RD                     0x01
#define _WR                     0x02
#define _WREN                   0x04
#define _WRERR                  0x08

//==============================================================================

extern __at(0x009D) __sfr EECON2;

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

#define _FOSC_LP                0x3FEC  // LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _LP_OSC                 0x3FEC  // LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _FOSC_XT                0x3FED  // XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _XT_OSC                 0x3FED  // XT oscillator: Crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _FOSC_HS                0x3FEE  // HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _HS_OSC                 0x3FEE  // HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN.
#define _FOSC_ECIO              0x3FEF  // EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN.
#define _EXTCLK_OSC             0x3FEF  // EC: I/O function on RA6/OSC2/CLKOUT pin, CLKIN on RA7/OSC1/CLKIN.
#define _FOSC_INTOSCIO          0x3FFC  // INTRC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN.
#define _INTRC_OSC_NOCLKOUT     0x3FFC  // INTRC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN.
#define _FOSC_INTOSCCLK         0x3FFD  // INTRC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN.
#define _INTRC_OSC_CLKOUT       0x3FFD  // INTRC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN.
#define _FOSC_ERIO              0x3FFE  // ER oscillator: I/O function on RA6/OSC2/CLKOUT pin, Resistor on RA7/OSC1/CLKIN.
#define _ER_OSC_NOCLKOUT        0x3FFE  // ER oscillator: I/O function on RA6/OSC2/CLKOUT pin, Resistor on RA7/OSC1/CLKIN.
#define _FOSC_ERCLK             0x3FFF  // ER oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor on RA7/OSC1/CLKIN.
#define _ER_OSC_CLKOUT          0x3FFF  // ER oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, Resistor on RA7/OSC1/CLKIN.
#define _WDTE_OFF               0x3FFB  // WDT disabled.
#define _WDT_OFF                0x3FFB  // WDT disabled.
#define _WDTE_ON                0x3FFF  // WDT enabled.
#define _WDT_ON                 0x3FFF  // WDT enabled.
#define _PWRTE_ON               0x3FF7  // PWRT enabled.
#define _PWRTE_OFF              0x3FFF  // PWRT disabled.
#define _MCLRE_OFF              0x3FDF  // RA5/MCLR pin function is digital input, MCLR internally tied to VDD.
#define _MCLRE_ON               0x3FFF  // RA5/MCLR pin function is MCLR.
#define _BOREN_OFF              0x3FBF  // BOD Reset disabled.
#define _BODEN_OFF              0x3FBF  // BOD Reset disabled.
#define _BOREN_ON               0x3FFF  // BOD Reset enabled.
#define _BODEN_ON               0x3FFF  // BOD Reset enabled.
#define _LVP_OFF                0x3F7F  // RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming.
#define _LVP_ON                 0x3FFF  // RB4/PGM pin has PGM function, low-voltage programming enabled.
#define _CPD_ON                 0x3EFF  // Data memory code protected.
#define DATA_CP_ON              0x3EFF  // Data memory code protected.
#define _CPD_OFF                0x3FFF  // Data memory code protection off.
#define DATA_CP_OFF             0x3FFF  // Data memory code protection off.
#define _CP_ALL                 0x03FF  // 0000h-07FFh code protected.
#define _CP_75                  0x17FF  // 0200h-07FFh code protected.
#define _CP_50                  0x2BFF  // 0400h-07FFh code protected.
#define _CP_OFF                 0x3FFF  // Program memory code protection off.

//==============================================================================

#define _DEVID1                 0x2006

#define _IDLOC0                 0x2000
#define _IDLOC1                 0x2001
#define _IDLOC2                 0x2002
#define _IDLOC3                 0x2003

//==============================================================================

#ifndef NO_BIT_DEFINES

#define CCP1M0                  CCP1CONbits.CCP1M0              // bit 0
#define CCP1M1                  CCP1CONbits.CCP1M1              // bit 1
#define CCP1M2                  CCP1CONbits.CCP1M2              // bit 2
#define CCP1M3                  CCP1CONbits.CCP1M3              // bit 3
#define CCP1Y                   CCP1CONbits.CCP1Y               // bit 4
#define CCP1X                   CCP1CONbits.CCP1X               // bit 5

#define CM0                     CMCONbits.CM0                   // bit 0
#define CM1                     CMCONbits.CM1                   // bit 1
#define CM2                     CMCONbits.CM2                   // bit 2
#define CIS                     CMCONbits.CIS                   // bit 3
#define C1INV                   CMCONbits.C1INV                 // bit 4
#define C2INV                   CMCONbits.C2INV                 // bit 5
#define C1OUT                   CMCONbits.C1OUT                 // bit 6
#define C2OUT                   CMCONbits.C2OUT                 // bit 7

#define RD                      EECON1bits.RD                   // bit 0
#define WR                      EECON1bits.WR                   // bit 1
#define WREN                    EECON1bits.WREN                 // bit 2
#define WRERR                   EECON1bits.WRERR                // bit 3

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
#define NOT_BOD                 PCONbits.NOT_BOD                // bit 0, shadows bit in PCONbits
#define NOT_POR                 PCONbits.NOT_POR                // bit 1
#define OSCF                    PCONbits.OSCF                   // bit 3

#define TMR1IE                  PIE1bits.TMR1IE                 // bit 0
#define TMR2IE                  PIE1bits.TMR2IE                 // bit 1
#define CCP1IE                  PIE1bits.CCP1IE                 // bit 2
#define TXIE                    PIE1bits.TXIE                   // bit 4
#define RCIE                    PIE1bits.RCIE                   // bit 5
#define CMIE                    PIE1bits.CMIE                   // bit 6
#define EEIE                    PIE1bits.EEIE                   // bit 7

#define TMR1IF                  PIR1bits.TMR1IF                 // bit 0
#define TMR2IF                  PIR1bits.TMR2IF                 // bit 1
#define CCP1IF                  PIR1bits.CCP1IF                 // bit 2
#define TXIF                    PIR1bits.TXIF                   // bit 4
#define RCIF                    PIR1bits.RCIF                   // bit 5
#define CMIF                    PIR1bits.CMIF                   // bit 6
#define EEIF                    PIR1bits.EEIF                   // bit 7

#define RA0                     PORTAbits.RA0                   // bit 0
#define RA1                     PORTAbits.RA1                   // bit 1
#define RA2                     PORTAbits.RA2                   // bit 2
#define RA3                     PORTAbits.RA3                   // bit 3
#define RA4                     PORTAbits.RA4                   // bit 4
#define RA5                     PORTAbits.RA5                   // bit 5
#define RA6                     PORTAbits.RA6                   // bit 6
#define RA7                     PORTAbits.RA7                   // bit 7

#define RB0                     PORTBbits.RB0                   // bit 0
#define RB1                     PORTBbits.RB1                   // bit 1
#define RB2                     PORTBbits.RB2                   // bit 2
#define RB3                     PORTBbits.RB3                   // bit 3
#define RB4                     PORTBbits.RB4                   // bit 4
#define RB5                     PORTBbits.RB5                   // bit 5
#define RB6                     PORTBbits.RB6                   // bit 6
#define RB7                     PORTBbits.RB7                   // bit 7

#define RX9D                    RCSTAbits.RX9D                  // bit 0
#define OERR                    RCSTAbits.OERR                  // bit 1
#define FERR                    RCSTAbits.FERR                  // bit 2
#define ADEN                    RCSTAbits.ADEN                  // bit 3, shadows bit in RCSTAbits
#define ADDEN                   RCSTAbits.ADDEN                 // bit 3, shadows bit in RCSTAbits
#define CREN                    RCSTAbits.CREN                  // bit 4
#define SREN                    RCSTAbits.SREN                  // bit 5
#define RX9                     RCSTAbits.RX9                   // bit 6
#define SPEN                    RCSTAbits.SPEN                  // bit 7

#define C                       STATUSbits.C                    // bit 0
#define DC                      STATUSbits.DC                   // bit 1
#define Z                       STATUSbits.Z                    // bit 2
#define NOT_PD                  STATUSbits.NOT_PD               // bit 3
#define NOT_TO                  STATUSbits.NOT_TO               // bit 4
#define RP0                     STATUSbits.RP0                  // bit 5
#define RP1                     STATUSbits.RP1                  // bit 6
#define IRP                     STATUSbits.IRP                  // bit 7

#define TMR1ON                  T1CONbits.TMR1ON                // bit 0
#define TMR1CS                  T1CONbits.TMR1CS                // bit 1
#define NOT_T1SYNC              T1CONbits.NOT_T1SYNC            // bit 2
#define T1OSCEN                 T1CONbits.T1OSCEN               // bit 3
#define T1CKPS0                 T1CONbits.T1CKPS0               // bit 4
#define T1CKPS1                 T1CONbits.T1CKPS1               // bit 5

#define T2CKPS0                 T2CONbits.T2CKPS0               // bit 0
#define T2CKPS1                 T2CONbits.T2CKPS1               // bit 1
#define TMR2ON                  T2CONbits.TMR2ON                // bit 2
#define TOUTPS0                 T2CONbits.TOUTPS0               // bit 3
#define TOUTPS1                 T2CONbits.TOUTPS1               // bit 4
#define TOUTPS2                 T2CONbits.TOUTPS2               // bit 5
#define TOUTPS3                 T2CONbits.TOUTPS3               // bit 6

#define TRISA0                  TRISAbits.TRISA0                // bit 0
#define TRISA1                  TRISAbits.TRISA1                // bit 1
#define TRISA2                  TRISAbits.TRISA2                // bit 2
#define TRISA3                  TRISAbits.TRISA3                // bit 3
#define TRISA4                  TRISAbits.TRISA4                // bit 4
#define TRISA5                  TRISAbits.TRISA5                // bit 5
#define TRISA6                  TRISAbits.TRISA6                // bit 6
#define TRISA7                  TRISAbits.TRISA7                // bit 7

#define TRISB0                  TRISBbits.TRISB0                // bit 0
#define TRISB1                  TRISBbits.TRISB1                // bit 1
#define TRISB2                  TRISBbits.TRISB2                // bit 2
#define TRISB3                  TRISBbits.TRISB3                // bit 3
#define TRISB4                  TRISBbits.TRISB4                // bit 4
#define TRISB5                  TRISBbits.TRISB5                // bit 5
#define TRISB6                  TRISBbits.TRISB6                // bit 6
#define TRISB7                  TRISBbits.TRISB7                // bit 7

#define TX9D                    TXSTAbits.TX9D                  // bit 0
#define TRMT                    TXSTAbits.TRMT                  // bit 1
#define BRGH                    TXSTAbits.BRGH                  // bit 2
#define SYNC                    TXSTAbits.SYNC                  // bit 4
#define TXEN                    TXSTAbits.TXEN                  // bit 5
#define TX9                     TXSTAbits.TX9                   // bit 6
#define CSRC                    TXSTAbits.CSRC                  // bit 7

#define VR0                     VRCONbits.VR0                   // bit 0
#define VR1                     VRCONbits.VR1                   // bit 1
#define VR2                     VRCONbits.VR2                   // bit 2
#define VR3                     VRCONbits.VR3                   // bit 3
#define VRR                     VRCONbits.VRR                   // bit 5
#define VROE                    VRCONbits.VROE                  // bit 6
#define VREN                    VRCONbits.VREN                  // bit 7

#endif // #ifndef NO_BIT_DEFINES

#endif // #ifndef __PIC16F628_H__
