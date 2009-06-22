/*
 * pic18f46j50.c - device specific definitions
 *
 * This file is part of the GNU PIC library for SDCC,
 * originally devised by Vangelis Rokas <vrokas AT otenet.gr>
 *
 * It has been automatically generated by inc2h-pic16.pl,
 * (c) 2007 by Raphael Neider <rneider AT web.de>
 */

#include "pic18f46j50.h"


__sfr __at (0xEC6) RPOR0;

__sfr __at (0xEC7) RPOR1;

__sfr __at (0xEC8) RPOR2;

__sfr __at (0xEC9) RPOR3;

__sfr __at (0xECA) RPOR4;

__sfr __at (0xECB) RPOR5;

__sfr __at (0xECC) RPOR6;

__sfr __at (0xECD) RPOR7;

__sfr __at (0xECE) RPOR8;

__sfr __at (0xECF) RPOR9;

__sfr __at (0xED0) RPOR10;

__sfr __at (0xED1) RPOR11;

__sfr __at (0xED2) RPOR12;

__sfr __at (0xED3) RPOR13;

__sfr __at (0xED7) RPOR17;

__sfr __at (0xED8) RPOR18;

__sfr __at (0xED9) RPOR19;

__sfr __at (0xEDA) RPOR20;

__sfr __at (0xEDB) RPOR21;

__sfr __at (0xEDC) RPOR22;

__sfr __at (0xEDD) RPOR23;

__sfr __at (0xEDE) RPOR24;

__sfr __at (0xEE7) RPINR1;

__sfr __at (0xEE8) RPINR2;

__sfr __at (0xEE9) RPINR3;

__sfr __at (0xEEA) RPINR4;

__sfr __at (0xEEC) RPINR6;

__sfr __at (0xEED) RPINR7;

__sfr __at (0xEEE) RPINR8;

__sfr __at (0xEF2) RPINR12;

__sfr __at (0xEF3) RPINR13;

__sfr __at (0xEF6) RPINR16;

__sfr __at (0xEF7) RPINR17;

__sfr __at (0xEFB) RPINR21;

__sfr __at (0xEFC) RPINR22;

__sfr __at (0xEFD) RPINR23;

__sfr __at (0xEFE) RPINR24;

__sfr __at (0xEFF) PPSCON;
volatile __PPSCONbits_t __at (0xEFF) PPSCONbits;

__sfr __at (0xF26) UEP0;
volatile __UEP0bits_t __at (0xF26) UEP0bits;

__sfr __at (0xF27) UEP1;
volatile __UEP1bits_t __at (0xF27) UEP1bits;

__sfr __at (0xF28) UEP2;
volatile __UEP2bits_t __at (0xF28) UEP2bits;

__sfr __at (0xF29) UEP3;
volatile __UEP3bits_t __at (0xF29) UEP3bits;

__sfr __at (0xF2A) UEP4;
volatile __UEP4bits_t __at (0xF2A) UEP4bits;

__sfr __at (0xF2B) UEP5;
volatile __UEP5bits_t __at (0xF2B) UEP5bits;

__sfr __at (0xF2C) UEP6;
volatile __UEP6bits_t __at (0xF2C) UEP6bits;

__sfr __at (0xF2D) UEP7;
volatile __UEP7bits_t __at (0xF2D) UEP7bits;

__sfr __at (0xF2E) UEP8;
volatile __UEP8bits_t __at (0xF2E) UEP8bits;

__sfr __at (0xF2F) UEP9;
volatile __UEP9bits_t __at (0xF2F) UEP9bits;

__sfr __at (0xF30) UEP10;
volatile __UEP10bits_t __at (0xF30) UEP10bits;

__sfr __at (0xF31) UEP11;
volatile __UEP11bits_t __at (0xF31) UEP11bits;

__sfr __at (0xF32) UEP12;
volatile __UEP12bits_t __at (0xF32) UEP12bits;

__sfr __at (0xF33) UEP13;
volatile __UEP13bits_t __at (0xF33) UEP13bits;

__sfr __at (0xF34) UEP14;
volatile __UEP14bits_t __at (0xF34) UEP14bits;

__sfr __at (0xF35) UEP15;
volatile __UEP15bits_t __at (0xF35) UEP15bits;

__sfr __at (0xF36) UIE;
volatile __UIEbits_t __at (0xF36) UIEbits;

__sfr __at (0xF37) UEIE;
volatile __UEIEbits_t __at (0xF37) UEIEbits;

__sfr __at (0xF38) UADDR;
volatile __UADDRbits_t __at (0xF38) UADDRbits;

__sfr __at (0xF39) UCFG;
volatile __UCFGbits_t __at (0xF39) UCFGbits;

__sfr __at (0xF3C) PADCFG1;
volatile __PADCFG1bits_t __at (0xF3C) PADCFG1bits;

__sfr __at (0xF3D) REFOCON;
volatile __REFOCONbits_t __at (0xF3D) REFOCONbits;

__sfr __at (0xF3E) RTCCAL;
volatile __RTCCALbits_t __at (0xF3E) RTCCALbits;

__sfr __at (0xF3F) RTCCFG;
volatile __RTCCFGbits_t __at (0xF3F) RTCCFGbits;

__sfr __at (0xF40) ODCON3;
volatile __ODCON3bits_t __at (0xF40) ODCON3bits;

__sfr __at (0xF41) ODCON2;
volatile __ODCON2bits_t __at (0xF41) ODCON2bits;

__sfr __at (0xF42) ODCON1;
volatile __ODCON1bits_t __at (0xF42) ODCON1bits;

__sfr __at (0xF48) ANCON0;
volatile __ANCON0bits_t __at (0xF48) ANCON0bits;

__sfr __at (0xF49) ANCON1;
volatile __ANCON1bits_t __at (0xF49) ANCON1bits;

__sfr __at (0xF4A) DSWAKEL;
volatile __DSWAKELbits_t __at (0xF4A) DSWAKELbits;

__sfr __at (0xF4B) DSWAKEH;
volatile __DSWAKEHbits_t __at (0xF4B) DSWAKEHbits;

__sfr __at (0xF4C) DSCONL;
volatile __DSCONLbits_t __at (0xF4C) DSCONLbits;

__sfr __at (0xF4D) DSCONH;
volatile __DSCONHbits_t __at (0xF4D) DSCONHbits;

__sfr __at (0xF4E) DSGPR0;

__sfr __at (0xF4F) DSGPR1;

__sfr __at (0xF52) TCLKCON;
volatile __TCLKCONbits_t __at (0xF52) TCLKCONbits;

__sfr __at (0xF53) CVRCON;
volatile __CVRCONbits_t __at (0xF53) CVRCONbits;

__sfr __at (0xF54) PMSTATL;
volatile __PMSTATLbits_t __at (0xF54) PMSTATLbits;

__sfr __at (0xF55) PMSTATH;
volatile __PMSTATHbits_t __at (0xF55) PMSTATHbits;

__sfr __at (0xF56) PMEL;
volatile __PMELbits_t __at (0xF56) PMELbits;

__sfr __at (0xF57) PMEH;
volatile __PMEHbits_t __at (0xF57) PMEHbits;

__sfr __at (0xF58) PMDIN2L;

__sfr __at (0xF59) PMDIN2H;

__sfr __at (0xF5A) PMDOUT2L;

__sfr __at (0xF5B) PMDOUT2H;

__sfr __at (0xF5C) PMMODEL;
volatile __PMMODELbits_t __at (0xF5C) PMMODELbits;

__sfr __at (0xF5D) PMMODEH;
volatile __PMMODEHbits_t __at (0xF5D) PMMODEHbits;

__sfr __at (0xF5E) PMCONL;
volatile __PMCONLbits_t __at (0xF5E) PMCONLbits;

__sfr __at (0xF5F) PMCONH;
volatile __PMCONHbits_t __at (0xF5F) PMCONHbits;

__sfr __at (0xF60) UFRM;

__sfr __at (0xF60) UFRML;
volatile __UFRMLbits_t __at (0xF60) UFRMLbits;

__sfr __at (0xF61) UFRMH;
volatile __UFRMHbits_t __at (0xF61) UFRMHbits;

__sfr __at (0xF62) UIR;
volatile __UIRbits_t __at (0xF62) UIRbits;

__sfr __at (0xF63) UEIR;
volatile __UEIRbits_t __at (0xF63) UEIRbits;

__sfr __at (0xF64) USTAT;
volatile __USTATbits_t __at (0xF64) USTATbits;

__sfr __at (0xF65) UCON;
volatile __UCONbits_t __at (0xF65) UCONbits;

__sfr __at (0xF66) DMABCH;

__sfr __at (0xF67) DMABCL;

__sfr __at (0xF68) RXADDRH;

__sfr __at (0xF69) RXADDRL;

__sfr __at (0xF6A) TXADDRH;

__sfr __at (0xF6B) TXADDRL;

__sfr __at (0xF6C) PMDIN1L;

__sfr __at (0xF6D) PMDIN1H;

__sfr __at (0xF6E) PMADDRL;

__sfr __at (0xF6E) PMDOUT1L;

__sfr __at (0xF6F) PMADDRH;
volatile __PMADDRHbits_t __at (0xF6F) PMADDRHbits;

__sfr __at (0xF6F) PMDOUT1H;

__sfr __at (0xF70) CMSTAT;
volatile __CMSTATbits_t __at (0xF70) CMSTATbits;

__sfr __at (0xF70) CMSTATUS;
volatile __CMSTATUSbits_t __at (0xF70) CMSTATUSbits;

__sfr __at (0xF71) SSP2CON2;
volatile __SSP2CON2bits_t __at (0xF71) SSP2CON2bits;

__sfr __at (0xF72) SSP2CON1;
volatile __SSP2CON1bits_t __at (0xF72) SSP2CON1bits;

__sfr __at (0xF73) SSP2STAT;
volatile __SSP2STATbits_t __at (0xF73) SSP2STATbits;

__sfr __at (0xF74) SSP2ADD;
volatile __SSP2ADDbits_t __at (0xF74) SSP2ADDbits;

__sfr __at (0xF75) SSP2BUF;

__sfr __at (0xF76) T4CON;
volatile __T4CONbits_t __at (0xF76) T4CONbits;

__sfr __at (0xF77) PR4;

__sfr __at (0xF78) TMR4;

__sfr __at (0xF79) T3CON;
volatile __T3CONbits_t __at (0xF79) T3CONbits;

__sfr __at (0xF7A) TMR3L;

__sfr __at (0xF7B) TMR3H;

__sfr __at (0xF7C) BAUDCON2;
volatile __BAUDCON2bits_t __at (0xF7C) BAUDCON2bits;

__sfr __at (0xF7D) SPBRGH2;

__sfr __at (0xF7E) BAUDCON;
volatile __BAUDCONbits_t __at (0xF7E) BAUDCONbits;

__sfr __at (0xF7E) BAUDCON1;
volatile __BAUDCON1bits_t __at (0xF7E) BAUDCON1bits;

__sfr __at (0xF7E) BAUDCTL;
volatile __BAUDCTLbits_t __at (0xF7E) BAUDCTLbits;

__sfr __at (0xF7F) SPBRGH;

__sfr __at (0xF7F) SPBRGH1;

__sfr __at (0xF80) PORTA;
volatile __PORTAbits_t __at (0xF80) PORTAbits;

__sfr __at (0xF81) PORTB;
volatile __PORTBbits_t __at (0xF81) PORTBbits;

__sfr __at (0xF82) PORTC;
volatile __PORTCbits_t __at (0xF82) PORTCbits;

__sfr __at (0xF83) PORTD;
volatile __PORTDbits_t __at (0xF83) PORTDbits;

__sfr __at (0xF84) PORTE;
volatile __PORTEbits_t __at (0xF84) PORTEbits;

__sfr __at (0xF85) HLVDCON;
volatile __HLVDCONbits_t __at (0xF85) HLVDCONbits;

__sfr __at (0xF86) DMACON2;
volatile __DMACON2bits_t __at (0xF86) DMACON2bits;

__sfr __at (0xF88) DMACON1;
volatile __DMACON1bits_t __at (0xF88) DMACON1bits;

__sfr __at (0xF89) LATA;
volatile __LATAbits_t __at (0xF89) LATAbits;

__sfr __at (0xF8A) LATB;
volatile __LATBbits_t __at (0xF8A) LATBbits;

__sfr __at (0xF8B) LATC;
volatile __LATCbits_t __at (0xF8B) LATCbits;

__sfr __at (0xF8C) LATD;
volatile __LATDbits_t __at (0xF8C) LATDbits;

__sfr __at (0xF8D) LATE;
volatile __LATEbits_t __at (0xF8D) LATEbits;

__sfr __at (0xF8E) ALRMVALL;

__sfr __at (0xF8F) ALRMVALH;

__sfr __at (0xF90) ALRMRPT;
volatile __ALRMRPTbits_t __at (0xF90) ALRMRPTbits;

__sfr __at (0xF91) ALRMCFG;
volatile __ALRMCFGbits_t __at (0xF91) ALRMCFGbits;

__sfr __at (0xF92) TRISA;
volatile __TRISAbits_t __at (0xF92) TRISAbits;

__sfr __at (0xF93) TRISB;
volatile __TRISBbits_t __at (0xF93) TRISBbits;

__sfr __at (0xF94) TRISC;
volatile __TRISCbits_t __at (0xF94) TRISCbits;

__sfr __at (0xF95) TRISD;
volatile __TRISDbits_t __at (0xF95) TRISDbits;

__sfr __at (0xF96) TRISE;
volatile __TRISEbits_t __at (0xF96) TRISEbits;

__sfr __at (0xF97) T3GCON;
volatile __T3GCONbits_t __at (0xF97) T3GCONbits;

__sfr __at (0xF98) RTCVALL;

__sfr __at (0xF99) RTCVALH;

__sfr __at (0xF9A) T1GCON;
volatile __T1GCONbits_t __at (0xF9A) T1GCONbits;

__sfr __at (0xF9B) OSCTUNE;
volatile __OSCTUNEbits_t __at (0xF9B) OSCTUNEbits;

__sfr __at (0xF9C) RCSTA2;
volatile __RCSTA2bits_t __at (0xF9C) RCSTA2bits;

__sfr __at (0xF9D) PIE1;
volatile __PIE1bits_t __at (0xF9D) PIE1bits;

__sfr __at (0xF9E) PIR1;
volatile __PIR1bits_t __at (0xF9E) PIR1bits;

__sfr __at (0xF9F) IPR1;
volatile __IPR1bits_t __at (0xF9F) IPR1bits;

__sfr __at (0xFA0) PIE2;
volatile __PIE2bits_t __at (0xFA0) PIE2bits;

__sfr __at (0xFA1) PIR2;
volatile __PIR2bits_t __at (0xFA1) PIR2bits;

__sfr __at (0xFA2) IPR2;
volatile __IPR2bits_t __at (0xFA2) IPR2bits;

__sfr __at (0xFA3) PIE3;
volatile __PIE3bits_t __at (0xFA3) PIE3bits;

__sfr __at (0xFA4) PIR3;
volatile __PIR3bits_t __at (0xFA4) PIR3bits;

__sfr __at (0xFA5) IPR3;
volatile __IPR3bits_t __at (0xFA5) IPR3bits;

__sfr __at (0xFA6) EECON1;
volatile __EECON1bits_t __at (0xFA6) EECON1bits;

__sfr __at (0xFA7) EECON2;

__sfr __at (0xFA8) TXSTA2;
volatile __TXSTA2bits_t __at (0xFA8) TXSTA2bits;

__sfr __at (0xFA9) TXREG2;

__sfr __at (0xFAA) RCREG2;

__sfr __at (0xFAB) SPBRG2;

__sfr __at (0xFAC) RCSTA;
volatile __RCSTAbits_t __at (0xFAC) RCSTAbits;

__sfr __at (0xFAC) RCSTA1;
volatile __RCSTA1bits_t __at (0xFAC) RCSTA1bits;

__sfr __at (0xFAD) TXSTA;
volatile __TXSTAbits_t __at (0xFAD) TXSTAbits;

__sfr __at (0xFAD) TXSTA1;
volatile __TXSTA1bits_t __at (0xFAD) TXSTA1bits;

__sfr __at (0xFAE) TXREG;

__sfr __at (0xFAE) TXREG1;

__sfr __at (0xFAF) RCREG;

__sfr __at (0xFAF) RCREG1;

__sfr __at (0xFB0) SPBRG;

__sfr __at (0xFB0) SPBRG1;

__sfr __at (0xFB1) CTMUICON;
volatile __CTMUICONbits_t __at (0xFB1) CTMUICONbits;

__sfr __at (0xFB2) CTMUCONL;
volatile __CTMUCONLbits_t __at (0xFB2) CTMUCONLbits;

__sfr __at (0xFB3) CTMUCONH;
volatile __CTMUCONHbits_t __at (0xFB3) CTMUCONHbits;

__sfr __at (0xFB4) CCP2CON;
volatile __CCP2CONbits_t __at (0xFB4) CCP2CONbits;

__sfr __at (0xFB4) ECCP2CON;
volatile __ECCP2CONbits_t __at (0xFB4) ECCP2CONbits;

__sfr __at (0xFB5) CCPR2;

__sfr __at (0xFB5) CCPR2L;

__sfr __at (0xFB6) CCPR2H;

__sfr __at (0xFB7) ECCP2DEL;
volatile __ECCP2DELbits_t __at (0xFB7) ECCP2DELbits;

__sfr __at (0xFB7) PWM2CON;
volatile __PWM2CONbits_t __at (0xFB7) PWM2CONbits;

__sfr __at (0xFB8) ECCP2AS;
volatile __ECCP2ASbits_t __at (0xFB8) ECCP2ASbits;

__sfr __at (0xFB9) PSTR2CON;
volatile __PSTR2CONbits_t __at (0xFB9) PSTR2CONbits;

__sfr __at (0xFBA) CCP1CON;
volatile __CCP1CONbits_t __at (0xFBA) CCP1CONbits;

__sfr __at (0xFBA) ECCP1CON;
volatile __ECCP1CONbits_t __at (0xFBA) ECCP1CONbits;

__sfr __at (0xFBB) CCPR1;

__sfr __at (0xFBB) CCPR1L;

__sfr __at (0xFBC) CCPR1H;

__sfr __at (0xFBD) ECCP1DEL;
volatile __ECCP1DELbits_t __at (0xFBD) ECCP1DELbits;

__sfr __at (0xFBD) PWM1CON;
volatile __PWM1CONbits_t __at (0xFBD) PWM1CONbits;

__sfr __at (0xFBE) ECCP1AS;
volatile __ECCP1ASbits_t __at (0xFBE) ECCP1ASbits;

__sfr __at (0xFBF) PSTR1CON;
volatile __PSTR1CONbits_t __at (0xFBF) PSTR1CONbits;

__sfr __at (0xFC0) WDTCON;
volatile __WDTCONbits_t __at (0xFC0) WDTCONbits;

__sfr __at (0xFC1) ADCON1;
volatile __ADCON1bits_t __at (0xFC1) ADCON1bits;

__sfr __at (0xFC2) ADCON0;
volatile __ADCON0bits_t __at (0xFC2) ADCON0bits;

__sfr __at (0xFC3) ADRES;

__sfr __at (0xFC3) ADRESL;

__sfr __at (0xFC4) ADRESH;

__sfr __at (0xFC5) SSP1CON2;
volatile __SSP1CON2bits_t __at (0xFC5) SSP1CON2bits;

__sfr __at (0xFC5) SSPCON2;
volatile __SSPCON2bits_t __at (0xFC5) SSPCON2bits;

__sfr __at (0xFC6) SSP1CON1;
volatile __SSP1CON1bits_t __at (0xFC6) SSP1CON1bits;

__sfr __at (0xFC6) SSPCON1;
volatile __SSPCON1bits_t __at (0xFC6) SSPCON1bits;

__sfr __at (0xFC7) SSP1STAT;
volatile __SSP1STATbits_t __at (0xFC7) SSP1STATbits;

__sfr __at (0xFC7) SSPSTAT;
volatile __SSPSTATbits_t __at (0xFC7) SSPSTATbits;

__sfr __at (0xFC8) SSP1ADD;
volatile __SSP1ADDbits_t __at (0xFC8) SSP1ADDbits;

__sfr __at (0xFC8) SSPADD;
volatile __SSPADDbits_t __at (0xFC8) SSPADDbits;

__sfr __at (0xFC9) SSP1BUF;

__sfr __at (0xFC9) SSPBUF;

__sfr __at (0xFCA) T2CON;
volatile __T2CONbits_t __at (0xFCA) T2CONbits;

__sfr __at (0xFCB) PR2;

__sfr __at (0xFCC) TMR2;

__sfr __at (0xFCD) T1CON;
volatile __T1CONbits_t __at (0xFCD) T1CONbits;

__sfr __at (0xFCE) TMR1L;

__sfr __at (0xFCF) TMR1H;

__sfr __at (0xFD0) RCON;
volatile __RCONbits_t __at (0xFD0) RCONbits;

__sfr __at (0xFD1) CM2CON;
volatile __CM2CONbits_t __at (0xFD1) CM2CONbits;

__sfr __at (0xFD1) CM2CON1;
volatile __CM2CON1bits_t __at (0xFD1) CM2CON1bits;

__sfr __at (0xFD2) CM1CON;
volatile __CM1CONbits_t __at (0xFD2) CM1CONbits;

__sfr __at (0xFD2) CM1CON1;
volatile __CM1CON1bits_t __at (0xFD2) CM1CON1bits;

__sfr __at (0xFD3) OSCCON;
volatile __OSCCONbits_t __at (0xFD3) OSCCONbits;

__sfr __at (0xFD5) T0CON;
volatile __T0CONbits_t __at (0xFD5) T0CONbits;

__sfr __at (0xFD6) TMR0L;

__sfr __at (0xFD7) TMR0H;

__sfr __at (0xFD8) STATUS;
volatile __STATUSbits_t __at (0xFD8) STATUSbits;

__sfr __at (0xFD9) FSR2L;

__sfr __at (0xFDA) FSR2H;

__sfr __at (0xFDB) PLUSW2;

__sfr __at (0xFDC) PREINC2;

__sfr __at (0xFDD) POSTDEC2;

__sfr __at (0xFDE) POSTINC2;

__sfr __at (0xFDF) INDF2;

__sfr __at (0xFE0) BSR;

__sfr __at (0xFE1) FSR1L;

__sfr __at (0xFE2) FSR1H;

__sfr __at (0xFE3) PLUSW1;

__sfr __at (0xFE4) PREINC1;

__sfr __at (0xFE5) POSTDEC1;

__sfr __at (0xFE6) POSTINC1;

__sfr __at (0xFE7) INDF1;

__sfr __at (0xFE8) WREG;

__sfr __at (0xFE9) FSR0L;

__sfr __at (0xFEA) FSR0H;

__sfr __at (0xFEB) PLUSW0;

__sfr __at (0xFEC) PREINC0;

__sfr __at (0xFED) POSTDEC0;

__sfr __at (0xFEE) POSTINC0;

__sfr __at (0xFEF) INDF0;

__sfr __at (0xFF0) INTCON3;
volatile __INTCON3bits_t __at (0xFF0) INTCON3bits;

__sfr __at (0xFF1) INTCON2;
volatile __INTCON2bits_t __at (0xFF1) INTCON2bits;

__sfr __at (0xFF2) INTCON;
volatile __INTCONbits_t __at (0xFF2) INTCONbits;

__sfr __at (0xFF3) PROD;

__sfr __at (0xFF3) PRODL;

__sfr __at (0xFF4) PRODH;

__sfr __at (0xFF5) TABLAT;

__sfr __at (0xFF6) TBLPTR;

__sfr __at (0xFF6) TBLPTRL;

__sfr __at (0xFF7) TBLPTRH;

__sfr __at (0xFF8) TBLPTRU;

__sfr __at (0xFF9) PC;

__sfr __at (0xFF9) PCL;

__sfr __at (0xFFA) PCLATH;

__sfr __at (0xFFB) PCLATU;

__sfr __at (0xFFC) STKPTR;
volatile __STKPTRbits_t __at (0xFFC) STKPTRbits;

__sfr __at (0xFFD) TOS;

__sfr __at (0xFFD) TOSL;

__sfr __at (0xFFE) TOSH;

__sfr __at (0xFFF) TOSU;


