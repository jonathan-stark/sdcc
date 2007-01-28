/* 
 * pic18f2221.h - device specific declarations
 *
 * This file is part of the GNU PIC library for SDCC,
 * originally devised by Vangelis Rokas <vrokas AT otenet.gr>
 *
 * It has been automatically generated by inc2h-pic16.pl,
 * (c) 2007 by Raphael Neider <rneider AT web.de>
 */

#ifndef __PIC18F2221_H__
#define __PIC18F2221_H__ 1



// Configuration Bits
#define	_CONFIG1H           	0x300001
#define	_CONFIG2L           	0x300002
#define	_CONFIG2H           	0x300003
#define	_CONFIG3H           	0x300005
#define	_CONFIG4L           	0x300006
#define	_CONFIG5L           	0x300008
#define	_CONFIG5H           	0x300009
#define	_CONFIG6L           	0x30000A
#define	_CONFIG6H           	0x30000B
#define	_CONFIG7L           	0x30000C
#define	_CONFIG7H           	0x30000D

// CONFIG1H Options
#define	_OSC_LP_1H          	0xF0	 // LP Oscillator
#define	_OSC_XT_1H          	0xF1	 // XT Oscillator
#define	_OSC_HS_1H          	0xF2	 // HS Oscillator
#define	_OSC_RC_1H          	0xF3	 // External RC oscillator, CLKO function on RA6
#define	_OSC_EC_1H          	0xF4	 // EC oscillator, CLKO function on RA6
#define	_OSC_ECIO_1H        	0xF5	 // EC oscillator, port function on RA6
#define	_OSC_HSPLL_1H       	0xF6	 // HS oscillator, PLL enabled (Clock Frequency = 4 x FOSC1)
#define	_OSC_RCIO_1H        	0xF7	 // External RC oscillator, port function on RA6
#define	_OSC_INTIO2_1H      	0xF8	 // Internal oscillator block, port function on RA6 and RA7
#define	_OSC_INTIO1_1H      	0xF9	 // Internal oscillator block, CLKO function on RA6, port function on RA7
#define	_FCMEN_OFF_1H       	0xBF	 // Fail-Safe Clock Monitor disabled
#define	_FCMEN_ON_1H        	0xFF	 // Fail-Safe Clock Monitor enabled
#define	_IESO_OFF_1H        	0x7F	 // Oscillator Switchover mode disabled
#define	_IESO_ON_1H         	0xFF	 // Oscillator Switchover mode enabled

// CONFIG2L Options
#define	_PWRT_ON_2L         	0xFE	 // PWRT enabled
#define	_PWRT_OFF_2L        	0xFF	 // PWRT disabled
#define	_BOR_OFF_2L         	0xF9	 // Brown-out Reset disabled in hardware and software
#define	_BOR_SOFT_2L        	0xFB	 // Brown-out Reset enabled and controlled by software (SBOREN is enabled)
#define	_BOR_NOSLP_2L       	0xFD	 // Brown-out Reset enabled in hardware only and disabled in Sleep mode (SBOREN is disabled)
#define	_BOR_ON_2L          	0xFF	 // Brown-out Reset enabled in hardware only (SBOREN is disabled)
#define	_BORV_0_2L          	0xE7	 // Maximum Setting
#define	_BORV_1_2L          	0xEF	 // 
#define	_BORV_2_2L          	0xF7	 // 
#define	_BORV_3_2L          	0xFF	 // Minimum Setting

// CONFIG2H Options
#define	_WDT_OFF_2H         	0xFE	 // WDT disabled (control is placed on the SWDTEN bit)
#define	_WDT_ON_2H          	0xFF	 // WDT enabled
#define	_WDTPS_1_2H         	0xE1	 // 1:1
#define	_WDTPS_2_2H         	0xE3	 // 1:2
#define	_WDTPS_4_2H         	0xE5	 // 1:4
#define	_WDTPS_8_2H         	0xE7	 // 1:8
#define	_WDTPS_16_2H        	0xE9	 // 1:16
#define	_WDTPS_32_2H        	0xEB	 // 1:32
#define	_WDTPS_64_2H        	0xED	 // 1:64
#define	_WDTPS_128_2H       	0xEF	 // 1:128
#define	_WDTPS_256_2H       	0xF1	 // 1:256
#define	_WDTPS_512_2H       	0xF3	 // 1:512
#define	_WDTPS_1024_2H      	0xF5	 // 1:1024
#define	_WDTPS_2048_2H      	0xF7	 // 1:2048
#define	_WDTPS_4096_2H      	0xF9	 // 1:4096
#define	_WDTPS_8192_2H      	0xFB	 // 1:8192
#define	_WDTPS_16384_2H     	0xFD	 // 1:16384
#define	_WDTPS_32768_2H     	0xFF	 // 1:32768

// CONFIG3H Options
#define	_MCLRE_OFF_3H       	0x7F	 // RE3 input pin enabled; MCLR disabled
#define	_MCLRE_ON_3H        	0xFF	 // MCLR pin enabled; RE3 input pin disabled
#define	_LPT1OSC_OFF_3H     	0xFB	 // Timer1 configured for higher power operation
#define	_LPT1OSC_ON_3H      	0xFF	 // Timer1 configured for low-power operation
#define	_PBADEN_DIG_3H      	0xFD	 // PORTB<4:0> pins are configured as digital I/O on Reset
#define	_PBADEN_ANA_3H      	0xFF	 // PORTB<4:0> pins are configured as analog input channels on Reset
#define	_CCP2MX_RB3_3H      	0xFE	 // CCP2 input/output is multiplexed with RB3
#define	_CCP2MX_RC1_3H      	0xFF	 // CCP2 input/output is multiplexed with RC1

// CONFIG4L Options
#define	_STVREN_OFF_4L      	0xFE	 // Stack full/underflow will not cause Reset
#define	_STVREN_ON_4L       	0xFF	 // Stack full/underflow will cause Reset
#define	_LVP_OFF_4L         	0xFB	 // Single-Supply ICSP disabled
#define	_LVP_ON_4L          	0xFF	 // Single-Supply ICSP enabled
#define	_BBSIZ_BB256_4L     	0xCF	 // 256 Word
#define	_BBSIZ_BB512_4L     	0xFF	 // 512 Word
#define	_XINST_OFF_4L       	0xBF	 // Instruction set extension and Indexed Addressing mode disabled (Legacy mode)
#define	_XINST_ON_4L        	0xFF	 // Instruction set extension and Indexed Addressing mode enabled
#define	_DEBUG_ON_4L        	0x7F	 // Background debugger enabled, RB6 and RB7 are dedicated to In-Circuit Debug
#define	_DEBUG_OFF_4L       	0xFF	 // Background debugger disabled, RB6 and RB7 configured as general purpose I/O pins

// CONFIG5L Options
#define	_CP0_ON_5L          	0xFE	 // Block 0 code-protected
#define	_CP0_OFF_5L         	0xFF	 // Block 0 not code-protected
#define	_CP1_ON_5L          	0xFD	 // Block 1 code-protected
#define	_CP1_OFF_5L         	0xFF	 // Block 1 not code-protected

// CONFIG5H Options
#define	_CPB_ON_5H          	0xBF	 // Boot block code-protected
#define	_CPB_OFF_5H         	0xFF	 // Boot block not code-protected
#define	_CPD_ON_5H          	0x7F	 // Data EEPROM code-protected
#define	_CPD_OFF_5H         	0xFF	 // Data EEPROM not code-protected

// CONFIG6L Options
#define	_WRT0_ON_6L         	0xFE	 // Block 0 write-protected
#define	_WRT0_OFF_6L        	0xFF	 // Block 0 not write-protected
#define	_WRT1_ON_6L         	0xFD	 // Block 1 write-protected
#define	_WRT1_OFF_6L        	0xFF	 // Block 1 not write-protected

// CONFIG6H Options
#define	_WRTC_ON_6H         	0xDF	 // Configuration registers (300000-3000FFh) write-protected
#define	_WRTC_OFF_6H        	0xFF	 // Configuration registers (300000-3000FFh) not write-protected
#define	_WRTB_ON_6H         	0xBF	 // Boot block write-protected
#define	_WRTB_OFF_6H        	0xFF	 // Boot block not write-protected
#define	_WRTD_ON_6H         	0x7F	 // Data EEPROM write-protected
#define	_WRTD_OFF_6H        	0xFF	 // Data EEPROM not write-protected

// CONFIG7L Options
#define	_EBTR0_ON_7L        	0xFE	 // Block 0 protected from table reads executed in other blocks
#define	_EBTR0_OFF_7L       	0xFF	 // Block 0 not protected from table reads executed in other blocks
#define	_EBTR1_ON_7L        	0xFD	 // Block 1 protected from table reads executed in other blocks
#define	_EBTR1_OFF_7L       	0xFF	 // Block 1 not protected from table reads executed in other blocks

// CONFIG7H Options
#define	_EBTRB_ON_7H        	0xBF	 // Boot block protected from table reads executed in other blocks
#define	_EBTRB_OFF_7H       	0xFF	 // Boot block not protected from table reads executed in other blocks
#define	_DEVID1             	0x3FFFFE
#define	_DEVID2             	0x3FFFFF
#define	_IDLOC0             	0x200000
#define	_IDLOC1             	0x200001
#define	_IDLOC2             	0x200002
#define	_IDLOC3             	0x200003
#define	_IDLOC4             	0x200004
#define	_IDLOC5             	0x200005
#define	_IDLOC6             	0x200006
#define	_IDLOC7             	0x200007

extern __sfr __at (0xF80) PORTA;
typedef union {
	struct {
		unsigned RA0       	: 1;
		unsigned RA1       	: 1;
		unsigned RA2       	: 1;
		unsigned RA3       	: 1;
		unsigned RA4       	: 1;
		unsigned RA5       	: 1;
		unsigned RA6       	: 1;
		unsigned RA7       	: 1;
	};
	struct {
		unsigned AN0       	: 1;
		unsigned AN1       	: 1;
		unsigned AN2       	: 1;
		unsigned AN3       	: 1;
		unsigned C1OUT_PORTA	: 1;
		unsigned AN4       	: 1;
		unsigned OSC2      	: 1;
		unsigned OSC1      	: 1;
	};
	struct {
		unsigned C1N       	: 1;
		unsigned C2N       	: 1;
		unsigned C2P       	: 1;
		unsigned C1P       	: 1;
		unsigned T0CKI     	: 1;
		unsigned C2OUT_PORTA	: 1;
		unsigned CLKO      	: 1;
		unsigned CLKI      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned VREFM     	: 1;
		unsigned VREFP     	: 1;
		unsigned           	: 1;
		unsigned HLVDIN    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned CVREF     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_SS    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __PORTAbits_t;
extern volatile __PORTAbits_t __at (0xF80) PORTAbits;

extern __sfr __at (0xF81) PORTB;
typedef union {
	struct {
		unsigned RB0       	: 1;
		unsigned RB1       	: 1;
		unsigned RB2       	: 1;
		unsigned RB3       	: 1;
		unsigned RB4       	: 1;
		unsigned RB5       	: 1;
		unsigned RB6       	: 1;
		unsigned RB7       	: 1;
	};
	struct {
		unsigned INT0      	: 1;
		unsigned INT1      	: 1;
		unsigned INT2      	: 1;
		unsigned CCP2_PORTB	: 1;
		unsigned KBI0      	: 1;
		unsigned KBI1      	: 1;
		unsigned KBI2      	: 1;
		unsigned KBI3      	: 1;
	};
	struct {
		unsigned AN12      	: 1;
		unsigned AN10      	: 1;
		unsigned AN8       	: 1;
		unsigned AN9       	: 1;
		unsigned AN11      	: 1;
		unsigned PGM       	: 1;
		unsigned PGC       	: 1;
		unsigned PGD       	: 1;
	};
	struct {
		unsigned FLT0      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __PORTBbits_t;
extern volatile __PORTBbits_t __at (0xF81) PORTBbits;

extern __sfr __at (0xF82) PORTC;
typedef union {
	struct {
		unsigned RC0       	: 1;
		unsigned RC1       	: 1;
		unsigned RC2       	: 1;
		unsigned RC3       	: 1;
		unsigned RC4       	: 1;
		unsigned RC5       	: 1;
		unsigned RC6       	: 1;
		unsigned RC7       	: 1;
	};
	struct {
		unsigned T1OSO     	: 1;
		unsigned T1OSI     	: 1;
		unsigned CCP1      	: 1;
		unsigned SCK       	: 1;
		unsigned SDI       	: 1;
		unsigned SDO       	: 1;
		unsigned TX        	: 1;
		unsigned RX        	: 1;
	};
	struct {
		unsigned T13CKI    	: 1;
		unsigned CCP2_PORTC	: 1;
		unsigned P1A       	: 1;
		unsigned SCL       	: 1;
		unsigned SDA       	: 1;
		unsigned           	: 1;
		unsigned CK        	: 1;
		unsigned DT        	: 1;
	};
	struct {
		unsigned T1CKI     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __PORTCbits_t;
extern volatile __PORTCbits_t __at (0xF82) PORTCbits;

extern __sfr __at (0xF89) LATA;
typedef union {
	struct {
		unsigned LATA0     	: 1;
		unsigned LATA1     	: 1;
		unsigned LATA2     	: 1;
		unsigned LATA3     	: 1;
		unsigned LATA4     	: 1;
		unsigned LATA5     	: 1;
		unsigned LATA6     	: 1;
		unsigned LATA7     	: 1;
	};
} __LATAbits_t;
extern volatile __LATAbits_t __at (0xF89) LATAbits;

extern __sfr __at (0xF8A) LATB;
typedef union {
	struct {
		unsigned LATB0     	: 1;
		unsigned LATB1     	: 1;
		unsigned LATB2     	: 1;
		unsigned LATB3     	: 1;
		unsigned LATB4     	: 1;
		unsigned LATB5     	: 1;
		unsigned LATB6     	: 1;
		unsigned LATB7     	: 1;
	};
} __LATBbits_t;
extern volatile __LATBbits_t __at (0xF8A) LATBbits;

extern __sfr __at (0xF8B) LATC;
typedef union {
	struct {
		unsigned LATC0     	: 1;
		unsigned LATC1     	: 1;
		unsigned LATC2     	: 1;
		unsigned LATC3     	: 1;
		unsigned LATC4     	: 1;
		unsigned LATC5     	: 1;
		unsigned LATC6     	: 1;
		unsigned LATC7     	: 1;
	};
} __LATCbits_t;
extern volatile __LATCbits_t __at (0xF8B) LATCbits;

extern __sfr __at (0xF92) TRISA;
typedef union {
	struct {
		unsigned TRISA0    	: 1;
		unsigned TRISA1    	: 1;
		unsigned TRISA2    	: 1;
		unsigned TRISA3    	: 1;
		unsigned TRISA4    	: 1;
		unsigned TRISA5    	: 1;
		unsigned TRISA6    	: 1;
		unsigned TRISA7    	: 1;
	};
} __TRISAbits_t;
extern volatile __TRISAbits_t __at (0xF92) TRISAbits;

extern __sfr __at (0xF93) TRISB;
typedef union {
	struct {
		unsigned TRISB0    	: 1;
		unsigned TRISB1    	: 1;
		unsigned TRISB2    	: 1;
		unsigned TRISB3    	: 1;
		unsigned TRISB4    	: 1;
		unsigned TRISB5    	: 1;
		unsigned TRISB6    	: 1;
		unsigned TRISB7    	: 1;
	};
} __TRISBbits_t;
extern volatile __TRISBbits_t __at (0xF93) TRISBbits;

extern __sfr __at (0xF94) TRISC;
typedef union {
	struct {
		unsigned TRISC0    	: 1;
		unsigned TRISC1    	: 1;
		unsigned TRISC2    	: 1;
		unsigned TRISC3    	: 1;
		unsigned TRISC4    	: 1;
		unsigned TRISC5    	: 1;
		unsigned TRISC6    	: 1;
		unsigned TRISC7    	: 1;
	};
} __TRISCbits_t;
extern volatile __TRISCbits_t __at (0xF94) TRISCbits;

extern __sfr __at (0xF9B) OSCTUNE;
typedef union {
	struct {
		unsigned TUN0      	: 1;
		unsigned TUN1      	: 1;
		unsigned TUN2      	: 1;
		unsigned TUN3      	: 1;
		unsigned TUN4      	: 1;
		unsigned           	: 1;
		unsigned PLLEN     	: 1;
		unsigned INTSRC    	: 1;
	};
} __OSCTUNEbits_t;
extern volatile __OSCTUNEbits_t __at (0xF9B) OSCTUNEbits;

extern __sfr __at (0xF9D) PIE1;
typedef union {
	struct {
		unsigned TMR1IE    	: 1;
		unsigned TMR2IE    	: 1;
		unsigned CCP1IE    	: 1;
		unsigned SSPIE     	: 1;
		unsigned TXIE      	: 1;
		unsigned RCIE      	: 1;
		unsigned ADIE      	: 1;
		unsigned           	: 1;
	};
} __PIE1bits_t;
extern volatile __PIE1bits_t __at (0xF9D) PIE1bits;

extern __sfr __at (0xF9E) PIR1;
typedef union {
	struct {
		unsigned TMR1IF    	: 1;
		unsigned TMR2IF    	: 1;
		unsigned CCP1IF    	: 1;
		unsigned SSPIF     	: 1;
		unsigned TXIF      	: 1;
		unsigned RCIF      	: 1;
		unsigned ADIF      	: 1;
		unsigned           	: 1;
	};
} __PIR1bits_t;
extern volatile __PIR1bits_t __at (0xF9E) PIR1bits;

extern __sfr __at (0xF9F) IPR1;
typedef union {
	struct {
		unsigned TMR1IP    	: 1;
		unsigned TMR2IP    	: 1;
		unsigned CCP1IP    	: 1;
		unsigned SSPIP     	: 1;
		unsigned TXIP      	: 1;
		unsigned RCIP      	: 1;
		unsigned ADIP      	: 1;
		unsigned           	: 1;
	};
} __IPR1bits_t;
extern volatile __IPR1bits_t __at (0xF9F) IPR1bits;

extern __sfr __at (0xFA0) PIE2;
typedef union {
	struct {
		unsigned CCP2IE    	: 1;
		unsigned TMR3IE    	: 1;
		unsigned LVDIE     	: 1;
		unsigned BCLIE     	: 1;
		unsigned EEIE      	: 1;
		unsigned           	: 1;
		unsigned CMIE      	: 1;
		unsigned OSCFIE    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned HLVDIE    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __PIE2bits_t;
extern volatile __PIE2bits_t __at (0xFA0) PIE2bits;

extern __sfr __at (0xFA1) PIR2;
typedef union {
	struct {
		unsigned CCP2IF    	: 1;
		unsigned TMR3IF    	: 1;
		unsigned LVDIF     	: 1;
		unsigned BCLIF     	: 1;
		unsigned EEIF      	: 1;
		unsigned           	: 1;
		unsigned CMIF      	: 1;
		unsigned OSCFIF    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned HLVDIF    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __PIR2bits_t;
extern volatile __PIR2bits_t __at (0xFA1) PIR2bits;

extern __sfr __at (0xFA2) IPR2;
typedef union {
	struct {
		unsigned CCP2IP    	: 1;
		unsigned TMR3IP    	: 1;
		unsigned LVDIP     	: 1;
		unsigned BCLIP     	: 1;
		unsigned EEIP      	: 1;
		unsigned           	: 1;
		unsigned CMIP      	: 1;
		unsigned OSCFIP    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned HLVDIP    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __IPR2bits_t;
extern volatile __IPR2bits_t __at (0xFA2) IPR2bits;

extern __sfr __at (0xFA6) EECON1;
typedef union {
	struct {
		unsigned RD        	: 1;
		unsigned WR        	: 1;
		unsigned WREN      	: 1;
		unsigned WRERR     	: 1;
		unsigned FREE      	: 1;
		unsigned           	: 1;
		unsigned CFGS      	: 1;
		unsigned EEPGD     	: 1;
	};
} __EECON1bits_t;
extern volatile __EECON1bits_t __at (0xFA6) EECON1bits;

extern __sfr __at (0xFA7) EECON2;

extern __sfr __at (0xFA8) EEDATA;

extern __sfr __at (0xFA9) EEADR;

extern __sfr __at (0xFAB) RCSTA;
typedef union {
	struct {
		unsigned RX9D      	: 1;
		unsigned OERR      	: 1;
		unsigned FERR      	: 1;
		unsigned ADEN      	: 1;
		unsigned CREN      	: 1;
		unsigned SREN      	: 1;
		unsigned RX9       	: 1;
		unsigned SPEN      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned ADDEN     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __RCSTAbits_t;
extern volatile __RCSTAbits_t __at (0xFAB) RCSTAbits;

extern __sfr __at (0xFAC) TXSTA;
typedef union {
	struct {
		unsigned TX9D      	: 1;
		unsigned TRMT      	: 1;
		unsigned BRGH      	: 1;
		unsigned SENDB     	: 1;
		unsigned SYNC      	: 1;
		unsigned TXEN      	: 1;
		unsigned TX9       	: 1;
		unsigned CSRC      	: 1;
	};
} __TXSTAbits_t;
extern volatile __TXSTAbits_t __at (0xFAC) TXSTAbits;

extern __sfr __at (0xFAD) TXREG;

extern __sfr __at (0xFAE) RCREG;

extern __sfr __at (0xFAF) SPBRG;

extern __sfr __at (0xFB0) SPBRGH;

extern __sfr __at (0xFB1) T3CON;
typedef union {
	struct {
		unsigned TMR3ON    	: 1;
		unsigned TMR3CS    	: 1;
		unsigned T3SYNC    	: 1;
		unsigned T3CCP1    	: 1;
		unsigned T3CKPS0   	: 1;
		unsigned T3CKPS1   	: 1;
		unsigned T3CCP2    	: 1;
		unsigned RD16      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_T3SYNC	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __T3CONbits_t;
extern volatile __T3CONbits_t __at (0xFB1) T3CONbits;

extern __sfr __at (0xFB2) TMR3L;

extern __sfr __at (0xFB3) TMR3H;

extern __sfr __at (0xFB4) CMCON;
typedef union {
	struct {
		unsigned CM0       	: 1;
		unsigned CM1       	: 1;
		unsigned CM2       	: 1;
		unsigned CIS       	: 1;
		unsigned C1INV     	: 1;
		unsigned C2INV     	: 1;
		unsigned C1OUT_CMCON	: 1;
		unsigned C2OUT_CMCON	: 1;
	};
} __CMCONbits_t;
extern volatile __CMCONbits_t __at (0xFB4) CMCONbits;

extern __sfr __at (0xFB5) CVRCON;
typedef union {
	struct {
		unsigned CVR0      	: 1;
		unsigned CVR1      	: 1;
		unsigned CVR2      	: 1;
		unsigned CVR3      	: 1;
		unsigned CVRSS     	: 1;
		unsigned CVRR      	: 1;
		unsigned CVROE     	: 1;
		unsigned CVREN     	: 1;
	};
} __CVRCONbits_t;
extern volatile __CVRCONbits_t __at (0xFB5) CVRCONbits;

extern __sfr __at (0xFB6) ECCP1AS;
typedef union {
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned PSSAC0    	: 1;
		unsigned PSSAC1    	: 1;
		unsigned ECCPAS0   	: 1;
		unsigned ECCPAS1   	: 1;
		unsigned ECCPAS2   	: 1;
		unsigned ECCPASE   	: 1;
	};
} __ECCP1ASbits_t;
extern volatile __ECCP1ASbits_t __at (0xFB6) ECCP1ASbits;

extern __sfr __at (0xFB7) ECCP1DEL;
typedef union {
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned PRSEN     	: 1;
	};
} __ECCP1DELbits_t;
extern volatile __ECCP1DELbits_t __at (0xFB7) ECCP1DELbits;

extern __sfr __at (0xFB7) PWM1CON;
typedef union {
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned PRSEN     	: 1;
	};
} __PWM1CONbits_t;
extern volatile __PWM1CONbits_t __at (0xFB7) PWM1CONbits;

extern __sfr __at (0xFB8) BAUDCON;
typedef union {
	struct {
		unsigned ABDEN     	: 1;
		unsigned WUE       	: 1;
		unsigned           	: 1;
		unsigned BRG16     	: 1;
		unsigned SCKP      	: 1;
		unsigned RXDTP     	: 1;
		unsigned RCIDL     	: 1;
		unsigned ABDOVF    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned TXCKP     	: 1;
		unsigned           	: 1;
		unsigned RCMT      	: 1;
		unsigned           	: 1;
	};
} __BAUDCONbits_t;
extern volatile __BAUDCONbits_t __at (0xFB8) BAUDCONbits;

extern __sfr __at (0xFB8) BAUDCTL;
typedef union {
	struct {
		unsigned ABDEN     	: 1;
		unsigned WUE       	: 1;
		unsigned           	: 1;
		unsigned BRG16     	: 1;
		unsigned SCKP      	: 1;
		unsigned RXDTP     	: 1;
		unsigned RCIDL     	: 1;
		unsigned ABDOVF    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned TXCKP     	: 1;
		unsigned           	: 1;
		unsigned RCMT      	: 1;
		unsigned           	: 1;
	};
} __BAUDCTLbits_t;
extern volatile __BAUDCTLbits_t __at (0xFB8) BAUDCTLbits;

extern __sfr __at (0xFBA) CCP2CON;
typedef union {
	struct {
		unsigned CCP2M0    	: 1;
		unsigned CCP2M1    	: 1;
		unsigned CCP2M2    	: 1;
		unsigned CCP2M3    	: 1;
		unsigned DC2B0     	: 1;
		unsigned DC2B1     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned CCP2Y     	: 1;
		unsigned CCP2X     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __CCP2CONbits_t;
extern volatile __CCP2CONbits_t __at (0xFBA) CCP2CONbits;

extern __sfr __at (0xFBB) CCPR2;

extern __sfr __at (0xFBB) CCPR2L;

extern __sfr __at (0xFBC) CCPR2H;

extern __sfr __at (0xFBD) CCP1CON;
typedef union {
	struct {
		unsigned CCP1M0    	: 1;
		unsigned CCP1M1    	: 1;
		unsigned CCP1M2    	: 1;
		unsigned CCP1M3    	: 1;
		unsigned DC1B0     	: 1;
		unsigned DC1B1     	: 1;
		unsigned P1M0      	: 1;
		unsigned P1M1      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned CCP1Y     	: 1;
		unsigned CCP1X     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __CCP1CONbits_t;
extern volatile __CCP1CONbits_t __at (0xFBD) CCP1CONbits;

extern __sfr __at (0xFBE) CCPR1;

extern __sfr __at (0xFBE) CCPR1L;

extern __sfr __at (0xFBF) CCPR1H;

extern __sfr __at (0xFC0) ADCON2;
typedef union {
	struct {
		unsigned ADCS0     	: 1;
		unsigned ADCS1     	: 1;
		unsigned ADCS2     	: 1;
		unsigned ACQT0     	: 1;
		unsigned ACQT1     	: 1;
		unsigned ACQT2     	: 1;
		unsigned           	: 1;
		unsigned ADFM      	: 1;
	};
} __ADCON2bits_t;
extern volatile __ADCON2bits_t __at (0xFC0) ADCON2bits;

extern __sfr __at (0xFC1) ADCON1;
typedef union {
	struct {
		unsigned PCFG0     	: 1;
		unsigned PCFG1     	: 1;
		unsigned PCFG2     	: 1;
		unsigned PCFG3     	: 1;
		unsigned VCFG0     	: 1;
		unsigned VCFG1     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at (0xFC1) ADCON1bits;

extern __sfr __at (0xFC2) ADCON0;
typedef union {
	struct {
		unsigned ADON      	: 1;
		unsigned GO        	: 1;
		unsigned CHS0      	: 1;
		unsigned CHS1      	: 1;
		unsigned CHS2      	: 1;
		unsigned CHS3      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned DONE      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned NOT_DONE  	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned GO_DONE   	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at (0xFC2) ADCON0bits;

extern __sfr __at (0xFC3) ADRES;

extern __sfr __at (0xFC3) ADRESL;

extern __sfr __at (0xFC4) ADRESH;

extern __sfr __at (0xFC5) SSPCON2;
typedef union {
	struct {
		unsigned SEN       	: 1;
		unsigned RSEN      	: 1;
		unsigned PEN       	: 1;
		unsigned RCEN      	: 1;
		unsigned ACKEN     	: 1;
		unsigned ACKDT     	: 1;
		unsigned ACKSTAT   	: 1;
		unsigned GCEN      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned ADMSK1    	: 1;
		unsigned ADMSK2    	: 1;
		unsigned ADMSK3    	: 1;
		unsigned ADMSK4    	: 1;
		unsigned ADMSK5    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __SSPCON2bits_t;
extern volatile __SSPCON2bits_t __at (0xFC5) SSPCON2bits;

extern __sfr __at (0xFC6) SSPCON1;
typedef union {
	struct {
		unsigned SSPM0     	: 1;
		unsigned SSPM1     	: 1;
		unsigned SSPM2     	: 1;
		unsigned SSPM3     	: 1;
		unsigned CKP       	: 1;
		unsigned SSPEN     	: 1;
		unsigned SSPOV     	: 1;
		unsigned WCOL      	: 1;
	};
} __SSPCON1bits_t;
extern volatile __SSPCON1bits_t __at (0xFC6) SSPCON1bits;

extern __sfr __at (0xFC7) SSPSTAT;
typedef union {
	struct {
		unsigned BF        	: 1;
		unsigned UA        	: 1;
		unsigned R         	: 1;
		unsigned S         	: 1;
		unsigned P         	: 1;
		unsigned D         	: 1;
		unsigned CKE       	: 1;
		unsigned SMP       	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_W     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_A     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned R_W       	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned D_A       	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_WRITE 	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_ADDRESS	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __SSPSTATbits_t;
extern volatile __SSPSTATbits_t __at (0xFC7) SSPSTATbits;

extern __sfr __at (0xFC8) SSPADD;

extern __sfr __at (0xFC9) SSPBUF;

extern __sfr __at (0xFCA) T2CON;
typedef union {
	struct {
		unsigned T2CKPS0   	: 1;
		unsigned T2CKPS1   	: 1;
		unsigned TMR2ON    	: 1;
		unsigned TOUTPS0   	: 1;
		unsigned TOUTPS1   	: 1;
		unsigned TOUTPS2   	: 1;
		unsigned TOUTPS3   	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned T2OUTPS0  	: 1;
		unsigned T2OUTPS1  	: 1;
		unsigned T2OUTPS2  	: 1;
		unsigned T2OUTPS3  	: 1;
		unsigned           	: 1;
	};
} __T2CONbits_t;
extern volatile __T2CONbits_t __at (0xFCA) T2CONbits;

extern __sfr __at (0xFCB) PR2;

extern __sfr __at (0xFCC) TMR2;

extern __sfr __at (0xFCD) T1CON;
typedef union {
	struct {
		unsigned TMR1ON    	: 1;
		unsigned TMR1CS    	: 1;
		unsigned T1SYNC    	: 1;
		unsigned T1OSCEN   	: 1;
		unsigned T1CKPS0   	: 1;
		unsigned T1CKPS1   	: 1;
		unsigned T1RUN     	: 1;
		unsigned RD16      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_T1SYNC	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __T1CONbits_t;
extern volatile __T1CONbits_t __at (0xFCD) T1CONbits;

extern __sfr __at (0xFCE) TMR1L;

extern __sfr __at (0xFCF) TMR1H;

extern __sfr __at (0xFD0) RCON;
typedef union {
	struct {
		unsigned BOR       	: 1;
		unsigned POR       	: 1;
		unsigned PD        	: 1;
		unsigned TO        	: 1;
		unsigned RI        	: 1;
		unsigned           	: 1;
		unsigned SBOREN    	: 1;
		unsigned IPEN      	: 1;
	};
	struct {
		unsigned NOT_BOR   	: 1;
		unsigned NOT_POR   	: 1;
		unsigned NOT_PD    	: 1;
		unsigned NOT_TO    	: 1;
		unsigned NOT_RI    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __RCONbits_t;
extern volatile __RCONbits_t __at (0xFD0) RCONbits;

extern __sfr __at (0xFD1) WDTCON;
typedef union {
	struct {
		unsigned SWDTEN    	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
	struct {
		unsigned SWDTE     	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __WDTCONbits_t;
extern volatile __WDTCONbits_t __at (0xFD1) WDTCONbits;

extern __sfr __at (0xFD2) HLVDCON;
typedef union {
	struct {
		unsigned LVDL0     	: 1;
		unsigned LVDL1     	: 1;
		unsigned LVDL2     	: 1;
		unsigned LVDL3     	: 1;
		unsigned LVDEN     	: 1;
		unsigned IRVST     	: 1;
		unsigned           	: 1;
		unsigned VDIRMAG   	: 1;
	};
	struct {
		unsigned LVV0      	: 1;
		unsigned LVV1      	: 1;
		unsigned LVV2      	: 1;
		unsigned LVV3      	: 1;
		unsigned           	: 1;
		unsigned BGST      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __HLVDCONbits_t;
extern volatile __HLVDCONbits_t __at (0xFD2) HLVDCONbits;

extern __sfr __at (0xFD2) LVDCON;
typedef union {
	struct {
		unsigned LVDL0     	: 1;
		unsigned LVDL1     	: 1;
		unsigned LVDL2     	: 1;
		unsigned LVDL3     	: 1;
		unsigned LVDEN     	: 1;
		unsigned IRVST     	: 1;
		unsigned           	: 1;
		unsigned VDIRMAG   	: 1;
	};
	struct {
		unsigned LVV0      	: 1;
		unsigned LVV1      	: 1;
		unsigned LVV2      	: 1;
		unsigned LVV3      	: 1;
		unsigned           	: 1;
		unsigned BGST      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __LVDCONbits_t;
extern volatile __LVDCONbits_t __at (0xFD2) LVDCONbits;

extern __sfr __at (0xFD3) OSCCON;
typedef union {
	struct {
		unsigned SCS0      	: 1;
		unsigned SCS1      	: 1;
		unsigned IOFS      	: 1;
		unsigned OSTS      	: 1;
		unsigned IRCF0     	: 1;
		unsigned IRCF1     	: 1;
		unsigned IRCF2     	: 1;
		unsigned IDLEN     	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned FLTS      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __OSCCONbits_t;
extern volatile __OSCCONbits_t __at (0xFD3) OSCCONbits;

extern __sfr __at (0xFD5) T0CON;
typedef union {
	struct {
		unsigned T0PS0     	: 1;
		unsigned T0PS1     	: 1;
		unsigned T0PS2     	: 1;
		unsigned PSA       	: 1;
		unsigned T0SE      	: 1;
		unsigned T0CS      	: 1;
		unsigned T08BIT    	: 1;
		unsigned TMR0ON    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned T016BIT   	: 1;
		unsigned           	: 1;
	};
} __T0CONbits_t;
extern volatile __T0CONbits_t __at (0xFD5) T0CONbits;

extern __sfr __at (0xFD6) TMR0L;

extern __sfr __at (0xFD7) TMR0H;

extern __sfr __at (0xFD8) STATUS;
typedef union {
	struct {
		unsigned C         	: 1;
		unsigned DC        	: 1;
		unsigned Z         	: 1;
		unsigned OV        	: 1;
		unsigned N         	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
	};
} __STATUSbits_t;
extern volatile __STATUSbits_t __at (0xFD8) STATUSbits;

extern __sfr __at (0xFD9) FSR2L;

extern __sfr __at (0xFDA) FSR2H;

extern __sfr __at (0xFDB) PLUSW2;

extern __sfr __at (0xFDC) PREINC2;

extern __sfr __at (0xFDD) POSTDEC2;

extern __sfr __at (0xFDE) POSTINC2;

extern __sfr __at (0xFDF) INDF2;

extern __sfr __at (0xFE0) BSR;

extern __sfr __at (0xFE1) FSR1L;

extern __sfr __at (0xFE2) FSR1H;

extern __sfr __at (0xFE3) PLUSW1;

extern __sfr __at (0xFE4) PREINC1;

extern __sfr __at (0xFE5) POSTDEC1;

extern __sfr __at (0xFE6) POSTINC1;

extern __sfr __at (0xFE7) INDF1;

extern __sfr __at (0xFE8) WREG;

extern __sfr __at (0xFE9) FSR0L;

extern __sfr __at (0xFEA) FSR0H;

extern __sfr __at (0xFEB) PLUSW0;

extern __sfr __at (0xFEC) PREINC0;

extern __sfr __at (0xFED) POSTDEC0;

extern __sfr __at (0xFEE) POSTINC0;

extern __sfr __at (0xFEF) INDF0;

extern __sfr __at (0xFF0) INTCON3;
typedef union {
	struct {
		unsigned INT1IF    	: 1;
		unsigned INT2IF    	: 1;
		unsigned           	: 1;
		unsigned INT1IE    	: 1;
		unsigned INT2IE    	: 1;
		unsigned           	: 1;
		unsigned INT1IP    	: 1;
		unsigned INT2IP    	: 1;
	};
	struct {
		unsigned INT1F     	: 1;
		unsigned INT2F     	: 1;
		unsigned           	: 1;
		unsigned INT1E     	: 1;
		unsigned INT2E     	: 1;
		unsigned           	: 1;
		unsigned INT1P     	: 1;
		unsigned INT2P     	: 1;
	};
} __INTCON3bits_t;
extern volatile __INTCON3bits_t __at (0xFF0) INTCON3bits;

extern __sfr __at (0xFF1) INTCON2;
typedef union {
	struct {
		unsigned RBIP      	: 1;
		unsigned           	: 1;
		unsigned TMR0IP    	: 1;
		unsigned           	: 1;
		unsigned INTEDG2   	: 1;
		unsigned INTEDG1   	: 1;
		unsigned INTEDG0   	: 1;
		unsigned RBPU      	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned NOT_RBPU  	: 1;
	};
} __INTCON2bits_t;
extern volatile __INTCON2bits_t __at (0xFF1) INTCON2bits;

extern __sfr __at (0xFF2) INTCON;
typedef union {
	struct {
		unsigned RBIF      	: 1;
		unsigned INT0IF    	: 1;
		unsigned TMR0IF    	: 1;
		unsigned RBIE      	: 1;
		unsigned INT0IE    	: 1;
		unsigned TMR0IE    	: 1;
		unsigned PEIE      	: 1;
		unsigned GIE       	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned T0IF      	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned T0IE      	: 1;
		unsigned GIEL      	: 1;
		unsigned GIEH      	: 1;
	};
} __INTCONbits_t;
extern volatile __INTCONbits_t __at (0xFF2) INTCONbits;

extern __sfr __at (0xFF3) PROD;

extern __sfr __at (0xFF3) PRODL;

extern __sfr __at (0xFF4) PRODH;

extern __sfr __at (0xFF5) TABLAT;

extern __sfr __at (0xFF6) TBLPTR;

extern __sfr __at (0xFF6) TBLPTRL;

extern __sfr __at (0xFF7) TBLPTRH;

extern __sfr __at (0xFF8) TBLPTRU;

extern __sfr __at (0xFF9) PC;

extern __sfr __at (0xFF9) PCL;

extern __sfr __at (0xFFA) PCLATH;

extern __sfr __at (0xFFB) PCLATU;

extern __sfr __at (0xFFC) STKPTR;
typedef union {
	struct {
		unsigned SP0       	: 1;
		unsigned SP1       	: 1;
		unsigned SP2       	: 1;
		unsigned SP3       	: 1;
		unsigned SP4       	: 1;
		unsigned           	: 1;
		unsigned STKUNF    	: 1;
		unsigned STKFUL    	: 1;
	};
	struct {
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned           	: 1;
		unsigned STKOVF    	: 1;
	};
} __STKPTRbits_t;
extern volatile __STKPTRbits_t __at (0xFFC) STKPTRbits;

extern __sfr __at (0xFFD) TOS;

extern __sfr __at (0xFFD) TOSL;

extern __sfr __at (0xFFE) TOSH;

extern __sfr __at (0xFFF) TOSU;


#endif

