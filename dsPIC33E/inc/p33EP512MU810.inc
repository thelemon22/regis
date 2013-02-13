;==========================================================================
;  PIC33EP512MU810 Standard Assembly Include File
; 
;  (c) Copyright 2011 Microchip Technology, All rights reserved
;==========================================================================

.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33EP512MU810 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33EP512MU810
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33EP512MU810, 1
;               .include "p33EP512MU810.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33EP512MU810
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

        .extern TMR6
        .equiv  TMR6L, _TMR6
        .equiv  TMR6H, _TMR6+1

        .extern TMR7HLD
        .equiv  TMR7HLDL, _TMR7HLD
        .equiv  TMR7HLDH, _TMR7HLD+1

        .extern TMR7
        .equiv  TMR7L, _TMR7
        .equiv  TMR7H, _TMR7+1

        .extern PR6
        .equiv  PR6L, _PR6
        .equiv  PR6H, _PR6+1

        .extern PR7
        .equiv  PR7L, _PR7
        .equiv  PR7H, _PR7+1

        .extern T6CON
        .equiv  T6CONL, _T6CON
        .equiv  T6CONH, _T6CON+1

        .extern T7CON
        .equiv  T7CONL, _T7CON
        .equiv  T7CONH, _T7CON+1

        .extern TMR8
        .equiv  TMR8L, _TMR8
        .equiv  TMR8H, _TMR8+1

        .extern TMR9HLD
        .equiv  TMR9HLDL, _TMR9HLD
        .equiv  TMR9HLDH, _TMR9HLD+1

        .extern TMR9
        .equiv  TMR9L, _TMR9
        .equiv  TMR9H, _TMR9+1

        .extern PR8
        .equiv  PR8L, _PR8
        .equiv  PR8H, _PR8+1

        .extern PR9
        .equiv  PR9L, _PR9
        .equiv  PR9H, _PR9+1

        .extern T8CON
        .equiv  T8CONL, _T8CON
        .equiv  T8CONH, _T8CON+1

        .extern T9CON
        .equiv  T9CONL, _T9CON
        .equiv  T9CONH, _T9CON+1

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

        .extern IC5CON1
        .equiv  IC5CON1L, _IC5CON1
        .equiv  IC5CON1H, _IC5CON1+1

        .extern IC5CON2
        .equiv  IC5CON2L, _IC5CON2
        .equiv  IC5CON2H, _IC5CON2+1

        .extern IC5BUF
        .equiv  IC5BUFL, _IC5BUF
        .equiv  IC5BUFH, _IC5BUF+1

        .extern IC5TMR
        .equiv  IC5TMRL, _IC5TMR
        .equiv  IC5TMRH, _IC5TMR+1

        .extern IC6CON1
        .equiv  IC6CON1L, _IC6CON1
        .equiv  IC6CON1H, _IC6CON1+1

        .extern IC6CON2
        .equiv  IC6CON2L, _IC6CON2
        .equiv  IC6CON2H, _IC6CON2+1

        .extern IC6BUF
        .equiv  IC6BUFL, _IC6BUF
        .equiv  IC6BUFH, _IC6BUF+1

        .extern IC6TMR
        .equiv  IC6TMRL, _IC6TMR
        .equiv  IC6TMRH, _IC6TMR+1

        .extern IC7CON1
        .equiv  IC7CON1L, _IC7CON1
        .equiv  IC7CON1H, _IC7CON1+1

        .extern IC7CON2
        .equiv  IC7CON2L, _IC7CON2
        .equiv  IC7CON2H, _IC7CON2+1

        .extern IC7BUF
        .equiv  IC7BUFL, _IC7BUF
        .equiv  IC7BUFH, _IC7BUF+1

        .extern IC7TMR
        .equiv  IC7TMRL, _IC7TMR
        .equiv  IC7TMRH, _IC7TMR+1

        .extern IC8CON1
        .equiv  IC8CON1L, _IC8CON1
        .equiv  IC8CON1H, _IC8CON1+1

        .extern IC8CON2
        .equiv  IC8CON2L, _IC8CON2
        .equiv  IC8CON2H, _IC8CON2+1

        .extern IC8BUF
        .equiv  IC8BUFL, _IC8BUF
        .equiv  IC8BUFH, _IC8BUF+1

        .extern IC8TMR
        .equiv  IC8TMRL, _IC8TMR
        .equiv  IC8TMRH, _IC8TMR+1

        .extern IC9CON1
        .equiv  IC9CON1L, _IC9CON1
        .equiv  IC9CON1H, _IC9CON1+1

        .extern IC9CON2
        .equiv  IC9CON2L, _IC9CON2
        .equiv  IC9CON2H, _IC9CON2+1

        .extern IC9BUF
        .equiv  IC9BUFL, _IC9BUF
        .equiv  IC9BUFH, _IC9BUF+1

        .extern IC9TMR
        .equiv  IC9TMRL, _IC9TMR
        .equiv  IC9TMRH, _IC9TMR+1

        .extern IC10CON1
        .equiv  IC10CON1L, _IC10CON1
        .equiv  IC10CON1H, _IC10CON1+1

        .extern IC10CON2
        .equiv  IC10CON2L, _IC10CON2
        .equiv  IC10CON2H, _IC10CON2+1

        .extern IC10BUF
        .equiv  IC10BUFL, _IC10BUF
        .equiv  IC10BUFH, _IC10BUF+1

        .extern IC10TMR
        .equiv  IC10TMRL, _IC10TMR
        .equiv  IC10TMRH, _IC10TMR+1

        .extern IC11CON1
        .equiv  IC11CON1L, _IC11CON1
        .equiv  IC11CON1H, _IC11CON1+1

        .extern IC11CON2
        .equiv  IC11CON2L, _IC11CON2
        .equiv  IC11CON2H, _IC11CON2+1

        .extern IC11BUF
        .equiv  IC11BUFL, _IC11BUF
        .equiv  IC11BUFH, _IC11BUF+1

        .extern IC11TMR
        .equiv  IC11TMRL, _IC11TMR
        .equiv  IC11TMRH, _IC11TMR+1

        .extern IC12CON1
        .equiv  IC12CON1L, _IC12CON1
        .equiv  IC12CON1H, _IC12CON1+1

        .extern IC12CON2
        .equiv  IC12CON2L, _IC12CON2
        .equiv  IC12CON2H, _IC12CON2+1

        .extern IC12BUF
        .equiv  IC12BUFL, _IC12BUF
        .equiv  IC12BUFH, _IC12BUF+1

        .extern IC12TMR
        .equiv  IC12TMRL, _IC12TMR
        .equiv  IC12TMRH, _IC12TMR+1

        .extern IC13CON1
        .equiv  IC13CON1L, _IC13CON1
        .equiv  IC13CON1H, _IC13CON1+1

        .extern IC13CON2
        .equiv  IC13CON2L, _IC13CON2
        .equiv  IC13CON2H, _IC13CON2+1

        .extern IC13BUF
        .equiv  IC13BUFL, _IC13BUF
        .equiv  IC13BUFH, _IC13BUF+1

        .extern IC13TMR
        .equiv  IC13TMRL, _IC13TMR
        .equiv  IC13TMRH, _IC13TMR+1

        .extern IC14CON1
        .equiv  IC14CON1L, _IC14CON1
        .equiv  IC14CON1H, _IC14CON1+1

        .extern IC14CON2
        .equiv  IC14CON2L, _IC14CON2
        .equiv  IC14CON2H, _IC14CON2+1

        .extern IC14BUF
        .equiv  IC14BUFL, _IC14BUF
        .equiv  IC14BUFH, _IC14BUF+1

        .extern IC14TMR
        .equiv  IC14TMRL, _IC14TMR
        .equiv  IC14TMRH, _IC14TMR+1

        .extern IC15CON1
        .equiv  IC15CON1L, _IC15CON1
        .equiv  IC15CON1H, _IC15CON1+1

        .extern IC15CON2
        .equiv  IC15CON2L, _IC15CON2
        .equiv  IC15CON2H, _IC15CON2+1

        .extern IC15BUF
        .equiv  IC15BUFL, _IC15BUF
        .equiv  IC15BUFH, _IC15BUF+1

        .extern IC15TMR
        .equiv  IC15TMRL, _IC15TMR
        .equiv  IC15TMRH, _IC15TMR+1

        .extern IC16CON1
        .equiv  IC16CON1L, _IC16CON1
        .equiv  IC16CON1H, _IC16CON1+1

        .extern IC16CON2
        .equiv  IC16CON2L, _IC16CON2
        .equiv  IC16CON2H, _IC16CON2+1

        .extern IC16BUF
        .equiv  IC16BUFL, _IC16BUF
        .equiv  IC16BUFH, _IC16BUF+1

        .extern IC16TMR
        .equiv  IC16TMRL, _IC16TMR
        .equiv  IC16TMRH, _IC16TMR+1

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

        .extern U3MODE
        .equiv  U3MODEL, _U3MODE
        .equiv  U3MODEH, _U3MODE+1

        .extern U3STA
        .equiv  U3STAL, _U3STA
        .equiv  U3STAH, _U3STA+1

        .extern U3TXREG
        .equiv  U3TXREGL, _U3TXREG
        .equiv  U3TXREGH, _U3TXREG+1

        .extern U3RXREG
        .equiv  U3RXREGL, _U3RXREG
        .equiv  U3RXREGH, _U3RXREG+1

        .extern U3BRG
        .equiv  U3BRGL, _U3BRG
        .equiv  U3BRGH, _U3BRG+1

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

        .extern DCICON1
        .equiv  DCICON1L, _DCICON1
        .equiv  DCICON1H, _DCICON1+1

        .extern DCICON2
        .equiv  DCICON2L, _DCICON2
        .equiv  DCICON2H, _DCICON2+1

        .extern DCICON3
        .equiv  DCICON3L, _DCICON3
        .equiv  DCICON3H, _DCICON3+1

        .extern DCISTAT
        .equiv  DCISTATL, _DCISTAT
        .equiv  DCISTATH, _DCISTAT+1

        .extern TSCON
        .equiv  TSCONL, _TSCON
        .equiv  TSCONH, _TSCON+1

        .extern RSCON
        .equiv  RSCONL, _RSCON
        .equiv  RSCONH, _RSCON+1

        .extern RXBUF0
        .equiv  RXBUF0L, _RXBUF0
        .equiv  RXBUF0H, _RXBUF0+1

        .extern RXBUF1
        .equiv  RXBUF1L, _RXBUF1
        .equiv  RXBUF1H, _RXBUF1+1

        .extern RXBUF2
        .equiv  RXBUF2L, _RXBUF2
        .equiv  RXBUF2H, _RXBUF2+1

        .extern RXBUF3
        .equiv  RXBUF3L, _RXBUF3
        .equiv  RXBUF3H, _RXBUF3+1

        .extern TXBUF0
        .equiv  TXBUF0L, _TXBUF0
        .equiv  TXBUF0H, _TXBUF0+1

        .extern TXBUF1
        .equiv  TXBUF1L, _TXBUF1
        .equiv  TXBUF1H, _TXBUF1+1

        .extern TXBUF2
        .equiv  TXBUF2L, _TXBUF2
        .equiv  TXBUF2H, _TXBUF2+1

        .extern TXBUF3
        .equiv  TXBUF3L, _TXBUF3
        .equiv  TXBUF3H, _TXBUF3+1

        .extern SPI3STAT
        .equiv  SPI3STATL, _SPI3STAT
        .equiv  SPI3STATH, _SPI3STAT+1

        .extern SPI3CON1
        .equiv  SPI3CON1L, _SPI3CON1
        .equiv  SPI3CON1H, _SPI3CON1+1

        .extern SPI3CON2
        .equiv  SPI3CON2L, _SPI3CON2
        .equiv  SPI3CON2H, _SPI3CON2+1

        .extern SPI3BUF
        .equiv  SPI3BUFL, _SPI3BUF
        .equiv  SPI3BUFH, _SPI3BUF+1

        .extern U4MODE
        .equiv  U4MODEL, _U4MODE
        .equiv  U4MODEH, _U4MODE+1

        .extern U4STA
        .equiv  U4STAL, _U4STA
        .equiv  U4STAH, _U4STA+1

        .extern U4TXREG
        .equiv  U4TXREGL, _U4TXREG
        .equiv  U4TXREGH, _U4TXREG+1

        .extern U4RXREG
        .equiv  U4RXREGL, _U4RXREG
        .equiv  U4RXREGH, _U4RXREG+1

        .extern U4BRG
        .equiv  U4BRGL, _U4BRG
        .equiv  U4BRGH, _U4BRG+1

        .extern SPI4STAT
        .equiv  SPI4STATL, _SPI4STAT
        .equiv  SPI4STATH, _SPI4STAT+1

        .extern SPI4CON1
        .equiv  SPI4CON1L, _SPI4CON1
        .equiv  SPI4CON1H, _SPI4CON1+1

        .extern SPI4CON2
        .equiv  SPI4CON2L, _SPI4CON2
        .equiv  SPI4CON2H, _SPI4CON2+1

        .extern SPI4BUF
        .equiv  SPI4BUFL, _SPI4BUF
        .equiv  SPI4BUFH, _SPI4BUF+1

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

        .extern ADC2BUF0
        .equiv  ADC2BUF0L, _ADC2BUF0
        .equiv  ADC2BUF0H, _ADC2BUF0+1

        .extern ADC2BUF1
        .equiv  ADC2BUF1L, _ADC2BUF1
        .equiv  ADC2BUF1H, _ADC2BUF1+1

        .extern ADC2BUF2
        .equiv  ADC2BUF2L, _ADC2BUF2
        .equiv  ADC2BUF2H, _ADC2BUF2+1

        .extern ADC2BUF3
        .equiv  ADC2BUF3L, _ADC2BUF3
        .equiv  ADC2BUF3H, _ADC2BUF3+1

        .extern ADC2BUF4
        .equiv  ADC2BUF4L, _ADC2BUF4
        .equiv  ADC2BUF4H, _ADC2BUF4+1

        .extern ADC2BUF5
        .equiv  ADC2BUF5L, _ADC2BUF5
        .equiv  ADC2BUF5H, _ADC2BUF5+1

        .extern ADC2BUF6
        .equiv  ADC2BUF6L, _ADC2BUF6
        .equiv  ADC2BUF6H, _ADC2BUF6+1

        .extern ADC2BUF7
        .equiv  ADC2BUF7L, _ADC2BUF7
        .equiv  ADC2BUF7H, _ADC2BUF7+1

        .extern ADC2BUF8
        .equiv  ADC2BUF8L, _ADC2BUF8
        .equiv  ADC2BUF8H, _ADC2BUF8+1

        .extern ADC2BUF9
        .equiv  ADC2BUF9L, _ADC2BUF9
        .equiv  ADC2BUF9H, _ADC2BUF9+1

        .extern ADC2BUFA
        .equiv  ADC2BUFAL, _ADC2BUFA
        .equiv  ADC2BUFAH, _ADC2BUFA+1

        .extern ADC2BUFB
        .equiv  ADC2BUFBL, _ADC2BUFB
        .equiv  ADC2BUFBH, _ADC2BUFB+1

        .extern ADC2BUFC
        .equiv  ADC2BUFCL, _ADC2BUFC
        .equiv  ADC2BUFCH, _ADC2BUFC+1

        .extern ADC2BUFD
        .equiv  ADC2BUFDL, _ADC2BUFD
        .equiv  ADC2BUFDH, _ADC2BUFD+1

        .extern ADC2BUFE
        .equiv  ADC2BUFEL, _ADC2BUFE
        .equiv  ADC2BUFEH, _ADC2BUFE+1

        .extern ADC2BUFF
        .equiv  ADC2BUFFL, _ADC2BUFF
        .equiv  ADC2BUFFH, _ADC2BUFF+1

        .extern AD2CON1
        .equiv  AD2CON1L, _AD2CON1
        .equiv  AD2CON1H, _AD2CON1+1

        .extern AD2CON2
        .equiv  AD2CON2L, _AD2CON2
        .equiv  AD2CON2H, _AD2CON2+1

        .extern AD2CON3
        .equiv  AD2CON3L, _AD2CON3
        .equiv  AD2CON3H, _AD2CON3+1

        .extern AD2CHS123
        .equiv  AD2CHS123L, _AD2CHS123
        .equiv  AD2CHS123H, _AD2CHS123+1

        .extern AD2CHS0
        .equiv  AD2CHS0L, _AD2CHS0
        .equiv  AD2CHS0H, _AD2CHS0+1

        .extern AD2CSSL
        .equiv  AD2CSSLL, _AD2CSSL
        .equiv  AD2CSSLH, _AD2CSSL+1

        .extern AD2CON4
        .equiv  AD2CON4L, _AD2CON4
        .equiv  AD2CON4H, _AD2CON4+1

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

        .extern U1OTGIR
        .equiv  U1OTGIRL, _U1OTGIR
        .equiv  U1OTGIRH, _U1OTGIR+1

        .extern U1OTGIE
        .equiv  U1OTGIEL, _U1OTGIE
        .equiv  U1OTGIEH, _U1OTGIE+1

        .extern U1OTGSTAT
        .equiv  U1OTGSTATL, _U1OTGSTAT
        .equiv  U1OTGSTATH, _U1OTGSTAT+1

        .extern U1OTGCON
        .equiv  U1OTGCONL, _U1OTGCON
        .equiv  U1OTGCONH, _U1OTGCON+1

        .extern U1PWRC
        .equiv  U1PWRCL, _U1PWRC
        .equiv  U1PWRCH, _U1PWRC+1

        .extern U1IR
        .equiv  U1IRL, _U1IR
        .equiv  U1IRH, _U1IR+1

        .extern U1IE
        .equiv  U1IEL, _U1IE
        .equiv  U1IEH, _U1IE+1

        .extern U1EIR
        .equiv  U1EIRL, _U1EIR
        .equiv  U1EIRH, _U1EIR+1

        .extern U1EIE
        .equiv  U1EIEL, _U1EIE
        .equiv  U1EIEH, _U1EIE+1

        .extern U1STAT
        .equiv  U1STATL, _U1STAT
        .equiv  U1STATH, _U1STAT+1

        .extern U1CON
        .equiv  U1CONL, _U1CON
        .equiv  U1CONH, _U1CON+1

        .extern U1ADDR
        .equiv  U1ADDRL, _U1ADDR
        .equiv  U1ADDRH, _U1ADDR+1

        .extern U1BDTP1
        .equiv  U1BDTP1L, _U1BDTP1
        .equiv  U1BDTP1H, _U1BDTP1+1

        .extern U1FRML
        .equiv  U1FRMLL, _U1FRML
        .equiv  U1FRMLH, _U1FRML+1

        .extern U1FRMH
        .equiv  U1FRMHL, _U1FRMH
        .equiv  U1FRMHH, _U1FRMH+1

        .extern U1TOK
        .equiv  U1TOKL, _U1TOK
        .equiv  U1TOKH, _U1TOK+1

        .extern U1SOF
        .equiv  U1SOFL, _U1SOF
        .equiv  U1SOFH, _U1SOF+1

        .extern U1BDTP2
        .equiv  U1BDTP2L, _U1BDTP2
        .equiv  U1BDTP2H, _U1BDTP2+1

        .extern U1BDTP3
        .equiv  U1BDTP3L, _U1BDTP3
        .equiv  U1BDTP3H, _U1BDTP3+1

        .extern U1CNFG1
        .equiv  U1CNFG1L, _U1CNFG1
        .equiv  U1CNFG1H, _U1CNFG1+1

        .extern U1CNFG2
        .equiv  U1CNFG2L, _U1CNFG2
        .equiv  U1CNFG2H, _U1CNFG2+1

        .extern U1EP0
        .equiv  U1EP0L, _U1EP0
        .equiv  U1EP0H, _U1EP0+1

        .extern U1EP1
        .equiv  U1EP1L, _U1EP1
        .equiv  U1EP1H, _U1EP1+1

        .extern U1EP2
        .equiv  U1EP2L, _U1EP2
        .equiv  U1EP2H, _U1EP2+1

        .extern U1EP3
        .equiv  U1EP3L, _U1EP3
        .equiv  U1EP3H, _U1EP3+1

        .extern U1EP4
        .equiv  U1EP4L, _U1EP4
        .equiv  U1EP4H, _U1EP4+1

        .extern U1EP5
        .equiv  U1EP5L, _U1EP5
        .equiv  U1EP5H, _U1EP5+1

        .extern U1EP6
        .equiv  U1EP6L, _U1EP6
        .equiv  U1EP6H, _U1EP6+1

        .extern U1EP7
        .equiv  U1EP7L, _U1EP7
        .equiv  U1EP7H, _U1EP7+1

        .extern U1EP8
        .equiv  U1EP8L, _U1EP8
        .equiv  U1EP8H, _U1EP8+1

        .extern U1EP9
        .equiv  U1EP9L, _U1EP9
        .equiv  U1EP9H, _U1EP9+1

        .extern U1EP10
        .equiv  U1EP10L, _U1EP10
        .equiv  U1EP10H, _U1EP10+1

        .extern U1EP11
        .equiv  U1EP11L, _U1EP11
        .equiv  U1EP11H, _U1EP11+1

        .extern U1EP12
        .equiv  U1EP12L, _U1EP12
        .equiv  U1EP12H, _U1EP12+1

        .extern U1EP13
        .equiv  U1EP13L, _U1EP13
        .equiv  U1EP13H, _U1EP13+1

        .extern U1EP14
        .equiv  U1EP14L, _U1EP14
        .equiv  U1EP14H, _U1EP14+1

        .extern U1EP15
        .equiv  U1EP15L, _U1EP15
        .equiv  U1EP15H, _U1EP15+1

        .extern C2CTRL1
        .equiv  C2CTRL1L, _C2CTRL1
        .equiv  C2CTRL1H, _C2CTRL1+1

        .extern C2CTRL2
        .equiv  C2CTRL2L, _C2CTRL2
        .equiv  C2CTRL2H, _C2CTRL2+1

        .extern C2VEC
        .equiv  C2VECL, _C2VEC
        .equiv  C2VECH, _C2VEC+1

        .extern C2FCTRL
        .equiv  C2FCTRLL, _C2FCTRL
        .equiv  C2FCTRLH, _C2FCTRL+1

        .extern C2FIFO
        .equiv  C2FIFOL, _C2FIFO
        .equiv  C2FIFOH, _C2FIFO+1

        .extern C2INTF
        .equiv  C2INTFL, _C2INTF
        .equiv  C2INTFH, _C2INTF+1

        .extern C2INTE
        .equiv  C2INTEL, _C2INTE
        .equiv  C2INTEH, _C2INTE+1

        .extern C2EC
        .equiv  C2ECL, _C2EC
        .equiv  C2ECH, _C2EC+1

        .extern C2RERRCNT
        .equiv  C2RERRCNTL, _C2RERRCNT
        .equiv  C2RERRCNTH, _C2RERRCNT+1

        .extern C2TERRCNT
        .equiv  C2TERRCNTL, _C2TERRCNT
        .equiv  C2TERRCNTH, _C2TERRCNT+1

        .extern C2CFG1
        .equiv  C2CFG1L, _C2CFG1
        .equiv  C2CFG1H, _C2CFG1+1

        .extern C2CFG2
        .equiv  C2CFG2L, _C2CFG2
        .equiv  C2CFG2H, _C2CFG2+1

        .extern C2FEN1
        .equiv  C2FEN1L, _C2FEN1
        .equiv  C2FEN1H, _C2FEN1+1

        .extern C2FMSKSEL1
        .equiv  C2FMSKSEL1L, _C2FMSKSEL1
        .equiv  C2FMSKSEL1H, _C2FMSKSEL1+1

        .extern C2FMSKSEL2
        .equiv  C2FMSKSEL2L, _C2FMSKSEL2
        .equiv  C2FMSKSEL2H, _C2FMSKSEL2+1

        .extern C2BUFPNT1
        .equiv  C2BUFPNT1L, _C2BUFPNT1
        .equiv  C2BUFPNT1H, _C2BUFPNT1+1

        .extern C2RXFUL1
        .equiv  C2RXFUL1L, _C2RXFUL1
        .equiv  C2RXFUL1H, _C2RXFUL1+1

        .extern C2BUFPNT2
        .equiv  C2BUFPNT2L, _C2BUFPNT2
        .equiv  C2BUFPNT2H, _C2BUFPNT2+1

        .extern C2RXFUL2
        .equiv  C2RXFUL2L, _C2RXFUL2
        .equiv  C2RXFUL2H, _C2RXFUL2+1

        .extern C2BUFPNT3
        .equiv  C2BUFPNT3L, _C2BUFPNT3
        .equiv  C2BUFPNT3H, _C2BUFPNT3+1

        .extern C2BUFPNT4
        .equiv  C2BUFPNT4L, _C2BUFPNT4
        .equiv  C2BUFPNT4H, _C2BUFPNT4+1

        .extern C2RXOVF1
        .equiv  C2RXOVF1L, _C2RXOVF1
        .equiv  C2RXOVF1H, _C2RXOVF1+1

        .extern C2RXOVF2
        .equiv  C2RXOVF2L, _C2RXOVF2
        .equiv  C2RXOVF2H, _C2RXOVF2+1

        .extern C2RXM0SID
        .equiv  C2RXM0SIDL, _C2RXM0SID
        .equiv  C2RXM0SIDH, _C2RXM0SID+1

        .extern C2TR01CON
        .equiv  C2TR01CONL, _C2TR01CON
        .equiv  C2TR01CONH, _C2TR01CON+1

        .extern C2RXM0EID
        .equiv  C2RXM0EIDL, _C2RXM0EID
        .equiv  C2RXM0EIDH, _C2RXM0EID+1

        .extern C2TR23CON
        .equiv  C2TR23CONL, _C2TR23CON
        .equiv  C2TR23CONH, _C2TR23CON+1

        .extern C2RXM1SID
        .equiv  C2RXM1SIDL, _C2RXM1SID
        .equiv  C2RXM1SIDH, _C2RXM1SID+1

        .extern C2TR45CON
        .equiv  C2TR45CONL, _C2TR45CON
        .equiv  C2TR45CONH, _C2TR45CON+1

        .extern C2RXM1EID
        .equiv  C2RXM1EIDL, _C2RXM1EID
        .equiv  C2RXM1EIDH, _C2RXM1EID+1

        .extern C2TR67CON
        .equiv  C2TR67CONL, _C2TR67CON
        .equiv  C2TR67CONH, _C2TR67CON+1

        .extern C2RXM2SID
        .equiv  C2RXM2SIDL, _C2RXM2SID
        .equiv  C2RXM2SIDH, _C2RXM2SID+1

        .extern C2RXM2EID
        .equiv  C2RXM2EIDL, _C2RXM2EID
        .equiv  C2RXM2EIDH, _C2RXM2EID+1

        .extern C2RXD
        .equiv  C2RXDL, _C2RXD
        .equiv  C2RXDH, _C2RXD+1

        .extern C2RXF0SID
        .equiv  C2RXF0SIDL, _C2RXF0SID
        .equiv  C2RXF0SIDH, _C2RXF0SID+1

        .extern C2RXF0EID
        .equiv  C2RXF0EIDL, _C2RXF0EID
        .equiv  C2RXF0EIDH, _C2RXF0EID+1

        .extern C2TXD
        .equiv  C2TXDL, _C2TXD
        .equiv  C2TXDH, _C2TXD+1

        .extern C2RXF1SID
        .equiv  C2RXF1SIDL, _C2RXF1SID
        .equiv  C2RXF1SIDH, _C2RXF1SID+1

        .extern C2RXF1EID
        .equiv  C2RXF1EIDL, _C2RXF1EID
        .equiv  C2RXF1EIDH, _C2RXF1EID+1

        .extern C2RXF2SID
        .equiv  C2RXF2SIDL, _C2RXF2SID
        .equiv  C2RXF2SIDH, _C2RXF2SID+1

        .extern C2RXF2EID
        .equiv  C2RXF2EIDL, _C2RXF2EID
        .equiv  C2RXF2EIDH, _C2RXF2EID+1

        .extern C2RXF3SID
        .equiv  C2RXF3SIDL, _C2RXF3SID
        .equiv  C2RXF3SIDH, _C2RXF3SID+1

        .extern C2RXF3EID
        .equiv  C2RXF3EIDL, _C2RXF3EID
        .equiv  C2RXF3EIDH, _C2RXF3EID+1

        .extern C2RXF4SID
        .equiv  C2RXF4SIDL, _C2RXF4SID
        .equiv  C2RXF4SIDH, _C2RXF4SID+1

        .extern C2RXF4EID
        .equiv  C2RXF4EIDL, _C2RXF4EID
        .equiv  C2RXF4EIDH, _C2RXF4EID+1

        .extern C2RXF5SID
        .equiv  C2RXF5SIDL, _C2RXF5SID
        .equiv  C2RXF5SIDH, _C2RXF5SID+1

        .extern C2RXF5EID
        .equiv  C2RXF5EIDL, _C2RXF5EID
        .equiv  C2RXF5EIDH, _C2RXF5EID+1

        .extern C2RXF6SID
        .equiv  C2RXF6SIDL, _C2RXF6SID
        .equiv  C2RXF6SIDH, _C2RXF6SID+1

        .extern C2RXF6EID
        .equiv  C2RXF6EIDL, _C2RXF6EID
        .equiv  C2RXF6EIDH, _C2RXF6EID+1

        .extern C2RXF7SID
        .equiv  C2RXF7SIDL, _C2RXF7SID
        .equiv  C2RXF7SIDH, _C2RXF7SID+1

        .extern C2RXF7EID
        .equiv  C2RXF7EIDL, _C2RXF7EID
        .equiv  C2RXF7EIDH, _C2RXF7EID+1

        .extern C2RXF8SID
        .equiv  C2RXF8SIDL, _C2RXF8SID
        .equiv  C2RXF8SIDH, _C2RXF8SID+1

        .extern C2RXF8EID
        .equiv  C2RXF8EIDL, _C2RXF8EID
        .equiv  C2RXF8EIDH, _C2RXF8EID+1

        .extern C2RXF9SID
        .equiv  C2RXF9SIDL, _C2RXF9SID
        .equiv  C2RXF9SIDH, _C2RXF9SID+1

        .extern C2RXF9EID
        .equiv  C2RXF9EIDL, _C2RXF9EID
        .equiv  C2RXF9EIDH, _C2RXF9EID+1

        .extern C2RXF10SID
        .equiv  C2RXF10SIDL, _C2RXF10SID
        .equiv  C2RXF10SIDH, _C2RXF10SID+1

        .extern C2RXF10EID
        .equiv  C2RXF10EIDL, _C2RXF10EID
        .equiv  C2RXF10EIDH, _C2RXF10EID+1

        .extern C2RXF11SID
        .equiv  C2RXF11SIDL, _C2RXF11SID
        .equiv  C2RXF11SIDH, _C2RXF11SID+1

        .extern C2RXF11EID
        .equiv  C2RXF11EIDL, _C2RXF11EID
        .equiv  C2RXF11EIDH, _C2RXF11EID+1

        .extern C2RXF12SID
        .equiv  C2RXF12SIDL, _C2RXF12SID
        .equiv  C2RXF12SIDH, _C2RXF12SID+1

        .extern C2RXF12EID
        .equiv  C2RXF12EIDL, _C2RXF12EID
        .equiv  C2RXF12EIDH, _C2RXF12EID+1

        .extern C2RXF13SID
        .equiv  C2RXF13SIDL, _C2RXF13SID
        .equiv  C2RXF13SIDH, _C2RXF13SID+1

        .extern C2RXF13EID
        .equiv  C2RXF13EIDL, _C2RXF13EID
        .equiv  C2RXF13EIDH, _C2RXF13EID+1

        .extern C2RXF14SID
        .equiv  C2RXF14SIDL, _C2RXF14SID
        .equiv  C2RXF14SIDH, _C2RXF14SID+1

        .extern C2RXF14EID
        .equiv  C2RXF14EIDL, _C2RXF14EID
        .equiv  C2RXF14EIDH, _C2RXF14EID+1

        .extern C2RXF15SID
        .equiv  C2RXF15SIDL, _C2RXF15SID
        .equiv  C2RXF15SIDH, _C2RXF15SID+1

        .extern C2RXF15EID
        .equiv  C2RXF15EIDL, _C2RXF15EID
        .equiv  C2RXF15EIDH, _C2RXF15EID+1

        .extern U1PWMRRS
        .equiv  U1PWMRRSL, _U1PWMRRS
        .equiv  U1PWMRRSH, _U1PWMRRS+1

        .extern U1PWMCON
        .equiv  U1PWMCONL, _U1PWMCON
        .equiv  U1PWMCONH, _U1PWMCON+1

        .extern QEI2CON
        .equiv  QEI2CONL, _QEI2CON
        .equiv  QEI2CONH, _QEI2CON+1

        .extern QEI2IOC
        .equiv  QEI2IOCL, _QEI2IOC
        .equiv  QEI2IOCH, _QEI2IOC+1

        .extern QEI2STAT
        .equiv  QEI2STATL, _QEI2STAT
        .equiv  QEI2STATH, _QEI2STAT+1

        .extern POS2CNTL
        .equiv  POS2CNTLL, _POS2CNTL
        .equiv  POS2CNTLH, _POS2CNTL+1

        .extern POS2CNTH
        .equiv  POS2CNTHL, _POS2CNTH
        .equiv  POS2CNTHH, _POS2CNTH+1

        .extern POS2HLD
        .equiv  POS2HLDL, _POS2HLD
        .equiv  POS2HLDH, _POS2HLD+1

        .extern VEL2CNT
        .equiv  VEL2CNTL, _VEL2CNT
        .equiv  VEL2CNTH, _VEL2CNT+1

        .extern INT2TMRL
        .equiv  INT2TMRLL, _INT2TMRL
        .equiv  INT2TMRLH, _INT2TMRL+1

        .extern INT2TMRH
        .equiv  INT2TMRHL, _INT2TMRH
        .equiv  INT2TMRHH, _INT2TMRH+1

        .extern INT2HLDL
        .equiv  INT2HLDLL, _INT2HLDL
        .equiv  INT2HLDLH, _INT2HLDL+1

        .extern INT2HLDH
        .equiv  INT2HLDHL, _INT2HLDH
        .equiv  INT2HLDHH, _INT2HLDH+1

        .extern INDX2CNTL
        .equiv  INDX2CNTLL, _INDX2CNTL
        .equiv  INDX2CNTLH, _INDX2CNTL+1

        .extern INDX2CNTH
        .equiv  INDX2CNTHL, _INDX2CNTH
        .equiv  INDX2CNTHH, _INDX2CNTH+1

        .extern INDX2HLD
        .equiv  INDX2HLDL, _INDX2HLD
        .equiv  INDX2HLDH, _INDX2HLD+1

        .extern QEI2GECL
        .equiv  QEI2GECLL, _QEI2GECL
        .equiv  QEI2GECLH, _QEI2GECL+1

        .extern QEI2ICL
        .equiv  QEI2ICLL, _QEI2ICL
        .equiv  QEI2ICLH, _QEI2ICL+1

        .extern QEI2GECH
        .equiv  QEI2GECHL, _QEI2GECH
        .equiv  QEI2GECHH, _QEI2GECH+1

        .extern QEI2ICH
        .equiv  QEI2ICHL, _QEI2ICH
        .equiv  QEI2ICHH, _QEI2ICH+1

        .extern QEI2LECL
        .equiv  QEI2LECLL, _QEI2LECL
        .equiv  QEI2LECLH, _QEI2LECL+1

        .extern QEI2LECH
        .equiv  QEI2LECHL, _QEI2LECH
        .equiv  QEI2LECHH, _QEI2LECH+1

        .extern PMCON
        .equiv  PMCONL, _PMCON
        .equiv  PMCONH, _PMCON+1

        .extern PMMODE
        .equiv  PMMODEL, _PMMODE
        .equiv  PMMODEH, _PMMODE+1

        .extern PMADDR
        .equiv  PMADDRL, _PMADDR
        .equiv  PMADDRH, _PMADDR+1

        .extern PMDOUT1
        .equiv  PMDOUT1L, _PMDOUT1
        .equiv  PMDOUT1H, _PMDOUT1+1

        .extern PMDOUT2
        .equiv  PMDOUT2L, _PMDOUT2
        .equiv  PMDOUT2H, _PMDOUT2+1

        .extern PMDIN1
        .equiv  PMDIN1L, _PMDIN1
        .equiv  PMDIN1H, _PMDIN1+1

        .extern PMDIN2
        .equiv  PMDIN2L, _PMDIN2
        .equiv  PMDIN2H, _PMDIN2+1

        .extern PMAEN
        .equiv  PMAENL, _PMAEN
        .equiv  PMAENH, _PMAEN+1

        .extern PMSTAT
        .equiv  PMSTATL, _PMSTAT
        .equiv  PMSTATH, _PMSTAT+1

        .extern ALRMVAL
        .equiv  ALRMVALL, _ALRMVAL
        .equiv  ALRMVALH, _ALRMVAL+1

        .extern ALCFGRPT
        .equiv  ALCFGRPTL, _ALCFGRPT
        .equiv  ALCFGRPTH, _ALCFGRPT+1

        .extern RTCVAL
        .equiv  RTCVALL, _RTCVAL
        .equiv  RTCVALH, _RTCVAL+1

        .extern RCFGCAL
        .equiv  RCFGCALL, _RCFGCAL
        .equiv  RCFGCALH, _RCFGCAL+1

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

        .extern RPOR5
        .equiv  RPOR5L, _RPOR5
        .equiv  RPOR5H, _RPOR5+1

        .extern RPOR6
        .equiv  RPOR6L, _RPOR6
        .equiv  RPOR6H, _RPOR6+1

        .extern RPOR7
        .equiv  RPOR7L, _RPOR7
        .equiv  RPOR7H, _RPOR7+1

        .extern RPOR8
        .equiv  RPOR8L, _RPOR8
        .equiv  RPOR8H, _RPOR8+1

        .extern RPOR9
        .equiv  RPOR9L, _RPOR9
        .equiv  RPOR9H, _RPOR9+1

        .extern RPOR11
        .equiv  RPOR11L, _RPOR11
        .equiv  RPOR11H, _RPOR11+1

        .extern RPOR12
        .equiv  RPOR12L, _RPOR12
        .equiv  RPOR12H, _RPOR12+1

        .extern RPOR13
        .equiv  RPOR13L, _RPOR13
        .equiv  RPOR13H, _RPOR13+1

        .extern RPOR14
        .equiv  RPOR14L, _RPOR14
        .equiv  RPOR14H, _RPOR14+1

        .extern RPOR15
        .equiv  RPOR15L, _RPOR15
        .equiv  RPOR15H, _RPOR15+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR2
        .equiv  RPINR2L, _RPINR2
        .equiv  RPINR2H, _RPINR2+1

        .extern RPINR3
        .equiv  RPINR3L, _RPINR3
        .equiv  RPINR3H, _RPINR3+1

        .extern RPINR4
        .equiv  RPINR4L, _RPINR4
        .equiv  RPINR4H, _RPINR4+1

        .extern RPINR5
        .equiv  RPINR5L, _RPINR5
        .equiv  RPINR5H, _RPINR5+1

        .extern RPINR6
        .equiv  RPINR6L, _RPINR6
        .equiv  RPINR6H, _RPINR6+1

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR8
        .equiv  RPINR8L, _RPINR8
        .equiv  RPINR8H, _RPINR8+1

        .extern RPINR9
        .equiv  RPINR9L, _RPINR9
        .equiv  RPINR9H, _RPINR9+1

        .extern RPINR10
        .equiv  RPINR10L, _RPINR10
        .equiv  RPINR10H, _RPINR10+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR12
        .equiv  RPINR12L, _RPINR12
        .equiv  RPINR12H, _RPINR12+1

        .extern RPINR13
        .equiv  RPINR13L, _RPINR13
        .equiv  RPINR13H, _RPINR13+1

        .extern RPINR14
        .equiv  RPINR14L, _RPINR14
        .equiv  RPINR14H, _RPINR14+1

        .extern RPINR15
        .equiv  RPINR15L, _RPINR15
        .equiv  RPINR15H, _RPINR15+1

        .extern RPINR16
        .equiv  RPINR16L, _RPINR16
        .equiv  RPINR16H, _RPINR16+1

        .extern RPINR17
        .equiv  RPINR17L, _RPINR17
        .equiv  RPINR17H, _RPINR17+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR19
        .equiv  RPINR19L, _RPINR19
        .equiv  RPINR19H, _RPINR19+1

        .extern RPINR20
        .equiv  RPINR20L, _RPINR20
        .equiv  RPINR20H, _RPINR20+1

        .extern RPINR21
        .equiv  RPINR21L, _RPINR21
        .equiv  RPINR21H, _RPINR21+1

        .extern RPINR23
        .equiv  RPINR23L, _RPINR23
        .equiv  RPINR23H, _RPINR23+1

        .extern RPINR24
        .equiv  RPINR24L, _RPINR24
        .equiv  RPINR24H, _RPINR24+1

        .extern RPINR25
        .equiv  RPINR25L, _RPINR25
        .equiv  RPINR25H, _RPINR25+1

        .extern RPINR26
        .equiv  RPINR26L, _RPINR26
        .equiv  RPINR26H, _RPINR26+1

        .extern RPINR27
        .equiv  RPINR27L, _RPINR27
        .equiv  RPINR27H, _RPINR27+1

        .extern RPINR28
        .equiv  RPINR28L, _RPINR28
        .equiv  RPINR28H, _RPINR28+1

        .extern RPINR29
        .equiv  RPINR29L, _RPINR29
        .equiv  RPINR29H, _RPINR29+1

        .extern RPINR30
        .equiv  RPINR30L, _RPINR30
        .equiv  RPINR30H, _RPINR30+1

        .extern RPINR31
        .equiv  RPINR31L, _RPINR31
        .equiv  RPINR31H, _RPINR31+1

        .extern RPINR32
        .equiv  RPINR32L, _RPINR32
        .equiv  RPINR32H, _RPINR32+1

        .extern RPINR33
        .equiv  RPINR33L, _RPINR33
        .equiv  RPINR33H, _RPINR33+1

        .extern RPINR34
        .equiv  RPINR34L, _RPINR34
        .equiv  RPINR34H, _RPINR34+1

        .extern RPINR35
        .equiv  RPINR35L, _RPINR35
        .equiv  RPINR35H, _RPINR35+1

        .extern RPINR36
        .equiv  RPINR36L, _RPINR36
        .equiv  RPINR36H, _RPINR36+1

        .extern RPINR37
        .equiv  RPINR37L, _RPINR37
        .equiv  RPINR37H, _RPINR37+1

        .extern RPINR38
        .equiv  RPINR38L, _RPINR38
        .equiv  RPINR38H, _RPINR38+1

        .extern RPINR39
        .equiv  RPINR39L, _RPINR39
        .equiv  RPINR39H, _RPINR39+1

        .extern RPINR40
        .equiv  RPINR40L, _RPINR40
        .equiv  RPINR40H, _RPINR40+1

        .extern RPINR41
        .equiv  RPINR41L, _RPINR41
        .equiv  RPINR41H, _RPINR41+1

        .extern RPINR42
        .equiv  RPINR42L, _RPINR42
        .equiv  RPINR42H, _RPINR42+1

        .extern RPINR43
        .equiv  RPINR43L, _RPINR43
        .equiv  RPINR43H, _RPINR43+1

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

        .extern ACLKCON3
        .equiv  ACLKCON3L, _ACLKCON3
        .equiv  ACLKCON3H, _ACLKCON3+1

        .extern ACLKDIV3
        .equiv  ACLKDIV3L, _ACLKDIV3
        .equiv  ACLKDIV3H, _ACLKDIV3+1

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

        .extern PMD5
        .equiv  PMD5L, _PMD5
        .equiv  PMD5H, _PMD5+1

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

        .extern IFS7
        .equiv  IFS7L, _IFS7
        .equiv  IFS7H, _IFS7+1

        .extern IFS8
        .equiv  IFS8L, _IFS8
        .equiv  IFS8H, _IFS8+1

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

        .extern IEC7
        .equiv  IEC7L, _IEC7
        .equiv  IEC7H, _IEC7+1

        .extern IEC8
        .equiv  IEC8L, _IEC8
        .equiv  IEC8H, _IEC8+1

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

        .extern IPC10
        .equiv  IPC10L, _IPC10
        .equiv  IPC10H, _IPC10+1

        .extern IPC11
        .equiv  IPC11L, _IPC11
        .equiv  IPC11H, _IPC11+1

        .extern IPC12
        .equiv  IPC12L, _IPC12
        .equiv  IPC12H, _IPC12+1

        .extern IPC13
        .equiv  IPC13L, _IPC13
        .equiv  IPC13H, _IPC13+1

        .extern IPC14
        .equiv  IPC14L, _IPC14
        .equiv  IPC14H, _IPC14+1

        .extern IPC15
        .equiv  IPC15L, _IPC15
        .equiv  IPC15H, _IPC15+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC17
        .equiv  IPC17L, _IPC17
        .equiv  IPC17H, _IPC17+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

        .extern IPC20
        .equiv  IPC20L, _IPC20
        .equiv  IPC20H, _IPC20+1

        .extern IPC21
        .equiv  IPC21L, _IPC21
        .equiv  IPC21H, _IPC21+1

        .extern IPC22
        .equiv  IPC22L, _IPC22
        .equiv  IPC22H, _IPC22+1

        .extern IPC23
        .equiv  IPC23L, _IPC23
        .equiv  IPC23H, _IPC23+1

        .extern IPC24
        .equiv  IPC24L, _IPC24
        .equiv  IPC24H, _IPC24+1

        .extern IPC29
        .equiv  IPC29L, _IPC29
        .equiv  IPC29H, _IPC29+1

        .extern IPC30
        .equiv  IPC30L, _IPC30
        .equiv  IPC30H, _IPC30+1

        .extern IPC31
        .equiv  IPC31L, _IPC31
        .equiv  IPC31H, _IPC31+1

        .extern IPC32
        .equiv  IPC32L, _IPC32
        .equiv  IPC32H, _IPC32+1

        .extern IPC33
        .equiv  IPC33L, _IPC33
        .equiv  IPC33H, _IPC33+1

        .extern IPC34
        .equiv  IPC34L, _IPC34
        .equiv  IPC34H, _IPC34+1

        .extern IPC35
        .equiv  IPC35L, _IPC35
        .equiv  IPC35H, _IPC35+1

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

        .extern OC5CON1
        .equiv  OC5CON1L, _OC5CON1
        .equiv  OC5CON1H, _OC5CON1+1

        .extern OC5CON2
        .equiv  OC5CON2L, _OC5CON2
        .equiv  OC5CON2H, _OC5CON2+1

        .extern OC5RS
        .equiv  OC5RSL, _OC5RS
        .equiv  OC5RSH, _OC5RS+1

        .extern OC5R
        .equiv  OC5RL, _OC5R
        .equiv  OC5RH, _OC5R+1

        .extern OC5TMR
        .equiv  OC5TMRL, _OC5TMR
        .equiv  OC5TMRH, _OC5TMR+1

        .extern OC6CON1
        .equiv  OC6CON1L, _OC6CON1
        .equiv  OC6CON1H, _OC6CON1+1

        .extern OC6CON2
        .equiv  OC6CON2L, _OC6CON2
        .equiv  OC6CON2H, _OC6CON2+1

        .extern OC6RS
        .equiv  OC6RSL, _OC6RS
        .equiv  OC6RSH, _OC6RS+1

        .extern OC6R
        .equiv  OC6RL, _OC6R
        .equiv  OC6RH, _OC6R+1

        .extern OC6TMR
        .equiv  OC6TMRL, _OC6TMR
        .equiv  OC6TMRH, _OC6TMR+1

        .extern OC7CON1
        .equiv  OC7CON1L, _OC7CON1
        .equiv  OC7CON1H, _OC7CON1+1

        .extern OC7CON2
        .equiv  OC7CON2L, _OC7CON2
        .equiv  OC7CON2H, _OC7CON2+1

        .extern OC7RS
        .equiv  OC7RSL, _OC7RS
        .equiv  OC7RSH, _OC7RS+1

        .extern OC7R
        .equiv  OC7RL, _OC7R
        .equiv  OC7RH, _OC7R+1

        .extern OC7TMR
        .equiv  OC7TMRL, _OC7TMR
        .equiv  OC7TMRH, _OC7TMR+1

        .extern OC8CON1
        .equiv  OC8CON1L, _OC8CON1
        .equiv  OC8CON1H, _OC8CON1+1

        .extern OC8CON2
        .equiv  OC8CON2L, _OC8CON2
        .equiv  OC8CON2H, _OC8CON2+1

        .extern OC8RS
        .equiv  OC8RSL, _OC8RS
        .equiv  OC8RSH, _OC8RS+1

        .extern OC8R
        .equiv  OC8RL, _OC8R
        .equiv  OC8RH, _OC8R+1

        .extern OC8TMR
        .equiv  OC8TMRL, _OC8TMR
        .equiv  OC8TMRH, _OC8TMR+1

        .extern OC9CON1
        .equiv  OC9CON1L, _OC9CON1
        .equiv  OC9CON1H, _OC9CON1+1

        .extern OC9CON2
        .equiv  OC9CON2L, _OC9CON2
        .equiv  OC9CON2H, _OC9CON2+1

        .extern OC9RS
        .equiv  OC9RSL, _OC9RS
        .equiv  OC9RSH, _OC9RS+1

        .extern OC9R
        .equiv  OC9RL, _OC9R
        .equiv  OC9RH, _OC9R+1

        .extern OC9TMR
        .equiv  OC9TMRL, _OC9TMR
        .equiv  OC9TMRH, _OC9TMR+1

        .extern OC10CON1
        .equiv  OC10CON1L, _OC10CON1
        .equiv  OC10CON1H, _OC10CON1+1

        .extern OC10CON2
        .equiv  OC10CON2L, _OC10CON2
        .equiv  OC10CON2H, _OC10CON2+1

        .extern OC10RS
        .equiv  OC10RSL, _OC10RS
        .equiv  OC10RSH, _OC10RS+1

        .extern OC10R
        .equiv  OC10RL, _OC10R
        .equiv  OC10RH, _OC10R+1

        .extern OC10TMR
        .equiv  OC10TMRL, _OC10TMR
        .equiv  OC10TMRH, _OC10TMR+1

        .extern OC11CON1
        .equiv  OC11CON1L, _OC11CON1
        .equiv  OC11CON1H, _OC11CON1+1

        .extern OC11CON2
        .equiv  OC11CON2L, _OC11CON2
        .equiv  OC11CON2H, _OC11CON2+1

        .extern OC11RS
        .equiv  OC11RSL, _OC11RS
        .equiv  OC11RSH, _OC11RS+1

        .extern OC11R
        .equiv  OC11RL, _OC11R
        .equiv  OC11RH, _OC11R+1

        .extern OC11TMR
        .equiv  OC11TMRL, _OC11TMR
        .equiv  OC11TMRH, _OC11TMR+1

        .extern OC12CON1
        .equiv  OC12CON1L, _OC12CON1
        .equiv  OC12CON1H, _OC12CON1+1

        .extern OC12CON2
        .equiv  OC12CON2L, _OC12CON2
        .equiv  OC12CON2H, _OC12CON2+1

        .extern OC12RS
        .equiv  OC12RSL, _OC12RS
        .equiv  OC12RSH, _OC12RS+1

        .extern OC12R
        .equiv  OC12RL, _OC12R
        .equiv  OC12RH, _OC12R+1

        .extern OC12TMR
        .equiv  OC12TMRL, _OC12TMR
        .equiv  OC12TMRH, _OC12TMR+1

        .extern OC13CON1
        .equiv  OC13CON1L, _OC13CON1
        .equiv  OC13CON1H, _OC13CON1+1

        .extern OC13CON2
        .equiv  OC13CON2L, _OC13CON2
        .equiv  OC13CON2H, _OC13CON2+1

        .extern OC13RS
        .equiv  OC13RSL, _OC13RS
        .equiv  OC13RSH, _OC13RS+1

        .extern OC13R
        .equiv  OC13RL, _OC13R
        .equiv  OC13RH, _OC13R+1

        .extern OC13TMR
        .equiv  OC13TMRL, _OC13TMR
        .equiv  OC13TMRH, _OC13TMR+1

        .extern OC14CON1
        .equiv  OC14CON1L, _OC14CON1
        .equiv  OC14CON1H, _OC14CON1+1

        .extern OC14CON2
        .equiv  OC14CON2L, _OC14CON2
        .equiv  OC14CON2H, _OC14CON2+1

        .extern OC14RS
        .equiv  OC14RSL, _OC14RS
        .equiv  OC14RSH, _OC14RS+1

        .extern OC14R
        .equiv  OC14RL, _OC14R
        .equiv  OC14RH, _OC14R+1

        .extern OC14TMR
        .equiv  OC14TMRL, _OC14TMR
        .equiv  OC14TMRH, _OC14TMR+1

        .extern OC15CON1
        .equiv  OC15CON1L, _OC15CON1
        .equiv  OC15CON1H, _OC15CON1+1

        .extern OC15CON2
        .equiv  OC15CON2L, _OC15CON2
        .equiv  OC15CON2H, _OC15CON2+1

        .extern OC15RS
        .equiv  OC15RSL, _OC15RS
        .equiv  OC15RSH, _OC15RS+1

        .extern OC15R
        .equiv  OC15RL, _OC15R
        .equiv  OC15RH, _OC15R+1

        .extern OC15TMR
        .equiv  OC15TMRL, _OC15TMR
        .equiv  OC15TMRH, _OC15TMR+1

        .extern OC16CON1
        .equiv  OC16CON1L, _OC16CON1
        .equiv  OC16CON1H, _OC16CON1+1

        .extern OC16CON2
        .equiv  OC16CON2L, _OC16CON2
        .equiv  OC16CON2H, _OC16CON2+1

        .extern OC16RS
        .equiv  OC16RSL, _OC16RS
        .equiv  OC16RSH, _OC16RS+1

        .extern OC16R
        .equiv  OC16RL, _OC16R
        .equiv  OC16RH, _OC16R+1

        .extern OC16TMR
        .equiv  OC16TMRL, _OC16TMR
        .equiv  OC16TMRH, _OC16TMR+1

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

        .extern DMA4CON
        .equiv  DMA4CONL, _DMA4CON
        .equiv  DMA4CONH, _DMA4CON+1

        .extern DMA4REQ
        .equiv  DMA4REQL, _DMA4REQ
        .equiv  DMA4REQH, _DMA4REQ+1

        .extern DMA4STAL
        .equiv  DMA4STALL, _DMA4STAL
        .equiv  DMA4STALH, _DMA4STAL+1

        .extern DMA4STAH
        .equiv  DMA4STAHL, _DMA4STAH
        .equiv  DMA4STAHH, _DMA4STAH+1

        .extern DMA4STBL
        .equiv  DMA4STBLL, _DMA4STBL
        .equiv  DMA4STBLH, _DMA4STBL+1

        .extern DMA4STBH
        .equiv  DMA4STBHL, _DMA4STBH
        .equiv  DMA4STBHH, _DMA4STBH+1

        .extern DMA4PAD
        .equiv  DMA4PADL, _DMA4PAD
        .equiv  DMA4PADH, _DMA4PAD+1

        .extern DMA4CNT
        .equiv  DMA4CNTL, _DMA4CNT
        .equiv  DMA4CNTH, _DMA4CNT+1

        .extern DMA5CON
        .equiv  DMA5CONL, _DMA5CON
        .equiv  DMA5CONH, _DMA5CON+1

        .extern DMA5REQ
        .equiv  DMA5REQL, _DMA5REQ
        .equiv  DMA5REQH, _DMA5REQ+1

        .extern DMA5STAL
        .equiv  DMA5STALL, _DMA5STAL
        .equiv  DMA5STALH, _DMA5STAL+1

        .extern DMA5STAH
        .equiv  DMA5STAHL, _DMA5STAH
        .equiv  DMA5STAHH, _DMA5STAH+1

        .extern DMA5STBL
        .equiv  DMA5STBLL, _DMA5STBL
        .equiv  DMA5STBLH, _DMA5STBL+1

        .extern DMA5STBH
        .equiv  DMA5STBHL, _DMA5STBH
        .equiv  DMA5STBHH, _DMA5STBH+1

        .extern DMA5PAD
        .equiv  DMA5PADL, _DMA5PAD
        .equiv  DMA5PADH, _DMA5PAD+1

        .extern DMA5CNT
        .equiv  DMA5CNTL, _DMA5CNT
        .equiv  DMA5CNTH, _DMA5CNT+1

        .extern DMA6CON
        .equiv  DMA6CONL, _DMA6CON
        .equiv  DMA6CONH, _DMA6CON+1

        .extern DMA6REQ
        .equiv  DMA6REQL, _DMA6REQ
        .equiv  DMA6REQH, _DMA6REQ+1

        .extern DMA6STAL
        .equiv  DMA6STALL, _DMA6STAL
        .equiv  DMA6STALH, _DMA6STAL+1

        .extern DMA6STAH
        .equiv  DMA6STAHL, _DMA6STAH
        .equiv  DMA6STAHH, _DMA6STAH+1

        .extern DMA6STBL
        .equiv  DMA6STBLL, _DMA6STBL
        .equiv  DMA6STBLH, _DMA6STBL+1

        .extern DMA6STBH
        .equiv  DMA6STBHL, _DMA6STBH
        .equiv  DMA6STBHH, _DMA6STBH+1

        .extern DMA6PAD
        .equiv  DMA6PADL, _DMA6PAD
        .equiv  DMA6PADH, _DMA6PAD+1

        .extern DMA6CNT
        .equiv  DMA6CNTL, _DMA6CNT
        .equiv  DMA6CNTH, _DMA6CNT+1

        .extern DMA7CON
        .equiv  DMA7CONL, _DMA7CON
        .equiv  DMA7CONH, _DMA7CON+1

        .extern DMA7REQ
        .equiv  DMA7REQL, _DMA7REQ
        .equiv  DMA7REQH, _DMA7REQ+1

        .extern DMA7STAL
        .equiv  DMA7STALL, _DMA7STAL
        .equiv  DMA7STALH, _DMA7STAL+1

        .extern DMA7STAH
        .equiv  DMA7STAHL, _DMA7STAH
        .equiv  DMA7STAHH, _DMA7STAH+1

        .extern DMA7STBL
        .equiv  DMA7STBLL, _DMA7STBL
        .equiv  DMA7STBLH, _DMA7STBL+1

        .extern DMA7STBH
        .equiv  DMA7STBHL, _DMA7STBH
        .equiv  DMA7STBHH, _DMA7STBH+1

        .extern DMA7PAD
        .equiv  DMA7PADL, _DMA7PAD
        .equiv  DMA7PADH, _DMA7PAD+1

        .extern DMA7CNT
        .equiv  DMA7CNTL, _DMA7CNT
        .equiv  DMA7CNTH, _DMA7CNT+1

        .extern DMA8CON
        .equiv  DMA8CONL, _DMA8CON
        .equiv  DMA8CONH, _DMA8CON+1

        .extern DMA8REQ
        .equiv  DMA8REQL, _DMA8REQ
        .equiv  DMA8REQH, _DMA8REQ+1

        .extern DMA8STAL
        .equiv  DMA8STALL, _DMA8STAL
        .equiv  DMA8STALH, _DMA8STAL+1

        .extern DMA8STAH
        .equiv  DMA8STAHL, _DMA8STAH
        .equiv  DMA8STAHH, _DMA8STAH+1

        .extern DMA8STBL
        .equiv  DMA8STBLL, _DMA8STBL
        .equiv  DMA8STBLH, _DMA8STBL+1

        .extern DMA8STBH
        .equiv  DMA8STBHL, _DMA8STBH
        .equiv  DMA8STBHH, _DMA8STBH+1

        .extern DMA8PAD
        .equiv  DMA8PADL, _DMA8PAD
        .equiv  DMA8PADH, _DMA8PAD+1

        .extern DMA8CNT
        .equiv  DMA8CNTL, _DMA8CNT
        .equiv  DMA8CNTH, _DMA8CNT+1

        .extern DMA9CON
        .equiv  DMA9CONL, _DMA9CON
        .equiv  DMA9CONH, _DMA9CON+1

        .extern DMA9REQ
        .equiv  DMA9REQL, _DMA9REQ
        .equiv  DMA9REQH, _DMA9REQ+1

        .extern DMA9STAL
        .equiv  DMA9STALL, _DMA9STAL
        .equiv  DMA9STALH, _DMA9STAL+1

        .extern DMA9STAH
        .equiv  DMA9STAHL, _DMA9STAH
        .equiv  DMA9STAHH, _DMA9STAH+1

        .extern DMA9STBL
        .equiv  DMA9STBLL, _DMA9STBL
        .equiv  DMA9STBLH, _DMA9STBL+1

        .extern DMA9STBH
        .equiv  DMA9STBHL, _DMA9STBH
        .equiv  DMA9STBHH, _DMA9STBH+1

        .extern DMA9PAD
        .equiv  DMA9PADL, _DMA9PAD
        .equiv  DMA9PADH, _DMA9PAD+1

        .extern DMA9CNT
        .equiv  DMA9CNTL, _DMA9CNT
        .equiv  DMA9CNTH, _DMA9CNT+1

        .extern DMA10CON
        .equiv  DMA10CONL, _DMA10CON
        .equiv  DMA10CONH, _DMA10CON+1

        .extern DMA10REQ
        .equiv  DMA10REQL, _DMA10REQ
        .equiv  DMA10REQH, _DMA10REQ+1

        .extern DMA10STAL
        .equiv  DMA10STALL, _DMA10STAL
        .equiv  DMA10STALH, _DMA10STAL+1

        .extern DMA10STAH
        .equiv  DMA10STAHL, _DMA10STAH
        .equiv  DMA10STAHH, _DMA10STAH+1

        .extern DMA10STBL
        .equiv  DMA10STBLL, _DMA10STBL
        .equiv  DMA10STBLH, _DMA10STBL+1

        .extern DMA10STBH
        .equiv  DMA10STBHL, _DMA10STBH
        .equiv  DMA10STBHH, _DMA10STBH+1

        .extern DMA10PAD
        .equiv  DMA10PADL, _DMA10PAD
        .equiv  DMA10PADH, _DMA10PAD+1

        .extern DMA10CNT
        .equiv  DMA10CNTL, _DMA10CNT
        .equiv  DMA10CNTH, _DMA10CNT+1

        .extern DMA11CON
        .equiv  DMA11CONL, _DMA11CON
        .equiv  DMA11CONH, _DMA11CON+1

        .extern DMA11REQ
        .equiv  DMA11REQL, _DMA11REQ
        .equiv  DMA11REQH, _DMA11REQ+1

        .extern DMA11STAL
        .equiv  DMA11STALL, _DMA11STAL
        .equiv  DMA11STALH, _DMA11STAL+1

        .extern DMA11STAH
        .equiv  DMA11STAHL, _DMA11STAH
        .equiv  DMA11STAHH, _DMA11STAH+1

        .extern DMA11STBL
        .equiv  DMA11STBLL, _DMA11STBL
        .equiv  DMA11STBLH, _DMA11STBL+1

        .extern DMA11STBH
        .equiv  DMA11STBHL, _DMA11STBH
        .equiv  DMA11STBHH, _DMA11STBH+1

        .extern DMA11PAD
        .equiv  DMA11PADL, _DMA11PAD
        .equiv  DMA11PADH, _DMA11PAD+1

        .extern DMA11CNT
        .equiv  DMA11CNTL, _DMA11CNT
        .equiv  DMA11CNTH, _DMA11CNT+1

        .extern DMA12CON
        .equiv  DMA12CONL, _DMA12CON
        .equiv  DMA12CONH, _DMA12CON+1

        .extern DMA12REQ
        .equiv  DMA12REQL, _DMA12REQ
        .equiv  DMA12REQH, _DMA12REQ+1

        .extern DMA12STAL
        .equiv  DMA12STALL, _DMA12STAL
        .equiv  DMA12STALH, _DMA12STAL+1

        .extern DMA12STAH
        .equiv  DMA12STAHL, _DMA12STAH
        .equiv  DMA12STAHH, _DMA12STAH+1

        .extern DMA12STBL
        .equiv  DMA12STBLL, _DMA12STBL
        .equiv  DMA12STBLH, _DMA12STBL+1

        .extern DMA12STBH
        .equiv  DMA12STBHL, _DMA12STBH
        .equiv  DMA12STBHH, _DMA12STBH+1

        .extern DMA12PAD
        .equiv  DMA12PADL, _DMA12PAD
        .equiv  DMA12PADH, _DMA12PAD+1

        .extern DMA12CNT
        .equiv  DMA12CNTL, _DMA12CNT
        .equiv  DMA12CNTH, _DMA12CNT+1

        .extern DMA13CON
        .equiv  DMA13CONL, _DMA13CON
        .equiv  DMA13CONH, _DMA13CON+1

        .extern DMA13REQ
        .equiv  DMA13REQL, _DMA13REQ
        .equiv  DMA13REQH, _DMA13REQ+1

        .extern DMA13STAL
        .equiv  DMA13STALL, _DMA13STAL
        .equiv  DMA13STALH, _DMA13STAL+1

        .extern DMA13STAH
        .equiv  DMA13STAHL, _DMA13STAH
        .equiv  DMA13STAHH, _DMA13STAH+1

        .extern DMA13STBL
        .equiv  DMA13STBLL, _DMA13STBL
        .equiv  DMA13STBLH, _DMA13STBL+1

        .extern DMA13STBH
        .equiv  DMA13STBHL, _DMA13STBH
        .equiv  DMA13STBHH, _DMA13STBH+1

        .extern DMA13PAD
        .equiv  DMA13PADL, _DMA13PAD
        .equiv  DMA13PADH, _DMA13PAD+1

        .extern DMA13CNT
        .equiv  DMA13CNTL, _DMA13CNT
        .equiv  DMA13CNTH, _DMA13CNT+1

        .extern DMA14CON
        .equiv  DMA14CONL, _DMA14CON
        .equiv  DMA14CONH, _DMA14CON+1

        .extern DMA14REQ
        .equiv  DMA14REQL, _DMA14REQ
        .equiv  DMA14REQH, _DMA14REQ+1

        .extern DMA14STAL
        .equiv  DMA14STALL, _DMA14STAL
        .equiv  DMA14STALH, _DMA14STAL+1

        .extern DMA14STAH
        .equiv  DMA14STAHL, _DMA14STAH
        .equiv  DMA14STAHH, _DMA14STAH+1

        .extern DMA14STBL
        .equiv  DMA14STBLL, _DMA14STBL
        .equiv  DMA14STBLH, _DMA14STBL+1

        .extern DMA14STBH
        .equiv  DMA14STBHL, _DMA14STBH
        .equiv  DMA14STBHH, _DMA14STBH+1

        .extern DMA14PAD
        .equiv  DMA14PADL, _DMA14PAD
        .equiv  DMA14PADH, _DMA14PAD+1

        .extern DMA14CNT
        .equiv  DMA14CNTL, _DMA14CNT
        .equiv  DMA14CNTH, _DMA14CNT+1

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

        .extern STCON
        .equiv  STCONL, _STCON
        .equiv  STCONH, _STCON+1

        .extern STCON2
        .equiv  STCON2L, _STCON2
        .equiv  STCON2H, _STCON2+1

        .extern STPER
        .equiv  STPERL, _STPER
        .equiv  STPERH, _STPER+1

        .extern SSEVTCMP
        .equiv  SSEVTCMPL, _SSEVTCMP
        .equiv  SSEVTCMPH, _SSEVTCMP+1

        .extern CHOP
        .equiv  CHOPL, _CHOP
        .equiv  CHOPH, _CHOP+1

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

        .extern SDC1
        .equiv  SDC1L, _SDC1
        .equiv  SDC1H, _SDC1+1

        .extern SPHASE1
        .equiv  SPHASE1L, _SPHASE1
        .equiv  SPHASE1H, _SPHASE1+1

        .extern TRIG1
        .equiv  TRIG1L, _TRIG1
        .equiv  TRIG1H, _TRIG1+1

        .extern TRGCON1
        .equiv  TRGCON1L, _TRGCON1
        .equiv  TRGCON1H, _TRGCON1+1

        .extern PWMCAP1
        .equiv  PWMCAP1L, _PWMCAP1
        .equiv  PWMCAP1H, _PWMCAP1+1

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

        .extern SDC2
        .equiv  SDC2L, _SDC2
        .equiv  SDC2H, _SDC2+1

        .extern SPHASE2
        .equiv  SPHASE2L, _SPHASE2
        .equiv  SPHASE2H, _SPHASE2+1

        .extern TRIG2
        .equiv  TRIG2L, _TRIG2
        .equiv  TRIG2H, _TRIG2+1

        .extern TRGCON2
        .equiv  TRGCON2L, _TRGCON2
        .equiv  TRGCON2H, _TRGCON2+1

        .extern PWMCAP2
        .equiv  PWMCAP2L, _PWMCAP2
        .equiv  PWMCAP2H, _PWMCAP2+1

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

        .extern SDC3
        .equiv  SDC3L, _SDC3
        .equiv  SDC3H, _SDC3+1

        .extern SPHASE3
        .equiv  SPHASE3L, _SPHASE3
        .equiv  SPHASE3H, _SPHASE3+1

        .extern TRIG3
        .equiv  TRIG3L, _TRIG3
        .equiv  TRIG3H, _TRIG3+1

        .extern TRGCON3
        .equiv  TRGCON3L, _TRGCON3
        .equiv  TRGCON3H, _TRGCON3+1

        .extern PWMCAP3
        .equiv  PWMCAP3L, _PWMCAP3
        .equiv  PWMCAP3H, _PWMCAP3+1

        .extern LEBCON3
        .equiv  LEBCON3L, _LEBCON3
        .equiv  LEBCON3H, _LEBCON3+1

        .extern LEBDLY3
        .equiv  LEBDLY3L, _LEBDLY3
        .equiv  LEBDLY3H, _LEBDLY3+1

        .extern AUXCON3
        .equiv  AUXCON3L, _AUXCON3
        .equiv  AUXCON3H, _AUXCON3+1

        .extern PWMCON4
        .equiv  PWMCON4L, _PWMCON4
        .equiv  PWMCON4H, _PWMCON4+1

        .extern IOCON4
        .equiv  IOCON4L, _IOCON4
        .equiv  IOCON4H, _IOCON4+1

        .extern FCLCON4
        .equiv  FCLCON4L, _FCLCON4
        .equiv  FCLCON4H, _FCLCON4+1

        .extern PDC4
        .equiv  PDC4L, _PDC4
        .equiv  PDC4H, _PDC4+1

        .extern PHASE4
        .equiv  PHASE4L, _PHASE4
        .equiv  PHASE4H, _PHASE4+1

        .extern DTR4
        .equiv  DTR4L, _DTR4
        .equiv  DTR4H, _DTR4+1

        .extern ALTDTR4
        .equiv  ALTDTR4L, _ALTDTR4
        .equiv  ALTDTR4H, _ALTDTR4+1

        .extern SDC4
        .equiv  SDC4L, _SDC4
        .equiv  SDC4H, _SDC4+1

        .extern SPHASE4
        .equiv  SPHASE4L, _SPHASE4
        .equiv  SPHASE4H, _SPHASE4+1

        .extern TRIG4
        .equiv  TRIG4L, _TRIG4
        .equiv  TRIG4H, _TRIG4+1

        .extern TRGCON4
        .equiv  TRGCON4L, _TRGCON4
        .equiv  TRGCON4H, _TRGCON4+1

        .extern PWMCAP4
        .equiv  PWMCAP4L, _PWMCAP4
        .equiv  PWMCAP4H, _PWMCAP4+1

        .extern LEBCON4
        .equiv  LEBCON4L, _LEBCON4
        .equiv  LEBCON4H, _LEBCON4+1

        .extern LEBDLY4
        .equiv  LEBDLY4L, _LEBDLY4
        .equiv  LEBDLY4H, _LEBDLY4+1

        .extern AUXCON4
        .equiv  AUXCON4L, _AUXCON4
        .equiv  AUXCON4H, _AUXCON4+1

        .extern PWMCON5
        .equiv  PWMCON5L, _PWMCON5
        .equiv  PWMCON5H, _PWMCON5+1

        .extern IOCON5
        .equiv  IOCON5L, _IOCON5
        .equiv  IOCON5H, _IOCON5+1

        .extern FCLCON5
        .equiv  FCLCON5L, _FCLCON5
        .equiv  FCLCON5H, _FCLCON5+1

        .extern PDC5
        .equiv  PDC5L, _PDC5
        .equiv  PDC5H, _PDC5+1

        .extern PHASE5
        .equiv  PHASE5L, _PHASE5
        .equiv  PHASE5H, _PHASE5+1

        .extern DTR5
        .equiv  DTR5L, _DTR5
        .equiv  DTR5H, _DTR5+1

        .extern ALTDTR5
        .equiv  ALTDTR5L, _ALTDTR5
        .equiv  ALTDTR5H, _ALTDTR5+1

        .extern SDC5
        .equiv  SDC5L, _SDC5
        .equiv  SDC5H, _SDC5+1

        .extern SPHASE5
        .equiv  SPHASE5L, _SPHASE5
        .equiv  SPHASE5H, _SPHASE5+1

        .extern TRIG5
        .equiv  TRIG5L, _TRIG5
        .equiv  TRIG5H, _TRIG5+1

        .extern TRGCON5
        .equiv  TRGCON5L, _TRGCON5
        .equiv  TRGCON5H, _TRGCON5+1

        .extern PWMCAP5
        .equiv  PWMCAP5L, _PWMCAP5
        .equiv  PWMCAP5H, _PWMCAP5+1

        .extern LEBCON5
        .equiv  LEBCON5L, _LEBCON5
        .equiv  LEBCON5H, _LEBCON5+1

        .extern LEBDLY5
        .equiv  LEBDLY5L, _LEBDLY5
        .equiv  LEBDLY5H, _LEBDLY5+1

        .extern AUXCON5
        .equiv  AUXCON5L, _AUXCON5
        .equiv  AUXCON5H, _AUXCON5+1

        .extern PWMCON6
        .equiv  PWMCON6L, _PWMCON6
        .equiv  PWMCON6H, _PWMCON6+1

        .extern IOCON6
        .equiv  IOCON6L, _IOCON6
        .equiv  IOCON6H, _IOCON6+1

        .extern FCLCON6
        .equiv  FCLCON6L, _FCLCON6
        .equiv  FCLCON6H, _FCLCON6+1

        .extern PDC6
        .equiv  PDC6L, _PDC6
        .equiv  PDC6H, _PDC6+1

        .extern PHASE6
        .equiv  PHASE6L, _PHASE6
        .equiv  PHASE6H, _PHASE6+1

        .extern DTR6
        .equiv  DTR6L, _DTR6
        .equiv  DTR6H, _DTR6+1

        .extern ALTDTR6
        .equiv  ALTDTR6L, _ALTDTR6
        .equiv  ALTDTR6H, _ALTDTR6+1

        .extern SDC6
        .equiv  SDC6L, _SDC6
        .equiv  SDC6H, _SDC6+1

        .extern SPHASE6
        .equiv  SPHASE6L, _SPHASE6
        .equiv  SPHASE6H, _SPHASE6+1

        .extern TRIG6
        .equiv  TRIG6L, _TRIG6
        .equiv  TRIG6H, _TRIG6+1

        .extern TRGCON6
        .equiv  TRGCON6L, _TRGCON6
        .equiv  TRGCON6H, _TRGCON6+1

        .extern PWMCAP6
        .equiv  PWMCAP6L, _PWMCAP6
        .equiv  PWMCAP6H, _PWMCAP6+1

        .extern LEBCON6
        .equiv  LEBCON6L, _LEBCON6
        .equiv  LEBCON6H, _LEBCON6+1

        .extern LEBDLY6
        .equiv  LEBDLY6L, _LEBDLY6
        .equiv  LEBDLY6H, _LEBDLY6+1

        .extern AUXCON6
        .equiv  AUXCON6L, _AUXCON6
        .equiv  AUXCON6H, _AUXCON6+1

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

        .extern TRISD
        .equiv  TRISDL, _TRISD
        .equiv  TRISDH, _TRISD+1

        .extern PORTD
        .equiv  PORTDL, _PORTD
        .equiv  PORTDH, _PORTD+1

        .extern LATD
        .equiv  LATDL, _LATD
        .equiv  LATDH, _LATD+1

        .extern ODCD
        .equiv  ODCDL, _ODCD
        .equiv  ODCDH, _ODCD+1

        .extern CNEND
        .equiv  CNENDL, _CNEND
        .equiv  CNENDH, _CNEND+1

        .extern CNPUD
        .equiv  CNPUDL, _CNPUD
        .equiv  CNPUDH, _CNPUD+1

        .extern CNPDD
        .equiv  CNPDDL, _CNPDD
        .equiv  CNPDDH, _CNPDD+1

        .extern ANSELD
        .equiv  ANSELDL, _ANSELD
        .equiv  ANSELDH, _ANSELD+1

        .extern TRISE
        .equiv  TRISEL, _TRISE
        .equiv  TRISEH, _TRISE+1

        .extern PORTE
        .equiv  PORTEL, _PORTE
        .equiv  PORTEH, _PORTE+1

        .extern LATE
        .equiv  LATEL, _LATE
        .equiv  LATEH, _LATE+1

        .extern CNENE
        .equiv  CNENEL, _CNENE
        .equiv  CNENEH, _CNENE+1

        .extern CNPUE
        .equiv  CNPUEL, _CNPUE
        .equiv  CNPUEH, _CNPUE+1

        .extern CNPDE
        .equiv  CNPDEL, _CNPDE
        .equiv  CNPDEH, _CNPDE+1

        .extern ANSELE
        .equiv  ANSELEL, _ANSELE
        .equiv  ANSELEH, _ANSELE+1

        .extern TRISF
        .equiv  TRISFL, _TRISF
        .equiv  TRISFH, _TRISF+1

        .extern PORTF
        .equiv  PORTFL, _PORTF
        .equiv  PORTFH, _PORTF+1

        .extern LATF
        .equiv  LATFL, _LATF
        .equiv  LATFH, _LATF+1

        .extern ODCF
        .equiv  ODCFL, _ODCF
        .equiv  ODCFH, _ODCF+1

        .extern CNENF
        .equiv  CNENFL, _CNENF
        .equiv  CNENFH, _CNENF+1

        .extern CNPUF
        .equiv  CNPUFL, _CNPUF
        .equiv  CNPUFH, _CNPUF+1

        .extern CNPDF
        .equiv  CNPDFL, _CNPDF
        .equiv  CNPDFH, _CNPDF+1

        .extern TRISG
        .equiv  TRISGL, _TRISG
        .equiv  TRISGH, _TRISG+1

        .extern PORTG
        .equiv  PORTGL, _PORTG
        .equiv  PORTGH, _PORTG+1

        .extern LATG
        .equiv  LATGL, _LATG
        .equiv  LATGH, _LATG+1

        .extern ODCG
        .equiv  ODCGL, _ODCG
        .equiv  ODCGH, _ODCG+1

        .extern CNENG
        .equiv  CNENGL, _CNENG
        .equiv  CNENGH, _CNENG+1

        .extern CNPUG
        .equiv  CNPUGL, _CNPUG
        .equiv  CNPUGH, _CNPUG+1

        .extern CNPDG
        .equiv  CNPDGL, _CNPDG
        .equiv  CNPDGH, _CNPDG+1

        .extern ANSELG
        .equiv  ANSELGL, _ANSELG
        .equiv  ANSELGH, _ANSELG+1

        .extern PADCFG1
        .equiv  PADCFG1L, _PADCFG1
        .equiv  PADCFG1H, _PADCFG1+1

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


;----- T6CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T7CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T8CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T9CON Bits -----------------------------------------------------
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


;----- IC5CON1 Bits -----------------------------------------------------
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


;----- IC5CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC6CON1 Bits -----------------------------------------------------
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


;----- IC6CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC7CON1 Bits -----------------------------------------------------
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


;----- IC7CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC8CON1 Bits -----------------------------------------------------
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


;----- IC8CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC9CON1 Bits -----------------------------------------------------
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


;----- IC9CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC10CON1 Bits -----------------------------------------------------
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


;----- IC10CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC11CON1 Bits -----------------------------------------------------
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


;----- IC11CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC12CON1 Bits -----------------------------------------------------
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


;----- IC12CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC13CON1 Bits -----------------------------------------------------
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


;----- IC13CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC14CON1 Bits -----------------------------------------------------
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


;----- IC14CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC15CON1 Bits -----------------------------------------------------
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


;----- IC15CON2 Bits -----------------------------------------------------
       ;.equiv TRIGSTAT, 0x0006
       ;.equiv ICTRIG,  0x0007
       ;.equiv IC32,    0x0008

       ;.equiv SYNCSEL0, 0x0000
       ;.equiv SYNCSEL1, 0x0001
       ;.equiv SYNCSEL2, 0x0002
       ;.equiv SYNCSEL3, 0x0003
       ;.equiv SYNCSEL4, 0x0004


;----- IC16CON1 Bits -----------------------------------------------------
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


;----- IC16CON2 Bits -----------------------------------------------------
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


;----- U3MODE Bits -----------------------------------------------------
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


;----- U3STA Bits -----------------------------------------------------
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


;----- DCICON1 Bits -----------------------------------------------------
        .equiv DJST,    0x0005
        .equiv CSDOM,   0x0006
        .equiv UNFM,    0x0007
        .equiv COFSD,   0x0008
        .equiv CSCKE,   0x0009
        .equiv CSCKD,   0x000A
        .equiv DLOOP,   0x000B
        .equiv DCISIDL, 0x000D
        .equiv DCIEN,   0x000F

        .equiv COFSM0,  0x0000
        .equiv COFSM1,  0x0001


;----- DCICON2 Bits -----------------------------------------------------
        .equiv WS0,     0x0000
        .equiv WS1,     0x0001
        .equiv WS2,     0x0002
        .equiv WS3,     0x0003
        .equiv COFSG0,  0x0005
        .equiv COFSG1,  0x0006
        .equiv COFSG2,  0x0007
        .equiv COFSG3,  0x0008
        .equiv BLEN0,   0x000A
        .equiv BLEN1,   0x000B


;----- DCICON3 Bits -----------------------------------------------------
        .equiv BCG0,    0x0000
        .equiv BCG1,    0x0001
        .equiv BCG2,    0x0002
        .equiv BCG3,    0x0003
        .equiv BCG4,    0x0004
        .equiv BCG5,    0x0005
        .equiv BCG6,    0x0006
        .equiv BCG7,    0x0007
        .equiv BCG8,    0x0008
        .equiv BCG9,    0x0009
        .equiv BCG10,   0x000A
        .equiv BCG11,   0x000B


;----- DCISTAT Bits -----------------------------------------------------
        .equiv TMPTY,   0x0000
        .equiv TUNF,    0x0001
        .equiv RFUL,    0x0002
        .equiv ROV,     0x0003

        .equiv SLOT0,   0x0008
        .equiv SLOT1,   0x0009
        .equiv SLOT2,   0x000A
        .equiv SLOT3,   0x000B


;----- TSCON Bits -----------------------------------------------------
        .equiv TSE0,    0x0000
        .equiv TSE1,    0x0001
        .equiv TSE2,    0x0002
        .equiv TSE3,    0x0003
        .equiv TSE4,    0x0004
        .equiv TSE5,    0x0005
        .equiv TSE6,    0x0006
        .equiv TSE7,    0x0007
        .equiv TSE8,    0x0008
        .equiv TSE9,    0x0009
        .equiv TSE10,   0x000A
        .equiv TSE11,   0x000B
        .equiv TSE12,   0x000C
        .equiv TSE13,   0x000D
        .equiv TSE14,   0x000E
        .equiv TSE15,   0x000F


;----- RSCON Bits -----------------------------------------------------
        .equiv RSE0,    0x0000
        .equiv RSE1,    0x0001
        .equiv RSE2,    0x0002
        .equiv RSE3,    0x0003
        .equiv RSE4,    0x0004
        .equiv RSE5,    0x0005
        .equiv RSE6,    0x0006
        .equiv RSE7,    0x0007
        .equiv RSE8,    0x0008
        .equiv RSE9,    0x0009
        .equiv RSE10,   0x000A
        .equiv RSE11,   0x000B
        .equiv RSE12,   0x000C
        .equiv RSE13,   0x000D
        .equiv RSE14,   0x000E
        .equiv RSE15,   0x000F


;----- SPI3STAT Bits -----------------------------------------------------
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


;----- SPI3CON1 Bits -----------------------------------------------------
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


;----- SPI3CON2 Bits -----------------------------------------------------
       ;.equiv SPIBEN,  0x0000
       ;.equiv FRMDLY,  0x0001
       ;.equiv FRMPOL,  0x000D
       ;.equiv SPIFSD,  0x000E
       ;.equiv FRMEN,   0x000F


;----- U4MODE Bits -----------------------------------------------------
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


;----- U4STA Bits -----------------------------------------------------
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


;----- SPI4STAT Bits -----------------------------------------------------
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


;----- SPI4CON1 Bits -----------------------------------------------------
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


;----- SPI4CON2 Bits -----------------------------------------------------
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
        .equiv CSS16,   0x0000
        .equiv CSS17,   0x0001
        .equiv CSS18,   0x0002
        .equiv CSS19,   0x0003
        .equiv CSS20,   0x0004
        .equiv CSS21,   0x0005
        .equiv CSS22,   0x0006
        .equiv CSS23,   0x0007
        .equiv CSS24,   0x0008
        .equiv CSS25,   0x0009
        .equiv CSS26,   0x000A
        .equiv CSS27,   0x000B
        .equiv CSS28,   0x000C
        .equiv CSS29,   0x000D
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


;----- AD2CON1 Bits -----------------------------------------------------
       ;.equiv DONE,    0x0000
       ;.equiv SAMP,    0x0001
       ;.equiv ASAM,    0x0002
       ;.equiv SIMSAM,  0x0003
       ;.equiv SSRCG,   0x0004
       ;.equiv ADDMABM, 0x000C
       ;.equiv ADSIDL,  0x000D
       ;.equiv ADON,    0x000F

       ;.equiv SSRC0,   0x0005
       ;.equiv SSRC1,   0x0006
       ;.equiv SSRC2,   0x0007
       ;.equiv FORM0,   0x0008
       ;.equiv FORM1,   0x0009


;----- AD2CON2 Bits -----------------------------------------------------
       ;.equiv ALTS,    0x0000
       ;.equiv BUFM,    0x0001
       ;.equiv BUFS,    0x0007
       ;.equiv CSCNA,   0x000A

       ;.equiv SMPI0,   0x0002
       ;.equiv SMPI1,   0x0003
       ;.equiv SMPI2,   0x0004
       ;.equiv SMPI3,   0x0005
       ;.equiv SMPI4,   0x0006
       ;.equiv CHPS0,   0x0008
       ;.equiv CHPS1,   0x0009
       ;.equiv VCFG0,   0x000D
       ;.equiv VCFG1,   0x000E
       ;.equiv VCFG2,   0x000F


;----- AD2CON3 Bits -----------------------------------------------------
       ;.equiv ADRC,    0x000F

       ;.equiv ADCS0,   0x0000
       ;.equiv ADCS1,   0x0001
       ;.equiv ADCS2,   0x0002
       ;.equiv ADCS3,   0x0003
       ;.equiv ADCS4,   0x0004
       ;.equiv ADCS5,   0x0005
       ;.equiv ADCS6,   0x0006
       ;.equiv ADCS7,   0x0007
       ;.equiv SAMC0,   0x0008
       ;.equiv SAMC1,   0x0009
       ;.equiv SAMC2,   0x000A
       ;.equiv SAMC3,   0x000B
       ;.equiv SAMC4,   0x000C


;----- AD2CHS123 Bits -----------------------------------------------------
       ;.equiv CH123SA, 0x0000
       ;.equiv CH123SB, 0x0008

       ;.equiv CH123NA0, 0x0001
       ;.equiv CH123NA1, 0x0002
       ;.equiv CH123NB0, 0x0009
       ;.equiv CH123NB1, 0x000A


;----- AD2CHS0 Bits -----------------------------------------------------
       ;.equiv CH0NA,   0x0007
       ;.equiv CH0NB,   0x000F

       ;.equiv CH0SA0,  0x0000
       ;.equiv CH0SA1,  0x0001
       ;.equiv CH0SA2,  0x0002
       ;.equiv CH0SA3,  0x0003
       ;.equiv CH0SA4,  0x0004
       ;.equiv CH0SB0,  0x0008
       ;.equiv CH0SB1,  0x0009
       ;.equiv CH0SB2,  0x000A
       ;.equiv CH0SB3,  0x000B
       ;.equiv CH0SB4,  0x000C


;----- AD2CSSL Bits -----------------------------------------------------
       ;.equiv CSS0,    0x0000
       ;.equiv CSS1,    0x0001
       ;.equiv CSS2,    0x0002
       ;.equiv CSS3,    0x0003
       ;.equiv CSS4,    0x0004
       ;.equiv CSS5,    0x0005
       ;.equiv CSS6,    0x0006
       ;.equiv CSS7,    0x0007
       ;.equiv CSS8,    0x0008
       ;.equiv CSS9,    0x0009
       ;.equiv CSS10,   0x000A
       ;.equiv CSS11,   0x000B
       ;.equiv CSS12,   0x000C
       ;.equiv CSS13,   0x000D
       ;.equiv CSS14,   0x000E
       ;.equiv CSS15,   0x000F


;----- AD2CON4 Bits -----------------------------------------------------
       ;.equiv ADDMAEN, 0x0008

       ;.equiv DMABL0,  0x0000
       ;.equiv DMABL1,  0x0001
       ;.equiv DMABL2,  0x0002


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



;----- U1OTGIR Bits -----------------------------------------------------
        .equiv VBUSVDIF, 0x0000
        .equiv SESENDIF, 0x0002
        .equiv SESVDIF, 0x0003
        .equiv ACTVIF,  0x0004
        .equiv LSTATEIF, 0x0005
        .equiv T1MSECIF, 0x0006
        .equiv IDIF,    0x0007


;----- U1OTGIE Bits -----------------------------------------------------
        .equiv VBUSVDIE, 0x0000
        .equiv SESENDIE, 0x0002
        .equiv SESVDIE, 0x0003
        .equiv ACTVIE,  0x0004
        .equiv LSTATEIE, 0x0005
        .equiv T1MSECIE, 0x0006
        .equiv IDIE,    0x0007


;----- U1OTGSTAT Bits -----------------------------------------------------
        .equiv VBUSVD,  0x0000
        .equiv SESEND,  0x0002
        .equiv SESVD,   0x0003
        .equiv LSTATE,  0x0005
        .equiv ID,      0x0007


;----- U1OTGCON Bits -----------------------------------------------------
        .equiv VBUSDIS, 0x0000
        .equiv VBUSCHG, 0x0001
        .equiv OTGEN,   0x0002
        .equiv VBUSON,  0x0003
        .equiv DMPULDWN, 0x0004
        .equiv DPPULDWN, 0x0005
        .equiv DMPULUP, 0x0006
        .equiv DPPULUP, 0x0007


;----- U1PWRC Bits -----------------------------------------------------
        .equiv USBPWR,  0x0000
        .equiv USUSPND, 0x0001
        .equiv USLPGRD, 0x0004
        .equiv UACTPND, 0x0007

        .equiv USUSPEND, 0x0001


;----- U1IR Bits -----------------------------------------------------
        .equiv URSTIF,  0x0000
        .equiv UERRIF,  0x0001
        .equiv SOFIF,   0x0002
        .equiv TRNIF,   0x0003
        .equiv IDLEIF,  0x0004
        .equiv RESUMEIF, 0x0005
        .equiv STALLIF, 0x0007

        .equiv DETACHIF, 0x0000
        .equiv ATTACHIF, 0x0006


;----- U1IE Bits -----------------------------------------------------
        .equiv URSTIE,  0x0000
        .equiv UERRIE,  0x0001
        .equiv SOFIE,   0x0002
        .equiv TRNIE,   0x0003
        .equiv IDLEIE,  0x0004
        .equiv RESUMEIE, 0x0005
        .equiv STALLIE, 0x0007

        .equiv DETACHIE, 0x0000
        .equiv ATTACHIE, 0x0006


;----- U1EIR Bits -----------------------------------------------------
        .equiv PIDEF,   0x0000
        .equiv CRC5EF,  0x0001
        .equiv CRC16EF, 0x0002
        .equiv DFN8EF,  0x0003
        .equiv BTOEF,   0x0004
        .equiv DMAEF,   0x0005
        .equiv BUSACCEF, 0x0006
        .equiv BTSEF,   0x0007

        .equiv EOFEF,   0x0001


;----- U1EIE Bits -----------------------------------------------------
        .equiv PIDEE,   0x0000
        .equiv CRC5EE,  0x0001
        .equiv CRC16EE, 0x0002
        .equiv DFN8EE,  0x0003
        .equiv BTOEE,   0x0004
        .equiv DMAEE,   0x0005
        .equiv BUSACCEE, 0x0006
        .equiv BTSEE,   0x0007

        .equiv EOFEE,   0x0001


;----- U1STAT Bits -----------------------------------------------------
        .equiv PPBI,    0x0002
        .equiv DIR_U1STAT, 0x0003

        .equiv ENDPT0,  0x0004
        .equiv ENDPT1,  0x0005
        .equiv ENDPT2,  0x0006
        .equiv ENDPT3,  0x0007


;----- U1CON Bits -----------------------------------------------------
        .equiv USBEN,   0x0000
        .equiv PPBRST,  0x0001
        .equiv RESUME,  0x0002
        .equiv HOSTEN,  0x0003
        .equiv PKTDIS,  0x0005
        .equiv SE0,     0x0006

        .equiv SOFEN,   0x0000
        .equiv USBRST,  0x0004
        .equiv TOKBUSY, 0x0005
        .equiv JSTATE,  0x0007

        .equiv RESET,   0x0004


;----- U1ADDR Bits -----------------------------------------------------
        .equiv LSPDEN,  0x0007

        .equiv DEVADDR0, 0x0000
        .equiv DEVADDR1, 0x0001
        .equiv DEVADDR2, 0x0002
        .equiv DEVADDR3, 0x0003
        .equiv DEVADDR4, 0x0004
        .equiv DEVADDR5, 0x0005
        .equiv DEVADDR6, 0x0006
        .equiv LOWSPDEN, 0x0007


;----- U1FRML Bits -----------------------------------------------------
        .equiv FRM0,    0x0000
        .equiv FRM1,    0x0001
        .equiv FRM2,    0x0002
        .equiv FRM3,    0x0003
        .equiv FRM4,    0x0004
        .equiv FRM5,    0x0005
        .equiv FRM6,    0x0006
        .equiv FRM7,    0x0007


;----- U1FRMH Bits -----------------------------------------------------
        .equiv FRM8,    0x0000
        .equiv FRM9,    0x0001
        .equiv FRM10,   0x0002


;----- U1TOK Bits -----------------------------------------------------
        .equiv EP0,     0x0000
        .equiv EP1,     0x0001
        .equiv EP2,     0x0002
        .equiv EP3,     0x0003
        .equiv PID0,    0x0004
        .equiv PID1,    0x0005
        .equiv PID2,    0x0006
        .equiv PID3,    0x0007



;----- U1CNFG1 Bits -----------------------------------------------------
        .equiv USBSIDL, 0x0004
        .equiv UOEMON,  0x0006
        .equiv UTEYE,   0x0007


;----- U1CNFG2 Bits -----------------------------------------------------
        .equiv UTRDIS,  0x0000
        .equiv UVCMPDIS, 0x0001
        .equiv UVBUSDIS, 0x0002
        .equiv EXTI2CEN, 0x0003
        .equiv PUVBUS,  0x0004
        .equiv UVCMPSEL, 0x0005


;----- U1EP0 Bits -----------------------------------------------------
        .equiv EPHSHK,  0x0000
        .equiv EPSTALL, 0x0001
        .equiv EPTXEN,  0x0002
        .equiv EPRXEN,  0x0003
        .equiv EPCONDIS, 0x0004
        .equiv RETRYDIS, 0x0006
        .equiv LSPD,    0x0007

        .equiv EPINEN,  0x0002
        .equiv EPOUTEN, 0x0003
        .equiv LOWSPD,  0x0007


;----- U1EP1 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP2 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP3 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP4 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP5 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP6 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP7 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP8 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP9 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP10 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP11 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP12 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP13 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP14 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- U1EP15 Bits -----------------------------------------------------
       ;.equiv EPHSHK,  0x0000
       ;.equiv EPSTALL, 0x0001
       ;.equiv EPTXEN,  0x0002
       ;.equiv EPRXEN,  0x0003
       ;.equiv EPCONDIS, 0x0004

       ;.equiv EPINEN,  0x0002
       ;.equiv EPOUTEN, 0x0003


;----- C2CTRL1 Bits -----------------------------------------------------
       ;.equiv WIN,     0x0000
       ;.equiv CANCAP,  0x0003
       ;.equiv CANCKS,  0x000B
       ;.equiv ABAT,    0x000C
       ;.equiv CSIDL,   0x000D

       ;.equiv OPMODE0, 0x0005
       ;.equiv OPMODE1, 0x0006
       ;.equiv OPMODE2, 0x0007
       ;.equiv REQOP0,  0x0008
       ;.equiv REQOP1,  0x0009
       ;.equiv REQOP2,  0x000A


;----- C2CTRL2 Bits -----------------------------------------------------
       ;.equiv DNCNT0,  0x0000
       ;.equiv DNCNT1,  0x0001
       ;.equiv DNCNT2,  0x0002
       ;.equiv DNCNT3,  0x0003
       ;.equiv DNCNT4,  0x0004


;----- C2VEC Bits -----------------------------------------------------
       ;.equiv ICODE0,  0x0000
       ;.equiv ICODE1,  0x0001
       ;.equiv ICODE2,  0x0002
       ;.equiv ICODE3,  0x0003
       ;.equiv ICODE4,  0x0004
       ;.equiv ICODE5,  0x0005
       ;.equiv ICODE6,  0x0006
       ;.equiv FILHIT0, 0x0008
       ;.equiv FILHIT1, 0x0009
       ;.equiv FILHIT2, 0x000A
       ;.equiv FILHIT3, 0x000B
       ;.equiv FILHIT4, 0x000C


;----- C2FCTRL Bits -----------------------------------------------------
       ;.equiv FSA0,    0x0000
       ;.equiv FSA1,    0x0001
       ;.equiv FSA2,    0x0002
       ;.equiv FSA3,    0x0003
       ;.equiv FSA4,    0x0004
       ;.equiv DMABS0,  0x000D
       ;.equiv DMABS1,  0x000E
       ;.equiv DMABS2,  0x000F


;----- C2FIFO Bits -----------------------------------------------------
       ;.equiv FNRB0,   0x0000
       ;.equiv FNRB1,   0x0001
       ;.equiv FNRB2,   0x0002
       ;.equiv FNRB3,   0x0003
       ;.equiv FNRB4,   0x0004
       ;.equiv FNRB5,   0x0005
       ;.equiv FBP0,    0x0008
       ;.equiv FBP1,    0x0009
       ;.equiv FBP2,    0x000A
       ;.equiv FBP3,    0x000B
       ;.equiv FBP4,    0x000C
       ;.equiv FBP5,    0x000D


;----- C2INTF Bits -----------------------------------------------------
       ;.equiv TBIF,    0x0000
       ;.equiv RBIF,    0x0001
       ;.equiv RBOVIF,  0x0002
       ;.equiv FIFOIF,  0x0003
       ;.equiv ERRIF,   0x0005
       ;.equiv WAKIF,   0x0006
       ;.equiv IVRIF,   0x0007
       ;.equiv EWARN,   0x0008
       ;.equiv RXWAR,   0x0009
       ;.equiv TXWAR,   0x000A
       ;.equiv RXBP,    0x000B
       ;.equiv TXBP,    0x000C
       ;.equiv TXBO,    0x000D


;----- C2INTE Bits -----------------------------------------------------
       ;.equiv TBIE,    0x0000
       ;.equiv RBIE,    0x0001
       ;.equiv RBOVIE,  0x0002
       ;.equiv FIFOIE,  0x0003
       ;.equiv ERRIE,   0x0005
       ;.equiv WAKIE,   0x0006
       ;.equiv IVRIE,   0x0007


;----- C2CFG1 Bits -----------------------------------------------------
       ;.equiv BRP0,    0x0000
       ;.equiv BRP1,    0x0001
       ;.equiv BRP2,    0x0002
       ;.equiv BRP3,    0x0003
       ;.equiv BRP4,    0x0004
       ;.equiv BRP5,    0x0005
       ;.equiv SJW0,    0x0006
       ;.equiv SJW1,    0x0007


;----- C2CFG2 Bits -----------------------------------------------------
       ;.equiv SAM,     0x0006
       ;.equiv SEG2PHTS, 0x0007
       ;.equiv WAKFIL,  0x000E

       ;.equiv PRSEG0,  0x0000
       ;.equiv PRSEG1,  0x0001
       ;.equiv PRSEG2,  0x0002
       ;.equiv SEG1PH0, 0x0003
       ;.equiv SEG1PH1, 0x0004
       ;.equiv SEG1PH2, 0x0005
       ;.equiv SEG2PH0, 0x0008
       ;.equiv SEG2PH1, 0x0009
       ;.equiv SEG2PH2, 0x000A


;----- C2FEN1 Bits -----------------------------------------------------
       ;.equiv FLTEN0,  0x0000
       ;.equiv FLTEN1,  0x0001
       ;.equiv FLTEN2,  0x0002
       ;.equiv FLTEN3,  0x0003
       ;.equiv FLTEN4,  0x0004
       ;.equiv FLTEN5,  0x0005
       ;.equiv FLTEN6,  0x0006
       ;.equiv FLTEN7,  0x0007
       ;.equiv FLTEN8,  0x0008
       ;.equiv FLTEN9,  0x0009
       ;.equiv FLTEN10, 0x000A
       ;.equiv FLTEN11, 0x000B
       ;.equiv FLTEN12, 0x000C
       ;.equiv FLTEN13, 0x000D
       ;.equiv FLTEN14, 0x000E
       ;.equiv FLTEN15, 0x000F


;----- C2FMSKSEL1 Bits -----------------------------------------------------
       ;.equiv F0MSK0,  0x0000
       ;.equiv F0MSK1,  0x0001
       ;.equiv F1MSK0,  0x0002
       ;.equiv F1MSK1,  0x0003
       ;.equiv F2MSK0,  0x0004
       ;.equiv F2MSK1,  0x0005
       ;.equiv F3MSK0,  0x0006
       ;.equiv F3MSK1,  0x0007
       ;.equiv F4MSK0,  0x0008
       ;.equiv F4MSK1,  0x0009
       ;.equiv F5MSK0,  0x000A
       ;.equiv F5MSK1,  0x000B
       ;.equiv F6MSK0,  0x000C
       ;.equiv F6MSK1,  0x000D
       ;.equiv F7MSK0,  0x000E
       ;.equiv F7MSK1,  0x000F


;----- C2FMSKSEL2 Bits -----------------------------------------------------
       ;.equiv F8MSK0,  0x0000
       ;.equiv F8MSK1,  0x0001
       ;.equiv F9MSK0,  0x0002
       ;.equiv F9MSK1,  0x0003
       ;.equiv F10MSK0, 0x0004
       ;.equiv F10MSK1, 0x0005
       ;.equiv F11MSK0, 0x0006
       ;.equiv F11MSK1, 0x0007
       ;.equiv F12MSK0, 0x0008
       ;.equiv F12MSK1, 0x0009
       ;.equiv F13MSK0, 0x000A
       ;.equiv F13MSK1, 0x000B
       ;.equiv F14MSK0, 0x000C
       ;.equiv F14MSK1, 0x000D
       ;.equiv F15MSK0, 0x000E
       ;.equiv F15MSK1, 0x000F


;----- C2BUFPNT1 Bits -----------------------------------------------------
       ;.equiv F0BP0,   0x0000
       ;.equiv F0BP1,   0x0001
       ;.equiv F0BP2,   0x0002
       ;.equiv F0BP3,   0x0003
       ;.equiv F1BP0,   0x0004
       ;.equiv F1BP1,   0x0005
       ;.equiv F1BP2,   0x0006
       ;.equiv F1BP3,   0x0007
       ;.equiv F2BP0,   0x0008
       ;.equiv F2BP1,   0x0009
       ;.equiv F2BP2,   0x000A
       ;.equiv F2BP3,   0x000B
       ;.equiv F3BP0,   0x000C
       ;.equiv F3BP1,   0x000D
       ;.equiv F3BP2,   0x000E
       ;.equiv F3BP3,   0x000F


;----- C2RXFUL1 Bits -----------------------------------------------------
       ;.equiv RXFUL0,  0x0000
       ;.equiv RXFUL1,  0x0001
       ;.equiv RXFUL2,  0x0002
       ;.equiv RXFUL3,  0x0003
       ;.equiv RXFUL4,  0x0004
       ;.equiv RXFUL5,  0x0005
       ;.equiv RXFUL6,  0x0006
       ;.equiv RXFUL7,  0x0007
       ;.equiv RXFUL8,  0x0008
       ;.equiv RXFUL9,  0x0009
       ;.equiv RXFUL10, 0x000A
       ;.equiv RXFUL11, 0x000B
       ;.equiv RXFUL12, 0x000C
       ;.equiv RXFUL13, 0x000D
       ;.equiv RXFUL14, 0x000E
       ;.equiv RXFUL15, 0x000F


;----- C2BUFPNT2 Bits -----------------------------------------------------
       ;.equiv F4BP0,   0x0000
       ;.equiv F4BP1,   0x0001
       ;.equiv F4BP2,   0x0002
       ;.equiv F4BP3,   0x0003
       ;.equiv F5BP0,   0x0004
       ;.equiv F5BP1,   0x0005
       ;.equiv F5BP2,   0x0006
       ;.equiv F5BP3,   0x0007
       ;.equiv F6BP0,   0x0008
       ;.equiv F6BP1,   0x0009
       ;.equiv F6BP2,   0x000A
       ;.equiv F6BP3,   0x000B
       ;.equiv F7BP0,   0x000C
       ;.equiv F7BP1,   0x000D
       ;.equiv F7BP2,   0x000E
       ;.equiv F7BP3,   0x000F


;----- C2RXFUL2 Bits -----------------------------------------------------
       ;.equiv RXFUL16, 0x0000
       ;.equiv RXFUL17, 0x0001
       ;.equiv RXFUL18, 0x0002
       ;.equiv RXFUL19, 0x0003
       ;.equiv RXFUL20, 0x0004
       ;.equiv RXFUL21, 0x0005
       ;.equiv RXFUL22, 0x0006
       ;.equiv RXFUL23, 0x0007
       ;.equiv RXFUL24, 0x0008
       ;.equiv RXFUL25, 0x0009
       ;.equiv RXFUL26, 0x000A
       ;.equiv RXFUL27, 0x000B
       ;.equiv RXFUL28, 0x000C
       ;.equiv RXFUL29, 0x000D
       ;.equiv RXFUL30, 0x000E
       ;.equiv RXFUL31, 0x000F


;----- C2BUFPNT3 Bits -----------------------------------------------------
       ;.equiv F8BP0,   0x0000
       ;.equiv F8BP1,   0x0001
       ;.equiv F8BP2,   0x0002
       ;.equiv F8BP3,   0x0003
       ;.equiv F9BP0,   0x0004
       ;.equiv F9BP1,   0x0005
       ;.equiv F9BP2,   0x0006
       ;.equiv F9BP3,   0x0007
       ;.equiv F10BP0,  0x0008
       ;.equiv F10BP1,  0x0009
       ;.equiv F10BP2,  0x000A
       ;.equiv F10BP3,  0x000B
       ;.equiv F11BP0,  0x000C
       ;.equiv F11BP1,  0x000D
       ;.equiv F11BP2,  0x000E
       ;.equiv F11BP3,  0x000F


;----- C2BUFPNT4 Bits -----------------------------------------------------
       ;.equiv F12BP0,  0x0000
       ;.equiv F12BP1,  0x0001
       ;.equiv F12BP2,  0x0002
       ;.equiv F12BP3,  0x0003
       ;.equiv F13BP0,  0x0004
       ;.equiv F13BP1,  0x0005
       ;.equiv F13BP2,  0x0006
       ;.equiv F13BP3,  0x0007
       ;.equiv F14BP0,  0x0008
       ;.equiv F14BP1,  0x0009
       ;.equiv F14BP2,  0x000A
       ;.equiv F14BP3,  0x000B
       ;.equiv F15BP0,  0x000C
       ;.equiv F15BP1,  0x000D
       ;.equiv F15BP2,  0x000E
       ;.equiv F15BP3,  0x000F


;----- C2RXOVF1 Bits -----------------------------------------------------
       ;.equiv RXOVF0,  0x0000
       ;.equiv RXOVF1,  0x0001
       ;.equiv RXOVF2,  0x0002
       ;.equiv RXOVF3,  0x0003
       ;.equiv RXOVF4,  0x0004
       ;.equiv RXOVF5,  0x0005
       ;.equiv RXOVF6,  0x0006
       ;.equiv RXOVF7,  0x0007
       ;.equiv RXOVF8,  0x0008
       ;.equiv RXOVF9,  0x0009
       ;.equiv RXOVF10, 0x000A
       ;.equiv RXOVF11, 0x000B
       ;.equiv RXOVF12, 0x000C
       ;.equiv RXOVF13, 0x000D
       ;.equiv RXOVF14, 0x000E
       ;.equiv RXOVF15, 0x000F


;----- C2RXOVF2 Bits -----------------------------------------------------
       ;.equiv RXOVF16, 0x0000
       ;.equiv RXOVF17, 0x0001
       ;.equiv RXOVF18, 0x0002
       ;.equiv RXOVF19, 0x0003
       ;.equiv RXOVF20, 0x0004
       ;.equiv RXOVF21, 0x0005
       ;.equiv RXOVF22, 0x0006
       ;.equiv RXOVF23, 0x0007
       ;.equiv RXOVF24, 0x0008
       ;.equiv RXOVF25, 0x0009
       ;.equiv RXOVF26, 0x000A
       ;.equiv RXOVF27, 0x000B
       ;.equiv RXOVF28, 0x000C
       ;.equiv RXOVF29, 0x000D
       ;.equiv RXOVF30, 0x000E
       ;.equiv RXOVF31, 0x000F


;----- C2RXM0SID Bits -----------------------------------------------------
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



;----- C2TR01CON Bits -----------------------------------------------------
       ;.equiv RTREN0,  0x0002
       ;.equiv TXREQ0,  0x0003
       ;.equiv TXERR0,  0x0004
       ;.equiv TXLARB0, 0x0005
       ;.equiv TXABT0,  0x0006
       ;.equiv TXEN0,   0x0007
       ;.equiv RTREN1,  0x000A
       ;.equiv TXREQ1,  0x000B
       ;.equiv TXERR1,  0x000C
       ;.equiv TXLARB1, 0x000D
       ;.equiv TXABT1,  0x000E
       ;.equiv TXEN1,   0x000F

       ;.equiv TX0PRI0, 0x0000
       ;.equiv TX0PRI1, 0x0001
       ;.equiv TX1PRI0, 0x0008
       ;.equiv TX1PRI1, 0x0009


;----- C2RXM0EID Bits -----------------------------------------------------
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



;----- C2TR23CON Bits -----------------------------------------------------
       ;.equiv RTREN2,  0x0002
       ;.equiv TXREQ2,  0x0003
       ;.equiv TXERR2,  0x0004
       ;.equiv TXLARB2, 0x0005
       ;.equiv TXABT2,  0x0006
       ;.equiv TXEN2,   0x0007
       ;.equiv RTREN3,  0x000A
       ;.equiv TXREQ3,  0x000B
       ;.equiv TXERR3,  0x000C
       ;.equiv TXLARB3, 0x000D
       ;.equiv TXABT3,  0x000E
       ;.equiv TXEN3,   0x000F

       ;.equiv TX2PRI0, 0x0000
       ;.equiv TX2PRI1, 0x0001
       ;.equiv TX3PRI0, 0x0008
       ;.equiv TX3PRI1, 0x0009


;----- C2RXM1SID Bits -----------------------------------------------------
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



;----- C2TR45CON Bits -----------------------------------------------------
       ;.equiv RTREN4,  0x0002
       ;.equiv TXREQ4,  0x0003
       ;.equiv TXERR4,  0x0004
       ;.equiv TXLARB4, 0x0005
       ;.equiv TXABT4,  0x0006
       ;.equiv TXEN4,   0x0007
       ;.equiv RTREN5,  0x000A
       ;.equiv TXREQ5,  0x000B
       ;.equiv TXERR5,  0x000C
       ;.equiv TXLARB5, 0x000D
       ;.equiv TXABT5,  0x000E
       ;.equiv TXEN5,   0x000F

       ;.equiv TX4PRI0, 0x0000
       ;.equiv TX4PRI1, 0x0001
       ;.equiv TX5PRI0, 0x0008
       ;.equiv TX5PRI1, 0x0009


;----- C2RXM1EID Bits -----------------------------------------------------
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



;----- C2TR67CON Bits -----------------------------------------------------
       ;.equiv RTREN6,  0x0002
       ;.equiv TXREQ6,  0x0003
       ;.equiv TXERR6,  0x0004
       ;.equiv TXLARB6, 0x0005
       ;.equiv TXABT6,  0x0006
       ;.equiv TXEN6,   0x0007
       ;.equiv RTREN7,  0x000A
       ;.equiv TXREQ7,  0x000B
       ;.equiv TXERR7,  0x000C
       ;.equiv TXLARB7, 0x000D
       ;.equiv TXABT7,  0x000E
       ;.equiv TXEN7,   0x000F

       ;.equiv TX6PRI0, 0x0000
       ;.equiv TX6PRI1, 0x0001
       ;.equiv TX7PRI0, 0x0008
       ;.equiv TX7PRI1, 0x0009


;----- C2RXM2SID Bits -----------------------------------------------------
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



;----- C2RXM2EID Bits -----------------------------------------------------
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



;----- C2RXF0SID Bits -----------------------------------------------------
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



;----- C2RXF0EID Bits -----------------------------------------------------
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



;----- C2RXF1SID Bits -----------------------------------------------------
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



;----- C2RXF1EID Bits -----------------------------------------------------
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



;----- C2RXF2SID Bits -----------------------------------------------------
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



;----- C2RXF2EID Bits -----------------------------------------------------
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



;----- C2RXF3SID Bits -----------------------------------------------------
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



;----- C2RXF3EID Bits -----------------------------------------------------
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



;----- C2RXF4SID Bits -----------------------------------------------------
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



;----- C2RXF4EID Bits -----------------------------------------------------
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



;----- C2RXF5SID Bits -----------------------------------------------------
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



;----- C2RXF5EID Bits -----------------------------------------------------
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



;----- C2RXF6SID Bits -----------------------------------------------------
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



;----- C2RXF6EID Bits -----------------------------------------------------
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



;----- C2RXF7SID Bits -----------------------------------------------------
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



;----- C2RXF7EID Bits -----------------------------------------------------
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



;----- C2RXF8SID Bits -----------------------------------------------------
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



;----- C2RXF8EID Bits -----------------------------------------------------
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



;----- C2RXF9SID Bits -----------------------------------------------------
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



;----- C2RXF9EID Bits -----------------------------------------------------
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



;----- C2RXF10SID Bits -----------------------------------------------------
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



;----- C2RXF10EID Bits -----------------------------------------------------
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



;----- C2RXF11SID Bits -----------------------------------------------------
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



;----- C2RXF11EID Bits -----------------------------------------------------
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



;----- C2RXF12SID Bits -----------------------------------------------------
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



;----- C2RXF12EID Bits -----------------------------------------------------
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



;----- C2RXF13SID Bits -----------------------------------------------------
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



;----- C2RXF13EID Bits -----------------------------------------------------
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



;----- C2RXF14SID Bits -----------------------------------------------------
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



;----- C2RXF14EID Bits -----------------------------------------------------
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



;----- C2RXF15SID Bits -----------------------------------------------------
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



;----- C2RXF15EID Bits -----------------------------------------------------
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



;----- U1PWMCON Bits -----------------------------------------------------
        .equiv CNTEN,   0x0008
        .equiv PWMPOL,  0x0009
        .equiv PWMEN,   0x000F


;----- QEI2CON Bits -----------------------------------------------------
       ;.equiv GATEN,   0x0002
       ;.equiv CNTPOL,  0x0003
       ;.equiv QEISIDL, 0x000D
       ;.equiv QEIEN,   0x000F


;----- QEI2IOC Bits -----------------------------------------------------
       ;.equiv QEA,     0x0000
       ;.equiv QEB,     0x0001
       ;.equiv INDEX,   0x0002
       ;.equiv HOME,    0x0003
       ;.equiv QEAPOL,  0x0004
       ;.equiv QEBPOL,  0x0005
       ;.equiv IDXPOL,  0x0006
       ;.equiv HOMPOL,  0x0007
       ;.equiv SWPAB,   0x0008
       ;.equiv FLTREN,  0x000E
       ;.equiv QCAPEN,  0x000F


;----- QEI2STAT Bits -----------------------------------------------------
       ;.equiv IDXIEN,  0x0000
       ;.equiv IDXIRQ,  0x0001
       ;.equiv HOMIEN,  0x0002
       ;.equiv HOMIRQ,  0x0003
       ;.equiv VELOVIEN, 0x0004
       ;.equiv VELOVIRQ, 0x0005
       ;.equiv PCIIEN,  0x0006
       ;.equiv PCIIRQ,  0x0007
       ;.equiv POSOVIEN, 0x0008
       ;.equiv POSOVIRQ, 0x0009
       ;.equiv PCLEQIEN, 0x000A
       ;.equiv PCLEQIRQ, 0x000B
       ;.equiv PCHEQIEN, 0x000C
       ;.equiv PCHEQIRQ, 0x000D


;----- PMCON Bits -----------------------------------------------------
        .equiv RDSP,    0x0000
        .equiv WRSP,    0x0001
        .equiv BEP,     0x0002
        .equiv CS1P,    0x0003
        .equiv CS2P,    0x0004
        .equiv ALP,     0x0005
        .equiv PTRDEN,  0x0008
        .equiv PTWREN,  0x0009
        .equiv PTBEEN,  0x000A
        .equiv PSIDL,   0x000D
        .equiv PMPEN,   0x000F

        .equiv CSF0,    0x0006
        .equiv CSF1,    0x0007
        .equiv ADRMUX0, 0x000B
        .equiv ADRMUX1, 0x000C


;----- PMMODE Bits -----------------------------------------------------
       ;.equiv MODE16,  0x000A
        .equiv BUSY,    0x000F

        .equiv WAITE0,  0x0000
        .equiv WAITE1,  0x0001
        .equiv WAITM0,  0x0002
        .equiv WAITM1,  0x0003
        .equiv WAITM2,  0x0004
        .equiv WAITM3,  0x0005
        .equiv WAITB0,  0x0006
        .equiv WAITB1,  0x0007
        .equiv MODE0_PMMODE, 0x0008
        .equiv MODE1_PMMODE, 0x0009
        .equiv INCM0,   0x000B
        .equiv INCM1,   0x000C
        .equiv IRQM0,   0x000D
        .equiv IRQM1,   0x000E


;----- PMADDR Bits -----------------------------------------------------
        .equiv CS1,     0x000E
        .equiv CS2,     0x000F

        .equiv ADDR0,   0x0000
        .equiv ADDR1,   0x0001
        .equiv ADDR2,   0x0002
        .equiv ADDR3,   0x0003
        .equiv ADDR4,   0x0004
        .equiv ADDR5,   0x0005
        .equiv ADDR6,   0x0006
        .equiv ADDR7,   0x0007
        .equiv ADDR8,   0x0008
        .equiv ADDR9,   0x0009
        .equiv ADDR10,  0x000A
        .equiv ADDR11,  0x000B
        .equiv ADDR12,  0x000C
        .equiv ADDR13,  0x000D


;----- PMDOUT1 Bits -----------------------------------------------------
       ;.equiv CS1,     0x000E
       ;.equiv CS2,     0x000F

       ;.equiv ADDR0,   0x0000
       ;.equiv ADDR1,   0x0001
       ;.equiv ADDR2,   0x0002
       ;.equiv ADDR3,   0x0003
       ;.equiv ADDR4,   0x0004
       ;.equiv ADDR5,   0x0005
       ;.equiv ADDR6,   0x0006
       ;.equiv ADDR7,   0x0007
       ;.equiv ADDR8,   0x0008
       ;.equiv ADDR9,   0x0009
       ;.equiv ADDR10,  0x000A
       ;.equiv ADDR11,  0x000B
       ;.equiv ADDR12,  0x000C
       ;.equiv ADDR13,  0x000D


;----- PMAEN Bits -----------------------------------------------------
        .equiv PTEN0,   0x0000
        .equiv PTEN1,   0x0001
        .equiv PTEN2,   0x0002
        .equiv PTEN3,   0x0003
        .equiv PTEN4,   0x0004
        .equiv PTEN5,   0x0005
        .equiv PTEN6,   0x0006
        .equiv PTEN7,   0x0007
        .equiv PTEN8,   0x0008
        .equiv PTEN9,   0x0009
        .equiv PTEN10,  0x000A
        .equiv PTEN11,  0x000B
        .equiv PTEN12,  0x000C
        .equiv PTEN13,  0x000D
        .equiv PTEN14,  0x000E
        .equiv PTEN15,  0x000F


;----- PMSTAT Bits -----------------------------------------------------
        .equiv OB0E,    0x0000
        .equiv OB1E,    0x0001
        .equiv OB2E,    0x0002
        .equiv OB3E,    0x0003
        .equiv OBUF,    0x0006
        .equiv OBE,     0x0007
        .equiv IB0F,    0x0008
        .equiv IB1F,    0x0009
        .equiv IB2F,    0x000A
        .equiv IB3F,    0x000B
        .equiv IBOV,    0x000E
        .equiv IBF,     0x000F


;----- ALCFGRPT Bits -----------------------------------------------------
        .equiv CHIME,   0x000E
        .equiv ALRMEN,  0x000F

        .equiv ARPT0,   0x0000
        .equiv ARPT1,   0x0001
        .equiv ARPT2,   0x0002
        .equiv ARPT3,   0x0003
        .equiv ARPT4,   0x0004
        .equiv ARPT5,   0x0005
        .equiv ARPT6,   0x0006
        .equiv ARPT7,   0x0007
        .equiv ALRMPTR0, 0x0008
        .equiv ALRMPTR1, 0x0009
        .equiv AMASK0,  0x000A
        .equiv AMASK1,  0x000B
        .equiv AMASK2,  0x000C
        .equiv AMASK3,  0x000D


;----- RCFGCAL Bits -----------------------------------------------------
        .equiv RTCOE,   0x000A
        .equiv HALFSEC, 0x000B
        .equiv RTCSYNC, 0x000C
        .equiv RTCWREN, 0x000D
        .equiv RTCEN,   0x000F

        .equiv CAL0,    0x0000
        .equiv CAL1,    0x0001
        .equiv CAL2,    0x0002
        .equiv CAL3,    0x0003
        .equiv CAL4,    0x0004
        .equiv CAL5,    0x0005
        .equiv CAL6,    0x0006
        .equiv CAL7,    0x0007
        .equiv RTCPTR0, 0x0008
        .equiv RTCPTR1, 0x0009


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
        .equiv RP64R0,  0x0000
        .equiv RP64R1,  0x0001
        .equiv RP64R2,  0x0002
        .equiv RP64R3,  0x0003
        .equiv RP64R4,  0x0004
        .equiv RP64R5,  0x0005
        .equiv RP65R0,  0x0008
        .equiv RP65R1,  0x0009
        .equiv RP65R2,  0x000A
        .equiv RP65R3,  0x000B
        .equiv RP65R4,  0x000C
        .equiv RP65R5,  0x000D


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP66R0,  0x0000
        .equiv RP66R1,  0x0001
        .equiv RP66R2,  0x0002
        .equiv RP66R3,  0x0003
        .equiv RP66R4,  0x0004
        .equiv RP66R5,  0x0005
        .equiv RP67R0,  0x0008
        .equiv RP67R1,  0x0009
        .equiv RP67R2,  0x000A
        .equiv RP67R3,  0x000B
        .equiv RP67R4,  0x000C
        .equiv RP67R5,  0x000D


;----- RPOR2 Bits -----------------------------------------------------
        .equiv RP68R0,  0x0000
        .equiv RP68R1,  0x0001
        .equiv RP68R2,  0x0002
        .equiv RP68R3,  0x0003
        .equiv RP68R4,  0x0004
        .equiv RP68R5,  0x0005
        .equiv RP69R0,  0x0008
        .equiv RP69R1,  0x0009
        .equiv RP69R2,  0x000A
        .equiv RP69R3,  0x000B
        .equiv RP69R4,  0x000C
        .equiv RP69R5,  0x000D


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP70R0,  0x0000
        .equiv RP70R1,  0x0001
        .equiv RP70R2,  0x0002
        .equiv RP70R3,  0x0003
        .equiv RP70R4,  0x0004
        .equiv RP70R5,  0x0005
        .equiv RP71R0,  0x0008
        .equiv RP71R1,  0x0009
        .equiv RP71R2,  0x000A
        .equiv RP71R3,  0x000B
        .equiv RP71R4,  0x000C
        .equiv RP71R5,  0x000D


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP79R0,  0x0000
        .equiv RP79R1,  0x0001
        .equiv RP79R2,  0x0002
        .equiv RP79R3,  0x0003
        .equiv RP79R4,  0x0004
        .equiv RP79R5,  0x0005
        .equiv RP80R0,  0x0008
        .equiv RP80R1,  0x0009
        .equiv RP80R2,  0x000A
        .equiv RP80R3,  0x000B
        .equiv RP80R4,  0x000C
        .equiv RP80R5,  0x000D


;----- RPOR5 Bits -----------------------------------------------------
        .equiv RP82R0,  0x0000
        .equiv RP82R1,  0x0001
        .equiv RP82R2,  0x0002
        .equiv RP82R3,  0x0003
        .equiv RP82R4,  0x0004
        .equiv RP82R5,  0x0005
        .equiv RP84R0,  0x0008
        .equiv RP84R1,  0x0009
        .equiv RP84R2,  0x000A
        .equiv RP84R3,  0x000B
        .equiv RP84R4,  0x000C
        .equiv RP84R5,  0x000D


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP85R0,  0x0000
        .equiv RP85R1,  0x0001
        .equiv RP85R2,  0x0002
        .equiv RP85R3,  0x0003
        .equiv RP85R4,  0x0004
        .equiv RP85R5,  0x0005
        .equiv RP87R0,  0x0008
        .equiv RP87R1,  0x0009
        .equiv RP87R2,  0x000A
        .equiv RP87R3,  0x000B
        .equiv RP87R4,  0x000C
        .equiv RP87R5,  0x000D


;----- RPOR7 Bits -----------------------------------------------------
        .equiv RP96R0,  0x0000
        .equiv RP96R1,  0x0001
        .equiv RP96R2,  0x0002
        .equiv RP96R3,  0x0003
        .equiv RP96R4,  0x0004
        .equiv RP96R5,  0x0005
        .equiv RP97R0,  0x0008
        .equiv RP97R1,  0x0009
        .equiv RP97R2,  0x000A
        .equiv RP97R3,  0x000B
        .equiv RP97R4,  0x000C
        .equiv RP97R5,  0x000D


;----- RPOR8 Bits -----------------------------------------------------
        .equiv RP98R0,  0x0000
        .equiv RP98R1,  0x0001
        .equiv RP98R2,  0x0002
        .equiv RP98R3,  0x0003
        .equiv RP98R4,  0x0004
        .equiv RP98R5,  0x0005
        .equiv RP99R0,  0x0008
        .equiv RP99R1,  0x0009
        .equiv RP99R2,  0x000A
        .equiv RP99R3,  0x000B
        .equiv RP99R4,  0x000C
        .equiv RP99R5,  0x000D


;----- RPOR9 Bits -----------------------------------------------------
        .equiv RP100R0, 0x0000
        .equiv RP100R1, 0x0001
        .equiv RP100R2, 0x0002
        .equiv RP100R3, 0x0003
        .equiv RP100R4, 0x0004
        .equiv RP100R5, 0x0005
        .equiv RP101R0, 0x0008
        .equiv RP101R1, 0x0009
        .equiv RP101R2, 0x000A
        .equiv RP101R3, 0x000B
        .equiv RP101R4, 0x000C
        .equiv RP101R5, 0x000D


;----- RPOR11 Bits -----------------------------------------------------
        .equiv RP104R0, 0x0000
        .equiv RP104R1, 0x0001
        .equiv RP104R2, 0x0002
        .equiv RP104R3, 0x0003
        .equiv RP104R4, 0x0004
        .equiv RP104R5, 0x0005
        .equiv RP108R0, 0x0008
        .equiv RP108R1, 0x0009
        .equiv RP108R2, 0x000A
        .equiv RP108R3, 0x000B
        .equiv RP108R4, 0x000C
        .equiv RP108R5, 0x000D


;----- RPOR12 Bits -----------------------------------------------------
        .equiv RP109R0, 0x0000
        .equiv RP109R1, 0x0001
        .equiv RP109R2, 0x0002
        .equiv RP109R3, 0x0003
        .equiv RP109R4, 0x0004
        .equiv RP109R5, 0x0005
        .equiv RP112R0, 0x0008
        .equiv RP112R1, 0x0009
        .equiv RP112R2, 0x000A
        .equiv RP112R3, 0x000B
        .equiv RP112R4, 0x000C
        .equiv RP112R5, 0x000D


;----- RPOR13 Bits -----------------------------------------------------
        .equiv RP113R0, 0x0000
        .equiv RP113R1, 0x0001
        .equiv RP113R2, 0x0002
        .equiv RP113R3, 0x0003
        .equiv RP113R4, 0x0004
        .equiv RP113R5, 0x0005
        .equiv RP118R0, 0x0008
        .equiv RP118R1, 0x0009
        .equiv RP118R2, 0x000A
        .equiv RP118R3, 0x000B
        .equiv RP118R4, 0x000C
        .equiv RP118R5, 0x000D


;----- RPOR14 Bits -----------------------------------------------------
        .equiv RP120R0, 0x0000
        .equiv RP120R1, 0x0001
        .equiv RP120R2, 0x0002
        .equiv RP120R3, 0x0003
        .equiv RP120R4, 0x0004
        .equiv RP120R5, 0x0005
        .equiv RP125R0, 0x0008
        .equiv RP125R1, 0x0009
        .equiv RP125R2, 0x000A
        .equiv RP125R3, 0x000B
        .equiv RP125R4, 0x000C
        .equiv RP125R5, 0x000D


;----- RPOR15 Bits -----------------------------------------------------
        .equiv RP126R0, 0x0000
        .equiv RP126R1, 0x0001
        .equiv RP126R2, 0x0002
        .equiv RP126R3, 0x0003
        .equiv RP126R4, 0x0004
        .equiv RP126R5, 0x0005
        .equiv RP127R0, 0x0008
        .equiv RP127R1, 0x0009
        .equiv RP127R2, 0x000A
        .equiv RP127R3, 0x000B
        .equiv RP127R4, 0x000C
        .equiv RP127R5, 0x000D


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
        .equiv INT3R0,  0x0008
        .equiv INT3R1,  0x0009
        .equiv INT3R2,  0x000A
        .equiv INT3R3,  0x000B
        .equiv INT3R4,  0x000C
        .equiv INT3R5,  0x000D
        .equiv INT3R6,  0x000E


;----- RPINR2 Bits -----------------------------------------------------
        .equiv INT4R0,  0x0000
        .equiv INT4R1,  0x0001
        .equiv INT4R2,  0x0002
        .equiv INT4R3,  0x0003
        .equiv INT4R4,  0x0004
        .equiv INT4R5,  0x0005
        .equiv INT4R6,  0x0006
        .equiv RSVR0,   0x0008
        .equiv RSVR1,   0x0009
        .equiv RSVR2,   0x000A
        .equiv RSVR3,   0x000B
        .equiv RSVR4,   0x000C
        .equiv RSVR5,   0x000D
        .equiv RSVR6,   0x000E


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T2CKR5,  0x0005
        .equiv T2CKR6,  0x0006
        .equiv T3CKR0,  0x0008
        .equiv T3CKR1,  0x0009
        .equiv T3CKR2,  0x000A
        .equiv T3CKR3,  0x000B
        .equiv T3CKR4,  0x000C
        .equiv T3CKR5,  0x000D
        .equiv T3CKR6,  0x000E


;----- RPINR4 Bits -----------------------------------------------------
        .equiv T4CKR0,  0x0000
        .equiv T4CKR1,  0x0001
        .equiv T4CKR2,  0x0002
        .equiv T4CKR3,  0x0003
        .equiv T4CKR4,  0x0004
        .equiv T4CKR5,  0x0005
        .equiv T4CKR6,  0x0006
        .equiv T5CKR0,  0x0008
        .equiv T5CKR1,  0x0009
        .equiv T5CKR2,  0x000A
        .equiv T5CKR3,  0x000B
        .equiv T5CKR4,  0x000C
        .equiv T5CKR5,  0x000D
        .equiv T5CKR6,  0x000E


;----- RPINR5 Bits -----------------------------------------------------
        .equiv T6CKR0,  0x0000
        .equiv T6CKR1,  0x0001
        .equiv T6CKR2,  0x0002
        .equiv T6CKR3,  0x0003
        .equiv T6CKR4,  0x0004
        .equiv T6CKR5,  0x0005
        .equiv T6CKR6,  0x0006
        .equiv T7CKR0,  0x0008
        .equiv T7CKR1,  0x0009
        .equiv T7CKR2,  0x000A
        .equiv T7CKR3,  0x000B
        .equiv T7CKR4,  0x000C
        .equiv T7CKR5,  0x000D
        .equiv T7CKR6,  0x000E


;----- RPINR6 Bits -----------------------------------------------------
        .equiv T8CKR0,  0x0000
        .equiv T8CKR1,  0x0001
        .equiv T8CKR2,  0x0002
        .equiv T8CKR3,  0x0003
        .equiv T8CKR4,  0x0004
        .equiv T8CKR5,  0x0005
        .equiv T8CKR6,  0x0006
        .equiv T9CKR0,  0x0008
        .equiv T9CKR1,  0x0009
        .equiv T9CKR2,  0x000A
        .equiv T9CKR3,  0x000B
        .equiv T9CKR4,  0x000C
        .equiv T9CKR5,  0x000D
        .equiv T9CKR6,  0x000E


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


;----- RPINR9 Bits -----------------------------------------------------
        .equiv IC5R0,   0x0000
        .equiv IC5R1,   0x0001
        .equiv IC5R2,   0x0002
        .equiv IC5R3,   0x0003
        .equiv IC5R4,   0x0004
        .equiv IC5R5,   0x0005
        .equiv IC5R6,   0x0006
        .equiv IC6R0,   0x0008
        .equiv IC6R1,   0x0009
        .equiv IC6R2,   0x000A
        .equiv IC6R3,   0x000B
        .equiv IC6R4,   0x000C
        .equiv IC6R5,   0x000D
        .equiv IC6R6,   0x000E


;----- RPINR10 Bits -----------------------------------------------------
        .equiv IC7R0,   0x0000
        .equiv IC7R1,   0x0001
        .equiv IC7R2,   0x0002
        .equiv IC7R3,   0x0003
        .equiv IC7R4,   0x0004
        .equiv IC7R5,   0x0005
        .equiv IC7R6,   0x0006
        .equiv IC8R0,   0x0008
        .equiv IC8R1,   0x0009
        .equiv IC8R2,   0x000A
        .equiv IC8R3,   0x000B
        .equiv IC8R4,   0x000C
        .equiv IC8R5,   0x000D
        .equiv IC8R6,   0x000E


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004
        .equiv OCFAR5,  0x0005
        .equiv OCFAR6,  0x0006
        .equiv OCFBR0,  0x0008
        .equiv OCFBR1,  0x0009
        .equiv OCFBR2,  0x000A
        .equiv OCFBR3,  0x000B
        .equiv OCFBR4,  0x000C
        .equiv OCFBR5,  0x000D
        .equiv OCFBR6,  0x000E


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


;----- RPINR13 Bits -----------------------------------------------------
        .equiv FLT3R0,  0x0000
        .equiv FLT3R1,  0x0001
        .equiv FLT3R2,  0x0002
        .equiv FLT3R3,  0x0003
        .equiv FLT3R4,  0x0004
        .equiv FLT3R5,  0x0005
        .equiv FLT3R6,  0x0006
        .equiv FLT4R0,  0x0008
        .equiv FLT4R1,  0x0009
        .equiv FLT4R2,  0x000A
        .equiv FLT4R3,  0x000B
        .equiv FLT4R4,  0x000C
        .equiv FLT4R5,  0x000D
        .equiv FLT4R6,  0x000E


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


;----- RPINR16 Bits -----------------------------------------------------
        .equiv QEA2R0,  0x0000
        .equiv QEA2R1,  0x0001
        .equiv QEA2R2,  0x0002
        .equiv QEA2R3,  0x0003
        .equiv QEA2R4,  0x0004
        .equiv QEA2R5,  0x0005
        .equiv QEA2R6,  0x0006
        .equiv QEB2R0,  0x0008
        .equiv QEB2R1,  0x0009
        .equiv QEB2R2,  0x000A
        .equiv QEB2R3,  0x000B
        .equiv QEB2R4,  0x000C
        .equiv QEB2R5,  0x000D
        .equiv QEB2R6,  0x000E


;----- RPINR17 Bits -----------------------------------------------------
        .equiv INDX2R0, 0x0000
        .equiv INDX2R1, 0x0001
        .equiv INDX2R2, 0x0002
        .equiv INDX2R3, 0x0003
        .equiv INDX2R4, 0x0004
        .equiv INDX2R5, 0x0005
        .equiv INDX2R6, 0x0006
        .equiv HOME2R0, 0x0008
        .equiv HOME2R1, 0x0009
        .equiv HOME2R2, 0x000A
        .equiv HOME2R3, 0x000B
        .equiv HOME2R4, 0x000C
        .equiv HOME2R5, 0x000D
        .equiv HOME2R6, 0x000E


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1RXR5,  0x0005
        .equiv U1RXR6,  0x0006
        .equiv U1CTSR0, 0x0008
        .equiv U1CTSR1, 0x0009
        .equiv U1CTSR2, 0x000A
        .equiv U1CTSR3, 0x000B
        .equiv U1CTSR4, 0x000C
        .equiv U1CTSR5, 0x000D
        .equiv U1CTSR6, 0x000E


;----- RPINR19 Bits -----------------------------------------------------
        .equiv U2RXR0,  0x0000
        .equiv U2RXR1,  0x0001
        .equiv U2RXR2,  0x0002
        .equiv U2RXR3,  0x0003
        .equiv U2RXR4,  0x0004
        .equiv U2RXR5,  0x0005
        .equiv U2RXR6,  0x0006
        .equiv U2CTSR0, 0x0008
        .equiv U2CTSR1, 0x0009
        .equiv U2CTSR2, 0x000A
        .equiv U2CTSR3, 0x000B
        .equiv U2CTSR4, 0x000C
        .equiv U2CTSR5, 0x000D
        .equiv U2CTSR6, 0x000E


;----- RPINR20 Bits -----------------------------------------------------
        .equiv SDI1R0,  0x0000
        .equiv SDI1R1,  0x0001
        .equiv SDI1R2,  0x0002
        .equiv SDI1R3,  0x0003
        .equiv SDI1R4,  0x0004
        .equiv SDI1R5,  0x0005
        .equiv SDI1R6,  0x0006
        .equiv SCK1R0,  0x0008
        .equiv SCK1R1,  0x0009
        .equiv SCK1R2,  0x000A
        .equiv SCK1R3,  0x000B
        .equiv SCK1R4,  0x000C
        .equiv SCK1R5,  0x000D
        .equiv SCK1R6,  0x000E


;----- RPINR21 Bits -----------------------------------------------------
        .equiv SS1R0,   0x0000
        .equiv SS1R1,   0x0001
        .equiv SS1R2,   0x0002
        .equiv SS1R3,   0x0003
        .equiv SS1R4,   0x0004
        .equiv SS1R5,   0x0005
        .equiv SS1R6,   0x0006


;----- RPINR23 Bits -----------------------------------------------------
        .equiv SS2R0,   0x0000
        .equiv SS2R1,   0x0001
        .equiv SS2R2,   0x0002
        .equiv SS2R3,   0x0003
        .equiv SS2R4,   0x0004
        .equiv SS2R5,   0x0005
        .equiv SS2R6,   0x0006


;----- RPINR24 Bits -----------------------------------------------------
        .equiv CSDIR0,  0x0000
        .equiv CSDIR1,  0x0001
        .equiv CSDIR2,  0x0002
        .equiv CSDIR3,  0x0003
        .equiv CSDIR4,  0x0004
        .equiv CSDIR5,  0x0005
        .equiv CSDIR6,  0x0006
        .equiv CSCKR0,  0x0008
        .equiv CSCKR1,  0x0009
        .equiv CSCKR2,  0x000A
        .equiv CSCKR3,  0x000B
        .equiv CSCKR4,  0x000C
        .equiv CSCKR5,  0x000D
        .equiv CSCKR6,  0x000E


;----- RPINR25 Bits -----------------------------------------------------
        .equiv COFSR0,  0x0000
        .equiv COFSR1,  0x0001
        .equiv COFSR2,  0x0002
        .equiv COFSR3,  0x0003
        .equiv COFSR4,  0x0004
        .equiv COFSR5,  0x0005
        .equiv COFSR6,  0x0006


;----- RPINR26 Bits -----------------------------------------------------
        .equiv C1RXR0,  0x0000
        .equiv C1RXR1,  0x0001
        .equiv C1RXR2,  0x0002
        .equiv C1RXR3,  0x0003
        .equiv C1RXR4,  0x0004
        .equiv C1RXR5,  0x0005
        .equiv C1RXR6,  0x0006
        .equiv C2RXR0,  0x0008
        .equiv C2RXR1,  0x0009
        .equiv C2RXR2,  0x000A
        .equiv C2RXR3,  0x000B
        .equiv C2RXR4,  0x000C
        .equiv C2RXR5,  0x000D
        .equiv C2RXR6,  0x000E


;----- RPINR27 Bits -----------------------------------------------------
        .equiv U3RXR0,  0x0000
        .equiv U3RXR1,  0x0001
        .equiv U3RXR2,  0x0002
        .equiv U3RXR3,  0x0003
        .equiv U3RXR4,  0x0004
        .equiv U3RXR5,  0x0005
        .equiv U3RXR6,  0x0006
        .equiv U3CTSR0, 0x0008
        .equiv U3CTSR1, 0x0009
        .equiv U3CTSR2, 0x000A
        .equiv U3CTSR3, 0x000B
        .equiv U3CTSR4, 0x000C
        .equiv U3CTSR5, 0x000D
        .equiv U3CTSR6, 0x000E


;----- RPINR28 Bits -----------------------------------------------------
        .equiv U4RXR0,  0x0000
        .equiv U4RXR1,  0x0001
        .equiv U4RXR2,  0x0002
        .equiv U4RXR3,  0x0003
        .equiv U4RXR4,  0x0004
        .equiv U4RXR5,  0x0005
        .equiv U4RXR6,  0x0006
        .equiv U4CTSR0, 0x0008
        .equiv U4CTSR1, 0x0009
        .equiv U4CTSR2, 0x000A
        .equiv U4CTSR3, 0x000B
        .equiv U4CTSR4, 0x000C
        .equiv U4CTSR5, 0x000D
        .equiv U4CTSR6, 0x000E


;----- RPINR29 Bits -----------------------------------------------------
        .equiv SDI3R0,  0x0000
        .equiv SDI3R1,  0x0001
        .equiv SDI3R2,  0x0002
        .equiv SDI3R3,  0x0003
        .equiv SDI3R4,  0x0004
        .equiv SDI3R5,  0x0005
        .equiv SDI3R6,  0x0006
        .equiv SCK3R0,  0x0008
        .equiv SCK3R1,  0x0009
        .equiv SCK3R2,  0x000A
        .equiv SCK3R3,  0x000B
        .equiv SCK3R4,  0x000C
        .equiv SCK3R5,  0x000D
        .equiv SCK3R6,  0x000E


;----- RPINR30 Bits -----------------------------------------------------
        .equiv SS3R0,   0x0000
        .equiv SS3R1,   0x0001
        .equiv SS3R2,   0x0002
        .equiv SS3R3,   0x0003
        .equiv SS3R4,   0x0004
        .equiv SS3R5,   0x0005
        .equiv SS3R6,   0x0006


;----- RPINR31 Bits -----------------------------------------------------
        .equiv SDI4R0,  0x0000
        .equiv SDI4R1,  0x0001
        .equiv SDI4R2,  0x0002
        .equiv SDI4R3,  0x0003
        .equiv SDI4R4,  0x0004
        .equiv SDI4R5,  0x0005
        .equiv SDI4R6,  0x0006
        .equiv SCK4R0,  0x0008
        .equiv SCK4R1,  0x0009
        .equiv SCK4R2,  0x000A
        .equiv SCK4R3,  0x000B
        .equiv SCK4R4,  0x000C
        .equiv SCK4R5,  0x000D
        .equiv SCK4R6,  0x000E


;----- RPINR32 Bits -----------------------------------------------------
        .equiv SS4R0,   0x0000
        .equiv SS4R1,   0x0001
        .equiv SS4R2,   0x0002
        .equiv SS4R3,   0x0003
        .equiv SS4R4,   0x0004
        .equiv SS4R5,   0x0005
        .equiv SS4R6,   0x0006


;----- RPINR33 Bits -----------------------------------------------------
        .equiv IC9R0,   0x0000
        .equiv IC9R1,   0x0001
        .equiv IC9R2,   0x0002
        .equiv IC9R3,   0x0003
        .equiv IC9R4,   0x0004
        .equiv IC9R5,   0x0005
        .equiv IC9R6,   0x0006
        .equiv IC10R0,  0x0008
        .equiv IC10R1,  0x0009
        .equiv IC10R2,  0x000A
        .equiv IC10R3,  0x000B
        .equiv IC10R4,  0x000C
        .equiv IC10R5,  0x000D
        .equiv IC10R6,  0x000E


;----- RPINR34 Bits -----------------------------------------------------
        .equiv IC11R0,  0x0000
        .equiv IC11R1,  0x0001
        .equiv IC11R2,  0x0002
        .equiv IC11R3,  0x0003
        .equiv IC11R4,  0x0004
        .equiv IC11R5,  0x0005
        .equiv IC11R6,  0x0006
        .equiv IC12R0,  0x0008
        .equiv IC12R1,  0x0009
        .equiv IC12R2,  0x000A
        .equiv IC12R3,  0x000B
        .equiv IC12R4,  0x000C
        .equiv IC12R5,  0x000D
        .equiv IC12R6,  0x000E


;----- RPINR35 Bits -----------------------------------------------------
        .equiv IC13R0,  0x0000
        .equiv IC13R1,  0x0001
        .equiv IC13R2,  0x0002
        .equiv IC13R3,  0x0003
        .equiv IC13R4,  0x0004
        .equiv IC13R5,  0x0005
        .equiv IC13R6,  0x0006
        .equiv IC14R0,  0x0008
        .equiv IC14R1,  0x0009
        .equiv IC14R2,  0x000A
        .equiv IC14R3,  0x000B
        .equiv IC14R4,  0x000C
        .equiv IC14R5,  0x000D
        .equiv IC14R6,  0x000E


;----- RPINR36 Bits -----------------------------------------------------
        .equiv IC15R0,  0x0000
        .equiv IC15R1,  0x0001
        .equiv IC15R2,  0x0002
        .equiv IC15R3,  0x0003
        .equiv IC15R4,  0x0004
        .equiv IC15R5,  0x0005
        .equiv IC15R6,  0x0006
        .equiv IC16R0,  0x0008
        .equiv IC16R1,  0x0009
        .equiv IC16R2,  0x000A
        .equiv IC16R3,  0x000B
        .equiv IC16R4,  0x000C
        .equiv IC16R5,  0x000D
        .equiv IC16R6,  0x000E


;----- RPINR37 Bits -----------------------------------------------------
        .equiv OCFCR0,  0x0000
        .equiv OCFCR1,  0x0001
        .equiv OCFCR2,  0x0002
        .equiv OCFCR3,  0x0003
        .equiv OCFCR4,  0x0004
        .equiv OCFCR5,  0x0005
        .equiv OCFCR6,  0x0006
        .equiv SYNCI1R0, 0x0008
        .equiv SYNCI1R1, 0x0009
        .equiv SYNCI1R2, 0x000A
        .equiv SYNCI1R3, 0x000B
        .equiv SYNCI1R4, 0x000C
        .equiv SYNCI1R5, 0x000D
        .equiv SYNCI1R6, 0x000E


;----- RPINR38 Bits -----------------------------------------------------
        .equiv SYNCI2R0, 0x0000
        .equiv SYNCI2R1, 0x0001
        .equiv SYNCI2R2, 0x0002
        .equiv SYNCI2R3, 0x0003
        .equiv SYNCI2R4, 0x0004
        .equiv SYNCI2R5, 0x0005
        .equiv SYNCI2R6, 0x0006
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


;----- RPINR40 Bits -----------------------------------------------------
        .equiv DTCMP4R0, 0x0000
        .equiv DTCMP4R1, 0x0001
        .equiv DTCMP4R2, 0x0002
        .equiv DTCMP4R3, 0x0003
        .equiv DTCMP4R4, 0x0004
        .equiv DTCMP4R5, 0x0005
        .equiv DTCMP4R6, 0x0006
        .equiv DTCMP5R0, 0x0008
        .equiv DTCMP5R1, 0x0009
        .equiv DTCMP5R2, 0x000A
        .equiv DTCMP5R3, 0x000B
        .equiv DTCMP5R4, 0x000C
        .equiv DTCMP5R5, 0x000D
        .equiv DTCMP5R6, 0x000E


;----- RPINR41 Bits -----------------------------------------------------
        .equiv DTCMP6R0, 0x0000
        .equiv DTCMP6R1, 0x0001
        .equiv DTCMP6R2, 0x0002
        .equiv DTCMP6R3, 0x0003
        .equiv DTCMP6R4, 0x0004
        .equiv DTCMP6R5, 0x0005
        .equiv DTCMP6R6, 0x0006


;----- RPINR42 Bits -----------------------------------------------------
        .equiv FLT5R0,  0x0000
        .equiv FLT5R1,  0x0001
        .equiv FLT5R2,  0x0002
        .equiv FLT5R3,  0x0003
        .equiv FLT5R4,  0x0004
        .equiv FLT5R5,  0x0005
        .equiv FLT5R6,  0x0006
        .equiv FLT6R0,  0x0008
        .equiv FLT6R1,  0x0009
        .equiv FLT6R2,  0x000A
        .equiv FLT6R3,  0x000B
        .equiv FLT6R4,  0x000C
        .equiv FLT6R5,  0x000D
        .equiv FLT6R6,  0x000E


;----- RPINR43 Bits -----------------------------------------------------
        .equiv FLT7R0,  0x0000
        .equiv FLT7R1,  0x0001
        .equiv FLT7R2,  0x0002
        .equiv FLT7R3,  0x0003
        .equiv FLT7R4,  0x0004
        .equiv FLT7R5,  0x0005
        .equiv FLT7R6,  0x0006


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
        .equiv LPOSCEN, 0x0001
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


;----- ACLKCON3 Bits -----------------------------------------------------
        .equiv FRCSEL,  0x0009
        .equiv ASRCSEL, 0x000A
        .equiv SELACLK, 0x000D
        .equiv APLLCK,  0x000E
        .equiv ENAPLL,  0x000F

        .equiv APPLPRE0, 0x0000
        .equiv APPLPRE1, 0x0001
        .equiv APPLPRE2, 0x0002
        .equiv APLLPOST0, 0x0005
        .equiv APLLPOST1, 0x0006
        .equiv APLLPOST2, 0x0007
        .equiv AOSCMD0, 0x000B
        .equiv AOSCMD1, 0x000C


;----- ACLKDIV3 Bits -----------------------------------------------------
        .equiv APLLDIV0, 0x0000
        .equiv APLLDIV1, 0x0001
        .equiv APLLDIV2, 0x0002


;----- PMD1 Bits -----------------------------------------------------
        .equiv AD1MD,   0x0000
        .equiv C1MD,    0x0001
        .equiv C2MD,    0x0002
        .equiv SPI1MD,  0x0003
        .equiv SPI2MD,  0x0004
        .equiv U1MD,    0x0005
        .equiv U2MD,    0x0006
        .equiv I2C1MD,  0x0007
        .equiv DCIMD,   0x0008
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
        .equiv OC5MD,   0x0004
        .equiv OC6MD,   0x0005
        .equiv OC7MD,   0x0006
        .equiv OC8MD,   0x0007
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC3MD,   0x000A
        .equiv IC4MD,   0x000B
        .equiv IC5MD,   0x000C
        .equiv IC6MD,   0x000D
        .equiv IC7MD,   0x000E
        .equiv IC8MD,   0x000F


;----- PMD3 Bits -----------------------------------------------------
        .equiv AD2MD,   0x0000
        .equiv I2C2MD,  0x0001
        .equiv U3MD,    0x0003
        .equiv QEI2MD,  0x0005
        .equiv DAC1MD,  0x0006
        .equiv CRCMD,   0x0007
        .equiv PMPMD,   0x0008
        .equiv RTCCMD,  0x0009
        .equiv CMPMD,   0x000A
        .equiv T6MD,    0x000C
        .equiv T7MD,    0x000D
        .equiv T8MD,    0x000E
        .equiv T9MD,    0x000F


;----- PMD4 Bits -----------------------------------------------------
        .equiv USB1MD,  0x0000
        .equiv REFOMD,  0x0003
        .equiv U4MD,    0x0005


;----- PMD5 Bits -----------------------------------------------------
        .equiv OC9MD,   0x0000
        .equiv OC10MD,  0x0001
        .equiv OC11MD,  0x0002
        .equiv OC12MD,  0x0003
        .equiv OC13MD,  0x0004
        .equiv OC14MD,  0x0005
        .equiv OC15MD,  0x0006
        .equiv OC16MD,  0x0007
        .equiv IC9MD,   0x0008
        .equiv IC10MD,  0x0009
        .equiv IC11MD,  0x000A
        .equiv IC12MD,  0x000B
        .equiv IC13MD,  0x000C
        .equiv IC14MD,  0x000D
        .equiv IC15MD,  0x000E
        .equiv IC16MD,  0x000F


;----- PMD6 Bits -----------------------------------------------------
        .equiv SPI3MD,  0x0000
        .equiv SPI4MD,  0x0001
        .equiv PWM1MD,  0x0008
        .equiv PWM2MD,  0x0009
        .equiv PWM3MD,  0x000A
        .equiv PWM4MD,  0x000B
        .equiv PWM5MD,  0x000C
        .equiv PWM6MD,  0x000D


;----- PMD7 Bits -----------------------------------------------------
        .equiv DMA0MD,  0x0004
        .equiv DMA4MD,  0x0005
        .equiv DMA8MD,  0x0006
        .equiv DMA12MD, 0x0007

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
        .equiv NVMIF,   0x000F


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CMIF,    0x0002
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv AD2IF,   0x0005
        .equiv IC7IF,   0x0006
        .equiv IC8IF,   0x0007
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
        .equiv IC5IF,   0x0007
        .equiv IC6IF,   0x0008
        .equiv OC5IF,   0x0009
        .equiv OC6IF,   0x000A
        .equiv OC7IF,   0x000B
        .equiv OC8IF,   0x000C
        .equiv PMPIF,   0x000D
        .equiv DMA4IF,  0x000E
        .equiv T6IF,    0x000F


;----- IFS3 Bits -----------------------------------------------------
        .equiv T7IF,    0x0000
        .equiv SI2C2IF, 0x0001
        .equiv MI2C2IF, 0x0002
        .equiv T8IF,    0x0003
        .equiv T9IF,    0x0004
        .equiv INT3IF,  0x0005
        .equiv INT4IF,  0x0006
        .equiv C2RXIF,  0x0007
        .equiv C2IF,    0x0008
        .equiv PSEMIF,  0x0009
        .equiv QEI1IF,  0x000A
        .equiv DCIEIF,  0x000B
        .equiv DCIIF,   0x000C
        .equiv DMA5IF,  0x000D
        .equiv RTCIF,   0x000E


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv U2EIF,   0x0002
        .equiv CRCIF,   0x0003
        .equiv DMA6IF,  0x0004
        .equiv DMA7IF,  0x0005
        .equiv C1TXIF,  0x0006
        .equiv C2TXIF,  0x0007
        .equiv PSESMIF, 0x0009
        .equiv QEI2IF,  0x000B


;----- IFS5 Bits -----------------------------------------------------
        .equiv U3EIF,   0x0001
        .equiv U3RXIF,  0x0002
        .equiv U3TXIF,  0x0003
        .equiv USB1IF,  0x0006
        .equiv U4EIF,   0x0007
        .equiv U4RXIF,  0x0008
        .equiv U4TXIF,  0x0009
        .equiv SPI3EIF, 0x000A
        .equiv SPI3IF,  0x000B
        .equiv OC9IF,   0x000C
        .equiv IC9IF,   0x000D
        .equiv PWM1IF,  0x000E
        .equiv PWM2IF,  0x000F


;----- IFS6 Bits -----------------------------------------------------
        .equiv PWM3IF,  0x0000
        .equiv PWM4IF,  0x0001
        .equiv PWM5IF,  0x0002
        .equiv PWM6IF,  0x0003


;----- IFS7 Bits -----------------------------------------------------
        .equiv DMA8IF,  0x0006
        .equiv DMA9IF,  0x0007
        .equiv DMA10IF, 0x0008
        .equiv DMA11IF, 0x0009
        .equiv SPI4EIF, 0x000A
        .equiv SPI4IF,  0x000B
        .equiv OC10IF,  0x000C
        .equiv IC10IF,  0x000D
        .equiv OC11IF,  0x000E
        .equiv IC11IF,  0x000F


;----- IFS8 Bits -----------------------------------------------------
        .equiv OC12IF,  0x0000
        .equiv IC12IF,  0x0001
        .equiv DMA12IF, 0x0002
        .equiv DMA13IF, 0x0003
        .equiv DMA14IF, 0x0004
        .equiv OC13IF,  0x0006
        .equiv IC13IF,  0x0007
        .equiv OC14IF,  0x0008
        .equiv IC14IF,  0x0009
        .equiv OC15IF,  0x000A
        .equiv IC15IF,  0x000B
        .equiv OC16IF,  0x000C
        .equiv IC16IF,  0x000D
        .equiv ICDIF,   0x000E


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
        .equiv NVMIE,   0x000F


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CMIE,    0x0002
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv AD2IE,   0x0005
        .equiv IC7IE,   0x0006
        .equiv IC8IE,   0x0007
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
        .equiv IC5IE,   0x0007
        .equiv IC6IE,   0x0008
        .equiv OC5IE,   0x0009
        .equiv OC6IE,   0x000A
        .equiv OC7IE,   0x000B
        .equiv OC8IE,   0x000C
        .equiv PMPIE,   0x000D
        .equiv DMA4IE,  0x000E
        .equiv T6IE,    0x000F


;----- IEC3 Bits -----------------------------------------------------
        .equiv T7IE,    0x0000
        .equiv SI2C2IE, 0x0001
        .equiv MI2C2IE, 0x0002
        .equiv T8IE,    0x0003
        .equiv T9IE,    0x0004
        .equiv INT3IE,  0x0005
        .equiv INT4IE,  0x0006
        .equiv C2RXIE,  0x0007
        .equiv C2IE,    0x0008
        .equiv PSEMIE,  0x0009
        .equiv QEI1IE,  0x000A
        .equiv DCIEIE,  0x000B
        .equiv DCIIE,   0x000C
        .equiv DMA5IE,  0x000D
        .equiv RTCIE,   0x000E


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv U2EIE,   0x0002
        .equiv CRCIE,   0x0003
        .equiv DMA6IE,  0x0004
        .equiv DMA7IE,  0x0005
        .equiv C1TXIE,  0x0006
        .equiv C2TXIE,  0x0007
        .equiv PSESMIE, 0x0009
        .equiv QEI2IE,  0x000B


;----- IEC5 Bits -----------------------------------------------------
        .equiv U3EIE,   0x0001
        .equiv U3RXIE,  0x0002
        .equiv U3TXIE,  0x0003
        .equiv USB1IE,  0x0006
        .equiv U4EIE,   0x0007
        .equiv U4RXIE,  0x0008
        .equiv U4TXIE,  0x0009
        .equiv SPI3EIE, 0x000A
        .equiv SPI3IE,  0x000B
        .equiv OC9IE,   0x000C
        .equiv IC9IE,   0x000D
        .equiv PWM1IE,  0x000E
        .equiv PWM2IE,  0x000F


;----- IEC6 Bits -----------------------------------------------------
        .equiv PWM3IE,  0x0000
        .equiv PWM4IE,  0x0001
        .equiv PWM5IE,  0x0002
        .equiv PWM6IE,  0x0003


;----- IEC7 Bits -----------------------------------------------------
        .equiv DMA8IE,  0x0006
        .equiv DMA9IE,  0x0007
        .equiv DMA10IE, 0x0008
        .equiv DMA11IE, 0x0009
        .equiv SPI4EIE, 0x000A
        .equiv SPI4IE,  0x000B
        .equiv OC10IE,  0x000C
        .equiv IC10IE,  0x000D
        .equiv OC11IE,  0x000E
        .equiv IC11IE,  0x000F


;----- IEC8 Bits -----------------------------------------------------
        .equiv OC12IE,  0x0000
        .equiv IC12IE,  0x0001
        .equiv DMA12IE, 0x0002
        .equiv DMA13IE, 0x0003
        .equiv DMA14IE, 0x0004
        .equiv OC13IE,  0x0006
        .equiv IC13IE,  0x0007
        .equiv OC14IE,  0x0008
        .equiv IC14IE,  0x0009
        .equiv OC15IE,  0x000A
        .equiv IC15IE,  0x000B
        .equiv OC16IE,  0x000C
        .equiv IC16IE,  0x000D
       ;.equiv ICDIF,   0x000E


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


;----- IPC10 Bits -----------------------------------------------------
        .equiv IC6IP0,  0x0000
        .equiv IC6IP1,  0x0001
        .equiv IC6IP2,  0x0002
        .equiv OC5IP0,  0x0004
        .equiv OC5IP1,  0x0005
        .equiv OC5IP2,  0x0006
        .equiv OC6IP0,  0x0008
        .equiv OC6IP1,  0x0009
        .equiv OC6IP2,  0x000A
        .equiv OC7IP0,  0x000C
        .equiv OC7IP1,  0x000D
        .equiv OC7IP2,  0x000E


;----- IPC11 Bits -----------------------------------------------------
        .equiv OC8IP0,  0x0000
        .equiv OC8IP1,  0x0001
        .equiv OC8IP2,  0x0002
        .equiv PMPIP0,  0x0004
        .equiv PMPIP1,  0x0005
        .equiv PMPIP2,  0x0006
        .equiv DMA4IP0, 0x0008
        .equiv DMA4IP1, 0x0009
        .equiv DMA4IP2, 0x000A
        .equiv T6IP0,   0x000C
        .equiv T6IP1,   0x000D
        .equiv T6IP2,   0x000E


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


;----- IPC13 Bits -----------------------------------------------------
        .equiv T9IP0,   0x0000
        .equiv T9IP1,   0x0001
        .equiv T9IP2,   0x0002
        .equiv INT3IP0, 0x0004
        .equiv INT3IP1, 0x0005
        .equiv INT3IP2, 0x0006
        .equiv INT4IP0, 0x0008
        .equiv INT4IP1, 0x0009
        .equiv INT4IP2, 0x000A
        .equiv C2RXIP0, 0x000C
        .equiv C2RXIP1, 0x000D
        .equiv C2RXIP2, 0x000E


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


;----- IPC15 Bits -----------------------------------------------------
        .equiv DCIIP0,  0x0000
        .equiv DCIIP1,  0x0001
        .equiv DCIIP2,  0x0002
        .equiv DMA5IP0, 0x0004
        .equiv DMA5IP1, 0x0005
        .equiv DMA5IP2, 0x0006
        .equiv RTCIP0,  0x0008
        .equiv RTCIP1,  0x0009
        .equiv RTCIP2,  0x000A


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


;----- IPC18 Bits -----------------------------------------------------
        .equiv PSESMIP0, 0x0004
        .equiv PSESMIP1, 0x0005
        .equiv PSESMIP2, 0x0006
        .equiv QEI2IP0, 0x000C
        .equiv QEI2IP1, 0x000D
        .equiv QEI2IP2, 0x000E


;----- IPC20 Bits -----------------------------------------------------
        .equiv U3EIP0,  0x0004
        .equiv U3EIP1,  0x0005
        .equiv U3EIP2,  0x0006
        .equiv U3RXIP0, 0x0008
        .equiv U3RXIP1, 0x0009
        .equiv U3RXIP2, 0x000A
        .equiv U3TXIP0, 0x000C
        .equiv U3TXIP1, 0x000D
        .equiv U3TXIP2, 0x000E


;----- IPC21 Bits -----------------------------------------------------
        .equiv USB1IP0, 0x0008
        .equiv USB1IP1, 0x0009
        .equiv USB1IP2, 0x000A
        .equiv U4EIP0,  0x000C
        .equiv U4EIP1,  0x000D
        .equiv U4EIP2,  0x000E


;----- IPC22 Bits -----------------------------------------------------
        .equiv U4RXIP0, 0x0000
        .equiv U4RXIP1, 0x0001
        .equiv U4RXIP2, 0x0002
        .equiv U4TXIP0, 0x0004
        .equiv U4TXIP1, 0x0005
        .equiv U4TXIP2, 0x0006
        .equiv SPI3EIP0, 0x0008
        .equiv SPI3EIP1, 0x0009
        .equiv SPI3EIP2, 0x000A
        .equiv SPI3IP0, 0x000C
        .equiv SPI3IP1, 0x000D
        .equiv SPI3IP2, 0x000E


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


;----- IPC29 Bits -----------------------------------------------------
        .equiv DMA8IP0, 0x0008
        .equiv DMA8IP1, 0x0009
        .equiv DMA8IP2, 0x000A
        .equiv DMA9IP0, 0x000C
        .equiv DMA9IP1, 0x000D
        .equiv DMA9IP2, 0x000E


;----- IPC30 Bits -----------------------------------------------------
        .equiv DMA10IP0, 0x0000
        .equiv DMA10IP1, 0x0001
        .equiv DMA10IP2, 0x0002
        .equiv DMA11IP0, 0x0004
        .equiv DMA11IP1, 0x0005
        .equiv DMA11IP2, 0x0006
        .equiv SPI4EIP0, 0x0008
        .equiv SPI4EIP1, 0x0009
        .equiv SPI4EIP2, 0x000A
        .equiv SPI4IP0, 0x000C
        .equiv SPI4IP1, 0x000D
        .equiv SPI4IP2, 0x000E


;----- IPC31 Bits -----------------------------------------------------
        .equiv OC10IP0, 0x0000
        .equiv OC10IP1, 0x0001
        .equiv OC10IP2, 0x0002
        .equiv IC10IP0, 0x0004
        .equiv IC10IP1, 0x0005
        .equiv IC10IP2, 0x0006
        .equiv OC11IP0, 0x0008
        .equiv OC11IP1, 0x0009
        .equiv OC11IP2, 0x000A
        .equiv IC11IP0, 0x000C
        .equiv IC11IP1, 0x000D
        .equiv IC11IP2, 0x000E


;----- IPC32 Bits -----------------------------------------------------
        .equiv OC12IP0, 0x0000
        .equiv OC12IP1, 0x0001
        .equiv OC12IP2, 0x0002
        .equiv IC12IP0, 0x0004
        .equiv IC12IP1, 0x0005
        .equiv IC12IP2, 0x0006
        .equiv DMA12IP0, 0x0008
        .equiv DMA12IP1, 0x0009
        .equiv DMA12IP2, 0x000A
        .equiv DMA13IP0, 0x000C
        .equiv DMA13IP1, 0x000D
        .equiv DMA13IP2, 0x000E


;----- IPC33 Bits -----------------------------------------------------
        .equiv DMA14IP0, 0x0000
        .equiv DMA14IP1, 0x0001
        .equiv DMA14IP2, 0x0002
        .equiv OC13IP0, 0x0008
        .equiv OC13IP1, 0x0009
        .equiv OC13IP2, 0x000A
        .equiv IC13IP0, 0x000C
        .equiv IC13IP1, 0x000D
        .equiv IC13IP2, 0x000E


;----- IPC34 Bits -----------------------------------------------------
        .equiv OC14IP0, 0x0000
        .equiv OC14IP1, 0x0001
        .equiv OC14IP2, 0x0002
        .equiv IC14IP0, 0x0004
        .equiv IC14IP1, 0x0005
        .equiv IC14IP2, 0x0006
        .equiv OC15IP0, 0x0008
        .equiv OC15IP1, 0x0009
        .equiv OC15IP2, 0x000A
        .equiv IC15IP0, 0x000C
        .equiv IC15IP1, 0x000D
        .equiv IC15IP2, 0x000E


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
        .equiv INT3EP,  0x0003
        .equiv INT4EP,  0x0004
        .equiv SWTRAP,  0x000D
        .equiv DISI,    0x000E
        .equiv GIE,     0x000F


;----- INTCON3 Bits -----------------------------------------------------
        .equiv DOOVR,   0x0004
        .equiv DAE,     0x0005
        .equiv UAE,     0x0006


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
        .equiv OCFLTC,  0x0006
        .equiv ENFLTA,  0x0007
        .equiv ENFLTB,  0x0008
        .equiv ENFLTC,  0x0009
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002
        .equiv OCTSEL0, 0x000A
        .equiv OCTSEL1, 0x000B
        .equiv OCTSEL2, 0x000C

        .equiv OCFLT0,  0x0004
        .equiv OCFLT1,  0x0005
        .equiv OCFLT2,  0x0006
        .equiv ENFLT0,  0x0007
        .equiv ENFLT1,  0x0008
        .equiv ENFLT2,  0x0009


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
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


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
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


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
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


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


;----- OC5CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC5CON2 Bits -----------------------------------------------------
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


;----- OC6CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC6CON2 Bits -----------------------------------------------------
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


;----- OC7CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC7CON2 Bits -----------------------------------------------------
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


;----- OC8CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC8CON2 Bits -----------------------------------------------------
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


;----- OC9CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC9CON2 Bits -----------------------------------------------------
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


;----- OC10CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC10CON2 Bits -----------------------------------------------------
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


;----- OC11CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC11CON2 Bits -----------------------------------------------------
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


;----- OC12CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC12CON2 Bits -----------------------------------------------------
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


;----- OC13CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC13CON2 Bits -----------------------------------------------------
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


;----- OC14CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC14CON2 Bits -----------------------------------------------------
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


;----- OC15CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC15CON2 Bits -----------------------------------------------------
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


;----- OC16CON1 Bits -----------------------------------------------------
       ;.equiv TRIGMODE, 0x0003
       ;.equiv OCFLTA,  0x0004
       ;.equiv OCFLTB,  0x0005
       ;.equiv OCFLTC,  0x0006
       ;.equiv ENFLTA,  0x0007
       ;.equiv ENFLTB,  0x0008
       ;.equiv ENFLTC,  0x0009
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002
       ;.equiv OCTSEL0, 0x000A
       ;.equiv OCTSEL1, 0x000B
       ;.equiv OCTSEL2, 0x000C

       ;.equiv OCFLT0,  0x0004
       ;.equiv OCFLT1,  0x0005
       ;.equiv OCFLT2,  0x0006
       ;.equiv ENFLT0,  0x0007
       ;.equiv ENFLT1,  0x0008
       ;.equiv ENFLT2,  0x0009


;----- OC16CON2 Bits -----------------------------------------------------
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
        .equiv C1EVT,   0x0008
        .equiv C2EVT,   0x0009
        .equiv C3EVT,   0x000A
        .equiv CMSIDL,  0x000F


;----- CVRCON Bits -----------------------------------------------------
        .equiv CVRSS,   0x0004
        .equiv CVRR,    0x0005
        .equiv CVROE,   0x0006
        .equiv CVREN,   0x0007
        .equiv VREFSEL, 0x000A

        .equiv CVR0,    0x0000
        .equiv CVR1,    0x0001
        .equiv CVR2,    0x0002
        .equiv CVR3,    0x0003
        .equiv BGSEL0,  0x0008
        .equiv BGSEL1,  0x0009


;----- CM1CON Bits -----------------------------------------------------
        .equiv CREF,    0x0004
        .equiv COUT,    0x0008
        .equiv CEVT,    0x0009
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


;----- DMA0CON Bits -----------------------------------------------------
        .equiv NULLW,   0x000B
        .equiv HALF,    0x000C
        .equiv DIR_DMA0CON, 0x000D
        .equiv SIZE,    0x000E
        .equiv CHEN,    0x000F

        .equiv MODE0_DMA0CON, 0x0000
        .equiv MODE1_DMA0CON, 0x0001
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
        .equiv DIR_DMA1CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA1CON, 0x0000
        .equiv MODE1_DMA1CON, 0x0001
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
        .equiv DIR_DMA2CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA2CON, 0x0000
        .equiv MODE1_DMA2CON, 0x0001
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
        .equiv DIR_DMA3CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA3CON, 0x0000
        .equiv MODE1_DMA3CON, 0x0001
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


;----- DMA4CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA4CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA4CON, 0x0000
        .equiv MODE1_DMA4CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA4REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA5CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA5CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA5CON, 0x0000
        .equiv MODE1_DMA5CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA5REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA6CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA6CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA6CON, 0x0000
        .equiv MODE1_DMA6CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA6REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA7CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA7CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA7CON, 0x0000
        .equiv MODE1_DMA7CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA7REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA8CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA8CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA8CON, 0x0000
        .equiv MODE1_DMA8CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA8REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA9CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA9CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA9CON, 0x0000
        .equiv MODE1_DMA9CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA9REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA10CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA10CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA10CON, 0x0000
        .equiv MODE1_DMA10CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA10REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA11CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA11CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA11CON, 0x0000
        .equiv MODE1_DMA11CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA11REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA12CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA12CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA12CON, 0x0000
        .equiv MODE1_DMA12CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA12REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA13CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA13CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA13CON, 0x0000
        .equiv MODE1_DMA13CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA13REQ Bits -----------------------------------------------------
       ;.equiv FORCE,   0x000F

       ;.equiv IRQSEL0, 0x0000
       ;.equiv IRQSEL1, 0x0001
       ;.equiv IRQSEL2, 0x0002
       ;.equiv IRQSEL3, 0x0003
       ;.equiv IRQSEL4, 0x0004
       ;.equiv IRQSEL5, 0x0005
       ;.equiv IRQSEL6, 0x0006
       ;.equiv IRQSEL7, 0x0007


;----- DMA14CON Bits -----------------------------------------------------
       ;.equiv NULLW,   0x000B
       ;.equiv HALF,    0x000C
        .equiv DIR_DMA14CON, 0x000D
       ;.equiv SIZE,    0x000E
       ;.equiv CHEN,    0x000F

        .equiv MODE0_DMA14CON, 0x0000
        .equiv MODE1_DMA14CON, 0x0001
       ;.equiv AMODE0,  0x0004
       ;.equiv AMODE1,  0x0005


;----- DMA14REQ Bits -----------------------------------------------------
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
        .equiv PWCOL4,  0x0004
        .equiv PWCOL5,  0x0005
        .equiv PWCOL6,  0x0006
        .equiv PWCOL7,  0x0007
        .equiv PWCOL8,  0x0008
        .equiv PWCOL9,  0x0009
        .equiv PWCOL10, 0x000A
        .equiv PWCOL11, 0x000B
        .equiv PWCOL12, 0x000C
        .equiv PWCOL13, 0x000D
        .equiv PWCOL14, 0x000E


;----- DMARQC Bits -----------------------------------------------------
        .equiv RQCOL0,  0x0000
        .equiv RQCOL1,  0x0001
        .equiv RQCOL2,  0x0002
        .equiv RQCOL3,  0x0003
        .equiv RQCOL4,  0x0004
        .equiv RQCOL5,  0x0005
        .equiv RQCOL6,  0x0006
        .equiv RQCOL7,  0x0007
        .equiv RQCOL8,  0x0008
        .equiv RQCOL9,  0x0009
        .equiv RQCOL10, 0x000A
        .equiv RQCOL11, 0x000B
        .equiv RQCOL12, 0x000C
        .equiv RQCOL13, 0x000D
        .equiv RQCOL14, 0x000E


;----- DMAPPS Bits -----------------------------------------------------
        .equiv PPST0,   0x0000
        .equiv PPST1,   0x0001
        .equiv PPST2,   0x0002
        .equiv PPST3,   0x0003
        .equiv PPST4,   0x0004
        .equiv PPST5,   0x0005
        .equiv PPST6,   0x0006
        .equiv PPST7,   0x0007
        .equiv PPST8,   0x0008
        .equiv PPST9,   0x0009
        .equiv PPST10,  0x000A
        .equiv PPST11,  0x000B
        .equiv PPST12,  0x000C
        .equiv PPST13,  0x000D
        .equiv PPST14,  0x000E


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


;----- STCON Bits -----------------------------------------------------
       ;.equiv SYNCEN,  0x0007
       ;.equiv SYNCOEN, 0x0008
       ;.equiv SYNCPOL, 0x0009
       ;.equiv EIPU,    0x000A
       ;.equiv SEIEN,   0x000B
       ;.equiv SESTAT,  0x000C

       ;.equiv SEVTPS0, 0x0000
       ;.equiv SEVTPS1, 0x0001
       ;.equiv SEVTPS2, 0x0002
       ;.equiv SEVTPS3, 0x0003
       ;.equiv SYNCSRC0, 0x0004
       ;.equiv SYNCSRC1, 0x0005
       ;.equiv SYNCSRC2, 0x0006


;----- STCON2 Bits -----------------------------------------------------
       ;.equiv PCLKDIV0, 0x0000
       ;.equiv PCLKDIV1, 0x0001
       ;.equiv PCLKDIV2, 0x0002


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


;----- PWMCAP1 Bits -----------------------------------------------------
        .equiv PWMCAP10, 0x0003
        .equiv PWMCAP11, 0x0004
        .equiv PWMCAP12, 0x0005
        .equiv PWMCAP13, 0x0006
        .equiv PWMCAP14, 0x0007
        .equiv PWMCAP15, 0x0008
        .equiv PWMCAP16, 0x0009
        .equiv PWMCAP17, 0x000A
        .equiv PWMCAP18, 0x000B
        .equiv PWMCAP19, 0x000C
        .equiv PWMCAP110, 0x000D
        .equiv PWMCAP111, 0x000E
        .equiv PWMCAP112, 0x000F


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


;----- PWMCAP2 Bits -----------------------------------------------------
       ;.equiv PWMCAP10, 0x0003
       ;.equiv PWMCAP11, 0x0004
       ;.equiv PWMCAP12, 0x0005
       ;.equiv PWMCAP13, 0x0006
       ;.equiv PWMCAP14, 0x0007
       ;.equiv PWMCAP15, 0x0008
       ;.equiv PWMCAP16, 0x0009
       ;.equiv PWMCAP17, 0x000A
       ;.equiv PWMCAP18, 0x000B
       ;.equiv PWMCAP19, 0x000C
       ;.equiv PWMCAP110, 0x000D
       ;.equiv PWMCAP111, 0x000E
       ;.equiv PWMCAP112, 0x000F


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


;----- PWMCAP3 Bits -----------------------------------------------------
       ;.equiv PWMCAP10, 0x0003
       ;.equiv PWMCAP11, 0x0004
       ;.equiv PWMCAP12, 0x0005
       ;.equiv PWMCAP13, 0x0006
       ;.equiv PWMCAP14, 0x0007
       ;.equiv PWMCAP15, 0x0008
       ;.equiv PWMCAP16, 0x0009
       ;.equiv PWMCAP17, 0x000A
       ;.equiv PWMCAP18, 0x000B
       ;.equiv PWMCAP19, 0x000C
       ;.equiv PWMCAP110, 0x000D
       ;.equiv PWMCAP111, 0x000E
       ;.equiv PWMCAP112, 0x000F


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

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON4 Bits -----------------------------------------------------
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


;----- IOCON4 Bits -----------------------------------------------------
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


;----- FCLCON4 Bits -----------------------------------------------------
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


;----- TRIG4 Bits -----------------------------------------------------
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


;----- TRGCON4 Bits -----------------------------------------------------
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


;----- PWMCAP4 Bits -----------------------------------------------------
       ;.equiv PWMCAP10, 0x0003
       ;.equiv PWMCAP11, 0x0004
       ;.equiv PWMCAP12, 0x0005
       ;.equiv PWMCAP13, 0x0006
       ;.equiv PWMCAP14, 0x0007
       ;.equiv PWMCAP15, 0x0008
       ;.equiv PWMCAP16, 0x0009
       ;.equiv PWMCAP17, 0x000A
       ;.equiv PWMCAP18, 0x000B
       ;.equiv PWMCAP19, 0x000C
       ;.equiv PWMCAP110, 0x000D
       ;.equiv PWMCAP111, 0x000E
       ;.equiv PWMCAP112, 0x000F


;----- LEBCON4 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON4, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY4 Bits -----------------------------------------------------
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


;----- AUXCON4 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON5 Bits -----------------------------------------------------
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


;----- IOCON5 Bits -----------------------------------------------------
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


;----- FCLCON5 Bits -----------------------------------------------------
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


;----- TRIG5 Bits -----------------------------------------------------
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


;----- TRGCON5 Bits -----------------------------------------------------
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


;----- PWMCAP5 Bits -----------------------------------------------------
       ;.equiv PWMCAP10, 0x0003
       ;.equiv PWMCAP11, 0x0004
       ;.equiv PWMCAP12, 0x0005
       ;.equiv PWMCAP13, 0x0006
       ;.equiv PWMCAP14, 0x0007
       ;.equiv PWMCAP15, 0x0008
       ;.equiv PWMCAP16, 0x0009
       ;.equiv PWMCAP17, 0x000A
       ;.equiv PWMCAP18, 0x000B
       ;.equiv PWMCAP19, 0x000C
       ;.equiv PWMCAP110, 0x000D
       ;.equiv PWMCAP111, 0x000E
       ;.equiv PWMCAP112, 0x000F


;----- LEBCON5 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON5, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY5 Bits -----------------------------------------------------
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


;----- AUXCON5 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001

       ;.equiv CHOPSEL0, 0x0002
       ;.equiv CHOPSEL1, 0x0003
       ;.equiv CHOPSEL2, 0x0004
       ;.equiv CHOPSEL3, 0x0005
       ;.equiv BLANKSEL0, 0x0008
       ;.equiv BLANKSEL1, 0x0009
       ;.equiv BLANKSEL2, 0x000A
       ;.equiv BLANKSEL3, 0x000B


;----- PWMCON6 Bits -----------------------------------------------------
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


;----- IOCON6 Bits -----------------------------------------------------
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


;----- FCLCON6 Bits -----------------------------------------------------
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


;----- TRIG6 Bits -----------------------------------------------------
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


;----- TRGCON6 Bits -----------------------------------------------------
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


;----- PWMCAP6 Bits -----------------------------------------------------
       ;.equiv PWMCAP10, 0x0003
       ;.equiv PWMCAP11, 0x0004
       ;.equiv PWMCAP12, 0x0005
       ;.equiv PWMCAP13, 0x0006
       ;.equiv PWMCAP14, 0x0007
       ;.equiv PWMCAP15, 0x0008
       ;.equiv PWMCAP16, 0x0009
       ;.equiv PWMCAP17, 0x000A
       ;.equiv PWMCAP18, 0x000B
       ;.equiv PWMCAP19, 0x000C
       ;.equiv PWMCAP110, 0x000D
       ;.equiv PWMCAP111, 0x000E
       ;.equiv PWMCAP112, 0x000F


;----- LEBCON6 Bits -----------------------------------------------------
       ;.equiv BPLL,    0x0000
       ;.equiv BPLH,    0x0001
       ;.equiv BPHL,    0x0002
       ;.equiv BPHH,    0x0003
        .equiv BCL_LEBCON6, 0x0004
       ;.equiv BCH,     0x0005
       ;.equiv CLLEBEN, 0x000A
       ;.equiv FLTLEBEN, 0x000B
       ;.equiv PLF,     0x000C
       ;.equiv PLR,     0x000D
       ;.equiv PHF,     0x000E
       ;.equiv PHR,     0x000F


;----- LEBDLY6 Bits -----------------------------------------------------
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


;----- AUXCON6 Bits -----------------------------------------------------
       ;.equiv CHOPLEN, 0x0000
       ;.equiv CHOPHEN, 0x0001

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
        .equiv TRISA5,  0x0005
        .equiv TRISA6,  0x0006
        .equiv TRISA7,  0x0007
        .equiv TRISA9,  0x0009
        .equiv TRISA10, 0x000A
        .equiv TRISA14, 0x000E
        .equiv TRISA15, 0x000F


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004
        .equiv RA5,     0x0005
        .equiv RA6,     0x0006
        .equiv RA7,     0x0007
        .equiv RA9,     0x0009
        .equiv RA10,    0x000A
        .equiv RA14,    0x000E
        .equiv RA15,    0x000F


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004
        .equiv LATA5,   0x0005
        .equiv LATA6,   0x0006
        .equiv LATA7,   0x0007
        .equiv LATA9,   0x0009
        .equiv LATA10,  0x000A
        .equiv LATA14,  0x000E
        .equiv LATA15,  0x000F


;----- ODCA Bits -----------------------------------------------------
        .equiv ODCA0,   0x0000
        .equiv ODCA1,   0x0001
        .equiv ODCA2,   0x0002
        .equiv ODCA3,   0x0003
        .equiv ODCA4,   0x0004
        .equiv ODCA5,   0x0005
        .equiv ODCA14,  0x000E
        .equiv ODCA15,  0x000F


;----- CNENA Bits -----------------------------------------------------
        .equiv CNIEA0,  0x0000
        .equiv CNIEA1,  0x0001
        .equiv CNIEA2,  0x0002
        .equiv CNIEA3,  0x0003
        .equiv CNIEA4,  0x0004
        .equiv CNIEA5,  0x0005
        .equiv CNIEA6,  0x0006
        .equiv CNIEA7,  0x0007
        .equiv CNIEA9,  0x0009
        .equiv CNIEA10, 0x000A
        .equiv CNIEA14, 0x000E
        .equiv CNIEA15, 0x000F


;----- CNPUA Bits -----------------------------------------------------
        .equiv CNPUA0,  0x0000
        .equiv CNPUA1,  0x0001
        .equiv CNPUA2,  0x0002
        .equiv CNPUA3,  0x0003
        .equiv CNPUA4,  0x0004
        .equiv CNPUA5,  0x0005
        .equiv CNPUA6,  0x0006
        .equiv CNPUA7,  0x0007
        .equiv CNPUA9,  0x0009
        .equiv CNPUA10, 0x000A
        .equiv CNPUA14, 0x000E
        .equiv CNPUA15, 0x000F


;----- CNPDA Bits -----------------------------------------------------
        .equiv CNPDA0,  0x0000
        .equiv CNPDA1,  0x0001
        .equiv CNPDA2,  0x0002
        .equiv CNPDA3,  0x0003
        .equiv CNPDA4,  0x0004
        .equiv CNPDA5,  0x0005
        .equiv CNPDA6,  0x0006
        .equiv CNPDA7,  0x0007
        .equiv CNPDA9,  0x0009
        .equiv CNPDA10, 0x000A
        .equiv CNPDA14, 0x000E
        .equiv CNPDA15, 0x000F


;----- ANSELA Bits -----------------------------------------------------
        .equiv ANSA6,   0x0006
        .equiv ANSA7,   0x0007
        .equiv ANSA9,   0x0009
        .equiv ANSA10,  0x000A


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
        .equiv ANSB4,   0x0004
        .equiv ANSB5,   0x0005
        .equiv ANSB6,   0x0006
        .equiv ANSB7,   0x0007
        .equiv ANSB8,   0x0008
        .equiv ANSB9,   0x0009
        .equiv ANSB10,  0x000A
        .equiv ANSB11,  0x000B
        .equiv ANSB12,  0x000C
        .equiv ANSB13,  0x000D
        .equiv ANSB14,  0x000E
        .equiv ANSB15,  0x000F


;----- TRISC Bits -----------------------------------------------------
        .equiv TRISC1,  0x0001
        .equiv TRISC2,  0x0002
        .equiv TRISC3,  0x0003
        .equiv TRISC4,  0x0004
        .equiv TRISC12, 0x000C
        .equiv TRISC13, 0x000D
        .equiv TRISC14, 0x000E
        .equiv TRISC15, 0x000F


;----- PORTC Bits -----------------------------------------------------
        .equiv RC1,     0x0001
        .equiv RC2,     0x0002
        .equiv RC3,     0x0003
        .equiv RC4,     0x0004
        .equiv RC12,    0x000C
        .equiv RC13,    0x000D
        .equiv RC14,    0x000E
        .equiv RC15,    0x000F


;----- LATC Bits -----------------------------------------------------
        .equiv LATC1,   0x0001
        .equiv LATC2,   0x0002
        .equiv LATC3,   0x0003
        .equiv LATC4,   0x0004
        .equiv LATC12,  0x000C
        .equiv LATC13,  0x000D
        .equiv LATC14,  0x000E
        .equiv LATC15,  0x000F


;----- CNENC Bits -----------------------------------------------------
        .equiv CNIEC1,  0x0001
        .equiv CNIEC2,  0x0002
        .equiv CNIEC3,  0x0003
        .equiv CNIEC4,  0x0004
        .equiv CNIEC12, 0x000C
        .equiv CNIEC13, 0x000D
        .equiv CNIEC14, 0x000E
        .equiv CNIEC15, 0x000F


;----- CNPUC Bits -----------------------------------------------------
        .equiv CNPUC1,  0x0001
        .equiv CNPUC2,  0x0002
        .equiv CNPUC3,  0x0003
        .equiv CNPUC4,  0x0004
        .equiv CNPUC12, 0x000C
        .equiv CNPUC13, 0x000D
        .equiv CNPUC14, 0x000E
        .equiv CNPUC15, 0x000F


;----- CNPDC Bits -----------------------------------------------------
        .equiv CNPDC1,  0x0001
        .equiv CNPDC2,  0x0002
        .equiv CNPDC3,  0x0003
        .equiv CNPDC4,  0x0004
        .equiv CNPDC12, 0x000C
        .equiv CNPDC13, 0x000D
        .equiv CNPDC14, 0x000E
        .equiv CNPDC15, 0x000F


;----- ANSELC Bits -----------------------------------------------------
        .equiv ANSC1,   0x0001
        .equiv ANSC2,   0x0002
        .equiv ANSC3,   0x0003
        .equiv ANSC4,   0x0004
        .equiv ANSC13,  0x000D
        .equiv ANSC14,  0x000E


;----- TRISD Bits -----------------------------------------------------
        .equiv TRISD0,  0x0000
        .equiv TRISD1,  0x0001
        .equiv TRISD2,  0x0002
        .equiv TRISD3,  0x0003
        .equiv TRISD4,  0x0004
        .equiv TRISD5,  0x0005
        .equiv TRISD6,  0x0006
        .equiv TRISD7,  0x0007
        .equiv TRISD8,  0x0008
        .equiv TRISD9,  0x0009
        .equiv TRISD10, 0x000A
        .equiv TRISD11, 0x000B
        .equiv TRISD12, 0x000C
        .equiv TRISD13, 0x000D
        .equiv TRISD14, 0x000E
        .equiv TRISD15, 0x000F


;----- PORTD Bits -----------------------------------------------------
        .equiv RD0,     0x0000
        .equiv RD1,     0x0001
        .equiv RD2,     0x0002
        .equiv RD3,     0x0003
        .equiv RD4,     0x0004
        .equiv RD5,     0x0005
        .equiv RD6,     0x0006
        .equiv RD7,     0x0007
        .equiv RD8,     0x0008
        .equiv RD9,     0x0009
        .equiv RD10,    0x000A
        .equiv RD11,    0x000B
        .equiv RD12,    0x000C
        .equiv RD13,    0x000D
        .equiv RD14,    0x000E
        .equiv RD15,    0x000F


;----- LATD Bits -----------------------------------------------------
        .equiv LATD0,   0x0000
        .equiv LATD1,   0x0001
        .equiv LATD2,   0x0002
        .equiv LATD3,   0x0003
        .equiv LATD4,   0x0004
        .equiv LATD5,   0x0005
        .equiv LATD6,   0x0006
        .equiv LATD7,   0x0007
        .equiv LATD8,   0x0008
        .equiv LATD9,   0x0009
        .equiv LATD10,  0x000A
        .equiv LATD11,  0x000B
        .equiv LATD12,  0x000C
        .equiv LATD13,  0x000D
        .equiv LATD14,  0x000E
        .equiv LATD15,  0x000F


;----- ODCD Bits -----------------------------------------------------
        .equiv ODCD0,   0x0000
        .equiv ODCD1,   0x0001
        .equiv ODCD2,   0x0002
        .equiv ODCD3,   0x0003
        .equiv ODCD4,   0x0004
        .equiv ODCD5,   0x0005
        .equiv ODCD8,   0x0008
        .equiv ODCD9,   0x0009
        .equiv ODCD10,  0x000A
        .equiv ODCD11,  0x000B
        .equiv ODCD12,  0x000C
        .equiv ODCD13,  0x000D
        .equiv ODCD14,  0x000E
        .equiv ODCD15,  0x000F


;----- CNEND Bits -----------------------------------------------------
        .equiv CNIED0,  0x0000
        .equiv CNIED1,  0x0001
        .equiv CNIED2,  0x0002
        .equiv CNIED3,  0x0003
        .equiv CNIED4,  0x0004
        .equiv CNIED5,  0x0005
        .equiv CNIED6,  0x0006
        .equiv CNIED7,  0x0007
        .equiv CNIED8,  0x0008
        .equiv CNIED9,  0x0009
        .equiv CNIED10, 0x000A
        .equiv CNIED11, 0x000B
        .equiv CNIED12, 0x000C
        .equiv CNIED13, 0x000D
        .equiv CNIED14, 0x000E
        .equiv CNIED15, 0x000F


;----- CNPUD Bits -----------------------------------------------------
        .equiv CNPUD0,  0x0000
        .equiv CNPUD1,  0x0001
        .equiv CNPUD2,  0x0002
        .equiv CNPUD3,  0x0003
        .equiv CNPUD4,  0x0004
        .equiv CNPUD5,  0x0005
        .equiv CNPUD6,  0x0006
        .equiv CNPUD7,  0x0007
        .equiv CNPUD8,  0x0008
        .equiv CNPUD9,  0x0009
        .equiv CNPUD10, 0x000A
        .equiv CNPUD11, 0x000B
        .equiv CNPUD12, 0x000C
        .equiv CNPUD13, 0x000D
        .equiv CNPUD14, 0x000E
        .equiv CNPUD15, 0x000F


;----- CNPDD Bits -----------------------------------------------------
        .equiv CNPDD0,  0x0000
        .equiv CNPDD1,  0x0001
        .equiv CNPDD2,  0x0002
        .equiv CNPDD3,  0x0003
        .equiv CNPDD4,  0x0004
        .equiv CNPDD5,  0x0005
        .equiv CNPDD6,  0x0006
        .equiv CNPDD7,  0x0007
        .equiv CNPDD8,  0x0008
        .equiv CNPDD9,  0x0009
        .equiv CNPDD10, 0x000A
        .equiv CNPDD11, 0x000B
        .equiv CNPDD12, 0x000C
        .equiv CNPDD13, 0x000D
        .equiv CNPDD14, 0x000E
        .equiv CNPDD15, 0x000F


;----- ANSELD Bits -----------------------------------------------------
        .equiv ANSD6,   0x0006
        .equiv ANSD7,   0x0007


;----- TRISE Bits -----------------------------------------------------
        .equiv TRISE0,  0x0000
        .equiv TRISE1,  0x0001
        .equiv TRISE2,  0x0002
        .equiv TRISE3,  0x0003
        .equiv TRISE4,  0x0004
        .equiv TRISE5,  0x0005
        .equiv TRISE6,  0x0006
        .equiv TRISE7,  0x0007
        .equiv TRISE8,  0x0008
        .equiv TRISE9,  0x0009


;----- PORTE Bits -----------------------------------------------------
        .equiv RE0,     0x0000
        .equiv RE1,     0x0001
        .equiv RE2,     0x0002
        .equiv RE3,     0x0003
        .equiv RE4,     0x0004
        .equiv RE5,     0x0005
        .equiv RE6,     0x0006
        .equiv RE7,     0x0007
        .equiv RE8,     0x0008
        .equiv RE9,     0x0009


;----- LATE Bits -----------------------------------------------------
        .equiv LATE0,   0x0000
        .equiv LATE1,   0x0001
        .equiv LATE2,   0x0002
        .equiv LATE3,   0x0003
        .equiv LATE4,   0x0004
        .equiv LATE5,   0x0005
        .equiv LATE6,   0x0006
        .equiv LATE7,   0x0007
        .equiv LATE8,   0x0008
        .equiv LATE9,   0x0009


;----- CNENE Bits -----------------------------------------------------
        .equiv CNIEE0,  0x0000
        .equiv CNIEE1,  0x0001
        .equiv CNIEE2,  0x0002
        .equiv CNIEE3,  0x0003
        .equiv CNIEE4,  0x0004
        .equiv CNIEE5,  0x0005
        .equiv CNIEE6,  0x0006
        .equiv CNIEE7,  0x0007
        .equiv CNIEE8,  0x0008
        .equiv CNIEE9,  0x0009


;----- CNPUE Bits -----------------------------------------------------
        .equiv CNPUE0,  0x0000
        .equiv CNPUE1,  0x0001
        .equiv CNPUE2,  0x0002
        .equiv CNPUE3,  0x0003
        .equiv CNPUE4,  0x0004
        .equiv CNPUE5,  0x0005
        .equiv CNPUE6,  0x0006
        .equiv CNPUE7,  0x0007
        .equiv CNPUE8,  0x0008
        .equiv CNPUE9,  0x0009


;----- CNPDE Bits -----------------------------------------------------
        .equiv CNPDE0,  0x0000
        .equiv CNPDE1,  0x0001
        .equiv CNPDE2,  0x0002
        .equiv CNPDE3,  0x0003
        .equiv CNPDE4,  0x0004
        .equiv CNPDE5,  0x0005
        .equiv CNPDE6,  0x0006
        .equiv CNPDE7,  0x0007
        .equiv CNPDE8,  0x0008
        .equiv CNPDE9,  0x0009


;----- ANSELE Bits -----------------------------------------------------
        .equiv ANSE0,   0x0000
        .equiv ANSE1,   0x0001
        .equiv ANSE2,   0x0002
        .equiv ANSE3,   0x0003
        .equiv ANSE4,   0x0004
        .equiv ANSE5,   0x0005
        .equiv ANSE6,   0x0006
        .equiv ANSE7,   0x0007
        .equiv ANSE8,   0x0008
        .equiv ANSE9,   0x0009


;----- TRISF Bits -----------------------------------------------------
        .equiv TRISF0,  0x0000
        .equiv TRISF1,  0x0001
        .equiv TRISF2,  0x0002
        .equiv TRISF3,  0x0003
        .equiv TRISF4,  0x0004
        .equiv TRISF5,  0x0005
        .equiv TRISF8,  0x0008
        .equiv TRISF12, 0x000C
        .equiv TRISF13, 0x000D


;----- PORTF Bits -----------------------------------------------------
        .equiv RF0,     0x0000
        .equiv RF1,     0x0001
        .equiv RF2,     0x0002
        .equiv RF3,     0x0003
        .equiv RF4,     0x0004
        .equiv RF5,     0x0005
        .equiv RF8,     0x0008
        .equiv RF12,    0x000C
        .equiv RF13,    0x000D


;----- LATF Bits -----------------------------------------------------
        .equiv LATF0,   0x0000
        .equiv LATF1,   0x0001
        .equiv LATF2,   0x0002
        .equiv LATF3,   0x0003
        .equiv LATF4,   0x0004
        .equiv LATF5,   0x0005
        .equiv LATF8,   0x0008
        .equiv LATF12,  0x000C
        .equiv LATF13,  0x000D


;----- ODCF Bits -----------------------------------------------------
        .equiv ODCF0,   0x0000
        .equiv ODCF1,   0x0001
        .equiv ODCF2,   0x0002
        .equiv ODCF3,   0x0003
        .equiv ODCF4,   0x0004
        .equiv ODCF5,   0x0005
        .equiv ODCF8,   0x0008
        .equiv ODCF12,  0x000C
        .equiv ODCF13,  0x000D


;----- CNENF Bits -----------------------------------------------------
        .equiv CNIEF0,  0x0000
        .equiv CNIEF1,  0x0001
        .equiv CNIEF2,  0x0002
        .equiv CNIEF3,  0x0003
        .equiv CNIEF4,  0x0004
        .equiv CNIEF5,  0x0005
        .equiv CNIEF8,  0x0008
        .equiv CNIEF12, 0x000C
        .equiv CNIEF13, 0x000D


;----- CNPUF Bits -----------------------------------------------------
        .equiv CNPUF0,  0x0000
        .equiv CNPUF1,  0x0001
        .equiv CNPUF2,  0x0002
        .equiv CNPUF3,  0x0003
        .equiv CNPUF4,  0x0004
        .equiv CNPUF5,  0x0005
        .equiv CNPUF8,  0x0008
        .equiv CNPUF12, 0x000C
        .equiv CNPUF13, 0x000D


;----- CNPDF Bits -----------------------------------------------------
        .equiv CNPDF0,  0x0000
        .equiv CNPDF1,  0x0001
        .equiv CNPDF2,  0x0002
        .equiv CNPDF3,  0x0003
        .equiv CNPDF4,  0x0004
        .equiv CNPDF5,  0x0005
        .equiv CNPDF8,  0x0008
        .equiv CNPDF12, 0x000C
        .equiv CNPDF13, 0x000D


;----- TRISG Bits -----------------------------------------------------
        .equiv TRISG0,  0x0000
        .equiv TRISG1,  0x0001
        .equiv TRISG6,  0x0006
        .equiv TRISG7,  0x0007
        .equiv TRISG8,  0x0008
        .equiv TRISG9,  0x0009
        .equiv TRISG12, 0x000C
        .equiv TRISG13, 0x000D
        .equiv TRISG14, 0x000E
        .equiv TRISG15, 0x000F


;----- PORTG Bits -----------------------------------------------------
        .equiv RG0,     0x0000
        .equiv RG1,     0x0001
        .equiv RG2,     0x0002
        .equiv RG3,     0x0003
        .equiv RG6,     0x0006
        .equiv RG7,     0x0007
        .equiv RG8,     0x0008
        .equiv RG9,     0x0009
        .equiv RG12,    0x000C
        .equiv RG13,    0x000D
        .equiv RG14,    0x000E
        .equiv RG15,    0x000F


;----- LATG Bits -----------------------------------------------------
        .equiv LATG0,   0x0000
        .equiv LATG1,   0x0001
        .equiv LATG6,   0x0006
        .equiv LATG7,   0x0007
        .equiv LATG8,   0x0008
        .equiv LATG9,   0x0009
        .equiv LATG12,  0x000C
        .equiv LATG13,  0x000D
        .equiv LATG14,  0x000E
        .equiv LATG15,  0x000F


;----- ODCG Bits -----------------------------------------------------
        .equiv ODCG0,   0x0000
        .equiv ODCG1,   0x0001
        .equiv ODCG12,  0x000C
        .equiv ODCG13,  0x000D
        .equiv ODCG14,  0x000E
        .equiv ODCG15,  0x000F


;----- CNENG Bits -----------------------------------------------------
        .equiv CNIEG0,  0x0000
        .equiv CNIEG1,  0x0001
        .equiv CNIEG2,  0x0002
        .equiv CNIEG3,  0x0003
        .equiv CNIEG6,  0x0006
        .equiv CNIEG7,  0x0007
        .equiv CNIEG8,  0x0008
        .equiv CNIEG9,  0x0009
        .equiv CNIEG12, 0x000C
        .equiv CNIEG13, 0x000D
        .equiv CNIEG14, 0x000E
        .equiv CNIEG15, 0x000F


;----- CNPUG Bits -----------------------------------------------------
        .equiv CNPUG0,  0x0000
        .equiv CNPUG1,  0x0001
        .equiv CNPUG6,  0x0006
        .equiv CNPUG7,  0x0007
        .equiv CNPUG8,  0x0008
        .equiv CNPUG9,  0x0009
        .equiv CNPUG12, 0x000C
        .equiv CNPUG13, 0x000D
        .equiv CNPUG14, 0x000E
        .equiv CNPUG15, 0x000F


;----- CNPDG Bits -----------------------------------------------------
        .equiv CNPDG0,  0x0000
        .equiv CNPDG1,  0x0001
        .equiv CNPDG6,  0x0006
        .equiv CNPDG7,  0x0007
        .equiv CNPDG8,  0x0008
        .equiv CNPDG9,  0x0009
        .equiv CNPDG12, 0x000C
        .equiv CNPDG13, 0x000D
        .equiv CNPDG14, 0x000E
        .equiv CNPDG15, 0x000F


;----- ANSELG Bits -----------------------------------------------------
        .equiv ANSG6,   0x0006
        .equiv ANSG7,   0x0007
        .equiv ANSG8,   0x0008
        .equiv ANSG9,   0x0009


;----- PADCFG1 Bits -----------------------------------------------------
        .equiv PMPTTL,  0x0000
        .equiv RTSECSEL, 0x0001




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


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Segment Write-Protect bit:
;     GWRP_ON              General Segment is write protected
;     GWRP_OFF             General Segment may be written
;
;   General Segment Code-Protect bit:
;     GSS_ON               Standard Security Code protection Enabled
;     GSS_OFF              General Segment Code protect is disabled
;
;   General Segment Key bits:
;     GSSK_OFF             General Segment Write Protection and Code Protection is Disabled
;     GSSK_ON              General Segment Write Protection or Code Protection is Enabled
;
        .equiv GWRP_ON,         0xFFFE ; General Segment is write protected
        .equiv GWRP_OFF,        0xFFFF ; General Segment may be written

        .equiv GSS_ON,          0xFFFD ; Standard Security Code protection Enabled
        .equiv GSS_OFF,         0xFFFF ; General Segment Code protect is disabled

        .equiv GSSK_OFF,        0xFFCF ; General Segment Write Protection and Code Protection is Disabled
        .equiv GSSK_ON,         0xFFFF ; General Segment Write Protection or Code Protection is Enabled


;----- FOSCSEL (0xf80006) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Initial Oscillator Source Selection Bits:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Internal Fast RC with PLL (FRCPLL)
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) with PLL
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low-Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV16       Internal Fast RC (FRC) Oscillator with divide-by-16
;     FNOSC_FRCDIVN        Internal Fast RC (FRC) Oscillator with postscaler
;
;   Two-speed Oscillator Start-up Enable bit:
;     IESO_OFF             Start up with user-selected oscillator source
;     IESO_ON              Start up device with FRC, then switch to user-selected oscillator source
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Internal Fast RC with PLL (FRCPLL)
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator (XT, HS, EC) with PLL
        .equiv FNOSC_SOSC,      0xFFFC ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFFFD ; Low-Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV16,  0xFFFE ; Internal Fast RC (FRC) Oscillator with divide-by-16
        .equiv FNOSC_FRCDIVN,   0xFFFF ; Internal Fast RC (FRC) Oscillator with postscaler

        .equiv IESO_OFF,        0xFF7F ; Start up with user-selected oscillator source
        .equiv IESO_ON,         0xFFFF ; Start up device with FRC, then switch to user-selected oscillator source


;----- FOSC (0xf80008) --------------------------------------------------
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


;----- FWDT (0xf8000a) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler Bits:
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
;   PLL Lock Wait Enable bit:
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


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   Power-on Reset Timer Value Select bits:
;     FPWRT_PWR1           Disabled
;     FPWRT_PWR2           2ms
;     FPWRT_PWR4           4ms
;     FPWRT_PWR8           8ms
;     FPWRT_PWR16          16ms
;     FPWRT_PWR32          32ms
;     FPWRT_PWR64          64ms
;     FPWRT_PWR128         128ms
;
;   Brown-out Reset (BOR) Detection Enable bit:
;     BOREN_OFF            BOR is disabled
;     BOREN_ON             BOR is enabled
;
;   Alternate I2C pins for I2C1:
;     ALTI2C1_ON           ASDA1/ASCK1 pins are selected as the I/O pins for I2C1
;     ALTI2C1_OFF          SDA1/SCK1 pins are selected as the I/O pins for I2C1
;
;   Alternate I2C pins for I2C2:
;     ALTI2C2_ON           ASDA2/ASCK2 pins are selected as the I/O pins for I2C2
;     ALTI2C2_OFF          SDA2/SCK2 pins are selected as the I/O pins for I2C2
;
        .equiv FPWRT_PWR1,      0xFFF8 ; Disabled
        .equiv FPWRT_PWR2,      0xFFF9 ; 2ms
        .equiv FPWRT_PWR4,      0xFFFA ; 4ms
        .equiv FPWRT_PWR8,      0xFFFB ; 8ms
        .equiv FPWRT_PWR16,     0xFFFC ; 16ms
        .equiv FPWRT_PWR32,     0xFFFD ; 32ms
        .equiv FPWRT_PWR64,     0xFFFE ; 64ms
        .equiv FPWRT_PWR128,    0xFFFF ; 128ms

        .equiv BOREN_OFF,       0xFFF7 ; BOR is disabled
        .equiv BOREN_ON,        0xFFFF ; BOR is enabled

        .equiv ALTI2C1_ON,      0xFFEF ; ASDA1/ASCK1 pins are selected as the I/O pins for I2C1
        .equiv ALTI2C1_OFF,     0xFFFF ; SDA1/SCK1 pins are selected as the I/O pins for I2C1

        .equiv ALTI2C2_ON,      0xFFDF ; ASDA2/ASCK2 pins are selected as the I/O pins for I2C2
        .equiv ALTI2C2_OFF,     0xFFFF ; SDA2/SCK2 pins are selected as the I/O pins for I2C2


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   ICD Communication Channel Select bits:
;     ICS_NONE             Reserved, do not use
;     ICS_PGD3             Communicate on PGEC3 and PGED3
;     ICS_PGD2             Communicate on PGEC2 and PGED2
;     ICS_PGD1             Communicate on PGEC1 and PGED1
;
;   Reset Target Vector Select bit:
;     RSTPRI_AF            Device will obtain reset instruction from Aux flash
;     RSTPRI_PF            Device will obtain reset instruction from Primary flash
;
;   JTAG Enable bit:
;     JTAGEN_OFF           JTAG is disabled
;     JTAGEN_ON            JTAG is enabled
;
        .equiv ICS_NONE,        0xFFFC ; Reserved, do not use
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGEC3 and PGED3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGEC2 and PGED2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGEC1 and PGED1

        .equiv RSTPRI_AF,       0xFFFB ; Device will obtain reset instruction from Aux flash
        .equiv RSTPRI_PF,       0xFFFF ; Device will obtain reset instruction from Primary flash

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is enabled


;----- FAS (0xf80010) --------------------------------------------------
;
;  The following settings are available for FAS:
;
;   Auxiliary Segment Write-protect bit:
;     AWRP_ON              Auxiliary program memory is write-protected
;     AWRP_OFF             Auxiliary program memory is not write-protected
;
;   Auxiliary Segment Code-protect bit:
;     APL_ON               Aux Flash Code protect is enabled
;     APL_OFF              Aux Flash Code protect is disabled
;
;   Auxiliary Segment Key bits:
;     APLK_OFF             Aux Flash Write Protection and Code Protection is Disabled
;     APLK_ON              Aux Flash Write Protection or Code Protection is Enabled
;
        .equiv AWRP_ON,         0xFFFE ; Auxiliary program memory is write-protected
        .equiv AWRP_OFF,        0xFFFF ; Auxiliary program memory is not write-protected

        .equiv APL_ON,          0xFFFD ; Aux Flash Code protect is enabled
        .equiv APL_OFF,         0xFFFF ; Aux Flash Code protect is disabled

        .equiv APLK_OFF,        0xFFCF ; Aux Flash Write Protection and Code Protection is Disabled
        .equiv APLK_ON,         0xFFFF ; Aux Flash Write Protection or Code Protection is Enabled


;----- FUID0 (0xf80012) --------------------------------------------------
;
;  The following settings are available for FUID0:
;
;   :
;


.LIST
