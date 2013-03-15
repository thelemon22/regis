;==========================================================================
;  PIC33EP64MC503 Standard Assembly Include File
; 
;  (c) Copyright 2011 Microchip Technology, All rights reserved
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33EP64MC503 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33EP64MC503
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33EP64MC503, 1
;               .include "p33EP64MC503.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33EP64MC503
   .ERROR "Include file does not match processor setting."
.ENDIF


;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Equates (Low Byte, High Byte) -----------------------------

        .extern WREG0
        .equiv  WREG0L, _WREG0
        .equiv  WREG0H, _WREG0+1

        .extern WREG1
        .equiv  WREG1L, _WREG1
        .equiv  WREG1H, _WREG1+1

        .extern WREG2
        .equiv  WREG2L, _WREG2
        .equiv  WREG2H, _WREG2+1

        .extern WREG3
        .equiv  WREG3L, _WREG3
        .equiv  WREG3H, _WREG3+1

        .extern WREG4
        .equiv  WREG4L, _WREG4
        .equiv  WREG4H, _WREG4+1

        .extern WREG5
        .equiv  WREG5L, _WREG5
        .equiv  WREG5H, _WREG5+1

        .extern WREG6
        .equiv  WREG6L, _WREG6
        .equiv  WREG6H, _WREG6+1

        .extern WREG7
        .equiv  WREG7L, _WREG7
        .equiv  WREG7H, _WREG7+1

        .extern WREG8
        .equiv  WREG8L, _WREG8
        .equiv  WREG8H, _WREG8+1

        .extern WREG9
        .equiv  WREG9L, _WREG9
        .equiv  WREG9H, _WREG9+1

        .extern WREG10
        .equiv  WREG10L, _WREG10
        .equiv  WREG10H, _WREG10+1

        .extern WREG11
        .equiv  WREG11L, _WREG11
        .equiv  WREG11H, _WREG11+1

        .extern WREG12
        .equiv  WREG12L, _WREG12
        .equiv  WREG12H, _WREG12+1

        .extern WREG13
        .equiv  WREG13L, _WREG13
        .equiv  WREG13H, _WREG13+1

        .extern WREG14
        .equiv  WREG14L, _WREG14
        .equiv  WREG14H, _WREG14+1

        .extern WREG15
        .equiv  WREG15L, _WREG15
        .equiv  WREG15H, _WREG15+1

        .extern SPLIM
        .equiv  SPLIML, _SPLIM
        .equiv  SPLIMH, _SPLIM+1

        .extern ACCAL
        .equiv  ACCALL, _ACCAL
        .equiv  ACCALH, _ACCAL+1

        .extern ACCAH
        .equiv  ACCAHL, _ACCAH
        .equiv  ACCAHH, _ACCAH+1

        .extern ACCAU
        .equiv  ACCAUL, _ACCAU
        .equiv  ACCAUH, _ACCAU+1

        .extern ACCBL
        .equiv  ACCBLL, _ACCBL
        .equiv  ACCBLH, _ACCBL+1

        .extern ACCBH
        .equiv  ACCBHL, _ACCBH
        .equiv  ACCBHH, _ACCBH+1

        .extern ACCBU
        .equiv  ACCBUL, _ACCBU
        .equiv  ACCBUH, _ACCBU+1

        .extern PCL
        .equiv  PCLL, _PCL
        .equiv  PCLH, _PCL+1

        .extern PCH
        .equiv  PCHL, _PCH
        .equiv  PCHH, _PCH+1

        .extern DSRPAG
        .equiv  DSRPAGL, _DSRPAG
        .equiv  DSRPAGH, _DSRPAG+1

        .extern DSWPAG
        .equiv  DSWPAGL, _DSWPAG
        .equiv  DSWPAGH, _DSWPAG+1

        .extern RCOUNT
        .equiv  RCOUNTL, _RCOUNT
        .equiv  RCOUNTH, _RCOUNT+1

        .extern DCOUNT
        .equiv  DCOUNTL, _DCOUNT
        .equiv  DCOUNTH, _DCOUNT+1

        .extern DOSTARTL
        .equiv  DOSTARTLL, _DOSTARTL
        .equiv  DOSTARTLH, _DOSTARTL+1

        .extern DOSTARTH
        .equiv  DOSTARTHL, _DOSTARTH
        .equiv  DOSTARTHH, _DOSTARTH+1

        .extern DOENDL
        .equiv  DOENDLL, _DOENDL
        .equiv  DOENDLH, _DOENDL+1

        .extern DOENDH
        .equiv  DOENDHL, _DOENDH
        .equiv  DOENDHH, _DOENDH+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern MODCON
        .equiv  MODCONL, _MODCON
        .equiv  MODCONH, _MODCON+1

        .extern XMODSRT
        .equiv  XMODSRTL, _XMODSRT
        .equiv  XMODSRTH, _XMODSRT+1

        .extern XMODEND
        .equiv  XMODENDL, _XMODEND
        .equiv  XMODENDH, _XMODEND+1

        .extern YMODSRT
        .equiv  YMODSRTL, _YMODSRT
        .equiv  YMODSRTH, _YMODSRT+1

        .extern YMODEND
        .equiv  YMODENDL, _YMODEND
        .equiv  YMODENDH, _YMODEND+1

        .extern XBREV
        .equiv  XBREVL, _XBREV
        .equiv  XBREVH, _XBREV+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern MSTRPR
        .equiv  MSTRPRL, _MSTRPR
        .equiv  MSTRPRH, _MSTRPR+1

        .extern TMR1
        .equiv  TMR1L, _TMR1
        .equiv  TMR1H, _TMR1+1

        .extern PR1
        .equiv  PR1L, _PR1
        .equiv  PR1H, _PR1+1

        .extern T1CON
        .equiv  T1CONL, _T1CON
        .equiv  T1CONH, _T1CON+1

        .extern TMR2
        .equiv  TMR2L, _TMR2
        .equiv  TMR2H, _TMR2+1

        .extern TMR3HLD
        .equiv  TMR3HLDL, _TMR3HLD
        .equiv  TMR3HLDH, _TMR3HLD+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern PR3
        .equiv  PR3L, _PR3
        .equiv  PR3H, _PR3+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern TMR4
        .equiv  TMR4L, _TMR4
        .equiv  TMR4H, _TMR4+1

        .extern TMR5HLD
        .equiv  TMR5HLDL, _TMR5HLD
        .equiv  TMR5HLDH, _TMR5HLD+1

        .extern TMR5
        .equiv  TMR5L, _TMR5
        .equiv  TMR5H, _TMR5+1

        .extern PR4
        .equiv  PR4L, _PR4
        .equiv  PR4H, _PR4+1

        .extern PR5
        .equiv  PR5L, _PR5
        .equiv  PR5H, _PR5+1

        .extern T4CON
        .equiv  T4CONL, _T4CON
        .equiv  T4CONH, _T4CON+1

        .extern T5CON
        .equiv  T5CONL, _T5CON
        .equiv  T5CONH, _T5CON+1

        .extern IC1CON1
        .equiv  IC1CON1L, _IC1CON1
        .equiv  IC1CON1H, _IC1CON1+1

        .extern IC1CON2
        .equiv  IC1CON2L, _IC1CON2
        .equiv  IC1CON2H, _IC1CON2+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1TMR
        .equiv  IC1TMRL, _IC1TMR
        .equiv  IC1TMRH, _IC1TMR+1

        .extern IC2CON1
        .equiv  IC2CON1L, _IC2CON1
        .equiv  IC2CON1H, _IC2CON1+1

        .extern IC2CON2
        .equiv  IC2CON2L, _IC2CON2
        .equiv  IC2CON2H, _IC2CON2+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2TMR
        .equiv  IC2TMRL, _IC2TMR
        .equiv  IC2TMRH, _IC2TMR+1

        .extern IC3CON1
        .equiv  IC3CON1L, _IC3CON1
        .equiv  IC3CON1H, _IC3CON1+1

        .extern IC3CON2
        .equiv  IC3CON2L, _IC3CON2
        .equiv  IC3CON2H, _IC3CON2+1

        .extern IC3BUF
        .equiv  IC3BUFL, _IC3BUF
        .equiv  IC3BUFH, _IC3BUF+1

        .extern IC3TMR
        .equiv  IC3TMRL, _IC3TMR
        .equiv  IC3TMRH, _IC3TMR+1

        .extern IC4CON1
        .equiv  IC4CON1L, _IC4CON1
        .equiv  IC4CON1H, _IC4CON1+1

        .extern IC4CON2
        .equiv  IC4CON2L, _IC4CON2
        .equiv  IC4CON2H, _IC4CON2+1

        .extern IC4BUF
        .equiv  IC4BUFL, _IC4BUF
        .equiv  IC4BUFH, _IC4BUF+1

        .extern IC4TMR
        .equiv  IC4TMRL, _IC4TMR
        .equiv  IC4TMRH, _IC4TMR+1

        .extern QEI1CON
        .equiv  QEI1CONL, _QEI1CON
        .equiv  QEI1CONH, _QEI1CON+1

        .extern QEI1IOC
        .equiv  QEI1IOCL, _QEI1IOC
        .equiv  QEI1IOCH, _QEI1IOC+1

        .extern QEI1STAT
        .equiv  QEI1STATL, _QEI1STAT
        .equiv  QEI1STATH, _QEI1STAT+1

        .extern POS1CNTL
        .equiv  POS1CNTLL, _POS1CNTL
        .equiv  POS1CNTLH, _POS1CNTL+1

        .extern POS1CNTH
        .equiv  POS1CNTHL, _POS1CNTH
        .equiv  POS1CNTHH, _POS1CNTH+1

        .extern POS1HLD
        .equiv  POS1HLDL, _POS1HLD
        .equiv  POS1HLDH, _POS1HLD+1

        .extern VEL1CNT
        .equiv  VEL1CNTL, _VEL1CNT
        .equiv  VEL1CNTH, _VEL1CNT+1

        .extern INT1TMRL
        .equiv  INT1TMRLL, _INT1TMRL
        .equiv  INT1TMRLH, _INT1TMRL+1

        .extern INT1TMRH
        .equiv  INT1TMRHL, _INT1TMRH
        .equiv  INT1TMRHH, _INT1TMRH+1

        .extern INT1HLDL
        .equiv  INT1HLDLL, _INT1HLDL
        .equiv  INT1HLDLH, _INT1HLDL+1

        .extern INT1HLDH
        .equiv  INT1HLDHL, _INT1HLDH
        .equiv  INT1HLDHH, _INT1HLDH+1

        .extern INDX1CNTL
        .equiv  INDX1CNTLL, _INDX1CNTL
        .equiv  INDX1CNTLH, _INDX1CNTL+1

        .extern INDX1CNTH
        .equiv  INDX1CNTHL, _INDX1CNTH
        .equiv  INDX1CNTHH, _INDX1CNTH+1

        .extern INDX1HLD
        .equiv  INDX1HLDL, _INDX1HLD
        .equiv  INDX1HLDH, _INDX1HLD+1

        .extern QEI1GECL
        .equiv  QEI1GECLL, _QEI1GECL
        .equiv  QEI1GECLH, _QEI1GECL+1

        .extern QEI1ICL
        .equiv  QEI1ICLL, _QEI1ICL
        .equiv  QEI1ICLH, _QEI1ICL+1

        .extern QEI1GECH
        .equiv  QEI1GECHL, _QEI1GECH
        .equiv  QEI1GECHH, _QEI1GECH+1

        .extern QEI1ICH
        .equiv  QEI1ICHL, _QEI1ICH
        .equiv  QEI1ICHH, _QEI1ICH+1

        .extern QEI1LECL
        .equiv  QEI1LECLL, _QEI1LECL
        .equiv  QEI1LECLH, _QEI1LECL+1

        .extern QEI1LECH
        .equiv  QEI1LECHL, _QEI1LECH
        .equiv  QEI1LECHH, _QEI1LECH+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1CON
        .equiv  I2C1CONL, _I2C1CON
        .equiv  I2C1CONH, _I2C1CON+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern I2C2RCV
        .equiv  I2C2RCVL, _I2C2RCV
        .equiv  I2C2RCVH, _I2C2RCV+1

        .extern I2C2TRN
        .equiv  I2C2TRNL, _I2C2TRN
        .equiv  I2C2TRNH, _I2C2TRN+1

        .extern I2C2BRG
        .equiv  I2C2BRGL, _I2C2BRG
        .equiv  I2C2BRGH, _I2C2BRG+1

        .extern I2C2CON
        .equiv  I2C2CONL, _I2C2CON
        .equiv  I2C2CONH, _I2C2CON+1

        .extern I2C2STAT
        .equiv  I2C2STATL, _I2C2STAT
        .equiv  I2C2STATH, _I2C2STAT+1

        .extern I2C2ADD
        .equiv  I2C2ADDL, _I2C2ADD
        .equiv  I2C2ADDH, _I2C2ADD+1

        .extern I2C2MSK
        .equiv  I2C2MSKL, _I2C2MSK
        .equiv  I2C2MSKH, _I2C2MSK+1

        .extern U1MODE
        .equiv  U1MODEL, _U1MODE
        .equiv  U1MODEH, _U1MODE+1

        .extern U1STA
        .equiv  U1STAL, _U1STA
        .equiv  U1STAH, _U1STA+1

        .extern U1TXREG
        .equiv  U1TXREGL, _U1TXREG
        .equiv  U1TXREGH, _U1TXREG+1

        .extern U1RXREG
        .equiv  U1RXREGL, _U1RXREG
        .equiv  U1RXREGH, _U1RXREG+1

        .extern U1BRG
        .equiv  U1BRGL, _U1BRG
        .equiv  U1BRGH, _U1BRG+1

        .extern U2MODE
        .equiv  U2MODEL, _U2MODE
        .equiv  U2MODEH, _U2MODE+1

        .extern U2STA
        .equiv  U2STAL, _U2STA
        .equiv  U2STAH, _U2STA+1

        .extern U2TXREG
        .equiv  U2TXREGL, _U2TXREG
        .equiv  U2TXREGH, _U2TXREG+1

        .extern U2RXREG
        .equiv  U2RXREGL, _U2RXREG
        .equiv  U2RXREGH, _U2RXREG+1

        .extern U2BRG
        .equiv  U2BRGL, _U2BRG
        .equiv  U2BRGH, _U2BRG+1

        .extern SPI1STAT
        .equiv  SPI1STATL, _SPI1STAT
        .equiv  SPI1STATH, _SPI1STAT+1

        .extern SPI1CON1
        .equiv  SPI1CON1L, _SPI1CON1
        .equiv  SPI1CON1H, _SPI1CON1+1

        .extern SPI1CON2
        .equiv  SPI1CON2L, _SPI1CON2
        .equiv  SPI1CON2H, _SPI1CON2+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern SPI2STAT
        .equiv  SPI2STATL, _SPI2STAT
        .equiv  SPI2STATH, _SPI2STAT+1

        .extern SPI2CON1
        .equiv  SPI2CON1L, _SPI2CON1
        .equiv  SPI2CON1H, _SPI2CON1+1

        .extern SPI2CON2
        .equiv  SPI2CON2L, _SPI2CON2
        .equiv  SPI2CON2H, _SPI2CON2+1

        .extern SPI2BUF
        .equiv  SPI2BUFL, _SPI2BUF
        .equiv  SPI2BUFH, _SPI2BUF+1

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADC1BUF1
        .equiv  ADC1BUF1L, _ADC1BUF1
        .equiv  ADC1BUF1H, _ADC1BUF1+1

        .extern ADC1BUF2
        .equiv  ADC1BUF2L, _ADC1BUF2
        .equiv  ADC1BUF2H, _ADC1BUF2+1

        .extern ADC1BUF3
        .equiv  ADC1BUF3L, _ADC1BUF3
        .equiv  ADC1BUF3H, _ADC1BUF3+1

        .extern ADC1BUF4
        .equiv  ADC1BUF4L, _ADC1BUF4
        .equiv  ADC1BUF4H, _ADC1BUF4+1

        .extern ADC1BUF5
        .equiv  ADC1BUF5L, _ADC1BUF5
        .equiv  ADC1BUF5H, _ADC1BUF5+1

        .extern ADC1BUF6
        .equiv  ADC1BUF6L, _ADC1BUF6
        .equiv  ADC1BUF6H, _ADC1BUF6+1

        .extern ADC1BUF7
        .equiv  ADC1BUF7L, _ADC1BUF7
        .equiv  ADC1BUF7H, _ADC1BUF7+1

        .extern ADC1BUF8
        .equiv  ADC1BUF8L, _ADC1BUF8
        .equiv  ADC1BUF8H, _ADC1BUF8+1

        .extern ADC1BUF9
        .equiv  ADC1BUF9L, _ADC1BUF9
        .equiv  ADC1BUF9H, _ADC1BUF9+1

        .extern ADC1BUFA
        .equiv  ADC1BUFAL, _ADC1BUFA
        .equiv  ADC1BUFAH, _ADC1BUFA+1

        .extern ADC1BUFB
        .equiv  ADC1BUFBL, _ADC1BUFB
        .equiv  ADC1BUFBH, _ADC1BUFB+1

        .extern ADC1BUFC
        .equiv  ADC1BUFCL, _ADC1BUFC
        .equiv  ADC1BUFCH, _ADC1BUFC+1

        .extern ADC1BUFD
        .equiv  ADC1BUFDL, _ADC1BUFD
        .equiv  ADC1BUFDH, _ADC1BUFD+1

        .extern ADC1BUFE
        .equiv  ADC1BUFEL, _ADC1BUFE
        .equiv  ADC1BUFEH, _ADC1BUFE+1

        .extern ADC1BUFF
        .equiv  ADC1BUFFL, _ADC1BUFF
        .equiv  ADC1BUFFH, _ADC1BUFF+1

        .extern AD1CON1
        .equiv  AD1CON1L, _AD1CON1
        .equiv  AD1CON1H, _AD1CON1+1

        .extern AD1CON2
        .equiv  AD1CON2L, _AD1CON2
        .equiv  AD1CON2H, _AD1CON2+1

        .extern AD1CON3
        .equiv  AD1CON3L, _AD1CON3
        .equiv  AD1CON3H, _AD1CON3+1

        .extern AD1CHS123
        .equiv  AD1CHS123L, _AD1CHS123
        .equiv  AD1CHS123H, _AD1CHS123+1

        .extern AD1CHS0
        .equiv  AD1CHS0L, _AD1CHS0
        .equiv  AD1CHS0H, _AD1CHS0+1

        .extern AD1CSSH
        .equiv  AD1CSSHL, _AD1CSSH
        .equiv  AD1CSSHH, _AD1CSSH+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern AD1CON4
        .equiv  AD1CON4L, _AD1CON4
        .equiv  AD1CON4H, _AD1CON4+1

        .extern CTMUCON1
        .equiv  CTMUCON1L, _CTMUCON1
        .equiv  CTMUCON1H, _CTMUCON1+1

        .extern CTMUCON2
        .equiv  CTMUCON2L, _CTMUCON2
        .equiv  CTMUCON2H, _CTMUCON2+1

        .extern CTMUICON
        .equiv  CTMUICONL, _CTMUICON
        .equiv  CTMUICONH, _CTMUICON+1

        .extern C1CTRL1
        .equiv  C1CTRL1L, _C1CTRL1
        .equiv  C1CTRL1H, _C1CTRL1+1

        .extern C1CTRL2
        .equiv  C1CTRL2L, _C1CTRL2
        .equiv  C1CTRL2H, _C1CTRL2+1

        .extern C1VEC
        .equiv  C1VECL, _C1VEC
        .equiv  C1VECH, _C1VEC+1

        .extern C1FCTRL
        .equiv  C1FCTRLL, _C1FCTRL
        .equiv  C1FCTRLH, _C1FCTRL+1

        .extern C1FIFO
        .equiv  C1FIFOL, _C1FIFO
        .equiv  C1FIFOH, _C1FIFO+1

        .extern C1INTF
        .equiv  C1INTFL, _C1INTF
        .equiv  C1INTFH, _C1INTF+1

        .extern C1INTE
        .equiv  C1INTEL, _C1INTE
        .equiv  C1INTEH, _C1INTE+1

        .extern C1EC
        .equiv  C1ECL, _C1EC
        .equiv  C1ECH, _C1EC+1

        .extern C1RERRCNT
        .equiv  C1RERRCNTL, _C1RERRCNT
        .equiv  C1RERRCNTH, _C1RERRCNT+1

        .extern C1TERRCNT
        .equiv  C1TERRCNTL, _C1TERRCNT
        .equiv  C1TERRCNTH, _C1TERRCNT+1

        .extern C1CFG1
        .equiv  C1CFG1L, _C1CFG1
        .equiv  C1CFG1H, _C1CFG1+1

        .extern C1CFG2
        .equiv  C1CFG2L, _C1CFG2
        .equiv  C1CFG2H, _C1CFG2+1

        .extern C1FEN1
        .equiv  C1FEN1L, _C1FEN1
        .equiv  C1FEN1H, _C1FEN1+1

        .extern C1FMSKSEL1
        .equiv  C1FMSKSEL1L, _C1FMSKSEL1
        .equiv  C1FMSKSEL1H, _C1FMSKSEL1+1

        .extern C1FMSKSEL2
        .equiv  C1FMSKSEL2L, _C1FMSKSEL2
        .equiv  C1FMSKSEL2H, _C1FMSKSEL2+1

        .extern C1BUFPNT1
        .equiv  C1BUFPNT1L, _C1BUFPNT1
        .equiv  C1BUFPNT1H, _C1BUFPNT1+1

        .extern C1RXFUL1
        .equiv  C1RXFUL1L, _C1RXFUL1
        .equiv  C1RXFUL1H, _C1RXFUL1+1

        .extern C1BUFPNT2
        .equiv  C1BUFPNT2L, _C1BUFPNT2
        .equiv  C1BUFPNT2H, _C1BUFPNT2+1

        .extern C1RXFUL2
        .equiv  C1RXFUL2L, _C1RXFUL2
        .equiv  C1RXFUL2H, _C1RXFUL2+1

        .extern C1BUFPNT3
        .equiv  C1BUFPNT3L, _C1BUFPNT3
        .equiv  C1BUFPNT3H, _C1BUFPNT3+1

        .extern C1BUFPNT4
        .equiv  C1BUFPNT4L, _C1BUFPNT4
        .equiv  C1BUFPNT4H, _C1BUFPNT4+1

        .extern C1RXOVF1
        .equiv  C1RXOVF1L, _C1RXOVF1
        .equiv  C1RXOVF1H, _C1RXOVF1+1

        .extern C1RXOVF2
        .equiv  C1RXOVF2L, _C1RXOVF2
        .equiv  C1RXOVF2H, _C1RXOVF2+1

        .extern C1RXM0SID
        .equiv  C1RXM0SIDL, _C1RXM0SID
        .equiv  C1RXM0SIDH, _C1RXM0SID+1

        .extern C1TR01CON
        .equiv  C1TR01CONL, _C1TR01CON
        .equiv  C1TR01CONH, _C1TR01CON+1

        .extern C1RXM0EID
        .equiv  C1RXM0EIDL, _C1RXM0EID
        .equiv  C1RXM0EIDH, _C1RXM0EID+1

        .extern C1TR23CON
        .equiv  C1TR23CONL, _C1TR23CON
        .equiv  C1TR23CONH, _C1TR23CON+1

        .extern C1RXM1SID
        .equiv  C1RXM1SIDL, _C1RXM1SID
        .equiv  C1RXM1SIDH, _C1RXM1SID+1

        .extern C1TR45CON
        .equiv  C1TR45CONL, _C1TR45CON
        .equiv  C1TR45CONH, _C1TR45CON+1

        .extern C1RXM1EID
        .equiv  C1RXM1EIDL, _C1RXM1EID
        .equiv  C1RXM1EIDH, _C1RXM1EID+1

        .extern C1TR67CON
        .equiv  C1TR67CONL, _C1TR67CON
        .equiv  C1TR67CONH, _C1TR67CON+1

        .extern C1RXM2SID
        .equiv  C1RXM2SIDL, _C1RXM2SID
        .equiv  C1RXM2SIDH, _C1RXM2SID+1

        .extern C1RXM2EID
        .equiv  C1RXM2EIDL, _C1RXM2EID
        .equiv  C1RXM2EIDH, _C1RXM2EID+1

        .extern C1RXD
        .equiv  C1RXDL, _C1RXD
        .equiv  C1RXDH, _C1RXD+1

        .extern C1RXF0SID
        .equiv  C1RXF0SIDL, _C1RXF0SID
        .equiv  C1RXF0SIDH, _C1RXF0SID+1

        .extern C1RXF0EID
        .equiv  C1RXF0EIDL, _C1RXF0EID
        .equiv  C1RXF0EIDH, _C1RXF0EID+1

        .extern C1TXD
        .equiv  C1TXDL, _C1TXD
        .equiv  C1TXDH, _C1TXD+1

        .extern C1RXF1SID
        .equiv  C1RXF1SIDL, _C1RXF1SID
        .equiv  C1RXF1SIDH, _C1RXF1SID+1

        .extern C1RXF1EID
        .equiv  C1RXF1EIDL, _C1RXF1EID
        .equiv  C1RXF1EIDH, _C1RXF1EID+1

        .extern C1RXF2SID
        .equiv  C1RXF2SIDL, _C1RXF2SID
        .equiv  C1RXF2SIDH, _C1RXF2SID+1

        .extern C1RXF2EID
        .equiv  C1RXF2EIDL, _C1RXF2EID
        .equiv  C1RXF2EIDH, _C1RXF2EID+1

        .extern C1RXF3SID
        .equiv  C1RXF3SIDL, _C1RXF3SID
        .equiv  C1RXF3SIDH, _C1RXF3SID+1

        .extern C1RXF3EID
        .equiv  C1RXF3EIDL, _C1RXF3EID
        .equiv  C1RXF3EIDH, _C1RXF3EID+1

        .extern C1RXF4SID
        .equiv  C1RXF4SIDL, _C1RXF4SID
        .equiv  C1RXF4SIDH, _C1RXF4SID+1

        .extern C1RXF4EID
        .equiv  C1RXF4EIDL, _C1RXF4EID
        .equiv  C1RXF4EIDH, _C1RXF4EID+1

        .extern C1RXF5SID
        .equiv  C1RXF5SIDL, _C1RXF5SID
        .equiv  C1RXF5SIDH, _C1RXF5SID+1

        .extern C1RXF5EID
        .equiv  C1RXF5EIDL, _C1RXF5EID
        .equiv  C1RXF5EIDH, _C1RXF5EID+1

        .extern C1RXF6SID
        .equiv  C1RXF6SIDL, _C1RXF6SID
        .equiv  C1RXF6SIDH, _C1RXF6SID+1

        .extern C1RXF6EID
        .equiv  C1RXF6EIDL, _C1RXF6EID
        .equiv  C1RXF6EIDH, _C1RXF6EID+1

        .extern C1RXF7SID
        .equiv  C1RXF7SIDL, _C1RXF7SID
        .equiv  C1RXF7SIDH, _C1RXF7SID+1

        .extern C1RXF7EID
        .equiv  C1RXF7EIDL, _C1RXF7EID
        .equiv  C1RXF7EIDH, _C1RXF7EID+1

        .extern C1RXF8SID
        .equiv  C1RXF8SIDL, _C1RXF8SID
        .equiv  C1RXF8SIDH, _C1RXF8SID+1

        .extern C1RXF8EID
        .equiv  C1RXF8EIDL, _C1RXF8EID
        .equiv  C1RXF8EIDH, _C1RXF8EID+1

        .extern C1RXF9SID
        .equiv  C1RXF9SIDL, _C1RXF9SID
        .equiv  C1RXF9SIDH, _C1RXF9SID+1

        .extern C1RXF9EID
        .equiv  C1RXF9EIDL, _C1RXF9EID
        .equiv  C1RXF9EIDH, _C1RXF9EID+1

        .extern C1RXF10SID
        .equiv  C1RXF10SIDL, _C1RXF10SID
        .equiv  C1RXF10SIDH, _C1RXF10SID+1

        .extern C1RXF10EID
        .equiv  C1RXF10EIDL, _C1RXF10EID
        .equiv  C1RXF10EIDH, _C1RXF10EID+1

        .extern C1RXF11SID
        .equiv  C1RXF11SIDL, _C1RXF11SID
        .equiv  C1RXF11SIDH, _C1RXF11SID+1

        .extern C1RXF11EID
        .equiv  C1RXF11EIDL, _C1RXF11EID
        .equiv  C1RXF11EIDH, _C1RXF11EID+1

        .extern C1RXF12SID
        .equiv  C1RXF12SIDL, _C1RXF12SID
        .equiv  C1RXF12SIDH, _C1RXF12SID+1

        .extern C1RXF12EID
        .equiv  C1RXF12EIDL, _C1RXF12EID
        .equiv  C1RXF12EIDH, _C1RXF12EID+1

        .extern C1RXF13SID
        .equiv  C1RXF13SIDL, _C1RXF13SID
        .equiv  C1RXF13SIDH, _C1RXF13SID+1

        .extern C1RXF13EID
        .equiv  C1RXF13EIDL, _C1RXF13EID
        .equiv  C1RXF13EIDH, _C1RXF13EID+1

        .extern C1RXF14SID
        .equiv  C1RXF14SIDL, _C1RXF14SID
        .equiv  C1RXF14SIDH, _C1RXF14SID+1

        .extern C1RXF14EID
        .equiv  C1RXF14EIDL, _C1RXF14EID
        .equiv  C1RXF14EIDH, _C1RXF14EID+1

        .extern C1RXF15SID
        .equiv  C1RXF15SIDL, _C1RXF15SID
        .equiv  C1RXF15SIDH, _C1RXF15SID+1

        .extern C1RXF15EID
        .equiv  C1RXF15EIDL, _C1RXF15EID
        .equiv  C1RXF15EIDH, _C1RXF15EID+1

        .extern CRCCON1
        .equiv  CRCCON1L, _CRCCON1
        .equiv  CRCCON1H, _CRCCON1+1

        .extern CRCCON2
        .equiv  CRCCON2L, _CRCCON2
        .equiv  CRCCON2H, _CRCCON2+1

        .extern CRCXORL
        .equiv  CRCXORLL, _CRCXORL
        .equiv  CRCXORLH, _CRCXORL+1

        .extern CRCXORH
        .equiv  CRCXORHL, _CRCXORH
        .equiv  CRCXORHH, _CRCXORH+1

        .extern CRCDAT

        .extern CRCDATL
        .equiv  CRCDATLL, _CRCDATL
        .equiv  CRCDATLH, _CRCDATL+1

        .extern CRCDATH
        .equiv  CRCDATHL, _CRCDATH
        .equiv  CRCDATHH, _CRCDATH+1

        .extern CRCWDAT

        .extern CRCWDATL
        .equiv  CRCWDATLL, _CRCWDATL
        .equiv  CRCWDATLH, _CRCWDATL+1

        .extern CRCWDATH
        .equiv  CRCWDATHL, _CRCWDATH
        .equiv  CRCWDATHH, _CRCWDATH+1

        .extern RPOR0
        .equiv  RPOR0L, _RPOR0
        .equiv  RPOR0H, _RPOR0+1

        .extern RPOR1
        .equiv  RPOR1L, _RPOR1
        .equiv  RPOR1H, _RPOR1+1

        .extern RPOR2
        .equiv  RPOR2L, _RPOR2
        .equiv  RPOR2H, _RPOR2+1

        .extern RPOR3
        .equiv  RPOR3L, _RPOR3
        .equiv  RPOR3H, _RPOR3+1

        .extern RPOR4
        .equiv  RPOR4L, _RPOR4
        .equiv  RPOR4H, _RPOR4+1

        .extern RPOR6
        .equiv  RPOR6L, _RPOR6
        .equiv  RPOR6H, _RPOR6+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR3
        .equiv  RPINR3L, _RPINR3
        .equiv  RPINR3H, _RPINR3+1

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR8
        .equiv  RPINR8L, _RPINR8
        .equiv  RPINR8H, _RPINR8+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR12
        .equiv  RPINR12L, _RPINR12
        .equiv  RPINR12H, _RPINR12+1

        .extern RPINR14
        .equiv  RPINR14L, _RPINR14
        .equiv  RPINR14H, _RPINR14+1

        .extern RPINR15
        .equiv  RPINR15L, _RPINR15
        .equiv  RPINR15H, _RPINR15+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR19
        .equiv  RPINR19L, _RPINR19
        .equiv  RPINR19H, _RPINR19+1

        .extern RPINR22
        .equiv  RPINR22L, _RPINR22
        .equiv  RPINR22H, _RPINR22+1

        .extern RPINR23
        .equiv  RPINR23L, _RPINR23
        .equiv  RPINR23H, _RPINR23+1

        .extern RPINR26
        .equiv  RPINR26L, _RPINR26
        .equiv  RPINR26H, _RPINR26+1

        .extern RPINR37
        .equiv  RPINR37L, _RPINR37
        .equiv  RPINR37H, _RPINR37+1

        .extern RPINR38
        .equiv  RPINR38L, _RPINR38
        .equiv  RPINR38H, _RPINR38+1

        .extern RPINR39
        .equiv  RPINR39L, _RPINR39
        .equiv  RPINR39H, _RPINR39+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMADR
        .equiv  NVMADRL, _NVMADR
        .equiv  NVMADRH, _NVMADR+1

        .extern NVMADRU
        .equiv  NVMADRUL, _NVMADRU
        .equiv  NVMADRUH, _NVMADRU+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern RCON
        .equiv  RCONL, _RCON
        .equiv  RCONH, _RCON+1

        .extern OSCCON

        .extern OSCCONL
        .equiv  OSCCONLL, _OSCCONL
        .equiv  OSCCONLH, _OSCCONL+1

        .extern OSCCONH
        .equiv  OSCCONHL, _OSCCONH
        .equiv  OSCCONHH, _OSCCONH+1

        .extern CLKDIV
        .equiv  CLKDIVL, _CLKDIV
        .equiv  CLKDIVH, _CLKDIV+1

        .extern PLLFBD
        .equiv  PLLFBDL, _PLLFBD
        .equiv  PLLFBDH, _PLLFBD+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern REFOCON
        .equiv  REFOCONL, _REFOCON
        .equiv  REFOCONH, _REFOCON+1

        .extern PMD1
        .equiv  PMD1L, _PMD1
        .equiv  PMD1H, _PMD1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

        .extern PMD3
        .equiv  PMD3L, _PMD3
        .equiv  PMD3H, _PMD3+1

        .extern PMD4
        .equiv  PMD4L, _PMD4
        .equiv  PMD4H, _PMD4+1

        .extern PMD6
        .equiv  PMD6L, _PMD6
        .equiv  PMD6H, _PMD6+1

        .extern PMD7
        .equiv  PMD7L, _PMD7
        .equiv  PMD7H, _PMD7+1

        .extern IFS0
        .equiv  IFS0L, _IFS0
        .equiv  IFS0H, _IFS0+1

        .extern IFS1
        .equiv  IFS1L, _IFS1
        .equiv  IFS1H, _IFS1+1

        .extern IFS2
        .equiv  IFS2L, _IFS2
        .equiv  IFS2H, _IFS2+1

        .extern IFS3
        .equiv  IFS3L, _IFS3
        .equiv  IFS3H, _IFS3+1

        .extern IFS4
        .equiv  IFS4L, _IFS4
        .equiv  IFS4H, _IFS4+1

        .extern IFS5
        .equiv  IFS5L, _IFS5
        .equiv  IFS5H, _IFS5+1

        .extern IFS6
        .equiv  IFS6L, _IFS6
        .equiv  IFS6H, _IFS6+1

        .extern IFS8
        .equiv  IFS8L, _IFS8
        .equiv  IFS8H, _IFS8+1

        .extern IFS9
        .equiv  IFS9L, _IFS9
        .equiv  IFS9H, _IFS9+1

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC2
        .equiv  IEC2L, _IEC2
        .equiv  IEC2H, _IEC2+1

        .extern IEC3
        .equiv  IEC3L, _IEC3
        .equiv  IEC3H, _IEC3+1

        .extern IEC4
        .equiv  IEC4L, _IEC4
        .equiv  IEC4H, _IEC4+1

        .extern IEC5
        .equiv  IEC5L, _IEC5
        .equiv  IEC5H, _IEC5+1

        .extern IEC6
        .equiv  IEC6L, _IEC6
        .equiv  IEC6H, _IEC6+1

        .extern IEC8
        .equiv  IEC8L, _IEC8
        .equiv  IEC8H, _IEC8+1

        .extern IEC9
        .equiv  IEC9L, _IEC9
        .equiv  IEC9H, _IEC9+1

        .extern IPC0
        .equiv  IPC0L, _IPC0
        .equiv  IPC0H, _IPC0+1

        .extern IPC1
        .equiv  IPC1L, _IPC1
        .equiv  IPC1H, _IPC1+1

        .extern IPC2
        .equiv  IPC2L, _IPC2
        .equiv  IPC2H, _IPC2+1

        .extern IPC3
        .equiv  IPC3L, _IPC3
        .equiv  IPC3H, _IPC3+1

        .extern IPC4
        .equiv  IPC4L, _IPC4
        .equiv  IPC4H, _IPC4+1

        .extern IPC5
        .equiv  IPC5L, _IPC5
        .equiv  IPC5H, _IPC5+1

        .extern IPC6
        .equiv  IPC6L, _IPC6
        .equiv  IPC6H, _IPC6+1

        .extern IPC7
        .equiv  IPC7L, _IPC7
        .equiv  IPC7H, _IPC7+1

        .extern IPC8
        .equiv  IPC8L, _IPC8
        .equiv  IPC8H, _IPC8+1

        .extern IPC9
        .equiv  IPC9L, _IPC9
        .equiv  IPC9H, _IPC9+1

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

        .extern IPC14
        .equiv  IPC14L, _IPC14
        .equiv  IPC14H, _IPC14+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC17
        .equiv  IPC17L, _IPC17
        .equiv  IPC17H, _IPC17+1

        .extern IPC19
        .equiv  IPC19L, _IPC19
        .equiv  IPC19H, _IPC19+1

        .extern IPC23
        .equiv  IPC23L, _IPC23
        .equiv  IPC23H, _IPC23+1

        .extern IPC24
        .equiv  IPC24L, _IPC24
        .equiv  IPC24H, _IPC24+1

        .extern IPC35
        .equiv  IPC35L, _IPC35
        .equiv  IPC35H, _IPC35+1

        .extern IPC36
        .equiv  IPC36L, _IPC36
        .equiv  IPC36H, _IPC36+1

        .extern IPC37
        .equiv  IPC37L, _IPC37
        .equiv  IPC37H, _IPC37+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern INTCON3
        .equiv  INTCON3L, _INTCON3
        .equiv  INTCON3H, _INTCON3+1

        .extern INTCON4
        .equiv  INTCON4L, _INTCON4
        .equiv  INTCON4H, _INTCON4+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

        .extern OC1CON1
        .equiv  OC1CON1L, _OC1CON1
        .equiv  OC1CON1H, _OC1CON1+1

        .extern OC1CON2
        .equiv  OC1CON2L, _OC1CON2
        .equiv  OC1CON2H, _OC1CON2+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1TMR
        .equiv  OC1TMRL, _OC1TMR
        .equiv  OC1TMRH, _OC1TMR+1

        .extern OC2CON1
        .equiv  OC2CON1L, _OC2CON1
        .equiv  OC2CON1H, _OC2CON1+1

        .extern OC2CON2
        .equiv  OC2CON2L, _OC2CON2
        .equiv  OC2CON2H, _OC2CON2+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2TMR
        .equiv  OC2TMRL, _OC2TMR
        .equiv  OC2TMRH, _OC2TMR+1

        .extern OC3CON1
        .equiv  OC3CON1L, _OC3CON1
        .equiv  OC3CON1H, _OC3CON1+1

        .extern OC3CON2
        .equiv  OC3CON2L, _OC3CON2
        .equiv  OC3CON2H, _OC3CON2+1

        .extern OC3RS
        .equiv  OC3RSL, _OC3RS
        .equiv  OC3RSH, _OC3RS+1

        .extern OC3R
        .equiv  OC3RL, _OC3R
        .equiv  OC3RH, _OC3R+1

        .extern OC3TMR
        .equiv  OC3TMRL, _OC3TMR
        .equiv  OC3TMRH, _OC3TMR+1

        .extern OC4CON1
        .equiv  OC4CON1L, _OC4CON1
        .equiv  OC4CON1H, _OC4CON1+1

        .extern OC4CON2
        .equiv  OC4CON2L, _OC4CON2
        .equiv  OC4CON2H, _OC4CON2+1

        .extern OC4RS
        .equiv  OC4RSL, _OC4RS
        .equiv  OC4RSH, _OC4RS+1

        .extern OC4R
        .equiv  OC4RL, _OC4R
        .equiv  OC4RH, _OC4R+1

        .extern OC4TMR
        .equiv  OC4TMRL, _OC4TMR
        .equiv  OC4TMRH, _OC4TMR+1

        .extern CMSTAT
        .equiv  CMSTATL, _CMSTAT
        .equiv  CMSTATH, _CMSTAT+1

        .extern CVRCON
        .equiv  CVRCONL, _CVRCON
        .equiv  CVRCONH, _CVRCON+1

        .extern CM1CON
        .equiv  CM1CONL, _CM1CON
        .equiv  CM1CONH, _CM1CON+1

        .extern CM1MSKSRC
        .equiv  CM1MSKSRCL, _CM1MSKSRC
        .equiv  CM1MSKSRCH, _CM1MSKSRC+1

        .extern CM1MSKCON
        .equiv  CM1MSKCONL, _CM1MSKCON
        .equiv  CM1MSKCONH, _CM1MSKCON+1

        .extern CM1FLTR
        .equiv  CM1FLTRL, _CM1FLTR
        .equiv  CM1FLTRH, _CM1FLTR+1

        .extern CM2CON
        .equiv  CM2CONL, _CM2CON
        .equiv  CM2CONH, _CM2CON+1

        .extern CM2MSKSRC
        .equiv  CM2MSKSRCL, _CM2MSKSRC
        .equiv  CM2MSKSRCH, _CM2MSKSRC+1

        .extern CM2MSKCON
        .equiv  CM2MSKCONL, _CM2MSKCON
        .equiv  CM2MSKCONH, _CM2MSKCON+1

        .extern CM2FLTR
        .equiv  CM2FLTRL, _CM2FLTR
        .equiv  CM2FLTRH, _CM2FLTR+1

        .extern CM3CON
        .equiv  CM3CONL, _CM3CON
        .equiv  CM3CONH, _CM3CON+1

        .extern CM3MSKSRC
        .equiv  CM3MSKSRCL, _CM3MSKSRC
        .equiv  CM3MSKSRCH, _CM3MSKSRC+1

        .extern CM3MSKCON
        .equiv  CM3MSKCONL, _CM3MSKCON
        .equiv  CM3MSKCONH, _CM3MSKCON+1

        .extern CM3FLTR
        .equiv  CM3FLTRL, _CM3FLTR
        .equiv  CM3FLTRH, _CM3FLTR+1

        .extern CM4CON
        .equiv  CM4CONL, _CM4CON
        .equiv  CM4CONH, _CM4CON+1

        .extern CM4MSKSRC
        .equiv  CM4MSKSRCL, _CM4MSKSRC
        .equiv  CM4MSKSRCH, _CM4MSKSRC+1

        .extern CM4MSKCON
        .equiv  CM4MSKCONL, _CM4MSKCON
        .equiv  CM4MSKCONH, _CM4MSKCON+1

        .extern CM4FLTR
        .equiv  CM4FLTRL, _CM4FLTR
        .equiv  CM4FLTRH, _CM4FLTR+1

        .extern PTGCST
        .equiv  PTGCSTL, _PTGCST
        .equiv  PTGCSTH, _PTGCST+1

        .extern PTGCON
        .equiv  PTGCONL, _PTGCON
        .equiv  PTGCONH, _PTGCON+1

        .extern PTGBTE
        .equiv  PTGBTEL, _PTGBTE
        .equiv  PTGBTEH, _PTGBTE+1

        .extern PTGHOLD
        .equiv  PTGHOLDL, _PTGHOLD
        .equiv  PTGHOLDH, _PTGHOLD+1

        .extern PTGT0LIM
        .equiv  PTGT0LIML, _PTGT0LIM
        .equiv  PTGT0LIMH, _PTGT0LIM+1

        .extern PTGT1LIM
        .equiv  PTGT1LIML, _PTGT1LIM
        .equiv  PTGT1LIMH, _PTGT1LIM+1

        .extern PTGSDLIM
        .equiv  PTGSDLIML, _PTGSDLIM
        .equiv  PTGSDLIMH, _PTGSDLIM+1

        .extern PTGC0LIM
        .equiv  PTGC0LIML, _PTGC0LIM
        .equiv  PTGC0LIMH, _PTGC0LIM+1

        .extern PTGC1LIM
        .equiv  PTGC1LIML, _PTGC1LIM
        .equiv  PTGC1LIMH, _PTGC1LIM+1

        .extern PTGADJ
        .equiv  PTGADJL, _PTGADJ
        .equiv  PTGADJH, _PTGADJ+1

        .extern PTGL0
        .equiv  PTGL0L, _PTGL0
        .equiv  PTGL0H, _PTGL0+1

        .extern PTGQPTR
        .equiv  PTGQPTRL, _PTGQPTR
        .equiv  PTGQPTRH, _PTGQPTR+1

        .extern PTGQUE0
        .equiv  PTGQUE0L, _PTGQUE0
        .equiv  PTGQUE0H, _PTGQUE0+1

        .extern PTGQUE1
        .equiv  PTGQUE1L, _PTGQUE1
        .equiv  PTGQUE1H, _PTGQUE1+1

        .extern PTGQUE2
        .equiv  PTGQUE2L, _PTGQUE2
        .equiv  PTGQUE2H, _PTGQUE2+1

        .extern PTGQUE3
        .equiv  PTGQUE3L, _PTGQUE3
        .equiv  PTGQUE3H, _PTGQUE3+1

        .extern PTGQUE4
        .equiv  PTGQUE4L, _PTGQUE4
        .equiv  PTGQUE4H, _PTGQUE4+1

        .extern PTGQUE5
        .equiv  PTGQUE5L, _PTGQUE5
        .equiv  PTGQUE5H, _PTGQUE5+1

        .extern PTGQUE6
        .equiv  PTGQUE6L, _PTGQUE6
        .equiv  PTGQUE6H, _PTGQUE6+1

        .extern PTGQUE7
        .equiv  PTGQUE7L, _PTGQUE7
        .equiv  PTGQUE7H, _PTGQUE7+1

        .extern DMA0CON
        .equiv  DMA0CONL, _DMA0CON
        .equiv  DMA0CONH, _DMA0CON+1

        .extern DMA0REQ
        .equiv  DMA0REQL, _DMA0REQ
        .equiv  DMA0REQH, _DMA0REQ+1

        .extern DMA0STAL
        .equiv  DMA0STALL, _DMA0STAL
        .equiv  DMA0STALH, _DMA0STAL+1

        .extern DMA0STAH
        .equiv  DMA0STAHL, _DMA0STAH
        .equiv  DMA0STAHH, _DMA0STAH+1

        .extern DMA0STBL
        .equiv  DMA0STBLL, _DMA0STBL
        .equiv  DMA0STBLH, _DMA0STBL+1

        .extern DMA0STBH
        .equiv  DMA0STBHL, _DMA0STBH
        .equiv  DMA0STBHH, _DMA0STBH+1

        .extern DMA0PAD
        .equiv  DMA0PADL, _DMA0PAD
        .equiv  DMA0PADH, _DMA0PAD+1

        .extern DMA0CNT
        .equiv  DMA0CNTL, _DMA0CNT
        .equiv  DMA0CNTH, _DMA0CNT+1

        .extern DMA1CON
        .equiv  DMA1CONL, _DMA1CON
        .equiv  DMA1CONH, _DMA1CON+1

        .extern DMA1REQ
        .equiv  DMA1REQL, _DMA1REQ
        .equiv  DMA1REQH, _DMA1REQ+1

        .extern DMA1STAL
        .equiv  DMA1STALL, _DMA1STAL
        .equiv  DMA1STALH, _DMA1STAL+1

        .extern DMA1STAH
        .equiv  DMA1STAHL, _DMA1STAH
        .equiv  DMA1STAHH, _DMA1STAH+1

        .extern DMA1STBL
        .equiv  DMA1STBLL, _DMA1STBL
        .equiv  DMA1STBLH, _DMA1STBL+1

        .extern DMA1STBH
        .equiv  DMA1STBHL, _DMA1STBH
        .equiv  DMA1STBHH, _DMA1STBH+1

        .extern DMA1PAD
        .equiv  DMA1PADL, _DMA1PAD
        .equiv  DMA1PADH, _DMA1PAD+1

        .extern DMA1CNT
        .equiv  DMA1CNTL, _DMA1CNT
        .equiv  DMA1CNTH, _DMA1CNT+1

        .extern DMA2CON
        .equiv  DMA2CONL, _DMA2CON
        .equiv  DMA2CONH, _DMA2CON+1

        .extern DMA2REQ
        .equiv  DMA2REQL, _DMA2REQ
        .equiv  DMA2REQH, _DMA2REQ+1

        .extern DMA2STAL
        .equiv  DMA2STALL, _DMA2STAL
        .equiv  DMA2STALH, _DMA2STAL+1

        .extern DMA2STAH
        .equiv  DMA2STAHL, _DMA2STAH
        .equiv  DMA2STAHH, _DMA2STAH+1

        .extern DMA2STBL
        .equiv  DMA2STBLL, _DMA2STBL
        .equiv  DMA2STBLH, _DMA2STBL+1

        .extern DMA2STBH
        .equiv  DMA2STBHL, _DMA2STBH
        .equiv  DMA2STBHH, _DMA2STBH+1

        .extern DMA2PAD
        .equiv  DMA2PADL, _DMA2PAD
        .equiv  DMA2PADH, _DMA2PAD+1

        .extern DMA2CNT
        .equiv  DMA2CNTL, _DMA2CNT
        .equiv  DMA2CNTH, _DMA2CNT+1

        .extern DMA3CON
        .equiv  DMA3CONL, _DMA3CON
        .equiv  DMA3CONH, _DMA3CON+1

        .extern DMA3REQ
        .equiv  DMA3REQL, _DMA3REQ
        .equiv  DMA3REQH, _DMA3REQ+1

        .extern DMA3STAL
        .equiv  DMA3STALL, _DMA3STAL
        .equiv  DMA3STALH, _DMA3STAL+1

        .extern DMA3STAH
        .equiv  DMA3STAHL, _DMA3STAH
        .equiv  DMA3STAHH, _DMA3STAH+1

        .extern DMA3STBL
        .equiv  DMA3STBLL, _DMA3STBL
        .equiv  DMA3STBLH, _DMA3STBL+1

        .extern DMA3STBH
        .equiv  DMA3STBHL, _DMA3STBH
        .equiv  DMA3STBHH, _DMA3STBH+1

        .extern DMA3PAD
        .equiv  DMA3PADL, _DMA3PAD
        .equiv  DMA3PADH, _DMA3PAD+1

        .extern DMA3CNT
        .equiv  DMA3CNTL, _DMA3CNT
        .equiv  DMA3CNTH, _DMA3CNT+1

        .extern DMAPWC
        .equiv  DMAPWCL, _DMAPWC
        .equiv  DMAPWCH, _DMAPWC+1

        .extern DMARQC
        .equiv  DMARQCL, _DMARQC
        .equiv  DMARQCH, _DMARQC+1

        .extern DMAPPS
        .equiv  DMAPPSL, _DMAPPS
        .equiv  DMAPPSH, _DMAPPS+1

        .extern DMALCA
        .equiv  DMALCAL, _DMALCA
        .equiv  DMALCAH, _DMALCA+1

        .extern DSADRL
        .equiv  DSADRLL, _DSADRL
        .equiv  DSADRLH, _DSADRL+1

        .extern DSADRH
        .equiv  DSADRHL, _DSADRH
        .equiv  DSADRHH, _DSADRH+1

        .extern PTCON
        .equiv  PTCONL, _PTCON
        .equiv  PTCONH, _PTCON+1

        .extern PTCON2
        .equiv  PTCON2L, _PTCON2
        .equiv  PTCON2H, _PTCON2+1

        .extern PTPER
        .equiv  PTPERL, _PTPER
        .equiv  PTPERH, _PTPER+1

        .extern SEVTCMP
        .equiv  SEVTCMPL, _SEVTCMP
        .equiv  SEVTCMPH, _SEVTCMP+1

        .extern MDC
        .equiv  MDCL, _MDC
        .equiv  MDCH, _MDC+1

        .extern CHOP
        .equiv  CHOPL, _CHOP
        .equiv  CHOPH, _CHOP+1

        .extern PWMKEY
        .equiv  PWMKEYL, _PWMKEY
        .equiv  PWMKEYH, _PWMKEY+1

        .extern PWMCON1
        .equiv  PWMCON1L, _PWMCON1
        .equiv  PWMCON1H, _PWMCON1+1

        .extern IOCON1
        .equiv  IOCON1L, _IOCON1
        .equiv  IOCON1H, _IOCON1+1

        .extern FCLCON1
        .equiv  FCLCON1L, _FCLCON1
        .equiv  FCLCON1H, _FCLCON1+1

        .extern PDC1
        .equiv  PDC1L, _PDC1
        .equiv  PDC1H, _PDC1+1

        .extern PHASE1
        .equiv  PHASE1L, _PHASE1
        .equiv  PHASE1H, _PHASE1+1

        .extern DTR1
        .equiv  DTR1L, _DTR1
        .equiv  DTR1H, _DTR1+1

        .extern ALTDTR1
        .equiv  ALTDTR1L, _ALTDTR1
        .equiv  ALTDTR1H, _ALTDTR1+1

        .extern TRIG1
        .equiv  TRIG1L, _TRIG1
        .equiv  TRIG1H, _TRIG1+1

        .extern TRGCON1
        .equiv  TRGCON1L, _TRGCON1
        .equiv  TRGCON1H, _TRGCON1+1

        .extern LEBCON1
        .equiv  LEBCON1L, _LEBCON1
        .equiv  LEBCON1H, _LEBCON1+1

        .extern LEBDLY1
        .equiv  LEBDLY1L, _LEBDLY1
        .equiv  LEBDLY1H, _LEBDLY1+1

        .extern AUXCON1
        .equiv  AUXCON1L, _AUXCON1
        .equiv  AUXCON1H, _AUXCON1+1

        .extern PWMCON2
        .equiv  PWMCON2L, _PWMCON2
        .equiv  PWMCON2H, _PWMCON2+1

        .extern IOCON2
        .equiv  IOCON2L, _IOCON2
        .equiv  IOCON2H, _IOCON2+1

        .extern FCLCON2
        .equiv  FCLCON2L, _FCLCON2
        .equiv  FCLCON2H, _FCLCON2+1

        .extern PDC2
        .equiv  PDC2L, _PDC2
        .equiv  PDC2H, _PDC2+1

        .extern PHASE2
        .equiv  PHASE2L, _PHASE2
        .equiv  PHASE2H, _PHASE2+1

        .extern DTR2
        .equiv  DTR2L, _DTR2
        .equiv  DTR2H, _DTR2+1

        .extern ALTDTR2
        .equiv  ALTDTR2L, _ALTDTR2
        .equiv  ALTDTR2H, _ALTDTR2+1

        .extern TRIG2
        .equiv  TRIG2L, _TRIG2
        .equiv  TRIG2H, _TRIG2+1

        .extern TRGCON2
        .equiv  TRGCON2L, _TRGCON2
        .equiv  TRGCON2H, _TRGCON2+1

        .extern LEBCON2
        .equiv  LEBCON2L, _LEBCON2
        .equiv  LEBCON2H, _LEBCON2+1

        .extern LEBDLY2
        .equiv  LEBDLY2L, _LEBDLY2
        .equiv  LEBDLY2H, _LEBDLY2+1

        .extern AUXCON2
        .equiv  AUXCON2L, _AUXCON2
        .equiv  AUXCON2H, _AUXCON2+1

        .extern PWMCON3
        .equiv  PWMCON3L, _PWMCON3
        .equiv  PWMCON3H, _PWMCON3+1

        .extern IOCON3
        .equiv  IOCON3L, _IOCON3
        .equiv  IOCON3H, _IOCON3+1

        .extern FCLCON3
        .equiv  FCLCON3L, _FCLCON3
        .equiv  FCLCON3H, _FCLCON3+1

        .extern PDC3
        .equiv  PDC3L, _PDC3
        .equiv  PDC3H, _PDC3+1

        .extern PHASE3
        .equiv  PHASE3L, _PHASE3
        .equiv  PHASE3H, _PHASE3+1

        .extern DTR3
        .equiv  DTR3L, _DTR3
        .equiv  DTR3H, _DTR3+1

        .extern ALTDTR3
        .equiv  ALTDTR3L, _ALTDTR3
        .equiv  ALTDTR3H, _ALTDTR3+1

        .extern TRIG3
        .equiv  TRIG3L, _TRIG3
        .equiv  TRIG3H, _TRIG3+1

        .extern TRGCON3
        .equiv  TRGCON3L, _TRGCON3
        .equiv  TRGCON3H, _TRGCON3+1

        .extern LEBCON3
        .equiv  LEBCON3L, _LEBCON3
        .equiv  LEBCON3H, _LEBCON3+1

        .extern LEBDLY3
        .equiv  LEBDLY3L, _LEBDLY3
        .equiv  LEBDLY3H, _LEBDLY3+1

        .extern AUXCON3
        .equiv  AUXCON3L, _AUXCON3
        .equiv  AUXCON3H, _AUXCON3+1

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern ODCA
        .equiv  ODCAL, _ODCA
        .equiv  ODCAH, _ODCA+1

        .extern CNENA
        .equiv  CNENAL, _CNENA
        .equiv  CNENAH, _CNENA+1

        .extern CNPUA
        .equiv  CNPUAL, _CNPUA
        .equiv  CNPUAH, _CNPUA+1

        .extern CNPDA
        .equiv  CNPDAL, _CNPDA
        .equiv  CNPDAH, _CNPDA+1

        .extern ANSELA
        .equiv  ANSELAL, _ANSELA
        .equiv  ANSELAH, _ANSELA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern ODCB
        .equiv  ODCBL, _ODCB
        .equiv  ODCBH, _ODCB+1

        .extern CNENB
        .equiv  CNENBL, _CNENB
        .equiv  CNENBH, _CNENB+1

        .extern CNPUB
        .equiv  CNPUBL, _CNPUB
        .equiv  CNPUBH, _CNPUB+1

        .extern CNPDB
        .equiv  CNPDBL, _CNPDB
        .equiv  CNPDBH, _CNPDB+1

        .extern ANSELB
        .equiv  ANSELBL, _ANSELB
        .equiv  ANSELBH, _ANSELB+1

        .extern TRISC
        .equiv  TRISCL, _TRISC
        .equiv  TRISCH, _TRISC+1

        .extern PORTC
        .equiv  PORTCL, _PORTC
        .equiv  PORTCH, _PORTC+1

        .extern LATC
        .equiv  LATCL, _LATC
        .equiv  LATCH, _LATC+1

        .extern ODCC
        .equiv  ODCCL, _ODCC
        .equiv  ODCCH, _ODCC+1

        .extern CNENC
        .equiv  CNENCL, _CNENC
        .equiv  CNENCH, _CNENC+1

        .extern CNPUC
        .equiv  CNPUCL, _CNPUC
        .equiv  CNPUCH, _CNPUC+1

        .extern CNPDC
        .equiv  CNPDCL, _CNPDC
        .equiv  CNPDCH, _CNPDC+1

        .extern ANSELC
        .equiv  ANSELCL, _ANSELC
        .equiv  ANSELCH, _ANSELC+1

        .extern _APPO
        .equiv  _APPOL, __APPO
        .equiv  _APPOH, __APPO+1

        .extern _APPIN
        .equiv  _APPINL, __APPIN
        .equiv  _APPINH, __APPIN+1

        .extern APPS
        .equiv  APPSL, _APPS
        .equiv  APPSH, _APPS+1

        .extern STROUTL
        .equiv  STROUTLL, _STROUTL
        .equiv  STROUTLH, _STROUTL+1

        .extern STROUTH
        .equiv  STROUTHL, _STROUTH
        .equiv  STROUTHH, _STROUTH+1

        .extern STROVCNT
        .equiv  STROVCNTL, _STROVCNT
        .equiv  STROVCNTH, _STROVCNT+1

        .extern JDATAH
        .equiv  JDATAHL, _JDATAH
        .equiv  JDATAHH, _JDATAH+1

        .extern JDATAL
        .equiv  JDATALL, _JDATAL
        .equiv  JDATALH, _JDATAL+1

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv DC,      0x0008
        .equiv DA,      0x0009
        .equiv SAB,     0x000A
        .equiv OAB,     0x000B
        .equiv SB,      0x000C
        .equiv SA,      0x000D
        .equiv OB,      0x000E
        .equiv OA,      0x000F

        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007


;----- CORCON Bits -----------------------------------------------------
        .equiv IF,      0x0000
        .equiv RND,     0x0001
        .equiv SFA,     0x0002
        .equiv IPL3,    0x0003
        .equiv ACCSAT,  0x0004
        .equiv SATDW,   0x0005
        .equiv SATB,    0x0006
        .equiv SATA,    0x0007
        .equiv EDT,     0x000B
        .equiv VAR,     0x000F

        .equiv DL0,     0x0008
        .equiv DL1,     0x0009
        .equiv DL2,     0x000A
        .equiv US0,     0x000C
        .equiv US1,     0x000D


;----- MODCON Bits -----------------------------------------------------
        .equiv YMODEN,  0x000E
        .equiv XMODEN,  0x000F

        .equiv XWM0,    0x0000
        .equiv XWM1,    0x0001
        .equiv XWM2,    0x0002
        .equiv XWM3,    0x0003
        .equiv YWM0,    0x0004
        .equiv YWM1,    0x0005
        .equiv YWM2,    0x0006
        .equiv YWM3,    0x0007
        .equiv BWM0,    0x0008
        .equiv BWM1,    0x0009
        .equiv BWM2,    0x000A
        .equiv BWM3,    0x000B


;----- XBREV Bits -----------------------------------------------------
        .equiv BREN,    0x000F

        .equiv XB0,     0x0000
        .equiv XB1,     0x0001
        .equiv XB2,     0x0002
        .equiv XB3,     0x0003
        .equiv XB4,     0x0004
        .equiv XB5,     0x0005
        .equiv XB6,     0x0006
        .equiv XB7,     0x0007
        .equiv XB8,     0x0008
        .equiv XB9,     0x0009
        .equiv XB10,    0x000A
        .equiv XB11,    0x000B
        .equiv XB12,    0x000C
        .equiv XB13,    0x000D
        .equiv XB14,    0x000E


;----- T1CON Bits -----------------------------------------------------
        .equiv TCS,     0x0001
        .equiv TSYNC,   0x0002
        .equiv TGATE,   0x0006
        .equiv TSIDL,   0x000D
        .equiv TON,     0x000F

        .equiv TCKPS0,  0x0004
        .equiv TCKPS1,  0x0005


;----- T2CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T3CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T4CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T5CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- IC1CON1 Bits -----------------------------------------------------
        .equiv ICBNE,   0x0003
        .equiv ICOV,    0x0004
        .equiv ICSIDL,  0x000D

        .equiv ICM0,    0x0000
        .equiv ICM1,    0x0001
        .equiv ICM2,    0x0002
        .equiv ICI0,    0x0005
        .equiv ICI1,    0x0006
        .equiv ICTSEL0, 0x000A
        .equiv ICTSEL1, 0x000B
        .equiv ICTSEL2, 0x000C


;----- IC1CON2 Bits -----------------------------------------------------
        .equiv TRIGSTAT, 0x0006
        .equiv ICTRIG,  0x0007
        .equiv IC32,    0x0008

        .equiv SYNCSEL0, 0x0000
        .equiv SYNCSEL1, 0x0001
        .equiv SYNCSEL2, 0x0002
        .equiv SYNCSEL3, 0x0003
        .equiv SYNCSEL4, 0x0004


;----- IC2CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC2CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC3CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC3CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC4CON1 Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006
       ;.equiv ICTSEL0, 0x000A
       ;.equiv ICTSEL1, 0x000B
       ;.equiv ICTSEL2, 0x000C


;----- IC4CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- QEI1CON Bits -----------------------------------------------------
        .equiv GATEN,   0x0002
        .equiv CNTPOL,  0x0003
        .equiv QEISIDL, 0x000D
        .equiv QEIEN,   0x000F


;----- QEI1IOC Bits -----------------------------------------------------
        .equiv QEA,     0x0000
        .equiv QEB,     0x0001
        .equiv INDEX,   0x0002
        .equiv HOME,    0x0003
        .equiv QEAPOL,  0x0004
        .equiv QEBPOL,  0x0005
        .equiv IDXPOL,  0x0006
        .equiv HOMPOL,  0x0007
        .equiv SWPAB,   0x0008
        .equiv FLTREN,  0x000E
        .equiv QCAPEN,  0x000F


;----- QEI1STAT Bits -----------------------------------------------------
        .equiv IDXIEN,  0x0000
        .equiv IDXIRQ,  0x0001
        .equiv HOMIEN,  0x0002
        .equiv HOMIRQ,  0x0003
        .equiv VELOVIEN, 0x0004
        .equiv VELOVIRQ, 0x0005
        .equiv PCIIEN,  0x0006
        .equiv PCIIRQ,  0x0007
        .equiv POSOVIEN, 0x0008
        .equiv POSOVIRQ, 0x0009
        .equiv PCLEQIEN, 0x000A
        .equiv PCLEQIRQ, 0x000B
        .equiv PCHEQIEN, 0x000C
        .equiv PCHEQIRQ, 0x000D


;----- I2C1CON Bits -----------------------------------------------------
        .equiv SEN,     0x0000
        .equiv RSEN,    0x0001
        .equiv PEN,     0x0002
        .equiv RCEN,    0x0003
        .equiv ACKEN,   0x0004
        .equiv ACKDT,   0x0005
        .equiv STREN,   0x0006
        .equiv GCEN,    0x0007
        .equiv SMEN,    0x0008
        .equiv DISSLW,  0x0009
        .equiv A10M,    0x000A
        .equiv IPMIEN,  0x000B
        .equiv SCLREL,  0x000C
        .equiv I2CSIDL, 0x000D
        .equiv I2CEN,   0x000F


;----- I2C1STAT Bits -----------------------------------------------------
        .equiv TBF,     0x0000
        .equiv RBF,     0x0001
        .equiv R_W,     0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_A,     0x0005
        .equiv I2COV,   0x0006
        .equiv IWCOL,   0x0007
        .equiv ADD10,   0x0008
        .equiv GCSTAT,  0x0009
        .equiv BCL_I2C1STAT, 0x000A
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F


;----- I2C2CON Bits -----------------------------------------------------
       ;.equiv SEN,     0x0000
       ;.equiv RSEN,    0x0001
       ;.equiv PEN,     0x0002
       ;.equiv RCEN,    0x0003
       ;.equiv ACKEN,   0x0004
       ;.equiv ACKDT,   0x0005
       ;.equiv STREN,   0x0006
       ;.equiv GCEN,    0x0007
       ;.equiv SMEN,    0x0008
       ;.equiv DISSLW,  0x0009
       ;.equiv A10M,    0x000A
       ;.equiv IPMIEN,  0x000B
       ;.equiv SCLREL,  0x000C
       ;.equiv I2CSIDL, 0x000D
       ;.equiv I2CEN,   0x000F


;----- I2C2STAT Bits -----------------------------------------------------
       ;.equiv TBF,     0x0000
       ;.equiv RBF,     0x0001
       ;.equiv R_W,     0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_A,     0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
        .equiv BCL_I2C2STAT, 0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv URXINV,  0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv RTSMD,   0x000B
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002
        .equiv RXINV,   0x0004
        .equiv UEN0,    0x0008
        .equiv UEN1,    0x0009


;----- U1STA Bits -----------------------------------------------------
        .equiv URXDA,   0x0000
        .equiv OERR,    0x0001
        .equiv FERR,    0x0002
        .equiv PERR,    0x0003
        .equiv RIDLE,   0x0004
        .equiv ADDEN,   0x0005
        .equiv TRMT,    0x0008
        .equiv UTXBF,   0x0009
        .equiv UTXEN,   0x000A
        .equiv UTXBRK,  0x000B
        .equiv UTXISEL0, 0x000D
        .equiv UTXINV,  0x000E
        .equiv UTXISEL1, 0x000F

        .equiv URXISEL0, 0x0006
        .equiv URXISEL1, 0x0007


;----- U2MODE Bits -----------------------------------------------------
       ;.equiv STSEL,   0x0000
       ;.equiv BRGH,    0x0003
       ;.equiv URXINV,  0x0004
       ;.equiv ABAUD,   0x0005
       ;.equiv LPBACK,  0x0006
       ;.equiv WAKE,    0x0007
       ;.equiv RTSMD,   0x000B
       ;.equiv IREN,    0x000C
       ;.equiv USIDL,   0x000D
       ;.equiv UARTEN,  0x000F

       ;.equiv PDSEL0,  0x0001
       ;.equiv PDSEL1,  0x0002
       ;.equiv RXINV,   0x0004
       ;.equiv UEN0,    0x0008
       ;.equiv UEN1,    0x0009


;----- U2STA Bits -----------------------------------------------------
       ;.equiv URXDA,   0x0000
       ;.equiv OERR,    0x0001
       ;.equiv FERR,    0x0002
       ;.equiv PERR,    0x0003
       ;.equiv RIDLE,   0x0004
       ;.equiv ADDEN,   0x0005
       ;.equiv TRMT,    0x0008
       ;.equiv UTXBF,   0x0009
       ;.equiv UTXEN,   0x000A
       ;.equiv UTXBRK,  0x000B
       ;.equiv UTXISEL0, 0x000D
       ;.equiv UTXINV,  0x000E
       ;.equiv UTXISEL1, 0x000F

       ;.equiv URXISEL0, 0x0006
       ;.equiv URXISEL1, 0x0007


;----- SPI1STAT Bits -----------------------------------------------------
        .equiv SPIRBF,  0x0000
        .equiv SPITBF,  0x0001
        .equiv SRXMPT,  0x0005
        .equiv SPIROV,  0x0006
        .equiv SRMPT,   0x0007
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F

        .equiv SISEL0,  0x0002
        .equiv SISEL1,  0x0003
        .equiv SISEL2,  0x0004
        .equiv SPIBEC0, 0x0008
        .equiv SPIBEC1, 0x0009
        .equiv SPIBEC2, 0x000A


;----- SPI1CON1 Bits -----------------------------------------------------
        .equiv MSTEN,   0x0005
        .equiv CKP,     0x0006
        .equiv SSEN,    0x0007
        .equiv CKE,     0x0008
        .equiv SMP,     0x0009
        .equiv MODE16,  0x000A
        .equiv DISSDO,  0x000B
        .equiv DISSCK,  0x000C

        .equiv PPRE0,   0x0000
        .equiv PPRE1,   0x0001
        .equiv SPRE0,   0x0002
        .equiv SPRE1,   0x0003
        .equiv SPRE2,   0x0004


;----- SPI1CON2 Bits -----------------------------------------------------
        .equiv SPIBEN,  0x0000
        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


;----- SPI2STAT Bits -----------------------------------------------------
       ;.equiv SPIRBF,  0x0000
       ;.equiv SPITBF,  0x0001
       ;.equiv SRXMPT,  0x0005
       ;.equiv SPIROV,  0x0006
       ;.equiv SRMPT,   0x0007
       ;.equiv SPISIDL, 0x000D
       ;.equiv SPIEN,   0x000F

       ;.equiv SISEL0,  0x0002
       ;.equiv SISEL1,  0x0003
       ;.equiv SISEL2,  0x0004
       ;.equiv SPIBEC0, 0x0008
       ;.equiv SPIBEC1, 0x0009
       ;.equiv SPIBEC2, 0x000A


;----- SPI2CON1 Bits -----------------------------------------------------
       ;.equiv MSTEN,   0x0005
       ;.equiv CKP,     0x0006
       ;.equiv SSEN,    0x0007
       ;.equiv CKE,     0x0008
       ;.equiv SMP,     0x0009
       ;.equiv MODE16,  0x000A
       ;.equiv DISSDO,  0x000B
       ;.equiv DISSCK,  0x000C

       ;.equiv PPRE0,   0x0000
       ;.equiv PPRE1,   0x0001
       ;.equiv SPRE0,   0x0002
       ;.equiv SPRE1,   0x0003
       ;.equiv SPRE2,   0x0004


;----- SPI2CON2 Bits -----------------------------------------------------
       ;.equiv SPIBEN,  0x0000
       ;.equiv FRMDLY,  0x0001
       ;.equiv FRMPOL,  0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv SIMSAM,  0x0003
        .equiv SSRCG,   0x0004
        .equiv AD12B,   0x000A
        .equiv ADDMABM, 0x000C
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv SSRC0,   0x0005
        .equiv SSRC1,   0x0006
        .equiv SSRC2,   0x0007
        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009


;----- AD1CON2 Bits -----------------------------------------------------
        .equiv ALTS,    0x0000
        .equiv BUFM,    0x0001
        .equiv BUFS,    0x0007
        .equiv CSCNA,   0x000A

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv SMPI4,   0x0006
        .equiv CHPS0,   0x0008
        .equiv CHPS1,   0x0009
        .equiv VCFG0,   0x000D
        .equiv VCFG1,   0x000E
        .equiv VCFG2,   0x000F


;----- AD1CON3 Bits -----------------------------------------------------
        .equiv ADRC,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCS7,   0x0007
        .equiv SAMC0,   0x0008
        .equiv SAMC1,   0x0009
        .equiv SAMC2,   0x000A
        .equiv SAMC3,   0x000B
        .equiv SAMC4,   0x000C


;----- AD1CHS123 Bits -----------------------------------------------------
        .equiv CH123SA, 0x0000
        .equiv CH123SB, 0x0008

        .equiv CH123NA0, 0x0001
        .equiv CH123NA1, 0x0002
        .equiv CH123NB0, 0x0009
        .equiv CH123NB1, 0x000A


;----- AD1CHS0 Bits -----------------------------------------------------
        .equiv CH0NA,   0x0007
        .equiv CH0NB,   0x000F

        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SA4,  0x0004
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B
        .equiv CH0SB4,  0x000C


;----- AD1CSSH Bits -----------------------------------------------------
        .equiv CSS24,   0x0008
        .equiv CSS25,   0x0009
        .equiv CSS26,   0x000A
        .equiv CSS30,   0x000E
        .equiv CSS31,   0x000F


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSS0,    0x0000
        .equiv CSS1,    0x0001
        .equiv CSS2,    0x0002
        .equiv CSS3,    0x0003
        .equiv CSS4,    0x0004
        .equiv CSS5,    0x0005
        .equiv CSS6,    0x0006
        .equiv CSS7,    0x0007
        .equiv CSS8,    0x0008
        .equiv CSS9,    0x0009
        .equiv CSS10,   0x000A
        .equiv CSS11,   0x000B
        .equiv CSS12,   0x000C
        .equiv CSS13,   0x000D
        .equiv CSS14,   0x000E
        .equiv CSS15,   0x000F


;----- AD1CON4 Bits -----------------------------------------------------
        .equiv ADDMAEN, 0x0008

        .equiv DMABL0,  0x0000
        .equiv DMABL1,  0x0001
        .equiv DMABL2,  0x0002


;----- CTMUCON1 Bits -----------------------------------------------------
        .equiv CTTRIG,  0x0008
        .equiv IDISSEN, 0x0009
        .equiv EDGSEQEN, 0x000A
        .equiv EDGEN,   0x000B
        .equiv TGEN,    0x000C
        .equiv CTMUSIDL, 0x000D
        .equiv CTMUEN,  0x000F


;----- CTMUCON2 Bits -----------------------------------------------------
        .equiv EDG2POL, 0x0006
        .equiv EDG2MOD, 0x0007
        .equiv EDG1STAT, 0x0008
        .equiv EDG2STAT, 0x0009
        .equiv EDG1POL, 0x000E
        .equiv EDG1MOD, 0x000F

        .equiv EDG2SEL0, 0x0002
        .equiv EDG2SEL1, 0x0003
        .equiv EDG2SEL2, 0x0004
        .equiv EDG2SEL3, 0x0005
        .equiv EDG1SEL0, 0x000A
        .equiv EDG1SEL1, 0x000B
        .equiv EDG1SEL2, 0x000C
        .equiv EDG1SEL3, 0x000D


;----- CTMUICON Bits -----------------------------------------------------
        .equiv IRNG0,   0x0008
        .equiv IRNG1,   0x0009
        .equiv ITRIM0,  0x000A
        .equiv ITRIM1,  0x000B
        .equiv ITRIM2,  0x000C
        .equiv ITRIM3,  0x000D
        .equiv ITRIM4,  0x000E
        .equiv ITRIM5,  0x000F


;----- C1CTRL1 Bits -----------------------------------------------------
        .equiv WIN,     0x0000
        .equiv CANCAP,  0x0003
        .equiv CANCKS,  0x000B
        .equiv ABAT,    0x000C
        .equiv CSIDL,   0x000D

        .equiv OPMODE0, 0x0005
        .equiv OPMODE1, 0x0006
        .equiv OPMODE2, 0x0007
        .equiv REQOP0,  0x0008
        .equiv REQOP1,  0x0009
        .equiv REQOP2,  0x000A


;----- C1CTRL2 Bits -----------------------------------------------------
        .equiv DNCNT0,  0x0000
        .equiv DNCNT1,  0x0001
        .equiv DNCNT2,  0x0002
        .equiv DNCNT3,  0x0003
        .equiv DNCNT4,  0x0004


;----- C1VEC Bits -----------------------------------------------------
        .equiv ICODE0,  0x0000
        .equiv ICODE1,  0x0001
        .equiv ICODE2,  0x0002
        .equiv ICODE3,  0x0003
        .equiv ICODE4,  0x0004
        .equiv ICODE5,  0x0005
        .equiv ICODE6,  0x0006
        .equiv FILHIT0, 0x0008
        .equiv FILHIT1, 0x0009
        .equiv FILHIT2, 0x000A
        .equiv FILHIT3, 0x000B
        .equiv FILHIT4, 0x000C


;----- C1FCTRL Bits -----------------------------------------------------
        .equiv FSA0,    0x0000
        .equiv FSA1,    0x0001
        .equiv FSA2,    0x0002
        .equiv FSA3,    0x0003
        .equiv FSA4,    0x0004
        .equiv DMABS0,  0x000D
        .equiv DMABS1,  0x000E
        .equiv DMABS2,  0x000F


;----- C1FIFO Bits -----------------------------------------------------
        .equiv FNRB0,   0x0000
        .equiv FNRB1,   0x0001
        .equiv FNRB2,   0x0002
        .equiv FNRB3,   0x0003
        .equiv FNRB4,   0x0004
        .equiv FNRB5,   0x0005
        .equiv FBP0,    0x0008
        .equiv FBP1,    0x0009
        .equiv FBP2,    0x000A
        .equiv FBP3,    0x000B
        .equiv FBP4,    0x000C
        .equiv FBP5,    0x000D


;----- C1INTF Bits -----------------------------------------------------
        .equiv TBIF,    0x0000
        .equiv RBIF,    0x0001
        .equiv RBOVIF,  0x0002
        .equiv FIFOIF,  0x0003
        .equiv ERRIF,   0x0005
        .equiv WAKIF,   0x0006
        .equiv IVRIF,   0x0007
        .equiv EWARN,   0x0008
        .equiv RXWAR,   0x0009
        .equiv TXWAR,   0x000A
        .equiv RXBP,    0x000B
        .equiv TXBP,    0x000C
        .equiv TXBO,    0x000D


;----- C1INTE Bits -----------------------------------------------------
        .equiv TBIE,    0x0000
        .equiv RBIE,    0x0001
        .equiv RBOVIE,  0x0002
        .equiv FIFOIE,  0x0003
        .equiv ERRIE,   0x0005
        .equiv WAKIE,   0x0006
        .equiv IVRIE,   0x0007


;----- C1CFG1 Bits -----------------------------------------------------
        .equiv BRP0,    0x0000
        .equiv BRP1,    0x0001
        .equiv BRP2,    0x0002
        .equiv BRP3,    0x0003
        .equiv BRP4,    0x0004
        .equiv BRP5,    0x0005
        .equiv SJW0,    0x0006
        .equiv SJW1,    0x0007


;----- C1CFG2 Bits -----------------------------------------------------
        .equiv SAM,     0x0006
        .equiv SEG2PHTS, 0x0007
        .equiv WAKFIL,  0x000E

        .equiv PRSEG0,  0x0000
        .equiv PRSEG1,  0x0001
        .equiv PRSEG2,  0x0002
        .equiv SEG1PH0, 0x0003
        .equiv SEG1PH1, 0x0004
        .equiv SEG1PH2, 0x0005
        .equiv SEG2PH0, 0x0008
        .equiv SEG2PH1, 0x0009
        .equiv SEG2PH2, 0x000A


;----- C1FEN1 Bits -----------------------------------------------------
        .equiv FLTEN0,  0x0000
        .equiv FLTEN1,  0x0001
        .equiv FLTEN2,  0x0002
        .equiv FLTEN3,  0x0003
        .equiv FLTEN4,  0x0004
        .equiv FLTEN5,  0x0005
        .equiv FLTEN6,  0x0006
        .equiv FLTEN7,  0x0007
        .equiv FLTEN8,  0x0008
        .equiv FLTEN9,  0x0009
        .equiv FLTEN10, 0x000A
        .equiv FLTEN11, 0x000B
        .equiv FLTEN12, 0x000C
        .equiv FLTEN13, 0x000D
        .equiv FLTEN14, 0x000E
        .equiv FLTEN15, 0x000F


;----- C1FMSKSEL1 Bits -----------------------------------------------------
        .equiv F0MSK0,  0x0000
        .equiv F0MSK1,  0x0001
        .equiv F1MSK0,  0x0002
        .equiv F1MSK1,  0x0003
        .equiv F2MSK0,  0x0004
        .equiv F2MSK1,  0x0005
        .equiv F3MSK0,  0x0006
        .equiv F3MSK1,  0x0007
        .equiv F4MSK0,  0x0008
        .equiv F4MSK1,  0x0009
        .equiv F5MSK0,  0x000A
        .equiv F5MSK1,  0x000B
        .equiv F6MSK0,  0x000C
        .equiv F6MSK1,  0x000D
        .equiv F7MSK0,  0x000E
        .equiv F7MSK1,  0x000F


;----- C1FMSKSEL2 Bits -----------------------------------------------------
        .equiv F8MSK0,  0x0000
        .equiv F8MSK1,  0x0001
        .equiv F9MSK0,  0x0002
        .equiv F9MSK1,  0x0003
        .equiv F10MSK0, 0x0004
        .equiv F10MSK1, 0x0005
        .equiv F11MSK0, 0x0006
        .equiv F11MSK1, 0x0007
        .equiv F12MSK0, 0x0008
        .equiv F12MSK1, 0x0009
        .equiv F13MSK0, 0x000A
        .equiv F13MSK1, 0x000B
        .equiv F14MSK0, 0x000C
        .equiv F14MSK1, 0x000D
        .equiv F15MSK0, 0x000E
        .equiv F15MSK1, 0x000F


;----- C1BUFPNT1 Bits -----------------------------------------------------
        .equiv F0BP0,   0x0000
        .equiv F0BP1,   0x0001
        .equiv F0BP2,   0x0002
        .equiv F0BP3,   0x0003
        .equiv F1BP0,   0x0004
        .equiv F1BP1,   0x0005
        .equiv F1BP2,   0x0006
        .equiv F1BP3,   0x0007
        .equiv F2BP0,   0x0008
        .equiv F2BP1,   0x0009
        .equiv F2BP2,   0x000A
        .equiv F2BP3,   0x000B
        .equiv F3BP0,   0x000C
        .equiv F3BP1,   0x000D
        .equiv F3BP2,   0x000E
        .equiv F3BP3,   0x000F


;----- C1RXFUL1 Bits -----------------------------------------------------
        .equiv RXFUL0,  0x0000
        .equiv RXFUL1,  0x0001
        .equiv RXFUL2,  0x0002
        .equiv RXFUL3,  0x0003
        .equiv RXFUL4,  0x0004
        .equiv RXFUL5,  0x0005
        .equiv RXFUL6,  0x0006
        .equiv RXFUL7,  0x0007
        .equiv RXFUL8,  0x0008
        .equiv RXFUL9,  0x0009
        .equiv RXFUL10, 0x000A
        .equiv RXFUL11, 0x000B
        .equiv RXFUL12, 0x000C
        .equiv RXFUL13, 0x000D
        .equiv RXFUL14, 0x000E
        .equiv RXFUL15, 0x000F


;----- C1BUFPNT2 Bits -----------------------------------------------------
        .equiv F4BP0,   0x0000
        .equiv F4BP1,   0x0001
        .equiv F4BP2,   0x0002
        .equiv F4BP3,   0x0003
        .equiv F5BP0,   0x0004
        .equiv F5BP1,   0x0005
        .equiv F5BP2,   0x0006
        .equiv F5BP3,   0x0007
        .equiv F6BP0,   0x0008
        .equiv F6BP1,   0x0009
        .equiv F6BP2,   0x000A
        .equiv F6BP3,   0x000B
        .equiv F7BP0,   0x000C
        .equiv F7BP1,   0x000D
        .equiv F7BP2,   0x000E
        .equiv F7BP3,   0x000F


;----- C1RXFUL2 Bits -----------------------------------------------------
        .equiv RXFUL16, 0x0000
        .equiv RXFUL17, 0x0001
        .equiv RXFUL18, 0x0002
        .equiv RXFUL19, 0x0003
        .equiv RXFUL20, 0x0004
        .equiv RXFUL21, 0x0005
        .equiv RXFUL22, 0x0006
        .equiv RXFUL23, 0x0007
        .equiv RXFUL24, 0x0008
        .equiv RXFUL25, 0x0009
        .equiv RXFUL26, 0x000A
        .equiv RXFUL27, 0x000B
        .equiv RXFUL28, 0x000C
        .equiv RXFUL29, 0x000D
        .equiv RXFUL30, 0x000E
        .equiv RXFUL31, 0x000F


;----- C1BUFPNT3 Bits -----------------------------------------------------
        .equiv F8BP0,   0x0000
        .equiv F8BP1,   0x0001
        .equiv F8BP2,   0x0002
        .equiv F8BP3,   0x0003
        .equiv F9BP0,   0x0004
        .equiv F9BP1,   0x0005
        .equiv F9BP2,   0x0006
        .equiv F9BP3,   0x0007
        .equiv F10BP0,  0x0008
        .equiv F10BP1,  0x0009
        .equiv F10BP2,  0x000A
        .equiv F10BP3,  0x000B
        .equiv F11BP0,  0x000C
        .equiv F11BP1,  0x000D
        .equiv F11BP2,  0x000E
        .equiv F11BP3,  0x000F


;----- C1BUFPNT4 Bits -----------------------------------------------------
        .equiv F12BP0,  0x0000
        .equiv F12BP1,  0x0001
        .equiv F12BP2,  0x0002
        .equiv F12BP3,  0x0003
        .equiv F13BP0,  0x0004
        .equiv F13BP1,  0x0005
        .equiv F13BP2,  0x0006
        .equiv F13BP3,  0x0007
        .equiv F14BP0,  0x0008
        .equiv F14BP1,  0x0009
        .equiv F14BP2,  0x000A
        .equiv F14BP3,  0x000B
        .equiv F15BP0,  0x000C
        .equiv F15BP1,  0x000D
        .equiv F15BP2,  0x000E
        .equiv F15BP3,  0x000F


;----- C1RXOVF1 Bits -----------------------------------------------------
        .equiv RXOVF0,  0x0000
        .equiv RXOVF1,  0x0001
        .equiv RXOVF2,  0x0002
        .equiv RXOVF3,  0x0003
        .equiv RXOVF4,  0x0004
        .equiv RXOVF5,  0x0005
        .equiv RXOVF6,  0x0006
        .equiv RXOVF7,  0x0007
        .equiv RXOVF8,  0x0008
        .equiv RXOVF9,  0x0009
        .equiv RXOVF10, 0x000A
        .equiv RXOVF11, 0x000B
        .equiv RXOVF12, 0x000C
        .equiv RXOVF13, 0x000D
        .equiv RXOVF14, 0x000E
        .equiv RXOVF15, 0x000F


;----- C1RXOVF2 Bits -----------------------------------------------------
        .equiv RXOVF16, 0x0000
        .equiv RXOVF17, 0x0001
        .equiv RXOVF18, 0x0002
        .equiv RXOVF19, 0x0003
        .equiv RXOVF20, 0x0004
        .equiv RXOVF21, 0x0005
        .equiv RXOVF22, 0x0006
        .equiv RXOVF23, 0x0007
        .equiv RXOVF24, 0x0008
        .equiv RXOVF25, 0x0009
        .equiv RXOVF26, 0x000A
        .equiv RXOVF27, 0x000B
        .equiv RXOVF28, 0x000C
        .equiv RXOVF29, 0x000D
        .equiv RXOVF30, 0x000E
        .equiv RXOVF31, 0x000F


;----- C1RXM0SID Bits -----------------------------------------------------
        .equiv EID16,   0x0000
        .equiv EID17,   0x0001
        .equiv MIDE,    0x0003
        .equiv SID0,    0x0005
        .equiv SID1,    0x0006
        .equiv SID2,    0x0007
        .equiv SID3,    0x0008
        .equiv SID4,    0x0009
        .equiv SID5,    0x000A
        .equiv SID6,    0x000B
        .equiv SID7,    0x000C
        .equiv SID8,    0x000D
        .equiv SID9,    0x000E
        .equiv SID10,   0x000F



;----- C1TR01CON Bits -----------------------------------------------------
        .equiv RTREN0,  0x0002
        .equiv TXREQ0,  0x0003
        .equiv TXERR0,  0x0004
        .equiv TXLARB0, 0x0005
        .equiv TXABT0,  0x0006
        .equiv TXEN0,   0x0007
        .equiv RTREN1,  0x000A
        .equiv TXREQ1,  0x000B
        .equiv TXERR1,  0x000C
        .equiv TXLARB1, 0x000D
        .equiv TXABT1,  0x000E
        .equiv TXEN1,   0x000F

        .equiv TX0PRI0, 0x0000
        .equiv TX0PRI1, 0x0001
        .equiv TX1PRI0, 0x0008
        .equiv TX1PRI1, 0x0009


;----- C1RXM0EID Bits -----------------------------------------------------
        .equiv EID0,    0x0000
        .equiv EID1,    0x0001
        .equiv EID2,    0x0002
        .equiv EID3,    0x0003
        .equiv EID4,    0x0004
        .equiv EID5,    0x0005
        .equiv EID6,    0x0006
        .equiv EID7,    0x0007
        .equiv EID8,    0x0008
        .equiv EID9,    0x0009
        .equiv EID10,   0x000A
        .equiv EID11,   0x000B
        .equiv EID12,   0x000C
        .equiv EID13,   0x000D
        .equiv EID14,   0x000E
        .equiv EID15,   0x000F



;----- C1TR23CON Bits -----------------------------------------------------
        .equiv RTREN2,  0x0002
        .equiv TXREQ2,  0x0003
        .equiv TXERR2,  0x0004
        .equiv TXLARB2, 0x0005
        .equiv TXABT2,  0x0006
        .equiv TXEN2,   0x0007
        .equiv RTREN3,  0x000A
        .equiv TXREQ3,  0x000B
        .equiv TXERR3,  0x000C
        .equiv TXLARB3, 0x000D
        .equiv TXABT3,  0x000E
        .equiv TXEN3,   0x000F

        .equiv TX2PRI0, 0x0000
        .equiv TX2PRI1, 0x0001
        .equiv TX3PRI0, 0x0008
        .equiv TX3PRI1, 0x0009


;----- C1RXM1SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv MIDE,    0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1TR45CON Bits -----------------------------------------------------
        .equiv RTREN4,  0x0002
        .equiv TXREQ4,  0x0003
        .equiv TXERR4,  0x0004
        .equiv TXLARB4, 0x0005
        .equiv TXABT4,  0x0006
        .equiv TXEN4,   0x0007
        .equiv RTREN5,  0x000A
        .equiv TXREQ5,  0x000B
        .equiv TXERR5,  0x000C
        .equiv TXLARB5, 0x000D
        .equiv TXABT5,  0x000E
        .equiv TXEN5,   0x000F

        .equiv TX4PRI0, 0x0000
        .equiv TX4PRI1, 0x0001
        .equiv TX5PRI0, 0x0008
        .equiv TX5PRI1, 0x0009


;----- C1RXM1EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1TR67CON Bits -----------------------------------------------------
        .equiv RTREN6,  0x0002
        .equiv TXREQ6,  0x0003
        .equiv TXERR6,  0x0004
        .equiv TXLARB6, 0x0005
        .equiv TXABT6,  0x0006
        .equiv TXEN6,   0x0007
        .equiv RTREN7,  0x000A
        .equiv TXREQ7,  0x000B
        .equiv TXERR7,  0x000C
        .equiv TXLARB7, 0x000D
        .equiv TXABT7,  0x000E
        .equiv TXEN7,   0x000F

        .equiv TX6PRI0, 0x0000
        .equiv TX6PRI1, 0x0001
        .equiv TX7PRI0, 0x0008
        .equiv TX7PRI1, 0x0009


;----- C1RXM2SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv MIDE,    0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXM2EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF0SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
        .equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF0EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF1SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF1EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF2SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF2EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF3SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF3EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF4SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF4EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF5SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF5EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF6SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF6EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF7SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF7EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF8SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF8EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF9SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF9EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF10SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF10EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF11SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF11EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF12SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF12EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF13SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF13EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF14SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF14EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- C1RXF15SID Bits -----------------------------------------------------
       ;.equiv EID16,   0x0000
       ;.equiv EID17,   0x0001
       ;.equiv EXIDE,   0x0003
       ;.equiv SID0,    0x0005
       ;.equiv SID1,    0x0006
       ;.equiv SID2,    0x0007
       ;.equiv SID3,    0x0008
       ;.equiv SID4,    0x0009
       ;.equiv SID5,    0x000A
       ;.equiv SID6,    0x000B
       ;.equiv SID7,    0x000C
       ;.equiv SID8,    0x000D
       ;.equiv SID9,    0x000E
       ;.equiv SID10,   0x000F



;----- C1RXF15EID Bits -----------------------------------------------------
       ;.equiv EID0,    0x0000
       ;.equiv EID1,    0x0001
       ;.equiv EID2,    0x0002
       ;.equiv EID3,    0x0003
       ;.equiv EID4,    0x0004
       ;.equiv EID5,    0x0005
       ;.equiv EID6,    0x0006
       ;.equiv EID7,    0x0007
       ;.equiv EID8,    0x0008
       ;.equiv EID9,    0x0009
       ;.equiv EID10,   0x000A
       ;.equiv EID11,   0x000B
       ;.equiv EID12,   0x000C
       ;.equiv EID13,   0x000D
       ;.equiv EID14,   0x000E
       ;.equiv EID15,   0x000F



;----- CRCCON1 Bits -----------------------------------------------------
        .equiv LENDIAN, 0x0003
        .equiv CRCGO,   0x0004
        .equiv CRCISEL, 0x0005
        .equiv CRCMPT,  0x0006
        .equiv CRCFUL,  0x0007
       ;.equiv CSIDL,   0x000D
        .equiv CRCEN,   0x000F

        .equiv VWORD0,  0x0008
        .equiv VWORD1,  0x0009
        .equiv VWORD2,  0x000A
        .equiv VWORD3,  0x000B
        .equiv VWORD4,  0x000C


;----- CRCCON2 Bits -----------------------------------------------------
        .equiv PLEN0,   0x0000
        .equiv PLEN1,   0x0001
        .equiv PLEN2,   0x0002
        .equiv PLEN3,   0x0003
        .equiv PLEN4,   0x0004
        .equiv DWIDTH0, 0x0008
        .equiv DWIDTH1, 0x0009
        .equiv DWIDTH2, 0x000A
        .equiv DWIDTH3, 0x000B
        .equiv DWIDTH4, 0x000C


;----- CRCXORL Bits -----------------------------------------------------
        .equiv X1,      0x0001
        .equiv X2,      0x0002
        .equiv X3,      0x0003
        .equiv X4,      0x0004
        .equiv X5,      0x0005
        .equiv X6,      0x0006
        .equiv X7,      0x0007
        .equiv X8,      0x0008
        .equiv X9,      0x0009
        .equiv X10,     0x000A
        .equiv X11,     0x000B
        .equiv X12,     0x000C
        .equiv X13,     0x000D
        .equiv X14,     0x000E
        .equiv X15,     0x000F


;----- CRCXORH Bits -----------------------------------------------------
        .equiv X16,     0x0000
        .equiv X17,     0x0001
        .equiv X18,     0x0002
        .equiv X19,     0x0003
        .equiv X20,     0x0004
        .equiv X21,     0x0005
        .equiv X22,     0x0006
        .equiv X23,     0x0007
        .equiv X24,     0x0008
        .equiv X25,     0x0009
        .equiv X26,     0x000A
        .equiv X27,     0x000B
        .equiv X28,     0x000C
        .equiv X29,     0x000D
        .equiv X30,     0x000E
        .equiv X31,     0x000F


;----- RPOR0 Bits -----------------------------------------------------
        .equiv RP20R0,  0x0000
        .equiv RP20R1,  0x0001
        .equiv RP20R2,  0x0002
        .equiv RP20R3,  0x0003
        .equiv RP20R4,  0x0004
        .equiv RP20R5,  0x0005
        .equiv RP35R0,  0x0008
        .equiv RP35R1,  0x0009
        .equiv RP35R2,  0x000A
        .equiv RP35R3,  0x000B
        .equiv RP35R4,  0x000C
        .equiv RP35R5,  0x000D


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP36R0,  0x0000
        .equiv RP36R1,  0x0001
        .equiv RP36R2,  0x0002
        .equiv RP36R3,  0x0003
        .equiv RP36R4,  0x0004
        .equiv RP36R5,  0x0005
        .equiv RP37R0,  0x0008
        .equiv RP37R1,  0x0009
        .equiv RP37R2,  0x000A
        .equiv RP37R3,  0x000B
        .equiv RP37R4,  0x000C
        .equiv RP37R5,  0x000D


;----- RPOR2 Bits -----------------------------------------------------
        .equiv RP38R0,  0x0000
        .equiv RP38R1,  0x0001
        .equiv RP38R2,  0x0002
        .equiv RP38R3,  0x0003
        .equiv RP38R4,  0x0004
        .equiv RP38R5,  0x0005
        .equiv RP39R0,  0x0008
        .equiv RP39R1,  0x0009
        .equiv RP39R2,  0x000A
        .equiv RP39R3,  0x000B
        .equiv RP39R4,  0x000C
        .equiv RP39R5,  0x000D


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP40R0,  0x0000
        .equiv RP40R1,  0x0001
        .equiv RP40R2,  0x0002
        .equiv RP40R3,  0x0003
        .equiv RP40R4,  0x0004
        .equiv RP40R5,  0x0005
        .equiv RP41R0,  0x0008
        .equiv RP41R1,  0x0009
        .equiv RP41R2,  0x000A
        .equiv RP41R3,  0x000B
        .equiv RP41R4,  0x000C
        .equiv RP41R5,  0x000D


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP42R0,  0x0000
        .equiv RP42R1,  0x0001
        .equiv RP42R2,  0x0002
        .equiv RP42R3,  0x0003
        .equiv RP42R4,  0x0004
        .equiv RP42R5,  0x0005
        .equiv RP43R0,  0x0008
        .equiv RP43R1,  0x0009
        .equiv RP43R2,  0x000A
        .equiv RP43R3,  0x000B
        .equiv RP43R4,  0x000C
        .equiv RP43R5,  0x000D


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP56R0,  0x0000
        .equiv RP56R1,  0x0001
        .equiv RP56R2,  0x0002
        .equiv RP56R3,  0x0003
        .equiv RP56R4,  0x0004
        .equiv RP56R5,  0x0005


;----- RPINR0 Bits -----------------------------------------------------
        .equiv INT1R0,  0x0008
        .equiv INT1R1,  0x0009
        .equiv INT1R2,  0x000A
        .equiv INT1R3,  0x000B
        .equiv INT1R4,  0x000C
        .equiv INT1R5,  0x000D
        .equiv INT1R6,  0x000E


;----- RPINR1 Bits -----------------------------------------------------
        .equiv INT2R0,  0x0000
        .equiv INT2R1,  0x0001
        .equiv INT2R2,  0x0002
        .equiv INT2R3,  0x0003
        .equiv INT2R4,  0x0004
        .equiv INT2R5,  0x0005
        .equiv INT2R6,  0x0006


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T2CKR5,  0x0005
        .equiv T2CKR6,  0x0006


;----- RPINR7 Bits -----------------------------------------------------
        .equiv IC1R0,   0x0000
        .equiv IC1R1,   0x0001
        .equiv IC1R2,   0x0002
        .equiv IC1R3,   0x0003
        .equiv IC1R4,   0x0004
        .equiv IC1R5,   0x0005
        .equiv IC1R6,   0x0006
        .equiv IC2R0,   0x0008
        .equiv IC2R1,   0x0009
        .equiv IC2R2,   0x000A
        .equiv IC2R3,   0x000B
        .equiv IC2R4,   0x000C
        .equiv IC2R5,   0x000D
        .equiv IC2R6,   0x000E


;----- RPINR8 Bits -----------------------------------------------------
        .equiv IC3R0,   0x0000
        .equiv IC3R1,   0x0001
        .equiv IC3R2,   0x0002
        .equiv IC3R3,   0x0003
        .equiv IC3R4,   0x0004
        .equiv IC3R5,   0x0005
        .equiv IC3R6,   0x0006
        .equiv IC4R0,   0x0008
        .equiv IC4R1,   0x0009
        .equiv IC4R2,   0x000A
        .equiv IC4R3,   0x000B
        .equiv IC4R4,   0x000C
        .equiv IC4R5,   0x000D
        .equiv IC4R6,   0x000E


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004
        .equiv OCFAR5,  0x0005
        .equiv OCFAR6,  0x0006


;----- RPINR12 Bits -----------------------------------------------------
        .equiv FLT1R0,  0x0000
        .equiv FLT1R1,  0x0001
        .equiv FLT1R2,  0x0002
        .equiv FLT1R3,  0x0003
        .equiv FLT1R4,  0x0004
        .equiv FLT1R5,  0x0005
        .equiv FLT1R6,  0x0006
        .equiv FLT2R0,  0x0008
        .equiv FLT2R1,  0x0009
        .equiv FLT2R2,  0x000A
        .equiv FLT2R3,  0x000B
        .equiv FLT2R4,  0x000C
        .equiv FLT2R5,  0x000D
        .equiv FLT2R6,  0x000E


;----- RPINR14 Bits -----------------------------------------------------
        .equiv QEA1R0,  0x0000
        .equiv QEA1R1,  0x0001
        .equiv QEA1R2,  0x0002
        .equiv QEA1R3,  0x0003
        .equiv QEA1R4,  0x0004
        .equiv QEA1R5,  0x0005
        .equiv QEA1R6,  0x0006
        .equiv QEB1R0,  0x0008
        .equiv QEB1R1,  0x0009
        .equiv QEB1R2,  0x000A
        .equiv QEB1R3,  0x000B
        .equiv QEB1R4,  0x000C
        .equiv QEB1R5,  0x000D
        .equiv QEB1R6,  0x000E


;----- RPINR15 Bits -----------------------------------------------------
        .equiv INDX1R0, 0x0000
        .equiv INDX1R1, 0x0001
        .equiv INDX1R2, 0x0002
        .equiv INDX1R3, 0x0003
        .equiv INDX1R4, 0x0004
        .equiv INDX1R5, 0x0005
        .equiv INDX1R6, 0x0006
        .equiv HOME1R0, 0x0008
        .equiv HOME1R1, 0x0009
        .equiv HOME1R2, 0x000A
        .equiv HOME1R3, 0x000B
        .equiv HOME1R4, 0x000C
        .equiv HOME1R5, 0x000D
        .equiv HOME1R6, 0x000E


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1RXR5,  0x0005
        .equiv U1RXR6,  0x0006


;----- RPINR19 Bits -----------------------------------------------------
        .equiv U2RXR0,  0x0000
        .equiv U2RXR1,  0x0001
        .equiv U2RXR2,  0x0002
        .equiv U2RXR3,  0x0003
        .equiv U2RXR4,  0x0004
        .equiv U2RXR5,  0x0005
        .equiv U2RXR6,  0x0006


;----- RPINR22 Bits -----------------------------------------------------
        .equiv SDI2R0,  0x0000
        .equiv SDI2R1,  0x0001
        .equiv SDI2R2,  0x0002
        .equiv SDI2R3,  0x0003
        .equiv SDI2R4,  0x0004
        .equiv SDI2R5,  0x0005
        .equiv SDI2R6,  0x0006
        .equiv SCK2R0,  0x0008
        .equiv SCK2R1,  0x0009
        .equiv SCK2R2,  0x000A
        .equiv SCK2R3,  0x000B
        .equiv SCK2R4,  0x000C
        .equiv SCK2R5,  0x000D
        .equiv SCK2R6,  0x000E


;----- RPINR23 Bits -----------------------------------------------------
        .equiv SS2R0,   0x0000
        .equiv SS2R1,   0x0001
        .equiv SS2R2,   0x0002
        .equiv SS2R3,   0x0003
        .equiv SS2R4,   0x0004
        .equiv SS2R5,   0x0005
        .equiv SS2R6,   0x0006


;----- RPINR26 Bits -----------------------------------------------------
        .equiv C1RXR0,  0x0000
        .equiv C1RXR1,  0x0001
        .equiv C1RXR2,  0x0002
        .equiv C1RXR3,  0x0003
        .equiv C1RXR4,  0x0004
        .equiv C1RXR5,  0x0005
        .equiv C1RXR6,  0x0006


;----- RPINR37 Bits -----------------------------------------------------
        .equiv SYNCI1R0, 0x0008
        .equiv SYNCI1R1, 0x0009
        .equiv SYNCI1R2, 0x000A
        .equiv SYNCI1R3, 0x000B
        .equiv SYNCI1R4, 0x000C
        .equiv SYNCI1R5, 0x000D
        .equiv SYNCI1R6, 0x000E


;----- RPINR38 Bits -----------------------------------------------------
        .equiv DTCMP1R0, 0x0008
        .equiv DTCMP1R1, 0x0009
        .equiv DTCMP1R2, 0x000A
        .equiv DTCMP1R3, 0x000B
        .equiv DTCMP1R4, 0x000C
        .equiv DTCMP1R5, 0x000D
        .equiv DTCMP1R6, 0x000E


;----- RPINR39 Bits -----------------------------------------------------
        .equiv DTCMP2R0, 0x0000
        .equiv DTCMP2R1, 0x0001
        .equiv DTCMP2R2, 0x0002
        .equiv DTCMP2R3, 0x0003
        .equiv DTCMP2R4, 0x0004
        .equiv DTCMP2R5, 0x0005
        .equiv DTCMP2R6, 0x0006
        .equiv DTCMP3R0, 0x0008
        .equiv DTCMP3R1, 0x0009
        .equiv DTCMP3R2, 0x000A
        .equiv DTCMP3R3, 0x000B
        .equiv DTCMP3R4, 0x000C
        .equiv DTCMP3R5, 0x000D
        .equiv DTCMP3R6, 0x000E


;----- NVMCON Bits -----------------------------------------------------
        .equiv NVMSIDL, 0x000C
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003


;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv BOR,     0x0001
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv VREGS,   0x0008
        .equiv CM,      0x0009
        .equiv VREGSF,  0x000B
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
        .equiv IOLOCK,  0x0006
        .equiv CLKLOCK, 0x0007

        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- CLKDIV Bits -----------------------------------------------------
        .equiv DOZEN,   0x000B
        .equiv ROI,     0x000F

        .equiv PLLPRE0, 0x0000
        .equiv PLLPRE1, 0x0001
        .equiv PLLPRE2, 0x0002
        .equiv PLLPRE3, 0x0003
        .equiv PLLPRE4, 0x0004
        .equiv PLLPOST0, 0x0006
        .equiv PLLPOST1, 0x0007
        .equiv FRCDIV0, 0x0008
        .equiv FRCDIV1, 0x0009
        .equiv FRCDIV2, 0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


;----- PLLFBD Bits -----------------------------------------------------
        .equiv PLLDIV0, 0x0000
        .equiv PLLDIV1, 0x0001
        .equiv PLLDIV2, 0x0002
        .equiv PLLDIV3, 0x0003
        .equiv PLLDIV4, 0x0004
        .equiv PLLDIV5, 0x0005
        .equiv PLLDIV6, 0x0006
        .equiv PLLDIV7, 0x0007
        .equiv PLLDIV8, 0x0008


;----- OSCTUN Bits -----------------------------------------------------
        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003
        .equiv TUN4,    0x0004
        .equiv TUN5,    0x0005


;----- REFOCON Bits -----------------------------------------------------
        .equiv ROSEL,   0x000C
        .equiv ROSSLP,  0x000D
        .equiv ROON,    0x000F

        .equiv RODIV0,  0x0008
        .equiv RODIV1,  0x0009
        .equiv RODIV2,  0x000A
        .equiv RODIV3,  0x000B


;----- PMD1 Bits -----------------------------------------------------
        .equiv AD1MD,   0x0000
        .equiv C1MD,    0x0001
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv PWMMD,   0x0009
        .equiv QEI1MD,  0x000A
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D
        .equiv T4MD,    0x000E
        .equiv T5MD,    0x000F


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv OC2MD,   0x0001
        .equiv OC3MD,   0x0002
        .equiv OC4MD,   0x0003
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B


;----- PMD3 Bits -----------------------------------------------------
        .equiv I2C2MD,  0x0001
        .equiv CRCMD,   0x0007
        .equiv CMPMD,   0x000A


;----- PMD4 Bits -----------------------------------------------------
        .equiv CTMUMD,  0x0002
        .equiv REFOMD,  0x0003


;----- PMD6 Bits -----------------------------------------------------
        .equiv PWM1MD,  0x0008
        .equiv PWM2MD,  0x0009
        .equiv PWM3MD,  0x000A


;----- PMD7 Bits -----------------------------------------------------
        .equiv PTGMD,   0x0003
        .equiv DMA0MD,  0x0004

        .equiv DMA1MD,  0x0004
        .equiv DMA5MD,  0x0005
        .equiv DMA9MD,  0x0006
        .equiv DMA13MD, 0x0007

        .equiv DMA2MD,  0x0004
        .equiv DMA6MD,  0x0005
        .equiv DMA10MD, 0x0006
        .equiv DMA14MD, 0x0007

        .equiv DMA3MD,  0x0004
        .equiv DMA7MD,  0x0005
        .equiv DMA11MD, 0x0006


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv DMA0IF,  0x0004
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPI1EIF, 0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D
        .equiv DMA1IF,  0x000E


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv DMA2IF,  0x0008
        .equiv OC3IF,   0x0009
        .equiv OC4IF,   0x000A
        .equiv T4IF,    0x000B
        .equiv T5IF,    0x000C
        .equiv INT2IF,  0x000D
        .equiv U2RXIF,  0x000E
        .equiv U2TXIF,  0x000F


;----- IFS2 Bits -----------------------------------------------------
        .equiv SPI2EIF, 0x0000
        .equiv SPI2IF,  0x0001
        .equiv C1RXIF,  0x0002
        .equiv C1IF,    0x0003
        .equiv DMA3IF,  0x0004
        .equiv IC3IF,   0x0005
        .equiv IC4IF,   0x0006


;----- IFS3 Bits -----------------------------------------------------
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv PSEMIF,  0x0009
        .equiv QEI1IF,  0x000A


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv U2EIF,   0x0002
        .equiv CRCIF,   0x0003
        .equiv C1TXIF,  0x0006
        .equiv CTMUIF,  0x000D


;----- IFS5 Bits -----------------------------------------------------
        .equiv PWM1IF,  0x000E
        .equiv PWM2IF,  0x000F


;----- IFS6 Bits -----------------------------------------------------
        .equiv PWM3IF,  0x0000


;----- IFS8 Bits -----------------------------------------------------
        .equiv ICDIF,   0x000E
        .equiv JTAGIF,  0x000F


;----- IFS9 Bits -----------------------------------------------------
        .equiv PTGSTEPIF, 0x0001
        .equiv PTGWDTIF, 0x0002
        .equiv PTG0IF,  0x0003
        .equiv PTG1IF,  0x0004
        .equiv PTG2IF,  0x0005
        .equiv PTG3IF,  0x0006


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv DMA0IE,  0x0004
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPI1EIE, 0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D
        .equiv DMA1IE,  0x000E


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv DMA2IE,  0x0008
        .equiv OC3IE,   0x0009
        .equiv OC4IE,   0x000A
        .equiv T4IE,    0x000B
        .equiv T5IE,    0x000C
        .equiv INT2IE,  0x000D
        .equiv U2RXIE,  0x000E
        .equiv U2TXIE,  0x000F


;----- IEC2 Bits -----------------------------------------------------
        .equiv SPI2EIE, 0x0000
        .equiv SPI2IE,  0x0001
        .equiv C1RXIE,  0x0002
        .equiv C1IE,    0x0003
        .equiv DMA3IE,  0x0004
        .equiv IC3IE,   0x0005
        .equiv IC4IE,   0x0006


;----- IEC3 Bits -----------------------------------------------------
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv PSEMIE,  0x0009
        .equiv QEI1IE,  0x000A


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv U2EIE,   0x0002
        .equiv CRCIE,   0x0003
        .equiv C1TXIE,  0x0006
        .equiv CTMUIE,  0x000D


;----- IEC5 Bits -----------------------------------------------------
        .equiv PWM1IE,  0x000E
        .equiv PWM2IE,  0x000F


;----- IEC6 Bits -----------------------------------------------------
        .equiv PWM3IE,  0x0000


;----- IEC8 Bits -----------------------------------------------------
       ;.equiv ICDIF,   0x000E
        .equiv JTAGIE,  0x000F


;----- IEC9 Bits -----------------------------------------------------
        .equiv PTGSTEPIE, 0x0001
        .equiv PTGWDTIE, 0x0002
        .equiv PTG0IE,  0x0003
        .equiv PTG1IE,  0x0004
        .equiv PTG2IE,  0x0005
        .equiv PTG3IE,  0x0006


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv IC1IP0,  0x0004
        .equiv IC1IP1,  0x0005
        .equiv IC1IP2,  0x0006
        .equiv OC1IP0,  0x0008
        .equiv OC1IP1,  0x0009
        .equiv OC1IP2,  0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv DMA0IP0, 0x0000
        .equiv DMA0IP1, 0x0001
        .equiv DMA0IP2, 0x0002
        .equiv IC2IP0,  0x0004
        .equiv IC2IP1,  0x0005
        .equiv IC2IP2,  0x0006
        .equiv OC2IP0,  0x0008
        .equiv OC2IP1,  0x0009
        .equiv OC2IP2,  0x000A
        .equiv T2IP0,   0x000C
        .equiv T2IP1,   0x000D
        .equiv T2IP2,   0x000E


;----- IPC2 Bits -----------------------------------------------------
        .equiv T3IP0,   0x0000
        .equiv T3IP1,   0x0001
        .equiv T3IP2,   0x0002
        .equiv SPI1EIP0, 0x0004
        .equiv SPI1EIP1, 0x0005
        .equiv SPI1EIP2, 0x0006
        .equiv SPI1IP0, 0x0008
        .equiv SPI1IP1, 0x0009
        .equiv SPI1IP2, 0x000A
        .equiv U1RXIP0, 0x000C
        .equiv U1RXIP1, 0x000D
        .equiv U1RXIP2, 0x000E


;----- IPC3 Bits -----------------------------------------------------
        .equiv U1TXIP0, 0x0000
        .equiv U1TXIP1, 0x0001
        .equiv U1TXIP2, 0x0002
        .equiv AD1IP0,  0x0004
        .equiv AD1IP1,  0x0005
        .equiv AD1IP2,  0x0006
        .equiv DMA1IP0, 0x0008
        .equiv DMA1IP1, 0x0009
        .equiv DMA1IP2, 0x000A
        .equiv NVMIP0,  0x000C
        .equiv NVMIP1,  0x000D
        .equiv NVMIP2,  0x000E


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006
        .equiv CMIP0,   0x0008
        .equiv CMIP1,   0x0009
        .equiv CMIP2,   0x000A
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002
        .equiv AD2IP0,  0x0004
        .equiv AD2IP1,  0x0005
        .equiv AD2IP2,  0x0006
        .equiv IC7IP0,  0x0008
        .equiv IC7IP1,  0x0009
        .equiv IC7IP2,  0x000A
        .equiv IC8IP0,  0x000C
        .equiv IC8IP1,  0x000D
        .equiv IC8IP2,  0x000E


;----- IPC6 Bits -----------------------------------------------------
        .equiv DMA2IP0, 0x0000
        .equiv DMA2IP1, 0x0001
        .equiv DMA2IP2, 0x0002
        .equiv OC3IP0,  0x0004
        .equiv OC3IP1,  0x0005
        .equiv OC3IP2,  0x0006
        .equiv OC4IP0,  0x0008
        .equiv OC4IP1,  0x0009
        .equiv OC4IP2,  0x000A
        .equiv T4IP0,   0x000C
        .equiv T4IP1,   0x000D
        .equiv T4IP2,   0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv T5IP0,   0x0000
        .equiv T5IP1,   0x0001
        .equiv T5IP2,   0x0002
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006
        .equiv U2RXIP0, 0x0008
        .equiv U2RXIP1, 0x0009
        .equiv U2RXIP2, 0x000A
        .equiv U2TXIP0, 0x000C
        .equiv U2TXIP1, 0x000D
        .equiv U2TXIP2, 0x000E


;----- IPC8 Bits -----------------------------------------------------
        .equiv SPI2EIP0, 0x0000
        .equiv SPI2EIP1, 0x0001
        .equiv SPI2EIP2, 0x0002
        .equiv SPI2IP0, 0x0004
        .equiv SPI2IP1, 0x0005
        .equiv SPI2IP2, 0x0006
        .equiv C1RXIP0, 0x0008
        .equiv C1RXIP1, 0x0009
        .equiv C1RXIP2, 0x000A
        .equiv C1IP0,   0x000C
        .equiv C1IP1,   0x000D
        .equiv C1IP2,   0x000E


;----- IPC9 Bits -----------------------------------------------------
        .equiv DMA3IP0, 0x0000
        .equiv DMA3IP1, 0x0001
        .equiv DMA3IP2, 0x0002
        .equiv IC3IP0,  0x0004
        .equiv IC3IP1,  0x0005
        .equiv IC3IP2,  0x0006
        .equiv IC4IP0,  0x0008
        .equiv IC4IP1,  0x0009
        .equiv IC4IP2,  0x000A
        .equiv IC5IP0,  0x000C
        .equiv IC5IP1,  0x000D
        .equiv IC5IP2,  0x000E


;----- IPC12 Bits -----------------------------------------------------
        .equiv T7IP0,   0x0000
        .equiv T7IP1,   0x0001
        .equiv T7IP2,   0x0002
        .equiv SI2C2IP0, 0x0004
        .equiv SI2C2IP1, 0x0005
        .equiv SI2C2IP2, 0x0006
        .equiv MI2C2IP0, 0x0008
        .equiv MI2C2IP1, 0x0009
        .equiv MI2C2IP2, 0x000A
        .equiv T8IP0,   0x000C
        .equiv T8IP1,   0x000D
        .equiv T8IP2,   0x000E


;----- IPC14 Bits -----------------------------------------------------
        .equiv C2IP0,   0x0000
        .equiv C2IP1,   0x0001
        .equiv C2IP2,   0x0002
        .equiv PSEMIP0, 0x0004
        .equiv PSEMIP1, 0x0005
        .equiv PSEMIP2, 0x0006
        .equiv QEI1IP0, 0x0008
        .equiv QEI1IP1, 0x0009
        .equiv QEI1IP2, 0x000A
        .equiv DCIEIP0, 0x000C
        .equiv DCIEIP1, 0x000D
        .equiv DCIEIP2, 0x000E


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1EIP0,  0x0004
        .equiv U1EIP1,  0x0005
        .equiv U1EIP2,  0x0006
        .equiv U2EIP0,  0x0008
        .equiv U2EIP1,  0x0009
        .equiv U2EIP2,  0x000A
        .equiv CRCIP0,  0x000C
        .equiv CRCIP1,  0x000D
        .equiv CRCIP2,  0x000E


;----- IPC17 Bits -----------------------------------------------------
        .equiv DMA6IP0, 0x0000
        .equiv DMA6IP1, 0x0001
        .equiv DMA6IP2, 0x0002
        .equiv DMA7IP0, 0x0004
        .equiv DMA7IP1, 0x0005
        .equiv DMA7IP2, 0x0006
        .equiv C1TXIP0, 0x0008
        .equiv C1TXIP1, 0x0009
        .equiv C1TXIP2, 0x000A
        .equiv C2TXIP0, 0x000C
        .equiv C2TXIP1, 0x000D
        .equiv C2TXIP2, 0x000E


;----- IPC23 Bits -----------------------------------------------------
        .equiv OC9IP0,  0x0000
        .equiv OC9IP1,  0x0001
        .equiv OC9IP2,  0x0002
        .equiv IC9IP0,  0x0004
        .equiv IC9IP1,  0x0005
        .equiv IC9IP2,  0x0006
        .equiv PWM1IP0, 0x0008
        .equiv PWM1IP1, 0x0009
        .equiv PWM1IP2, 0x000A
        .equiv PWM2IP0, 0x000C
        .equiv PWM2IP1, 0x000D
        .equiv PWM2IP2, 0x000E


;----- IPC24 Bits -----------------------------------------------------
        .equiv PWM3IP0, 0x0000
        .equiv PWM3IP1, 0x0001
        .equiv PWM3IP2, 0x0002
        .equiv PWM4IP0, 0x0004
        .equiv PWM4IP1, 0x0005
        .equiv PWM4IP2, 0x0006
        .equiv PWM5IP0, 0x0008
        .equiv PWM5IP1, 0x0009
        .equiv PWM5IP2, 0x000A
        .equiv PWM6IP0, 0x000C
        .equiv PWM6IP1, 0x000D
        .equiv PWM6IP2, 0x000E


;----- IPC35 Bits -----------------------------------------------------
        .equiv OC16IP0, 0x0000
        .equiv OC16IP1, 0x0001
        .equiv OC16IP2, 0x0002
        .equiv IC16IP0, 0x0004
        .equiv IC16IP1, 0x0005
        .equiv IC16IP2, 0x0006
        .equiv ICDIP0,  0x0008
        .equiv ICDIP1,  0x0009
        .equiv ICDIP2,  0x000A


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
        .equiv DMACERR, 0x0005
        .equiv DIV0ERR, 0x0006
        .equiv SFTACERR, 0x0007
        .equiv COVTE,   0x0008
        .equiv OVBTE,   0x0009
        .equiv OVATE,   0x000A
        .equiv COVBERR, 0x000B
        .equiv COVAERR, 0x000C
        .equiv OVBERR,  0x000D
        .equiv OVAERR,  0x000E
        .equiv NSTDIS,  0x000F


;----- INTCON2 Bits -----------------------------------------------------
        .equiv INT0EP,  0x0000
        .equiv INT1EP,  0x0001
        .equiv INT2EP,  0x0002
        .equiv SWTRAP,  0x000D
        .equiv DISI,    0x000E
        .equiv GIE,     0x000F


;----- INTCON3 Bits -----------------------------------------------------
        .equiv DOOVR,   0x0004
        .equiv DAE,     0x0005


;----- INTCON4 Bits -----------------------------------------------------
        .equiv SGHT,    0x0000


;----- INTTREG Bits -----------------------------------------------------
        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
        .equiv VECNUM6, 0x0006
        .equiv VECNUM7, 0x0007
        .equiv ILR0,    0x0008
        .equiv ILR1,    0x0009
        .equiv ILR2,    0x000A
        .equiv ILR3,    0x000B


;----- OC1CON1 Bits -----------------------------------------------------
        .equiv TRIGMODE, 0x0003
        .equiv OCFLTA,  0x0004
        .equiv OCFLTB,  0x0005
        .equiv ENFLTA,  0x0007
        .equiv ENFLTB,  0x0008
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C

        .equiv OCFLT0,  0x0004
        .equiv OCFLT1,  0x0005
        .equiv ENFLT0,  0x0007
        .equiv ENFLT1,  0x0008


;----- OC1CON2 Bits -----------------------------------------------------
        .equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
        .equiv OCTRIG,  0x0007
        .equiv OC32,    0x0008
        .equiv OCINV,   0x000C
        .equiv FLTTRIEN, 0x000D
        .equiv FLTOUT,  0x000E
        .equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
        .equiv FLTMODE, 0x000E


;----- OC2CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008


;----- OC2CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv FLTMODE, 0x000E


;----- OC3CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008


;----- OC3CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv FLTMODE, 0x000E


;----- OC4CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008


;----- OC4CON2 Bits -----------------------------------------------------
       ;.equiv OCTRIS,  0x0005
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv OCTRIG,  0x0007
       ;.equiv OC32,    0x0008
       ;.equiv OCINV,   0x000C
       ;.equiv FLTTRIEN, 0x000D
       ;.equiv FLTOUT,  0x000E
       ;.equiv FLTMD,   0x000F

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004
       ;.equiv FLTMODE, 0x000E


;----- CMSTAT Bits -----------------------------------------------------
        .equiv C1OUT,   0x0000
        .equiv C2OUT,   0x0001
        .equiv C3OUT,   0x0002
        .equiv C4OUT,   0x0003
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv C4EVT,   0x000B
        .equiv CMSIDL,  0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0004
        .equiv CVRR,    0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007
        .equiv VREFSEL, 0x000A
        .equiv CVR2OE,  0x000E

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv CVR1OE,  0x0006
        .equiv BGSEL0,  0x0008
        .equiv BGSEL1,  0x0009


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
        .equiv OPMODE_CM1CON, 0x000A
        .equiv CPOL,    0x000D
        .equiv COE,     0x000E
        .equiv CON,     0x000F

        .equiv CCH0,    0x0000
        .equiv CCH1,    0x0001
        .equiv EVPOL0,  0x0006
        .equiv EVPOL1,  0x0007
        .equiv CEN,     0x000F


;----- CM1MSKSRC Bits -----------------------------------------------------
        .equiv SELSRCA0, 0x0000
        .equiv SELSRCA1, 0x0001
        .equiv SELSRCA2, 0x0002
        .equiv SELSRCA3, 0x0003
        .equiv SELSRCB0, 0x0004
        .equiv SELSRCB1, 0x0005
        .equiv SELSRCB2, 0x0006
        .equiv SELSRCB3, 0x0007
        .equiv SELSRCC0, 0x0008
        .equiv SELSRCC1, 0x0009
        .equiv SELSRCC2, 0x000A
        .equiv SELSRCC3, 0x000B


;----- CM1MSKCON Bits -----------------------------------------------------
        .equiv AANEN,   0x0000
        .equiv AAEN,    0x0001
        .equiv ABNEN,   0x0002
        .equiv ABEN,    0x0003
        .equiv ACNEN,   0x0004
        .equiv ACEN,    0x0005
        .equiv PAGS,    0x0006
        .equiv NAGS,    0x0007
        .equiv OANEN,   0x0008
        .equiv OAEN,    0x0009
        .equiv OBNEN,   0x000A
        .equiv OBEN,    0x000B
        .equiv OCNEN,   0x000C
        .equiv OCEN,    0x000D
        .equiv HLMS,    0x000F


;----- CM1FLTR Bits -----------------------------------------------------
        .equiv CFLTREN, 0x0003

        .equiv CFDIV0,  0x0000
        .equiv CFDIV1,  0x0001
        .equiv CFDIV2,  0x0002
        .equiv CFSEL0,  0x0004
        .equiv CFSEL1,  0x0005
        .equiv CFSEL2,  0x0006


;----- CM2CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
        .equiv OPMODE_CM2CON, 0x000A
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


;----- CM2MSKSRC Bits -----------------------------------------------------
       ;.equiv SELSRCA0, 0x0000
       ;.equiv SELSRCA1, 0x0001
       ;.equiv SELSRCA2, 0x0002
       ;.equiv SELSRCA3, 0x0003
       ;.equiv SELSRCB0, 0x0004
       ;.equiv SELSRCB1, 0x0005
       ;.equiv SELSRCB2, 0x0006
       ;.equiv SELSRCB3, 0x0007
       ;.equiv SELSRCC0, 0x0008
       ;.equiv SELSRCC1, 0x0009
       ;.equiv SELSRCC2, 0x000A
       ;.equiv SELSRCC3, 0x000B


;----- CM2MSKCON Bits -----------------------------------------------------
       ;.equiv AANEN,   0x0000
       ;.equiv AAEN,    0x0001
       ;.equiv ABNEN,   0x0002
       ;.equiv ABEN,    0x0003
       ;.equiv ACNEN,   0x0004
       ;.equiv ACEN,    0x0005
       ;.equiv PAGS,    0x0006
       ;.equiv NAGS,    0x0007
       ;.equiv OANEN,   0x0008
       ;.equiv OAEN,    0x0009
       ;.equiv OBNEN,   0x000A
       ;.equiv OBEN,    0x000B
       ;.equiv OCNEN,   0x000C
       ;.equiv OCEN,    0x000D
       ;.equiv HLMS,    0x000F


;----- CM2FLTR Bits -----------------------------------------------------
       ;.equiv CFLTREN, 0x0003

       ;.equiv CFDIV0,  0x0000
       ;.equiv CFDIV1,  0x0001
       ;.equiv CFDIV2,  0x0002
       ;.equiv CFSEL0,  0x0004
       ;.equiv CFSEL1,  0x0005
       ;.equiv CFSEL2,  0x0006


;----- CM3CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
        .equiv OPMODE_CM3CON, 0x000A
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


;----- CM3MSKSRC Bits -----------------------------------------------------
       ;.equiv SELSRCA0, 0x0000
       ;.equiv SELSRCA1, 0x0001
       ;.equiv SELSRCA2, 0x0002
       ;.equiv SELSRCA3, 0x0003
       ;.equiv SELSRCB0, 0x0004
       ;.equiv SELSRCB1, 0x0005
       ;.equiv SELSRCB2, 0x0006
       ;.equiv SELSRCB3, 0x0007
       ;.equiv SELSRCC0, 0x0008
       ;.equiv SELSRCC1, 0x0009
       ;.equiv SELSRCC2, 0x000A
       ;.equiv SELSRCC3, 0x000B


;----- CM3MSKCON Bits -----------------------------------------------------
       ;.equiv AANEN,   0x0000
       ;.equiv AAEN,    0x0001
       ;.equiv ABNEN,   0x0002
       ;.equiv ABEN,    0x0003
       ;.equiv ACNEN,   0x0004
       ;.equiv ACEN,    0x0005
       ;.equiv PAGS,    0x0006
       ;.equiv NAGS,    0x0007
       ;.equiv OANEN,   0x0008
       ;.equiv OAEN,    0x0009
       ;.equiv OBNEN,   0x000A
       ;.equiv OBEN,    0x000B
       ;.equiv OCNEN,   0x000C
       ;.equiv OCEN,    0x000D
       ;.equiv HLMS,    0x000F


;----- CM3FLTR Bits -----------------------------------------------------
       ;.equiv CFLTREN, 0x0003

       ;.equiv CFDIV0,  0x0000
       ;.equiv CFDIV1,  0x0001
       ;.equiv CFDIV2,  0x0002
       ;.equiv CFSEL0,  0x0004
       ;.equiv CFSEL1,  0x0005
       ;.equiv CFSEL2,  0x0006


;----- CM4CON Bits -----------------------------------------------------
       ;.equiv CREF,    0x0004
       ;.equiv COUT,    0x0008
       ;.equiv CEVT,    0x0009
       ;.equiv CPOL,    0x000D
       ;.equiv COE,     0x000E
       ;.equiv CON,     0x000F

       ;.equiv CCH0,    0x0000
       ;.equiv CCH1,    0x0001
       ;.equiv EVPOL0,  0x0006
       ;.equiv EVPOL1,  0x0007
       ;.equiv CEN,     0x000F


;----- CM4MSKSRC Bits -----------------------------------------------------
       ;.equiv SELSRCA0, 0x0000
       ;.equiv SELSRCA1, 0x0001
       ;.equiv SELSRCA2, 0x0002
       ;.equiv SELSRCA3, 0x0003
       ;.equiv SELSRCB0, 0x0004
       ;.equiv SELSRCB1, 0x0005
       ;.equiv SELSRCB2, 0x0006
       ;.equiv SELSRCB3, 0x0007
       ;.equiv SELSRCC0, 0x0008
       ;.equiv SELSRCC1, 0x0009
       ;.equiv SELSRCC2, 0x000A
       ;.equiv SELSRCC3, 0x000B


;----- CM4MSKCON Bits -----------------------------------------------------
       ;.equiv AANEN,   0x0000
       ;.equiv AAEN,    0x0001
       ;.equiv ABNEN,   0x0002
       ;.equiv ABEN,    0x0003
       ;.equiv ACNEN,   0x0004
       ;.equiv ACEN,    0x0005
       ;.equiv PAGS,    0x0006
       ;.equiv NAGS,    0x0007
       ;.equiv OANEN,   0x0008
       ;.equiv OAEN,    0x0009
       ;.equiv OBNEN,   0x000A
       ;.equiv OBEN,    0x000B
       ;.equiv OCNEN,   0x000C
       ;.equiv OCEN,    0x000D
       ;.equiv HLMS,    0x000F


;----- CM4FLTR Bits -----------------------------------------------------
       ;.equiv CFLTREN, 0x0003

       ;.equiv CFDIV0,  0x0000
       ;.equiv CFDIV1,  0x0001
       ;.equiv CFDIV2,  0x0002
       ;.equiv CFSEL0,  0x0004
       ;.equiv CFSEL1,  0x0005
       ;.equiv CFSEL2,  0x0006


;----- PTGCST Bits -----------------------------------------------------
        .equiv PTGWTO,  0x0006
        .equiv PTGSTRT, 0x0007
        .equiv PTGIVIS, 0x0008
        .equiv PTGSWT,  0x000A
        .equiv PTGTOGL, 0x000C
        .equiv PTGSIDL, 0x000D
        .equiv PTGEN,   0x000F

       ;.equiv SSRC0,   0x0005
       ;.equiv SSRC1,   0x0006
       ;.equiv SSRC2,   0x0007
       ;.equiv FORM0,   0x0008
       ;.equiv FORM1,   0x0009


;----- PTGBTE Bits -----------------------------------------------------
        .equiv OC1TSS,  0x0000
        .equiv OC2TSS,  0x0001
        .equiv OC3TSS,  0x0002
        .equiv OC4TSS,  0x0003
        .equiv OC1CS,   0x0004
        .equiv OC2CS,   0x0005
        .equiv OC3CS,   0x0006
        .equiv OC4CS,   0x0007
        .equiv IC1TSS,  0x0008
        .equiv IC2TSS,  0x0009
        .equiv IC3TSS,  0x000A
        .equiv IC4TSS,  0x000B
        .equiv ADCTS1,  0x000C
        .equiv ADCTS2,  0x000D
        .equiv ADCTS3,  0x000E
        .equiv ADCTS4,  0x000F


;----- DMA0CON Bits -----------------------------------------------------
        .equiv NULLW,   0x000B
        .equiv HALF,    0x000C
        .equiv DIR,     0x000D
        .equiv SIZE,    0x000E
        .equiv CHEN,    0x000F

        .equiv MODE0,   0x0000
        .equiv MODE1,   0x0001
        .equiv AMODE0,  0x0004
        .equiv AMODE1,  0x0005


;----- DMA0REQ Bits -----------------------------------------------------
        .equiv FORCE,   0x000F

        .equiv IRQSEL0, 0x0000
        .equiv IRQSEL1, 0x0001
        .equiv IRQSEL2, 0x0002
        .equiv IRQSEL3, 0x0003
        .equiv IRQSEL4, 0x0004
        .equiv IRQSEL5, 0x0005
        .equiv IRQSEL6, 0x0006
        .equiv IRQSEL7, 0x0007


;----- DMA1CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA1REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA2CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA2REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA3CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
       ;.equiv DIR,     0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

       ;.equiv MODE0,   0x0000
       ;.equiv MODE1,   0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA3REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMAPWC Bits -----------------------------------------------------
        .equiv PWCOL0,  0x0000
        .equiv PWCOL1,  0x0001
        .equiv PWCOL2,  0x0002
        .equiv PWCOL3,  0x0003


;----- DMARQC Bits -----------------------------------------------------
        .equiv RQCOL0,  0x0000
        .equiv RQCOL1,  0x0001
        .equiv RQCOL2,  0x0002
        .equiv RQCOL3,  0x0003


;----- DMAPPS Bits -----------------------------------------------------
        .equiv PPST0,   0x0000
        .equiv PPST1,   0x0001
        .equiv PPST2,   0x0002
        .equiv PPST3,   0x0003


;----- DMALCA Bits -----------------------------------------------------
        .equiv LSTCH0,  0x0000
        .equiv LSTCH1,  0x0001
        .equiv LSTCH2,  0x0002
        .equiv LSTCH3,  0x0003


;----- PTCON Bits -----------------------------------------------------
        .equiv SYNCEN,  0x0007
        .equiv SYNCOEN, 0x0008
        .equiv SYNCPOL, 0x0009
        .equiv EIPU,    0x000A
        .equiv SEIEN,   0x000B
        .equiv SESTAT,  0x000C
        .equiv PTSIDL,  0x000D
        .equiv PTEN,    0x000F

        .equiv SEVTPS0, 0x0000
        .equiv SEVTPS1, 0x0001
        .equiv SEVTPS2, 0x0002
        .equiv SEVTPS3, 0x0003
        .equiv SYNCSRC0, 0x0004
        .equiv SYNCSRC1, 0x0005
        .equiv SYNCSRC2, 0x0006


;----- PTCON2 Bits -----------------------------------------------------
        .equiv PCLKDIV0, 0x0000
        .equiv PCLKDIV1, 0x0001
        .equiv PCLKDIV2, 0x0002


;----- CHOP Bits -----------------------------------------------------
        .equiv CHPCLKEN, 0x000F

        .equiv CHOPCLK0, 0x0000
        .equiv CHOPCLK1, 0x0001
        .equiv CHOPCLK2, 0x0002
        .equiv CHOPCLK3, 0x0003
        .equiv CHOPCLK4, 0x0004
        .equiv CHOPCLK5, 0x0005
        .equiv CHOPCLK6, 0x0006
        .equiv CHOPCLK7, 0x0007
        .equiv CHOPCLK8, 0x0008
        .equiv CHOPCLK9, 0x0009


;----- PWMCON1 Bits -----------------------------------------------------
        .equiv IUE,     0x0000
        .equiv XPRES,   0x0001
        .equiv CAM,     0x0002
        .equiv MTBS,    0x0003
        .equiv DTCP,    0x0005
        .equiv MDCS,    0x0008
        .equiv ITB,     0x0009
        .equiv TRGIEN,  0x000A
        .equiv CLIEN,   0x000B
        .equiv FLTIEN,  0x000C
        .equiv TRGSTAT, 0x000D
        .equiv CLSTAT,  0x000E
        .equiv FLTSTAT, 0x000F

        .equiv DTC0,    0x0006
        .equiv DTC1,    0x0007


;----- IOCON1 Bits -----------------------------------------------------
        .equiv OSYNC,   0x0000
        .equiv SWAP,    0x0001
        .equiv OVRENL,  0x0008
        .equiv OVRENH,  0x0009
        .equiv POLL,    0x000C
        .equiv POLH,    0x000D
        .equiv PENL,    0x000E
        .equiv PENH,    0x000F

        .equiv CLDAT0,  0x0002
        .equiv CLDAT1,  0x0003
        .equiv FLTDAT0, 0x0004
        .equiv FLTDAT1, 0x0005
        .equiv OVRDAT0, 0x0006
        .equiv OVRDAT1, 0x0007
        .equiv PMOD0,   0x000A
        .equiv PMOD1,   0x000B


;----- FCLCON1 Bits -----------------------------------------------------
        .equiv FLTPOL,  0x0002
        .equiv CLMOD,   0x0008
        .equiv CLPOL,   0x0009
        .equiv IFLTMOD, 0x000F

        .equiv FLTMOD0, 0x0000
        .equiv FLTMOD1, 0x0001
        .equiv FLTSRC0, 0x0003
        .equiv FLTSRC1, 0x0004
        .equiv FLTSRC2, 0x0005
        .equiv FLTSRC3, 0x0006
        .equiv FLTSRC4, 0x0007
        .equiv CLSRC0,  0x000A
        .equiv CLSRC1,  0x000B
        .equiv CLSRC2,  0x000C
        .equiv CLSRC3,  0x000D
        .equiv CLSRC4,  0x000E


;----- TRIG1 Bits -----------------------------------------------------
        .equiv TRGCMP0, 0x0003
        .equiv TRGCMP1, 0x0004
        .equiv TRGCMP2, 0x0005
        .equiv TRGCMP3, 0x0006
        .equiv TRGCMP4, 0x0007
        .equiv TRGCMP5, 0x0008
        .equiv TRGCMP6, 0x0009
        .equiv TRGCMP7, 0x000A
        .equiv TRGCMP8, 0x000B
        .equiv TRGCMP9, 0x000C
        .equiv TRGCMP10, 0x000D
        .equiv TRGCMP11, 0x000E
        .equiv TRGCMP12, 0x000F


;----- TRGCON1 Bits -----------------------------------------------------
        .equiv DTM,     0x0007

        .equiv TRGSTRT0, 0x0000
        .equiv TRGSTRT1, 0x0001
        .equiv TRGSTRT2, 0x0002
        .equiv TRGSTRT3, 0x0003
        .equiv TRGSTRT4, 0x0004
        .equiv TRGSTRT5, 0x0005
        .equiv TRGDIV0, 0x000C
        .equiv TRGDIV1, 0x000D
        .equiv TRGDIV2, 0x000E
        .equiv TRGDIV3, 0x000F


;----- LEBCON1 Bits -----------------------------------------------------
        .equiv BPLL,    0x0000
        .equiv BPLH,    0x0001
        .equiv BPHL,    0x0002
        .equiv BPHH,    0x0003
        .equiv BCL_LEBCON1, 0x0004
        .equiv BCH,     0x0005
        .equiv CLLEBEN, 0x000A
        .equiv FLTLEBEN, 0x000B
        .equiv PLF,     0x000C
        .equiv PLR,     0x000D
        .equiv PHF,     0x000E
        .equiv PHR,     0x000F


;----- LEBDLY1 Bits -----------------------------------------------------
        .equiv LEB0,    0x0000
        .equiv LEB1,    0x0001
        .equiv LEB2,    0x0002
        .equiv LEB3,    0x0003
        .equiv LEB4,    0x0004
        .equiv LEB5,    0x0005
        .equiv LEB6,    0x0006
        .equiv LEB7,    0x0007
        .equiv LEB8,    0x0008
        .equiv LEB9,    0x0009
        .equiv LEB10,   0x000A
        .equiv LEB11,   0x000B


;----- AUXCON1 Bits -----------------------------------------------------
        .equiv CHOPLEN, 0x0000
        .equiv CHOPHEN, 0x0001
        .equiv HRDDIS,  0x000E
        .equiv HRPDIS,  0x000F

        .equiv CHOPSEL0, 0x0002
        .equiv CHOPSEL1, 0x0003
        .equiv CHOPSEL2, 0x0004
        .equiv CHOPSEL3, 0x0005
        .equiv BLANKSEL0, 0x0008
        .equiv BLANKSEL1, 0x0009
        .equiv BLANKSEL2, 0x000A
        .equiv BLANKSEL3, 0x000B


;----- PWMCON2 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
       ;.equiv DTCP,    0x0005
       ;.equiv MDCS,    0x0008
       ;.equiv ITB,     0x0009
       ;.equiv TRGIEN,  0x000A
       ;.equiv CLIEN,   0x000B
       ;.equiv FLTIEN,  0x000C
       ;.equiv TRGSTAT, 0x000D
       ;.equiv CLSTAT,  0x000E
       ;.equiv FLTSTAT, 0x000F

       ;.equiv DTC0,    0x0006
       ;.equiv DTC1,    0x0007


;----- IOCON2 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv SWAP,    0x0001
       ;.equiv OVRENL,  0x0008
       ;.equiv OVRENH,  0x0009
       ;.equiv POLL,    0x000C
       ;.equiv POLH,    0x000D
       ;.equiv PENL,    0x000E
       ;.equiv PENH,    0x000F

       ;.equiv CLDAT0,  0x0002
       ;.equiv CLDAT1,  0x0003
       ;.equiv FLTDAT0, 0x0004
       ;.equiv FLTDAT1, 0x0005
       ;.equiv OVRDAT0, 0x0006
       ;.equiv OVRDAT1, 0x0007
       ;.equiv PMOD0,   0x000A
       ;.equiv PMOD1,   0x000B


;----- FCLCON2 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG2 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON2 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- LEBCON2 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON2, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY2 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0000
       ;.equiv LEB1,    0x0001
       ;.equiv LEB2,    0x0002
       ;.equiv LEB3,    0x0003
       ;.equiv LEB4,    0x0004
       ;.equiv LEB5,    0x0005
       ;.equiv LEB6,    0x0006
       ;.equiv LEB7,    0x0007
       ;.equiv LEB8,    0x0008
       ;.equiv LEB9,    0x0009
       ;.equiv LEB10,   0x000A
       ;.equiv LEB11,   0x000B


;----- AUXCON2 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON3 Bits -----------------------------------------------------
       ;.equiv IUE,     0x0000
       ;.equiv XPRES,   0x0001
       ;.equiv CAM,     0x0002
       ;.equiv MTBS,    0x0003
       ;.equiv DTCP,    0x0005
       ;.equiv MDCS,    0x0008
       ;.equiv ITB,     0x0009
       ;.equiv TRGIEN,  0x000A
       ;.equiv CLIEN,   0x000B
       ;.equiv FLTIEN,  0x000C
       ;.equiv TRGSTAT, 0x000D
       ;.equiv CLSTAT,  0x000E
       ;.equiv FLTSTAT, 0x000F

       ;.equiv DTC0,    0x0006
       ;.equiv DTC1,    0x0007


;----- IOCON3 Bits -----------------------------------------------------
       ;.equiv OSYNC,   0x0000
       ;.equiv SWAP,    0x0001
       ;.equiv OVRENL,  0x0008
       ;.equiv OVRENH,  0x0009
       ;.equiv POLL,    0x000C
       ;.equiv POLH,    0x000D
       ;.equiv PENL,    0x000E
       ;.equiv PENH,    0x000F

       ;.equiv CLDAT0,  0x0002
       ;.equiv CLDAT1,  0x0003
       ;.equiv FLTDAT0, 0x0004
       ;.equiv FLTDAT1, 0x0005
       ;.equiv OVRDAT0, 0x0006
       ;.equiv OVRDAT1, 0x0007
       ;.equiv PMOD0,   0x000A
       ;.equiv PMOD1,   0x000B


;----- FCLCON3 Bits -----------------------------------------------------
       ;.equiv FLTPOL,  0x0002
       ;.equiv CLMOD,   0x0008
       ;.equiv CLPOL,   0x0009
       ;.equiv IFLTMOD, 0x000F

       ;.equiv FLTMOD0, 0x0000
       ;.equiv FLTMOD1, 0x0001
       ;.equiv FLTSRC0, 0x0003
       ;.equiv FLTSRC1, 0x0004
       ;.equiv FLTSRC2, 0x0005
       ;.equiv FLTSRC3, 0x0006
       ;.equiv FLTSRC4, 0x0007
       ;.equiv CLSRC0,  0x000A
       ;.equiv CLSRC1,  0x000B
       ;.equiv CLSRC2,  0x000C
       ;.equiv CLSRC3,  0x000D
       ;.equiv CLSRC4,  0x000E


;----- TRIG3 Bits -----------------------------------------------------
       ;.equiv TRGCMP0, 0x0003
       ;.equiv TRGCMP1, 0x0004
       ;.equiv TRGCMP2, 0x0005
       ;.equiv TRGCMP3, 0x0006
       ;.equiv TRGCMP4, 0x0007
       ;.equiv TRGCMP5, 0x0008
       ;.equiv TRGCMP6, 0x0009
       ;.equiv TRGCMP7, 0x000A
       ;.equiv TRGCMP8, 0x000B
       ;.equiv TRGCMP9, 0x000C
       ;.equiv TRGCMP10, 0x000D
       ;.equiv TRGCMP11, 0x000E
       ;.equiv TRGCMP12, 0x000F


;----- TRGCON3 Bits -----------------------------------------------------
       ;.equiv DTM,     0x0007

       ;.equiv TRGSTRT0, 0x0000
       ;.equiv TRGSTRT1, 0x0001
       ;.equiv TRGSTRT2, 0x0002
       ;.equiv TRGSTRT3, 0x0003
       ;.equiv TRGSTRT4, 0x0004
       ;.equiv TRGSTRT5, 0x0005
       ;.equiv TRGDIV0, 0x000C
       ;.equiv TRGDIV1, 0x000D
       ;.equiv TRGDIV2, 0x000E
       ;.equiv TRGDIV3, 0x000F


;----- LEBCON3 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON3, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY3 Bits -----------------------------------------------------
       ;.equiv LEB0,    0x0000
       ;.equiv LEB1,    0x0001
       ;.equiv LEB2,    0x0002
       ;.equiv LEB3,    0x0003
       ;.equiv LEB4,    0x0004
       ;.equiv LEB5,    0x0005
       ;.equiv LEB6,    0x0006
       ;.equiv LEB7,    0x0007
       ;.equiv LEB8,    0x0008
       ;.equiv LEB9,    0x0009
       ;.equiv LEB10,   0x000A
       ;.equiv LEB11,   0x000B


;----- AUXCON3 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001
       ;.equiv HRDDIS,  0x000E
       ;.equiv HRPDIS,  0x000F

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004
        .equiv TRISA8,  0x0008


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA8,     0x0008


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA8,   0x0008


;----- ODCA Bits -----------------------------------------------------
        .equiv ODCA0,   0x0000
        .equiv ODCA1,   0x0001
        .equiv ODCA2,   0x0002
        .equiv ODCA3,   0x0003
        .equiv ODCA4,   0x0004
        .equiv ODCA8,   0x0008


;----- CNENA Bits -----------------------------------------------------
        .equiv CNIEA0,  0x0000
        .equiv CNIEA1,  0x0001
        .equiv CNIEA2,  0x0002
        .equiv CNIEA3,  0x0003
        .equiv CNIEA4,  0x0004
        .equiv CNIEA8,  0x0008


;----- CNPUA Bits -----------------------------------------------------
        .equiv CNPUA0,  0x0000
        .equiv CNPUA1,  0x0001
        .equiv CNPUA2,  0x0002
        .equiv CNPUA3,  0x0003
        .equiv CNPUA4,  0x0004
        .equiv CNPUA8,  0x0008


;----- CNPDA Bits -----------------------------------------------------
        .equiv CNPDA0,  0x0000
        .equiv CNPDA1,  0x0001
        .equiv CNPDA2,  0x0002
        .equiv CNPDA3,  0x0003
        .equiv CNPDA4,  0x0004
        .equiv CNPDA8,  0x0008


;----- ANSELA Bits -----------------------------------------------------
        .equiv ANSA0,   0x0000
        .equiv ANSA1,   0x0001
        .equiv ANSA4,   0x0004


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB6,  0x0006
        .equiv TRISB7,  0x0007
        .equiv TRISB8,  0x0008
        .equiv TRISB9,  0x0009
        .equiv TRISB10, 0x000A
        .equiv TRISB11, 0x000B
        .equiv TRISB12, 0x000C
        .equiv TRISB13, 0x000D
        .equiv TRISB14, 0x000E
        .equiv TRISB15, 0x000F


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB3,     0x0003
        .equiv RB4,     0x0004
        .equiv RB5,     0x0005
        .equiv RB6,     0x0006
        .equiv RB7,     0x0007
        .equiv RB8,     0x0008
        .equiv RB9,     0x0009
        .equiv RB10,    0x000A
        .equiv RB11,    0x000B
        .equiv RB12,    0x000C
        .equiv RB13,    0x000D
        .equiv RB14,    0x000E
        .equiv RB15,    0x000F


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB3,   0x0003
        .equiv LATB4,   0x0004
        .equiv LATB5,   0x0005
        .equiv LATB6,   0x0006
        .equiv LATB7,   0x0007
        .equiv LATB8,   0x0008
        .equiv LATB9,   0x0009
        .equiv LATB10,  0x000A
        .equiv LATB11,  0x000B
        .equiv LATB12,  0x000C
        .equiv LATB13,  0x000D
        .equiv LATB14,  0x000E
        .equiv LATB15,  0x000F


;----- ODCB Bits -----------------------------------------------------
        .equiv ODCB0,   0x0000
        .equiv ODCB1,   0x0001
        .equiv ODCB2,   0x0002
        .equiv ODCB3,   0x0003
        .equiv ODCB4,   0x0004
        .equiv ODCB5,   0x0005
        .equiv ODCB6,   0x0006
        .equiv ODCB7,   0x0007
        .equiv ODCB8,   0x0008
        .equiv ODCB9,   0x0009
        .equiv ODCB10,  0x000A
        .equiv ODCB11,  0x000B
        .equiv ODCB12,  0x000C
        .equiv ODCB13,  0x000D
        .equiv ODCB14,  0x000E
        .equiv ODCB15,  0x000F


;----- CNENB Bits -----------------------------------------------------
        .equiv CNIEB0,  0x0000
        .equiv CNIEB1,  0x0001
        .equiv CNIEB2,  0x0002
        .equiv CNIEB3,  0x0003
        .equiv CNIEB4,  0x0004
        .equiv CNIEB5,  0x0005
        .equiv CNIEB6,  0x0006
        .equiv CNIEB7,  0x0007
        .equiv CNIEB8,  0x0008
        .equiv CNIEB9,  0x0009
        .equiv CNIEB10, 0x000A
        .equiv CNIEB11, 0x000B
        .equiv CNIEB12, 0x000C
        .equiv CNIEB13, 0x000D
        .equiv CNIEB14, 0x000E
        .equiv CNIEB15, 0x000F


;----- CNPUB Bits -----------------------------------------------------
        .equiv CNPUB0,  0x0000
        .equiv CNPUB1,  0x0001
        .equiv CNPUB2,  0x0002
        .equiv CNPUB3,  0x0003
        .equiv CNPUB4,  0x0004
        .equiv CNPUB5,  0x0005
        .equiv CNPUB6,  0x0006
        .equiv CNPUB7,  0x0007
        .equiv CNPUB8,  0x0008
        .equiv CNPUB9,  0x0009
        .equiv CNPUB10, 0x000A
        .equiv CNPUB11, 0x000B
        .equiv CNPUB12, 0x000C
        .equiv CNPUB13, 0x000D
        .equiv CNPUB14, 0x000E
        .equiv CNPUB15, 0x000F


;----- CNPDB Bits -----------------------------------------------------
        .equiv CNPDB0,  0x0000
        .equiv CNPDB1,  0x0001
        .equiv CNPDB2,  0x0002
        .equiv CNPDB3,  0x0003
        .equiv CNPDB4,  0x0004
        .equiv CNPDB5,  0x0005
        .equiv CNPDB6,  0x0006
        .equiv CNPDB7,  0x0007
        .equiv CNPDB8,  0x0008
        .equiv CNPDB9,  0x0009
        .equiv CNPDB10, 0x000A
        .equiv CNPDB11, 0x000B
        .equiv CNPDB12, 0x000C
        .equiv CNPDB13, 0x000D
        .equiv CNPDB14, 0x000E
        .equiv CNPDB15, 0x000F


;----- ANSELB Bits -----------------------------------------------------
        .equiv ANSB0,   0x0000
        .equiv ANSB1,   0x0001
        .equiv ANSB2,   0x0002
        .equiv ANSB3,   0x0003
        .equiv ANSB8,   0x0008


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC0,  0x0000
        .equiv TRISC1,  0x0001
        .equiv TRISC8,  0x0008


;----- PORTC Bits -----------------------------------------------------
        .equiv RC0,     0x0000
        .equiv RC1,     0x0001
        .equiv RC8,     0x0008


;----- LATC Bits -----------------------------------------------------
        .equiv LATC0,   0x0000
        .equiv LATC1,   0x0001
        .equiv LATC8,   0x0008


;----- ODCC Bits -----------------------------------------------------
        .equiv ODCC0,   0x0000
        .equiv ODCC1,   0x0001
        .equiv ODCC8,   0x0008


;----- CNENC Bits -----------------------------------------------------
        .equiv CNIEC0,  0x0000
        .equiv CNIEC1,  0x0001
        .equiv CNIEC8,  0x0008


;----- CNPUC Bits -----------------------------------------------------
        .equiv CNPUC0,  0x0000
        .equiv CNPUC1,  0x0001
        .equiv CNPUC8,  0x0008


;----- CNPDC Bits -----------------------------------------------------
        .equiv CNPDC0,  0x0000
        .equiv CNPDC1,  0x0001
        .equiv CNPDC8,  0x0008


;----- ANSELC Bits -----------------------------------------------------
        .equiv ANSC0,   0x0000
        .equiv ANSC1,   0x0001


;----- APPS Bits -----------------------------------------------------
        .equiv APIFUL,  0x0000
        .equiv APIOV,   0x0001
        .equiv AROFUL,  0x0002
        .equiv APOOV,   0x0003
        .equiv STRFUL,  0x0004




;  Some useful macros for PWRSAV instructions

   .equiv SLEEP_MODE, 0x0
   .equiv IDLE_MODE, 0x1


;==========================================================================
;
;   Configuration Words
;
;   Configuration words exist in Program Space and their locations are
;   defined in the device linker script. They can be set in source code
;   or in the MPLAB IDE. Each configuration word should be specified
;   only once (multiple settings may be combined.)
;
;==========================================================================
;
;  Setting configuration words using macros:
;
;  The following macro named 'config' can be used to set configuration words:
;
        .macro config REG, VALUE
        .pushsection \REG.sec, code
        .global \REG
\REG:   .pword \VALUE
        .popsection
        .endm
;
;  For example, to set CONFIG_REG using the macro above, the following line
;  can be pasted only at the beginning of the assembly source code,
;  immediately below the '.include' directive.
;
;        config __CONFIG_REG, SETTING_A & SETTING_B
;
;  Note that the 'config' macro takes two arguments: the first is the name
;  of a configuration word (in this case, __CONFIG_REG), the second argument
;  is a boolean expression that may include multiple settings.
;  The example above would enable SETTING_A and also SETTING_B.
;
;  A description of all possible settings for each configuration word
;  appears below.
;
;==========================================================================
;
;  Setting configuration words without using macros:
;
;  To set configuration words without using the 'config' macro,
;  use the following format:
;
;           .section __CONFIG_REG.sec, code
;           .global __CONFIG_REG
;__CONFIG_REG: .pword SETTING_A & SETTING_B
;
;  This source code is equivalent to the expanded macro from the previous
;  example.
;
;==========================================================================


;----- FICD (0xaff0) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Communication Channel Select bits:
;     ICS_NONE             Reserved, do not use
;     ICS_PGD3             Communicate on PGEC3 and PGED3
;     ICS_PGD2             Communicate on PGEC2 and PGED2
;     ICS_PGD1             Communicate on PGEC1 and PGED1
;
;   JTAG Enable bit:
;     JTAGEN_OFF           JTAG is disabled
;     JTAGEN_ON            JTAG is enabled
;
        .equiv ICS_NONE,        0xFFFC ; Reserved, do not use
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGEC3 and PGED3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGEC2 and PGED2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGEC1 and PGED1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is enabled


;----- FPOR (0xaff2) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   Alternate I2C1 pins:
;     ALTI2C1_ON           I2C1 mapped to ASDA1/ASCL1 pins
;     ALTI2C1_OFF          I2C1 mapped to SDA1/SCL1 pins
;
;   Alternate I2C2 pins:
;     ALTI2C2_ON           I2C2 mapped to ASDA2/ASCL2 pins
;     ALTI2C2_OFF          I2C2 mapped to SDA2/SCL2 pins
;
;   Watchdog Window Select bits:
;     WDTWIN_WIN75         WDT Window is 75% of WDT period
;     WDTWIN_WIN50         WDT Window is 50% of WDT period
;     WDTWIN_WIN37         WDT Window is 37.5% of WDT period
;     WDTWIN_WIN25         WDT Window is 25% of WDT period
;
        .equiv ALTI2C1_ON,      0xFFEF ; I2C1 mapped to ASDA1/ASCL1 pins
        .equiv ALTI2C1_OFF,     0xFFFF ; I2C1 mapped to SDA1/SCL1 pins

        .equiv ALTI2C2_ON,      0xFFDF ; I2C2 mapped to ASDA2/ASCL2 pins
        .equiv ALTI2C2_OFF,     0xFFFF ; I2C2 mapped to SDA2/SCL2 pins

        .equiv WDTWIN_WIN75,    0xFF3F ; WDT Window is 75% of WDT period
        .equiv WDTWIN_WIN50,    0xFF7F ; WDT Window is 50% of WDT period
        .equiv WDTWIN_WIN37,    0xFFBF ; WDT Window is 37.5% of WDT period
        .equiv WDTWIN_WIN25,    0xFFFF ; WDT Window is 25% of WDT period


;----- FWDT (0xaff4) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler bits:
;     WDTPOST_PS1          1:1
;     WDTPOST_PS2          1:2
;     WDTPOST_PS4          1:4
;     WDTPOST_PS8          1:8
;     WDTPOST_PS16         1:16
;     WDTPOST_PS32         1:32
;     WDTPOST_PS64         1:64
;     WDTPOST_PS128        1:128
;     WDTPOST_PS256        1:256
;     WDTPOST_PS512        1:512
;     WDTPOST_PS1024       1:1,024
;     WDTPOST_PS2048       1:2,048
;     WDTPOST_PS4096       1:4,096
;     WDTPOST_PS8192       1:8,192
;     WDTPOST_PS16384      1:16,384
;     WDTPOST_PS32768      1:32,768
;
;   Watchdog Timer Prescaler bit:
;     WDTPRE_PR32          1:32
;     WDTPRE_PR128         1:128
;
;   PLL Lock Enable bit:
;     PLLKEN_OFF           Clock switch will not wait for the PLL lock signal.
;     PLLKEN_ON            Clock switch to PLL source will wait until the PLL lock signal is valid.
;
;   Watchdog Timer Window Enable bit:
;     WINDIS_ON            Watchdog Timer in Window mode
;     WINDIS_OFF           Watchdog Timer in Non-Window mode
;
;   Watchdog Timer Enable bit:
;     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
;     FWDTEN_ON            Watchdog timer always enabled
;
        .equiv WDTPOST_PS1,     0xFFF0 ; 1:1
        .equiv WDTPOST_PS2,     0xFFF1 ; 1:2
        .equiv WDTPOST_PS4,     0xFFF2 ; 1:4
        .equiv WDTPOST_PS8,     0xFFF3 ; 1:8
        .equiv WDTPOST_PS16,    0xFFF4 ; 1:16
        .equiv WDTPOST_PS32,    0xFFF5 ; 1:32
        .equiv WDTPOST_PS64,    0xFFF6 ; 1:64
        .equiv WDTPOST_PS128,   0xFFF7 ; 1:128
        .equiv WDTPOST_PS256,   0xFFF8 ; 1:256
        .equiv WDTPOST_PS512,   0xFFF9 ; 1:512
        .equiv WDTPOST_PS1024,  0xFFFA ; 1:1,024
        .equiv WDTPOST_PS2048,  0xFFFB ; 1:2,048
        .equiv WDTPOST_PS4096,  0xFFFC ; 1:4,096
        .equiv WDTPOST_PS8192,  0xFFFD ; 1:8,192
        .equiv WDTPOST_PS16384, 0xFFFE ; 1:16,384
        .equiv WDTPOST_PS32768, 0xFFFF ; 1:32,768

        .equiv WDTPRE_PR32,     0xFFEF ; 1:32
        .equiv WDTPRE_PR128,    0xFFFF ; 1:128

        .equiv PLLKEN_OFF,      0xFFDF ; Clock switch will not wait for the PLL lock signal.
        .equiv PLLKEN_ON,       0xFFFF ; Clock switch to PLL source will wait until the PLL lock signal is valid.

        .equiv WINDIS_ON,       0xFFBF ; Watchdog Timer in Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Watchdog Timer in Non-Window mode

        .equiv FWDTEN_OFF,      0xFF7F ; Watchdog timer enabled/disabled by user software
        .equiv FWDTEN_ON,       0xFFFF ; Watchdog timer always enabled


;----- FOSC (0xaff6) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Mode Select bits:
;     POSCMD_EC            EC (External Clock) Mode
;     POSCMD_XT            XT Crystal Oscillator Mode
;     POSCMD_HS            HS Crystal Oscillator Mode
;     POSCMD_NONE          Primary Oscillator disabled
;
;   OSC2 Pin Function bit:
;     OSCIOFNC_ON          OSC2 is general purpose digital I/O pin
;     OSCIOFNC_OFF         OSC2 is clock output
;
;   Peripheral pin select configuration:
;     IOL1WAY_OFF          Allow multiple reconfigurations
;     IOL1WAY_ON           Allow only one reconfiguration
;
;   Clock Switching Mode bits:
;     FCKSM_CSECME         Both Clock switching and Fail-safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled,Fail-safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock switching and Fail-safe Clock Monitor are disabled
;
        .equiv POSCMD_EC,       0xFFFC ; EC (External Clock) Mode
        .equiv POSCMD_XT,       0xFFFD ; XT Crystal Oscillator Mode
        .equiv POSCMD_HS,       0xFFFE ; HS Crystal Oscillator Mode
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; OSC2 is general purpose digital I/O pin
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSC2 is clock output

        .equiv IOL1WAY_OFF,     0xFFDF ; Allow multiple reconfigurations
        .equiv IOL1WAY_ON,      0xFFFF ; Allow only one reconfiguration

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock switching and Fail-safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled,Fail-safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock switching and Fail-safe Clock Monitor are disabled


;----- FOSCSEL (0xaff8) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Source Selection:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Fast RC Oscillator with divide-by-N with PLL module (FRCPLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
;
;   PWM Lock Enable bit:
;     PWMLOCK_OFF          PWM registers may be written without key sequence
;     PWMLOCK_ON           Certain PWM registers may only be written after key sequence
;
;   Two-speed Oscillator Start-up Enable bit:
;     IESO_OFF             Start up with user-selected oscillator source
;     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Fast RC Oscillator with divide-by-N with PLL module (FRCPLL)
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
        .equiv FNOSC_LPRC,      0xFFFD ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIVN,   0xFFFF ; Internal Fast RC (FRC) Oscillator with postscaler

        .equiv PWMLOCK_OFF,     0xFFBF ; PWM registers may be written without key sequence
        .equiv PWMLOCK_ON,      0xFFFF ; Certain PWM registers may only be written after key sequence

        .equiv IESO_OFF,        0xFF7F ; Start up with user-selected oscillator source
        .equiv IESO_ON,         0xFFFF ; Start up device with FRC, then switch to user-selected oscillator source


;----- FGS (0xaffa) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Segment Write-Protect bit:
;     GWRP_ON              General Segment is write protected
;     GWRP_OFF             General Segment may be written
;
;   General Segment Code-Protect bit:
;     GCP_ON               General Segment Code protection Enabled
;     GCP_OFF              General Segment Code protect is Disabled
;
        .equiv GWRP_ON,         0xFFFE ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GCP_ON,          0xFFFD ; General Segment Code protection Enabled
        .equiv GCP_OFF,         0xFFFF ; General Segment Code protect is Disabled


;----- FUID0 (0x800ff8) --------------------------------------------------
;
;  The following settings are available for FUID0:
;
;   :
;


;----- FUID1 (0x800ffa) --------------------------------------------------
;
;  The following settings are available for FUID1:
;
;   :
;


;----- FUID2 (0x800ffc) --------------------------------------------------
;
;  The following settings are available for FUID2:
;
;   :
;


;----- FUID3 (0x800ffe) --------------------------------------------------
;
;  The following settings are available for FUID3:
;
;   :
;


.LIST
