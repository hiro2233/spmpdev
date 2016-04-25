#ifndef ML674000_h
#define ML674000_h
/*******************************************************************************
ML674000 - Register defs for OKI ML674000, ML674001, ML67Q4002, ML67Q4003

           
THE SOFTWARE IS DELIVERED "AS IS" WITHOUT WARRANTY OR CONDITION OF ANY KIND, 
EITHER EXPRESS, IMPLIED OR STATUTORY. THIS INCLUDES WITHOUT LIMITATION ANY 
WARRANTY OR CONDITION WITH RESPECT TO MERCHANTABILITY OR FITNESS FOR ANY 
PARTICULAR PURPOSE, OR AGAINST THE INFRINGEMENTS OF INTELLECTUAL PROPERTY RIGHTS 
OF OTHERS.
           
This file may be freely used for commercial and non-commercial applications, 
including being redistributed with any tools.

If you find a problem with the file, please report it so that it can be fixed.

Created by Sten Larsson (sten_larsson at yahoo com)
*******************************************************************************/

#define REG8  *(volatile unsigned char*)
#define REG16 *(volatile unsigned short*)
#define REG32 *(volatile unsigned int*)


/*##############################################################################
## Interrupt Control Register
##############################################################################*/

#define ICR_BASE         (0x78000000)
#define IRQ              (REG32 (ICR_BASE+0x00))   /* IRQ register (R,32,0x00000000) */
#define IRQS             (REG32 (ICR_BASE+0x04))   /* IRQ soft register (RW,32,0x00000000) */
#define FIQ              (REG32 (ICR_BASE+0x08))   /* FIQ register (R,32,0x00000000) */
#define FIQRAW           (REG32 (ICR_BASE+0x0C))   /* FIQRAW status register (R,32,--) */
#define FIQEN            (REG32 (ICR_BASE+0x10))   /* FIQ enable register (RW,32,0x00000000) */
#define IRN              (REG32 (ICR_BASE+0x14))   /* IRQ number register (R,32,0x00000000) */
#define CIL              (REG32 (ICR_BASE+0x18))   /* Current IRQ level register (RW,32,0x00000000) */
#define ILC0             (REG32 (ICR_BASE+0x20))   /* IRQ level control register 0 (RW,32,0x00000000) */
#define ILC1             (REG32 (ICR_BASE+0x24))   /* IRQ level control register 1 (RW,32,0x00000000) */
#define CILCL            (REG32 (ICR_BASE+0x28))   /* Current IRQ level clear register (W,32,--) */
#define CILE             (REG32 (ICR_BASE+0x2C))   /* Current IRQ level encode register (R,32,0x00000000) */

/* ---- IRQ bits --------------------------------- */
#define IRQ_nIR0         (0x00000001)              /* nIR[0] */
#define IRQ_nIR1         (0x00000002)              /* nIR[1] */
#define IRQ_nIR2         (0x00000004)              /* nIR[2] */
#define IRQ_nIR3         (0x00000008)              /* nIR[3] */
#define IRQ_nIR4         (0x00000010)              /* nIR[4] */
#define IRQ_nIR5         (0x00000020)              /* nIR[5] */
#define IRQ_nIR6         (0x00000040)              /* nIR[6] */
#define IRQ_nIR7         (0x00000080)              /* nIR[7] */
#define IRQ_nIR8         (0x00000100)              /* nIR[8] */
#define IRQ_nIR9         (0x00000200)              /* nIR[9] */
#define IRQ_nIR10        (0x00000400)              /* nIR[10] */
#define IRQ_nIR11        (0x00000800)              /* nIR[11] */
#define IRQ_nIR12        (0x00001000)              /* nIR[12] */
#define IRQ_nIR13        (0x00002000)              /* nIR[13] */
#define IRQ_nIR14        (0x00004000)              /* nIR[14] */
#define IRQ_nIR15        (0x00008000)              /* nIR[15] */

/* ---- IRQS bits -------------------------------- */
#define IRQS_IRQS        (0x00000002)              /* IRQS bit */

/* ---- FIQ bits --------------------------------- */
#define FIQ_FIQ          (0x00000001)              /* FIQ bit */

/* ---- FIQRAW bits  ----------------------------- */
#define FIQRAW_FIQRAW    (0x00000001)              /* FIQRAW bit */

/* ---- FIQEN bits ------------------------------- */
#define FIQEN_FIQEN      (0x00000001)              /* FIQEN bit */

/* ---- IRN bits --------------------------------- */
#define IRN_IRN          (0x0000007F)              /* IRN[6:0] */

/* ---- CIL bits --------------------------------- */
#define CIL_INT_LV1      (0x00000002)              /* Interrupt level 1 */
#define CIL_INT_LV2      (0x00000004)              /* Interrupt level 2 */
#define CIL_INT_LV3      (0x00000008)              /* Interrupt level 3 */
#define CIL_INT_LV4      (0x00000010)              /* Interrupt level 4 */
#define CIL_INT_LV5      (0x00000020)              /* Interrupt level 5 */
#define CIL_INT_LV6      (0x00000040)              /* Interrupt level 6 */
#define CIL_INT_LV7      (0x00000080)              /* Interrupt level 7 */

/* ---- ILC0 bits -------------------------------- */
#define ILC0_INT_LV1     (0x11111111)              /* Interrupt level 1 */
#define ILC0_INT_LV2     (0x22222222)              /* Interrupt level 2 */
#define ILC0_INT_LV3     (0x33333333)              /* Interrupt level 3 */
#define ILC0_INT_LV4     (0x44444444)              /* Interrupt level 4 */
#define ILC0_INT_LV5     (0x55555555)              /* Interrupt level 5 */
#define ILC0_INT_LV6     (0x66666666)              /* Interrupt level 6 */
#define ILC0_INT_LV7     (0x77777777)              /* Interrupt level 7 */
#define ILC0_ILR0        (0x00000007)              /* nIR[0] */
#define ILC0_ILR1        (0x00000070)              /* nIR[1],nIR[2],nIR[3] */
#define ILC0_ILR4        (0x00070000)              /* nIR[4],nIR[5] */
#define ILC0_ILR6        (0x07000000)              /* nIR[6],nIR[7] */

/* ---- ILC1 bits -------------------------------- */
#define ILC1_INT_LV1     (0x11111111)              /* Interrupt level 1 */
#define ILC1_INT_LV2     (0x22222222)              /* Interrupt level 2 */
#define ILC1_INT_LV3     (0x33333333)              /* Interrupt level 3 */
#define ILC1_INT_LV4     (0x44444444)              /* Interrupt level 4 */
#define ILC1_INT_LV5     (0x55555555)              /* Interrupt level 5 */
#define ILC1_INT_LV6     (0x66666666)              /* Interrupt level 6 */
#define ILC1_INT_LV7     (0x77777777)              /* Interrupt level 7 */
#define ILC1_ILR8        (0x00000007)              /* nIR[8] */
#define ILC1_ILR9        (0x00000070)              /* nIR[9] */
#define ILC1_ILR10       (0x00000700)              /* nIR[10] */
#define ILC1_ILR11       (0x00007000)              /* nIR[11] */
#define ILC1_ILR12       (0x00070000)              /* nIR[12] */
#define ILC1_ILR13       (0x00700000)              /* nIR[13] */
#define ILC1_ILR14       (0x07000000)              /* nIR[14] */
#define ILC1_ILR15       (0x70000000)              /* nIR[15] */

/* ---- CILCL bits ------------------------------- */
#define CILCL_CLEAR      (0x00000001)              /* most significant '1' bit of CIL is cleared */

/* ---- CILE bits -------------------------------- */
#define CILE_CILE        (0x00000007)              /* CILE[2:0] */


/*##############################################################################
## External memory control register
##############################################################################*/

#define EMCR_BASE        (0x78100000)
#define BWC              (REG32 (EMCR_BASE+0x00))  /* Bus width control register (RW,32,0x00000008) */
#define ROMAC            (REG32 (EMCR_BASE+0x04))  /* External ROM access control register (RW,32,0x00000007) */
#define RAMAC            (REG32 (EMCR_BASE+0x08))  /* External SRAM access control register (RW,32,0x00000007) */
#define IO0AC            (REG32 (EMCR_BASE+0x0C))  /* External IO0 access control register (RW,32,0x00000007) */
#define IO1AC            (REG32 (EMCR_BASE+0x10))  /* External IO1 access control register (RW,32,0x00000007) */

/* ---- BWC bits --------------------------------- */ 
#define BWC_ROMBW0       (0x00000000)              /* ROM disable */
#define BWC_ROMBW16      (0x00000008)              /* ROM 16bit */
#define BWC_RAMBW0       (0x00000000)              /* RAM disable */
#define BWC_RAMBW16      (0x00000020)              /* RAM 16bit */
#define BWC_IO0BW0       (0x00000000)              /* IO0 disable */
#define BWC_IO0BW8       (0x00000040)              /* IO0 8bit */
#define BWC_IO0BW16      (0x00000080)              /* IO0 16 bit */
#define BWC_IO1BW0       (0x00000000)              /* IO1 disable */
#define BWC_IO1BW8       (0x00000100)              /* IO1 8bit */
#define BWC_IO1BW16      (0x00000200)              /* IO1 16bit */

/* ---- ROMAC bits ------------------------------- */
#define ROMAC_ROMTYPE    (0x00000007)              /* ROMTYPE[2:0] */

/* ---- RAMAC bits ------------------------------- */
#define RAMAC_RAMTYPE    (0x00000007)              /* RAMTYPE[2:0] */

/* ---- IO0AC bits ------------------------------- */
#define IO0AC_IO0TYPE    (0x00000007)              /* IO0TYPE[2:0] */

/* ---- IO1AC bits ------------------------------- */
#define IO1AC_IO1TYPE    (0x00000007)              /* IO1TYPE[2:0] */


/*##############################################################################
## System control register
##############################################################################*/

#define SCR_BASE         (0xB8000000)
#define CLKSTP           (REG32 (SCR_BASE+0x04))   /* Clock stop register (W,32,0x00000000) */
#define CGBCNT0          (REG32 (SCR_BASE+0x08))   /* Clock(CGB) control register 0 (RW,32,0x00000000) */
#define CKWT             (REG32 (SCR_BASE+0x0C))   /* Clock wait register (RW,32,0x0000000B) */
#define RMPCON           (REG32 (SCR_BASE+0x10))   /* Remap control register (RW,32,0x00000000) */

/* ---- CLKSTP bits ------------------------------ */
#define CLKSTP_SIO       (0x00000001)              /* SIO HALT */
#define CLKSTP_TIC       (0x00000002)              /* TIC HALT */
#define CLKSTP_HALT      (0x00000004)              /* CPU group HALT */
#define CLKSTP_STBY      (0x000000F0)              /* STANDBY */

/* ---- CGBCNT0 bits  ---------------------------- */
#define CGBCNT0_HCLK1    (0x00000000)              /* HCLK 1 dividing  */
#define CGBCNT0_HCLK2    (0x00000001)              /* HCLK 2 dividing  */
#define CGBCNT0_HCLK4    (0x00000002)              /* HCLK 4 dividing  */
#define CGBCNT0_HCLK8    (0x00000003)              /* HCLK 8 dividing  */
#define CGBCNT0_HCLK16   (0x00000004)              /* HCLK 16 dividing */
#define CGBCNT0_CCLK1    (0x00000000)              /* CCLK 1 dividing  */
#define CGBCNT0_CCLK2    (0x00000010)              /* CCLK 2 dividing  */
#define CGBCNT0_CCLK4    (0x00000020)              /* CCLK 4 dividing  */
#define CGBCNT0_CCLK8    (0x00000030)              /* CCLK 8 dividing  */
#define CGBCNT0_CCLK16   (0x00000040)              /* CCLK 16 dividing */

/* ---- RMPCON bits ------------------------------ */
#define RMPCON_ENABLE    (0x00000008)              /* Remap enabled */
#define RMPCON_DISABLE   (0x00000000)              /* Remap disabled */
#define RMPCON_AHB       (0x00000002)              /* Device space is AHB bus*/
#define RMPCON_EXT       (0x00000000)              /* Device space is external bus */
#define RMPCON_DRAM      (0x00000001)              /* Memory type is DRAM */
#define RMPCON_SRAM      (0x00000000)              /* Memory type is SRAM */
#define RMPCON_IRAM      (0x00000004)              /* Memory type is internal RAM */


/*##############################################################################
## System timer control register
##############################################################################*/

#define STCR_BASE        (0xB8001000)
#define TMEN             (REG16 (STCR_BASE+0x04))  /* Timer enable register (RW,16,0x0000) */
#define TMRLR            (REG16 (STCR_BASE+0x08))  /* Timer reload register (RW,16,0x0000) */
#define TMOVF            (REG16 (STCR_BASE+0x10))  /* Overflow register (RW,16,0x0000) */

/* ---- TMEN bits -------------------------------- */
#define TMEN_TCEN        (0x0001)                  /* Timer enabled */

/* ---- TMOVF bits ------------------------------- */
#define TMOVF_OVF        (0x0001)                  /* Overflow generated */

/*##############################################################################
## ASIO control register
##############################################################################*/

#define SC_BASE          (0xB8002000)
#define SIOBUF           (REG16 (SC_BASE+0x00))    /* Transmiting/receiving buffer register (RW,16,0x0000) */
#define SIOSTA           (REG16 (SC_BASE+0x04))    /* SIO status register (RW,16,0x0000) */
#define SIOCON           (REG16 (SC_BASE+0x08))    /* SIO control register (RW,16,0x0000) */
#define SIOBCN           (REG16 (SC_BASE+0x0C))    /* Baud rate control register (RW,16,0x0000) */
#define SIOBT            (REG16 (SC_BASE+0x14))    /* Baud rate timer register (RW,16,0x0000) */
#define SIOTCN           (REG16 (SC_BASE+0x18))    /* SIO test control register (RW,16,0x0000) */

/* ---- SIOBUF bits ------------------------------ */
#define SIOBUF_SIOBUF    (0x00FF)                  /* SIOBUF[7:0] */

/* ---- SIOSTA bits ------------------------------ */
#define SIOSTA_FERR      (0x0001)                  /* Framing error */
#define SIOSTA_OERR      (0x0002)                  /* Overrun error */
#define SIOSTA_PERR      (0x0004)                  /* Parity error */
#define SIOSTA_RVIRQ     (0x0010)                  /* Receive ready */
#define SIOSTA_TRIRQ     (0x0020)                  /* Transmit ready */

/* ---- SIOCON bits ------------------------------ */
#define SIOCON_LN7       (0x0001)                  /* Data length : 7bit */
#define SIOCON_LN8       (0x0000)                  /* Data length : 8bit */
#define SIOCON_PEN       (0x0002)                  /* Parity enabled */
#define SIOCON_PDIS      (0x0000)                  /* Parity disabled */
#define SIOCON_EVN       (0x0004)                  /* Even parity */
#define SIOCON_ODD       (0x0000)                  /* Odd parity */
#define SIOCON_TSTB1     (0x0008)                  /* Stop bit : 1 */
#define SIOCON_TSTB2     (0x0000)                  /* ---- stop bit : 2 */

/* ---- SIOBCN bits ------------------------------ */
#define SIOBCN_BGRUN     (0x0010)                  /* Count start */

/* ---- SIOBT bits ------------------------------- */
#define SIOBT_SIOBT      (0x00FF)                  /* SIOBT[7:0] */

/* ---- SIOTCN bits ------------------------------ */
#define SIOTCN_MFERR     (0x0001)                  /* Generate framin error */
#define SIOTCN_MPERR     (0x0002)                  /* Generate parity error */
#define SIOTCN_LBTST     (0x0080)                  /* Loop back test */


/*##############################################################################
##  Timer control register
##############################################################################*/

#define TCR_BASE         (0xB7F00000)
#define TIMECNTL0        (REG16 (TCR_BASE+0x00))   /* Timer0 control register (RW,16,0x0000) */
#define TIMEBASE0        (REG16 (TCR_BASE+0x04))   /* Timer0 base register (RW,16,0x0000) */
#define TIMECNT0         (REG16 (TCR_BASE+0x08))   /* Timer0 counter register (R,16,0x0000) */
#define TIMECMP0         (REG16 (TCR_BASE+0x0C))   /* Timer0 compare register (RW,16,0xFFFF) */
#define TIMESTAT0        (REG16 (TCR_BASE+0x10))   /* Timer0 status register (RW,16,0x0000) */
#define TIMECNTL1        (REG16 (TCR_BASE+0x20))   /* Timer1 control register (RW,16,0x0000) */
#define TIMEBASE1        (REG16 (TCR_BASE+0x24))   /* Timer1 base register (RW,16,0x0000) */
#define TIMECNT1         (REG16 (TCR_BASE+0x28))   /* Timer1 counter register (R,16,0x0000) */
#define TIMECMP1         (REG16 (TCR_BASE+0x2C))   /* Timer1 compare register (RW,16,0xFFFF) */
#define TIMESTAT1        (REG16 (TCR_BASE+0x30))   /* Timer1 status register (RW,16,0x0000) */
#define TIMECNTL2        (REG16 (TCR_BASE+0x40))   /* Timer2 control register (RW,16,0x0000) */
#define TIMEBASE2        (REG16 (TCR_BASE+0x44))   /* Timer2 base register (RW,16,0x0000) */
#define TIMECNT2         (REG16 (TCR_BASE+0x48))   /* Timer2 counter register (R,16,0x0000) */
#define TIMECMP2         (REG16 (TCR_BASE+0x4C))   /* Timer2 compare register (RW,16,0xFFFF) */
#define TIMESTAT2        (REG16 (TCR_BASE+0x50))   /* Timer2 status register (RW,16,0x0000) */
#define TIMECNTL3        (REG16 (TCR_BASE+0x60))   /* Timer3 control register (RW,16,0x0000) */
#define TIMEBASE3        (REG16 (TCR_BASE+0x64))   /* Timer3 base register (RW,16,0x0000) */
#define TIMECNT3         (REG16 (TCR_BASE+0x68))   /* Timer3 counter register (R,16,0x0000) */
#define TIMECMP3         (REG16 (TCR_BASE+0x6C))   /* Timer3 compare register (RW,16,0xFFFF) */
#define TIMESTAT3        (REG16 (TCR_BASE+0x70))   /* Timer3 status register (RW,16,0x0000) */
#define TIMECNTL4        (REG16 (TCR_BASE+0x80))   /* Timer4 control register (RW,16,0x0000) */
#define TIMEBASE4        (REG16 (TCR_BASE+0x84))   /* Timer4 base register (RW,16,0x0000) */
#define TIMECNT4         (REG16 (TCR_BASE+0x88))   /* Timer4 counter register (R,16,0x0000) */
#define TIMECMP4         (REG16 (TCR_BASE+0x8C))   /* Timer4 compare register (RW,16,0xFFFF) */
#define TIMESTAT4        (REG16 (TCR_BASE+0x90))   /* Timer4 status register (RW,16,0x0000) */
#define TIMECNTL5        (REG16 (TCR_BASE+0xA0))   /* Timer5 control register (RW,16,0x0000) */
#define TIMEBASE5        (REG16 (TCR_BASE+0xA4))   /* Timer5 base register (RW,16,0x0000) */
#define TIMECNT5         (REG16 (TCR_BASE+0xA8))   /* Timer5 counter register (R,16,0x0000) */
#define TIMECMP5         (REG16 (TCR_BASE+0xAC))   /* Timer5 compare register (RW,16,0xFFFF) */
#define TIMESTAT5        (REG16 (TCR_BASE+0xB0))   /* Timer5 status register (RW,16,0x0000) */

/* ---- TIMECNTL0-5 bits ------------------------- */
#define TIMECNTL_CLK     (0x0000)                  /* CPUCLK */
#define TIMECNTL_CLK2    (0x0020)                  /* CPUCLK/2 */
#define TIMECNTL_CLK4    (0x0040)                  /* CPUCLK/4 */
#define TIMECNTL_CLK8    (0x0060)                  /* CPUCLK/8 */
#define TIMECNTL_CLK16   (0x0080)                  /* CPUCLK/16 */
#define TIMECNTL_CLK32   (0x00A0)                  /* CPUCLK/32 */
#define TIMECNTL_IE      (0x0010)                  /* Enable interrupt */
#define TIMECNTL_START   (0x0008)                  /* Timer start */
#define TIMECNTL_OS      (0x0001)                  /* One shot timer */
#define TIMECNTL_INT     (0x0000)                  /* Interval timer */

/* ---- TIMESTAT0-5 bits ------------------------- */
#define TIMESTAT_STATUS  (0x0001)                  /* Status bit */


/*##############################################################################
##  Watch Dog Timer control register
##############################################################################*/

#define WDT_BASE         (0xB7E00000)
#define WDTCON           (REG8 (WDT_BASE+0x00))    /* Watch Dog Timer control register (W,8,--) */
#define WDTBCON          (REG8 (WDT_BASE+0x04))    /* Time base counter control register (RW,8,0x00) */
#define WDSTAT           (REG8 (WDT_BASE+0x14))    /* Watch Dog Timer status register (RW,8,0x00) */

/* ---- WDTCON bits ------------------------------ */
#define WDTCON_0xC3      (0xC3)                    /* 0xC3 */
#define WDTCON_0x3C      (0x3C)                    /* 0x3C */

/* ---- WDTBCON bits ----------------------------- */
#define WDTBCON_CLK32    (0x00)                    /* CPUCLK/32 */
#define WDTBCON_CLK64    (0x01)                    /* CPUCLK/64 */
#define WDTBCON_CLK128   (0x02)                    /* CPUCLK/128 */
#define WDTBCON_CLK256   (0x03)                    /* CPUCLK/256 */
#define WDTBCON_WDTM     (0x00)                    /* WDT mode */
#define WDTBCON_ITM      (0x08)                    /* Interval timer mode */
#define WDTBCON_ITDIS    (0x00)                    /* Disable interval timer */
#define WDTBCON_ITEN     (0x10)                    /* Enable interval timer */
#define WDTBCON_INT      (0x00)                    /* Generate interrupt */
#define WDTBCON_RESET    (0x40)                    /* System reset */
#define WDTBCON_WDHLT    (0x80)                    /* HALT */
#define WDTBCON_WE       (0x5A)                    /* Enable writing to this */

/* ---- WDTSTAT bits ----------------------------- */
#define WDSTAT_RSTWDT    (0x01)                    /* Reset by WDT */
#define WDSTAT_RSTPWON   (0x00)                    /* Reset by power on */
#define WDSTAT_WDTIST    (0x10)                    /* WDT interrupt */
#define WDSTAT_IVTIST    (0x20)                    /* IVT interrupt */

/*##############################################################################
## UART control register
##############################################################################*/

#define UCR_BASE         (0xB7B00000)
#define UARTRBR          (REG8 (UCR_BASE+0x00))    /* Receiver buffer register (R,8,--) */
#define UARTTHR          (REG8 (UCR_BASE+0x00))    /* Transmitter buffer register (R,8--) */
#define UARTIER          (REG8 (UCR_BASE+0x04))    /* Interrupt enable register (RW,8,0x00) */
#define UARTIIR          (REG8 (UCR_BASE+0x08))    /* Interrupt identification (R,8,0x01) */
#define UARTFCR          (REG8 (UCR_BASE+0x08))    /* FIFO control register (W,8,0x00) */
#define UARTLCR          (REG8 (UCR_BASE+0x0C))    /* Line control register (RW,8,0x00) */
#define UARTMCR          (REG8 (UCR_BASE+0x10))    /* Modem control register (RW,8,0x00) */
#define UARTLSR          (REG8 (UCR_BASE+0x14))    /* Line status register (RW,8,0x60) */
#define UARTMSR          (REG8 (UCR_BASE+0x18))    /* Modem status register (RW,8,--) */
#define UARTSCR          (REG8 (UCR_BASE+0x1C))    /* Scratchpad register (RW,8,--) */
#define UARTDLL          (REG8 (UCR_BASE+0x00))    /* Divisor latch(LSB) (RW,8,0x00) */
#define UARTDLM          (REG8 (UCR_BASE+0x04))    /* Divisor latch(MSB) (RW,8,0x00) */

/* ---- UARTRBR bits ----------------------------- */
#define UARTRBR_RBR      (0xFF)                    /* RBR[7:0] */

/* ---- UARTTHR bits ----------------------------- */
#define UARTTHR_THR      (0xFF)                    /* THR[7:0] */

/* ---- UARTIER bits ----------------------------- */
#define UARTIER_ERBF     (0x01)                    /* Enable received data available interrupt */
#define UARTIER_ETBEF    (0x02)                    /* Enable transmitter holding register empty interrupt */
#define UARTIER_ELSI     (0x04)                    /* Enable receiver line status interrupt */
#define UARTIER_EDSI     (0x08)                    /* Enable modem status interrupt */

/* ---- UARTIIR bits ----------------------------- */
#define UARTIIR_IP       (0x01)                    /* Interrupt generated */
#define UARTIIR_LINE     (0x06)                    /* Receiver line status interrupt */
#define UARTIIR_RCV      (0x04)                    /* Receiver interrupt */
#define UARTIIR_TO       (0x0C)                    /* Time out interrupt */
#define UARTIIR_TRA      (0x02)                    /* Transmitter interrupt */
#define UARTIIR_FM       (0xC0)                    /* FIFO mode */

/* ---- UARTFCR bits ----------------------------- */
#define UARTFCR_FE       (0x01)                    /* FIFO enable */
#define UARTFCR_FD       (0x00)                    /* FIFO disable */
#define UARTFCR_RFCLR    (0x02)                    /* Receiver FIFO clear */
#define UARTFCR_TFCLR    (0x04)                    /* Transmitter FIFO clear */
#define UARTFCR_RFLV1    (0x00)                    /* RCVR FIFO interrupt trigger level : 1byte */
#define UARTFCR_RFLV4    (0x40)                    /* RCVR FIFO interrupt trigger level : 4byte */
#define UARTFCR_RFLV8    (0x80)                    /* RCVR FIFO interrupt trigger level : 8byte */
#define UARTFCR_RFLV14   (0xC0)                    /* RCVR FIFO interrupt trigger level : 14byte */

/* ---- UARTLCR bits ----------------------------- */
#define UARTLCR_LEN5     (0x00)                    /* Data length : 5bit */
#define UARTLCR_LEN6     (0x01)                    /* Data length : 6bit */
#define UARTLCR_LEN7     (0x02)                    /* Data length : 7bit */
#define UARTLCR_LEN8     (0x03)                    /* Data length : 8bit */
#define UARTLCR_STB1     (0x00)                    /* Stop bit : 1 */
#define UARTLCR_STB2     (0x04)                    /* Stop bit : 2(data length 6-8) */
#define UARTLCR_STB1_5   (0x04)                    /* Stop bit : 1.5(data length 5) */
#define UARTLCR_PEN      (0x08)                    /* Parity enabled */
#define UARTLCR_PDIS     (0x00)                    /* Parity disabled */
#define UARTLCR_EVN      (0x10)                    /* Even parity */
#define UARTLCR_ODD      (0x00)                    /* Odd parity */
#define UARTLCR_SP       (0x20)                    /* Stick parity */
#define UARTLCR_BRK      (0x40)                    /* Break delivery */
#define UARTLCR_DLAB     (0x80)                    /* Devisor latch access bit */

/* ---- UARTMCR bits ----------------------------- */
#define UARTMCR_DTR      (0x01)                    /* Data terminal ready */
#define UARTMCR_RTS      (0x02)                    /* Request to send */
#define UARTMCR_LOOP     (0x10)                    /* Loopback */

/* ---- UARTLSR bits ----------------------------- */
#define UARTLSR_DR       (0x01)                    /* Data ready */
#define UARTLSR_OE       (0x02)                    /* Overrun error */
#define UARTLSR_PE       (0x04)                    /* Parity error */
#define UARTLSR_FE       (0x08)                    /* Framing error */
#define UARTLSR_BI       (0x10)                    /* Break interrupt */
#define UARTLSR_THRE     (0x20)                    /* Transmitter holding register empty */
#define UARTLSR_TEMT     (0x40)                    /* Transmitter empty */
#define UARTLSR_ERF      (0x80)                    /* Receiver FIFO error */

/* ---- UARTMSR bits ----------------------------- */
#define UARTMSR_DCTS     (0x01)                    /* Delta clear to send */
#define UARTMSR_DDSR     (0x02)                    /* Delta data set ready */
#define UARTMSR_TERI     (0x04)                    /* Trailing edge of ring endicator */
#define UARTMSR_DDCD     (0x08)                    /* Delta data carrer detect */
#define UARTMSR_CTS      (0x10)                    /* Clear to send */
#define UARTMSR_DSR      (0x20)                    /* Data set ready */
#define UARTMSR_RI       (0x40)                    /* Ring indicator */
#define UARTMSR_DCD      (0x80)                    /* Data carrer detect */

/* ---- UARTSCR bits ----------------------------- */
#define UARTSCR_SCR      (0xFF)                    /* SCR[7:0] */

/* ---- UARTDLL bits ----------------------------- */
#define UARTDLL_DLL      (0xFF)                    /* DLL[7:0](=DL[7:0]) */

/* ---- UARTDLM bits ----------------------------- */
#define UARTDLM_DLM      (0xFF)                    /* DLM[7:0](=DL[15:8]) */


/*##############################################################################
## PWM control register
##############################################################################*/

#define PWM_BASE         (0xB7D00000)
#define PWR0             (REG16 (PWM_BASE+0x00))   /* PWM register 0 (RW,16,0x0000) */
#define PWCY0            (REG16 (PWM_BASE+0x04))   /* PWM cycle register 0 (RW,16,0x0000) */
#define PWC0             (REG16 (PWM_BASE+0x08))   /* PWM counter 0 (RW,16,0x0000) */
#define PWCON0           (REG16 (PWM_BASE+0x0C))   /* PWM contrlo register 0 (RW,16,0x0000) */
#define PWR1             (REG16 (PWM_BASE+0x20))   /* PWM register 1 (RW,16,0x0000) */
#define PWCY1            (REG16 (PWM_BASE+0x24))   /* PWM cycle register 1 (RW,16,0x0000) */
#define PWC1             (REG16 (PWM_BASE+0x28))   /* PWM counter 1 (RW,16,0x0000) */
#define PWCON1           (REG16 (PWM_BASE+0x2C))   /* PWM contrlo register 1 (RW,16,0x0000) */
#define PWINTSTS         (REG16 (PWM_BASE+0x3C))   /* PWM interrupt status register (RW,16,0x0000) */

/* ---- PWCON0,1 bits ---------------------------- */
#define PWCON_PWR        (0x0001)                  /* Enable PWC */
#define PWCON_CLK1       (0x0000)                  /* 1/1 CPUCLK */
#define PWCON_CLK4       (0x0002)                  /* 1/4 CPUCLK */
#define PWCON_CLK16      (0x0004)                  /* 1/16 CPUCLK */
#define PWCON_CLK32      (0x0006)                  /* 1/32 CPUCLK */
#define PWCON_INTIE      (0x0040)                  /* Enable interrupt */
#define PWCON_PWCOV      (0x0080)    

/* ---- PWINTSTS bits ---------------------------- */
#define PWINTSTS_INT1S   (0x0200)                  /* CH1 interrupt generated */   
#define PWINTSTS_INT0S   (0x0100)                  /* CH0 interrupt generated */   
#define PWINTSTS_INT1CLR (0x0002)                  /* CH1 interrupt clear */   
#define PWINTSTS_INT0CLR (0x0001)                  /* CH0 interrupt clear */   


/*##############################################################################
## Port control register 
##############################################################################*/

#define PCR_BASE         (0xB7A01000)
#define GPPOA            (REG16 (PCR_BASE+0x00))   /* Port A output register (RW,16,--) */
#define GPPIA            (REG16 (PCR_BASE+0x04))   /* Port A input register (R,16,--) */
#define GPPMA            (REG16 (PCR_BASE+0x08))   /* Port A Mode register (RW,16,0x0000) */
#define GPIEA            (REG16 (PCR_BASE+0x0C))   /* Port A interrupt enable (RW,16,0x0000) */
#define GPIPA            (REG16 (PCR_BASE+0x10))   /* Port A interrupt Polarity (RW,16,0x0000) */
#define GPISA            (REG16 (PCR_BASE+0x14))   /* Port A interrupt Status (RW,16,0x0000) */

#define GPPOB            (REG16 (PCR_BASE+0x20))   /* Port B Output register (RW,16,--) */
#define GPPIB            (REG16 (PCR_BASE+0x24))   /* Port B Input register (RW,16,--) */
#define GPPMB            (REG16 (PCR_BASE+0x28))   /* Port B Mode register (RW,16,0x0000) */
#define GPIEB            (REG16 (PCR_BASE+0x2C))   /* Port B interrupt enable (RW,16,0x0000) */
#define GPIPB            (REG16 (PCR_BASE+0x30))   /* Port B interrupt Polarity (RW,16,0x0000) */
#define GPISB            (REG16 (PCR_BASE+0x34))   /* Port B interrupt Status (RW,16,0x0000) */

#define GPPOC            (REG16 (PCR_BASE+0x40))   /* Port C Output register (RW,16,--) */
#define GPPIC            (REG16 (PCR_BASE+0x44))   /* Port C Input register (RW,16,--) */
#define GPPMC            (REG16 (PCR_BASE+0x48))   /* Port C Mode register (RW,16,0x0000) */
#define GPIEC            (REG16 (PCR_BASE+0x4C))   /* Port C interrupt enable (RW,16,0x0000) */
#define GPIPC            (REG16 (PCR_BASE+0x50))   /* Port C interrupt Polarity (RW,16,0x0000) */
#define GPISC            (REG16 (PCR_BASE+0x54))   /* Port C interrupt Status (RW,16,0x0000) */

#define GPPOD            (REG16 (PCR_BASE+0x60))   /* Port D Output register (RW,16,--) */
#define GPPID            (REG16 (PCR_BASE+0x64))   /* Port D Input register (RW,16,--) */
#define GPPMD            (REG16 (PCR_BASE+0x68))   /* Port D Mode register (RW,16,0x0000) */
#define GPIED            (REG16 (PCR_BASE+0x6C))   /* Port D interrupt enable (RW,16,0x0000) */
#define GPIPD            (REG16 (PCR_BASE+0x70))   /* Port D interrupt Polarity (RW,16,0x0000) */
#define GPISD            (REG16 (PCR_BASE+0x74))   /* Port D interrupt Status (RW,16,0x0000) */

#define GPPOE            (REG16 (PCR_BASE+0x80))   /* Port E Output register (RW,16,--) */
#define GPPIE            (REG16 (PCR_BASE+0x84))   /* Port E Input register (RW,16,--) */
#define GPPME            (REG16 (PCR_BASE+0x88))   /* Port E Mode register (RW,16,0x0000) */
#define GPIEE            (REG16 (PCR_BASE+0x8C))   /* Port E interrupt enable (RW,16,0x0000) */
#define GPIPE            (REG16 (PCR_BASE+0x90))   /* Port E interrupt Polarity (RW,16,0x0000) */
#define GPISE            (REG16 (PCR_BASE+0x94))   /* Port E interrupt Status (RW,16,0x0000) */

/* ---- GPPOA/GPPOB/GPPOC/GPPOD/GPPOE bits ------- */
#define GPPOA_GPPOA      (0x00FF)                  /* GPPOA[7:0] */
#define GPPOB_GPPOB      (0x00FF)                  /* GPPOB[7:0] */
#define GPPOC_GPPOC      (0x00FF)                  /* GPPOC[7:0] */
#define GPPOD_GPPOD      (0x00FF)                  /* GPPOD[7:0] */
#define GPPOE_GPPOE      (0x03FF)                  /* GPPOE[9:0] */

/* ---- GPPIA/GPPIB/GPPIC/GPPID/GPPIE bits ------- */
#define GPPIA_GPPIA      (0x00FF)                  /* GPPIA[7:0] */
#define GPPIB_GPPIB      (0x00FF)                  /* GPPIB[7:0] */
#define GPPIC_GPPIC      (0x00FF)                  /* GPPIC[7:0] */
#define GPPID_GPPID      (0x00FF)                  /* GPPID[7:0] */
#define GPPIE_GPPIE      (0x03FF)                  /* GPPIE[9:0] */

/* GPPMA/GPPMB/GPPMC/GPPMD/GPPME bits ------------ */
#define GPPMA_GPPMA      (0x00FF)                  /* GPPMA[7:0] 0:input, 1:output */
#define GPPMB_GPPMB      (0x00FF)                  /* GPPMB[7:0] 0:input, 1:output */
#define GPPMC_GPPMC      (0x00FF)                  /* GPPMC[7:0] 0:input, 1:output */
#define GPPMD_GPPMD      (0x00FF)                  /* GPPMD[7:0] 0:input, 1:output */
#define GPPME_GPPME      (0x03FF)                  /* GPPME[9:0] 0:input, 1:output */

/* GPIEA/GPIEB/GPIEC/GPIED/GPIEE bits ------------ */
#define GPIEA_GPIEA      (0x00FF)                  /* GPIEA[7:0] 0:interrupt disable, 1:interrupt enable */
#define GPIEB_GPIEB      (0x00FF)                  /* GPIEB[7:0] 0:interrupt disable, 1:interrupt enable */
#define GPIEC_GPIEC      (0x00FF)                  /* GPIEC[7:0] 0:interrupt disable, 1:interrupt enable */
#define GPIED_GPIED      (0x00FF)                  /* GPIED[7:0] 0:interrupt disable, 1:interrupt enable */
#define GPIEE_GPIEE      (0x03FF)                  /* GPIEE[9:0] 0:interrupt disable, 1:interrupt enable */

/* GPIPA/GPIPB/GPIPC/GPIPD/GPIPE bits ------------ */
#define GPIPA_GPIPA      (0x00FF)                  /* GPIPA[7:0] 0:falling edge, 1:rising edge */
#define GPIPB_GPIPB      (0x00FF)                  /* GPIPB[7:0] 0:falling edge, 1:rising edge */
#define GPIPC_GPIPC      (0x00FF)                  /* GPIPC[7:0] 0:falling edge, 1:rising edge */
#define GPIPD_GPIPD      (0x00FF)                  /* GPIPD[7:0] 0:falling edge, 1:rising edge */
#define GPIPE_GPIPE      (0x03FF)                  /* GPIPE[9:0] 0:falling edge, 1:rising edge */

/* GPISA/GPISB/GPISC/GPISD/GPISE bits ------------ */
#define GPISA_GPISA      (0x00FF)                  /* GPISA[7:0] 0:interrupt not occurred, 1:interrupt occurred */
#define GPISB_GPISB      (0x00FF)                  /* GPISB[7:0] 0:interrupt not occurred, 1:interrupt occurred */
#define GPISC_GPISC      (0x00FF)                  /* GPISC[7:0] 0:interrupt not occurred, 1:interrupt occurred */
#define GPISD_GPISD      (0x00FF)                  /* GPISD[7:0] 0:interrupt not occurred, 1:interrupt occurred */
#define GPISE_GPISE      (0x03FF)                  /* GPISE[9:0] 0:interrupt not occurred, 1:interrupt occurred */

/*##############################################################################
## ADC control register
##############################################################################*/

#define ADC_BASE         (0xB6001000)
#define ADCON0           (REG16 (ADC_BASE+0x00))   /* ADC control 0 register (RW,16,0x0000) */
#define ADCON1           (REG16 (ADC_BASE+0x04))   /* ADC control 1 register (RW,16,0x0000) */
#define ADCON2           (REG16 (ADC_BASE+0x08))   /* ADC control 2 register (RW,16,0x0003) */
#define ADINT            (REG16 (ADC_BASE+0x0C))   /* AD interrupt control register (RW,16,0x0000) */
#define ADFINT           (REG16 (ADC_BASE+0x10))   /* AD Forced interrupt register (RW,16,0x0000) */
#define ADR0             (REG16 (ADC_BASE+0x14))   /* AD Result 0 register (RW,16,0x0000) */
#define ADR1             (REG16 (ADC_BASE+0x18))   /* AD Result 1 register (RW,16,0x0000) */
#define ADR2             (REG16 (ADC_BASE+0x1C))   /* AD Result 2 register (RW,16,0x0000) */
#define ADR3             (REG16 (ADC_BASE+0x20))   /* AD Result 3 register (RW,16,0x0000) */

/* ---- ADCON0 bits ------------------------------ */
#define ADCON0_ADSNM     (0x0003)                  /* ADSNM[1:0] */
#define ADCON0_CH0_3     (0x0000)                  /* CH0->CH1->CH2->CH3 */
#define ADCON0_CH1_3     (0x0001)                  /* CH1->CH2->CH3 */
#define ADCON0_CH2_3     (0x0002)                  /* CH2->CH3 */
#define ADCON0_CH3_3     (0x0003)                  /* CH3 */
#define ADCON0_ADRUN     (0x0010)                  /* AD conversion start */
#define ADCON0_SCNC      (0x0040)                  /* Stop after a round */

/* ---- ADCON1 bits ------------------------------ */
#define ADCON1_ADSTM     (0x0003)                  /* ADSTM[1:0] */
#define ADCON1_CH0       (0x0000)                  /* CH0 */
#define ADCON1_CH1       (0x0001)                  /* CH1 */
#define ADCON1_CH2       (0x0002)                  /* CH2 */
#define ADCON1_CH3       (0x0003)                  /* CH3 */
#define ADCON1_STS       (0x0010)                  /* AD conversion start */

/* ---- ADCON2 bits ------------------------------ */
#define ADCON2_ACKSEL    (0x0003)                  /* ACKSEL[1:0] */
#define ADCON2_CLK2      (0x0001)                  /* CPUCLK/2 */
#define ADCON2_CLK4      (0x0002)                  /* CPUCLK/4 */
#define ADCON2_CLK8      (0x0003)                  /* CPUCLK/8 */

/* ---- ADINT bits ------------------------------- */
#define ADINT_INTSN      (0x0001)                  /* AD conversion of ch7 finished (scan mode) */
#define ADINT_INTST      (0x0002)                  /* AD conversion finished (select mode) */
#define ADINT_ADSNIE     (0x0004)                  /* Enable interrupt (scan mode) */
#define ADINT_ADSTIE     (0x0008)                  /* Enable interrupt (select mode) */

/* ---- ADFINT bits ------------------------------ */
#define ADFINT_ADFAS     (0x0001)                  /* Assert interrupt signal */

/* ---- ADR0,ADR1,ADR2,ADR3 bits------------------ */
#define ADR0_DT0         (0x03FF)                  /* DT0[9:0] AD result */
#define ADR1_DT1         (0x03FF)                  /* DT1[9:0] AD result */
#define ADR2_DT2         (0x03FF)                  /* DT2[9:0] AD result */
#define ADR3_DT3         (0x03FF)                  /* DT3[9:0] AD result */


/*##############################################################################
## DMA control register
##############################################################################*/

#define DMA_BASE         (0x7BE00000)
#define DMAMOD           (REG32 (DMA_BASE+0x0000)) /* DMA Mode register (RW,32,0x00000000) */
#define DMASTA           (REG32 (DMA_BASE+0x0004)) /* DMA Status register (R,32,0x00000000) */
#define DMAINT           (REG32 (DMA_BASE+0x0008)) /* DMA interrupt Status register (R,32,0x00000000) */
#define DMACMSK0         (REG32 (DMA_BASE+0x0100)) /* Channel 0 Mask register (RW,32,0x00000001) */
#define DMACTMOD0        (REG32 (DMA_BASE+0x0104)) /* Channel 0 Transfer Mode register (RW,32,0x00000040) */
#define DMACSAD0         (REG32 (DMA_BASE+0x0108)) /* Channel 0 Source Address register (RW,32,0x00000000) */
#define DMACDAD0         (REG32 (DMA_BASE+0x010C)) /* Channel 0 Destination Address register (RW,32,0x00000000) */
#define DMACSIZ0         (REG32 (DMA_BASE+0x0110)) /* Channel 0 Transfer Size register (RW,32,0x00000000) */
#define DMACCINT0        (REG32 (DMA_BASE+0x0114)) /* Channel 0 interrupt Clear register (W,32,--) */
#define DMACMSK1         (REG32 (DMA_BASE+0x0200)) /* Channel 1 Mask register (RW,32,0x00000001) */
#define DMACTMOD1        (REG32 (DMA_BASE+0x0204)) /* Channel 1 Transfer Mode register (RW,32,0x00000040) */
#define DMACSAD1         (REG32 (DMA_BASE+0x0208)) /* Channel 1 Source Address register (RW,32,0x00000000) */
#define DMACDAD1         (REG32 (DMA_BASE+0x020C)) /* Channel 1 Destination Address register (RW,32,0x00000000) */
#define DMACSIZ1         (REG32 (DMA_BASE+0x0210)) /* Channel 1 Transfer Size register (RW,32,0x00000000) */
#define DMACCINT1        (REG32 (DMA_BASE+0x0214)) /* Channel 1 interrupt Clear register (W,32,--) */

/* ---- DMAMOD bits ------------------------------ */
#define DMAMOD_PRI       (0x00000001)              /* PRI bit */
#define DMAMOD_FIX       (0x00000000)              /* Priority of DMA channel : CH0 > CH1 */
#define DMAMOD_RR        (0x00000001)              /* Priority of DMA channel : Round robin */

/* ---- DMASTA bits ------------------------------ */
#define DMASTA_STA0      (0x00000001)              /* Non-transmitted data is in CH0 */
#define DMASTA_STA1      (0x00000002)              /* Non-transmitted data is in CH1 */

/* ---- DMAINT bits ------------------------------ */
#define DMAINT_IREQ0     (0x00000001)              /* CH0 interrupt */
#define DMAINT_IREQ1     (0x00000002)              /* CH1 interrupt */
#define DMAINT_ISTA0     (0x00000100)              /* CH0 abnormal end */
#define DMAINT_ISTA1     (0x00000200)              /* CH1 abnormal end */
#define DMAINT_ISTP0     (0x00010000)              /* CH0 abnormal end situation */
#define DMAINT_ISTP1     (0x00020000)              /* CH1 abnormal end situation */

/* ---- DMAMSK0,1 bits --------------------------- */
#define DMACMSK_MSK      (0x00000001)              /* Mask */

/* ---- DMATMOD0,1 bits -------------------------- */
#define DMACTMOD_ARQ     (0x00000001)              /* Auto request */
#define DMACTMOD_ERQ     (0x00000000)              /* External request */
#define DMACTMOD_BYTE    (0x00000000)              /* Byte transmission */
#define DMACTMOD_HWORD   (0x00000002)              /* Half word transmission */
#define DMACTMOD_WORD    (0x00000004)              /* Word transmission */
#define DMACTMOD_SFA     (0x00000000)              /* Source data type(fixed address device) */
#define DMACTMOD_SIA     (0x00000008)              /* Source data type(incremental address device) */
#define DMACTMOD_DFA     (0x00000000)              /* Destination data type(fixed address device) */
#define DMACTMOD_DIA     (0x00000010)              /* Destination data type(incremental address device) */
#define DMACTMOD_BM      (0x00000000)              /* Bus request mode(burst mode) */
#define DMACTMOD_CSM     (0x00000020)              /* Bus request mode(cycle steal mode) */
#define DMACTMOD_IMK     (0x00000040)              /* Interrupt mask */


/*##############################################################################
## Interrupt control register
##############################################################################*/

#define EIC_BASE         (0x7BF00000)
#define IRCL             (REG32 (EIC_BASE+0x04))   /* Extended interrupt Clear register (W,32,--) */
#define IRQA             (REG32 (EIC_BASE+0x10))   /* Extended interrupt IRQ register (RW,32,0x00000000) */
#define IDM              (REG32 (EIC_BASE+0x14))   /* Extended interrupt Mode control register (RW,32,0x00000000) */
#define ILC              (REG32 (EIC_BASE+0x18))   /* Extended interrupt IRQ Level control register (RW,32,0x00000000)) */              

/* ---- IRCL bits -------------------------------- */
#define IRCL_IRCL        (0x0000007F)              /* IRCL[6:0] */

/* ---- IRQA bits -------------------------------- */
#define IRQA_IRQ16       (0x00000001)              /* IRQ16 */
#define IRQA_IRQ17       (0x00000002)              /* IRQ17 */
#define IRQA_IRQ18       (0x00000004)              /* IRQ18 */
#define IRQA_IRQ19       (0x00000008)              /* IRQ19 */
#define IRQA_IRQ20       (0x00000010)              /* IRQ20 */
#define IRQA_IRQ21       (0x00000020)              /* IRQ21 */
#define IRQA_IRQ22       (0x00000040)              /* IRQ22 */
#define IRQA_IRQ23       (0x00000080)              /* IRQ23 */
#define IRQA_IRQ24       (0x00000100)              /* IRQ24 */
#define IRQA_IRQ25       (0x00000200)              /* IRQ25 */
#define IRQA_IRQ26       (0x00000400)              /* IRQ26 */
#define IRQA_IRQ27       (0x00000800)              /* IRQ27 */
#define IRQA_IRQ28       (0x00001000)              /* IRQ28 */
#define IRQA_IRQ29       (0x00002000)              /* IRQ29 */
#define IRQA_IRQ30       (0x00004000)              /* IRQ30 */
#define IRQA_IRQ31       (0x00008000)              /* IRQ31 */

/* ---- IDM bits --------------------------------- */
#define IDM_IDM22        (0x00000040)              /* IRQ22 */
#define IDM_IDM26        (0x00000400)              /* IRQ26 */
#define IDM_IDM28        (0x00001000)              /* IRQ28 */
#define IDM_IDM30        (0x00004000)              /* IRQ31 */
#define IDM_IDMP22       (0x00000080)              /* IRQ22 */
#define IDM_IDMP26       (0x00000800)              /* IRQ26 */
#define IDM_IDMP28       (0x00002000)              /* IRQ28 */
#define IDM_IDMP30       (0x00008000)              /* IRQ31 */
#define IDM_INT_L_L      (0x00000000)              /* Level sensing, interrupt occurs when 'L' */
#define IDM_INT_L_H      (0x0000AAAA)              /* Level sensing, interrupt occurs when 'H' */
#define IDM_INT_E_F      (0x00005555)              /* Edge sensing, interrupt occurs when falling edge */
#define IDM_INT_E_R      (0x0000FFFF)              /* Edge sensing, interrupt occurs when rising edge */
#define IDM_IRQ22        (0x000000C0)              /* IRQ22 */
#define IDM_IRQ26        (0x00000C00)              /* IRQ26 */
#define IDM_IRQ28        (0x00003000)              /* IRQ28 */
#define IDM_IRQ31        (0x0000C000)              /* IRQ31 */

/* ---- ILC bits --------------------------------- */
#define ILC_INT_LV1      (0x11111111)              /* Interrupt level 1 */
#define ILC_INT_LV2      (0x22222222)              /* Interrupt level 2 */
#define ILC_INT_LV3      (0x33333333)              /* Interrupt level 3 */
#define ILC_INT_LV4      (0x44444444)              /* Interrupt level 4 */
#define ILC_INT_LV5      (0x55555555)              /* Interrupt level 5 */
#define ILC_INT_LV6      (0x66666666)              /* Interrupt level 6 */
#define ILC_INT_LV7      (0x77777777)              /* Interrupt level 7 */
#define ILC_ILC16        (0x00000007)              /* IRQ16, IRQ17 */
#define ILC_ILC18        (0x00000070)              /* IRQ18, IRQ19 */
#define ILC_ILC20        (0x00000700)              /* IRQ20, IRQ21 */
#define ILC_ILC22        (0x00007000)              /* IRQ22, IRQ23 */
#define ILC_ILC24        (0x00070000)              /* IRQ24, IRQ25 */
#define ILC_ILC26        (0x00700000)              /* IRQ26, IRQ27 */
#define ILC_ILC28        (0x07000000)              /* IRQ28, IRQ29 */
#define ILC_ILC30        (0x70000000)              /* IRQ30, IRQ31 */


/*##############################################################################
## DRAM control register
##############################################################################*/

#define DCR_BASE         (0x78180000)
#define DBWC             (REG32 (DCR_BASE+0x00))   /* DRAM Bus Width control register (RW,32,0x00000000) */
#define DRMC             (REG32 (DCR_BASE+0x04))   /* DRAM control register (RW,32,0x00000000) */
#define DRPC             (REG32 (DCR_BASE+0x08))   /* DRAM Attribute parameter Setup register (RW,32,0x00000000) */
#define SDMD             (REG32 (DCR_BASE+0x0C))   /* SDRAM Mode Setup register (RW,32,0x00000001) */
#define DCMD             (REG32 (DCR_BASE+0x10))   /* DRAM Command register (RW,32,0x00000000) */
#define RFSH0            (REG32 (DCR_BASE+0x14))   /* DRAM Refresh Cycle register 0 (RW,32,0x00000000) */
#define PDWC             (REG32 (DCR_BASE+0x18))   /* Power Down Mode control register (RW,32,0x00000003) */
#define RFSH1            (REG32 (DCR_BASE+0x1C))   /* DRAM Refresh Cycle register 1 (RW,32,0x00000000) */

/* ---- DBWC bits -------------------------------- */
#define DBWC_DBDRAM0     (0x00000000)              /* DRAM disable */
#define DBWC_DBDRAM8     (0x00000001)              /* 8bit width */
#define DBWC_DBDRAM16    (0x00000002)              /* 16bit width */

/* ---- DRMC bits -------------------------------- */
#define DRMC_8bit        (0x00000000)              /* DRAM column length : 8bit */
#define DRMC_9bit        (0x00000001)              /* DRAM column length : 9bit */
#define DRMC_10bit       (0x00000002)              /* DRAM column length : 10bit */
#define DRMC_SDRAM       (0x00000000)              /* DRAM architecture : SDRAM */
#define DRMC_EDO         (0x00000004)              /* DRAM architecture : EDO-DRAM */
#define DRMC_2CLK        (0x00000000)              /* SDRAM pre-charge latency : 2clock */
#define DRMC_CAS         (0x00000010)              /* SDRAM pre-charge latency : same as CAS latency */
#define DRMC_PD_DIS      (0x00000000)              /* automatic shift to SDRAM power down mode : disable */
#define DRMC_PD_EN       (0x00000040)              /* automatic shift to SDRAM power down mode : enable */
#define DRMC_CBR_STOP    (0x00000000)              /* CBR refresh : stop */
#define DRMC_CBR_EXE     (0x00000080)              /* CBR refresh : execution */

/* ---- DRPC bits -------------------------------- */
#define DRPC_DRAMSPEC    (0x0000000F)              /* DRAMSPEC[3:0] */

/* ---- SDMD bits -------------------------------- */
#define SDMD_CL2         (0x00000000)              /* SDRAM CAS latency : 2 */
#define SDMD_CL3         (0x00000001)              /* SDRAM CAS latency : 3 */
#define SDMD_MODEWR      (0x00000080)              /* setting operation : valid */

/* ---- DCMD bits -------------------------------- */
#define DCMD_S_NOP       (0x00000000)              /* No operation */
#define DCMD_S_PALL      (0x00000004)              /* SDRAM all bank pre-charge command */
#define DCMD_S_REF       (0x00000005)              /* SDRAM CBR refresh command */
#define DCMD_S_SELF      (0x00000006)              /* SDRAM self refresh start command */
#define DCMD_S_SREX      (0x00000007)              /* SDRAM self refresh stop command */
#define DCMD_EDO_NOP     (0x00000000)              /* No operation */
#define DCMD_EDO_PC      (0x00000004)              /* EDO-DRAM pre-charge cycle */
#define DCMD_EDO_REF     (0x00000005)              /* EDO-DRAM CBR refresh cycle */
#define DCMD_EDO_SELF    (0x00000006)              /* EDO-DRAM self refresh start cycle */
#define DCMD_EDO_SREX    (0x00000007)              /* EDO-DRAM self refresh stop cycle */

/* ---- RFSH0 bits ------------------------------- */
#define RFSH0_RCCON      (0x00000001)              /* RCCON bit, refresh frequency = refclk(RFSH1)*2(RCCON=0) */
#define RFSH0_SINGLE     (0x00000000)              /* RCCON bit, refresh frequency = refclk(RFSH1)  (RCCON=1) */
/* ---- RFSH1 bits ------------------------------- */
#define RFSH1_RFSEL1     (0x000007FF)              /* RFSEL1[10:0], refckl(RFSH1) = CCLK/RFSEL1[10:0] */

/* ---- PDWC bits -------------------------------- */
#define PDWC_1           (0x00000000)              /* When  1 or more cycles of idol state continue,
                                                      ... it shifts to power down mode. */
#define PDWC_2           (0x00000001)              /*                   :                   */
#define PDWC_3           (0x00000002)              /*                   :                   */
#define PDWC_4           (0x00000003)              /*                   :                   */
#define PDWC_5           (0x00000004)              /*                   :                   */
#define PDWC_6           (0x00000005)              /*                   :                   */
#define PDWC_7           (0x00000006)              /*                   :                   */
#define PDWC_8           (0x00000007)              /*                   :                   */
#define PDWC_9           (0x00000008)              /*                   :                   */
#define PDWC_10          (0x00000009)              /*                   :                   */
#define PDWC_11          (0x0000000A)              /*                   :                   */
#define PDWC_12          (0x0000000B)              /*                   :                   */
#define PDWC_13          (0x0000000C)              /*                   :                   */
#define PDWC_14          (0x0000000D)              /*                   :                   */
#define PDWC_15          (0x0000000E)              /*                   :                   */
#define PDWC_16          (0x0000000F)              /* When 16 or more cycles of idol state continue,
                                                      ... it shifts to power down mode. */

/*##############################################################################
## SSIO control register
##############################################################################*/

#define SSIO_BASE        (0xB7B01000)
#define SSIOBUF          (REG8 (SSIO_BASE+0x00))   /* Transmiting/receiving buffer register (RW,8,0x00) */
#define SSIOST           (REG8 (SSIO_BASE+0x04))   /* SSIO status register (RW,8,0x00) */
#define SSIOINT          (REG8 (SSIO_BASE+0x08))   /* SSIO interrupt demand register (RW,8,0x00) */
#define SSIOINTEN        (REG8 (SSIO_BASE+0x0C))   /* SSIO interrupt enable register (RW,8,0x00) */
#define SSIOCON          (REG8 (SSIO_BASE+0x10))   /* SSIO control register (RW,8,0x00) */
#define SSIOTSCON        (REG8 (SSIO_BASE+0x14))   /* SSIO test control register (RW,8,0x00) */

/* ---- SSIOBUF bits ----------------------------- */
#define SSIOSTA_DUMMY    (0xFF)

/* ---- SSIOST bits ------------------------------ */
#define SSIOSTA_BUSY     (0x01)                    /* Transmiting/receiving buffer busy */
#define SSIOSTA_OERR     (0x02)                    /* Overrun error */

/* ---- SSIOINT bits ----------------------------- */
#define SSIOCON_TXCMP    (0x01)                    /* Transmit complete */
#define SSIOCON_RXCMP    (0x02)                    /* Receive complete */
#define SSIOCON_TREMP    (0x04)                    /* Transmit empty */

/* ---- SSIOINTEN bits --------------------------- */
#define SSIOCON_TXCMPEN  (0x01)                    /* Transmit complete enable */
#define SSIOCON_RXCMPEN  (0x02)                    /* Receive complete enable */
#define SSIOCON_TREMPEN  (0x04)                    /* Transmit empty enable */

/* ---- SSIOCON bits ----------------------------- */
#define SSIOCON_SLLSB    (0x00)                    /* LSB */
#define SSIOCON_SLMSB    (0x20)                    /* MSB */
#define SSIOCON_SLAVE    (0x10)                    /* Slave */
#define SSIOCON_MASTER   (0x00)                    /* Master */
#define SSIOCON_8CCLK    (0x00)                    /* 1/8CCLK */
#define SSIOCON_16CCLK   (0x01)                    /* 1/16CCLK */
#define SSIOCON_32CCLK   (0x02)                    /* 1/32CCLK */

/* ---- SSIOTSCON bits --------------------------- */
#define SSIOTSCON_LBTST  (0x80)                    /* Loop back test mode on*/
#define SSIOTSCON_NOTST  (0x00)                    /* Test mode off */


/*##############################################################################
## I2C control register
##############################################################################*/

#define I2C_BASE         (0xB7800000)
#define I2CCON           (REG8 (I2C_BASE+0x00))    /* I2C control register (RW,8,0x00) */
#define I2CSAD           (REG8 (I2C_BASE+0x04))    /* I2C slave address mode setting register (RW,8,0x00) */
#define I2CCLR           (REG8 (I2C_BASE+0x08))    /* I2C transmit speed setting register (RW,8,0x00) */
#define I2CSR            (REG8 (I2C_BASE+0x0C))    /* I2C status register (R,8,0x00) */
#define I2CIR            (REG8 (I2C_BASE+0x10))    /* I2C interrupt demand register (RW,8,0x00) */
#define I2CIMR           (REG8 (I2C_BASE+0x14))    /* I2C interrupt mask register  (RW,8,0x00) */
#define I2CDR            (REG8 (I2C_BASE+0x18))    /* I2C transmiting/receiving buffer register (RW,8,0x00) */
#define I2CBC            (REG8 (I2C_BASE+0x1C))    /* I2C transmit speed setting register (RW,8,0x00) */

/* ---- I2CCON bits ------------------------------ */
#define I2CCON_EN        (0x01)                    /* Restart sequence start */
#define I2CCON_OC        (0x02)                    /* I2C-bus hold */
#define I2CCON_STCM      (0x04)                    /* Communication start */
#define I2CCON_RESTR     (0x08)                    /* Carry out restart */
#define I2CCON_START     (0x10)                    /* Exist START byte */

/* ---- I2CSAD bits ------------------------------ */
#define I2CSAD_RW_SND    (0x00)                    /* Data transmiting mode */
#define I2CSAD_RW_REC    (0x01)                    /* Data receiving mode */

/* ---- I2CCLR bits ------------------------------ */
#define I2CCLR_CMD1      (0x00)                    /* Standard-mode */
#define I2CCLR_CMD4      (0x01)                    /* Fast-mode */

/* ---- I2CSR bits ------------------------------- */
#define I2CSR_DAK        (0x01)                    /* Data ACKnowledge no receive */
#define I2CSR_AAK        (0x02)                    /* Slave address ACKnowledge no receive */

/* ---- I2CIR bits ------------------------------- */
#define I2CIR_IR         (0x01)                    /* Interrupt demand */

/* ---- I2CIMR bits ------------------------------ */
#define I2CIMR_MF        (0x01)                    /* Interrupt mask set */

/* ---- I2CDR bits ------------------------------- */

/* ---- I2CBC bits ------------------------------- */
#define I2CBC_100K33     (0x2A)                    /* HCLK=33MHz,I2CMD=100kHz */
#define I2CBC_400K33     (0x0B)                    /* HCLK=33MHz,I2CMD=400kHz */
#define I2CBC_100K25     (0x20)                    /* HCLK=25MHz,I2CMD=100kHz */
#define I2CBC_400K25     (0x08)                    /* HCLK=25MHz,I2CMD=400kHz */
#define I2CBC_100K20     (0x19)                    /* HCLK=20MHz,I2CMD=100kHz */
#define I2CBC_400K20     (0x07)                    /* HCLK=20MHz,I2CMD=400kHz */

/*##############################################################################
## Chip configuration register
##############################################################################*/

#define CCR_BASE         (0xB7000000)
#define GPCTL            (REG16 (CCR_BASE+0x00))   /* Port function control register (RW,16,0x0000) */
#define BCKCTL           (REG16 (CCR_BASE+0x04))   /* Clock control register (RW,16,0x0000) */
#define CSSW             (REG16 (CCR_BASE+0x08))   /* External ROM/RAM chip cell control register (RW,16,0x0000) */
#define ROMSEL           (REG8  (CCR_BASE+0x0C))   /* ROM select register (RW,8,0x00) */

/* ---- GPCTL bits ------------------------------- */
#define GPCTL_GPCTL      (0x7FFF)                  /* GPCTL[14:0] */
#define GPCTL_UART       (0x0001)                  /* Select 2nd function (UART) */
#define GPCTL_SIO        (0x0002)                  /* Select 2nd function (SIO) */
#define GPCTL_EXBUS      (0x0004)                  /* Select 2nd function (external bus) */
#define GPCTL_DMA0       (0x0008)                  /* Select 2nd function (DMA CH0) */
#define GPCTL_DMA1       (0x0010)                  /* Select 2nd function (DMA CH1) */
#define GPCTL_PWM        (0x0020)                  /* Select 2nd function (PWM) */
#define GPCTL_XWAIT      (0x0040)                  /* Select 2nd function (external bus wait input) */
#define GPCTL_XWR        (0x0080)                  /* Select 2nd function (external bus data direction) */
#define GPCTL_SSIO0      (0x0100)                  /* Select 2nd function (SSIO) */
#define GPCTL_I2C        (0x0200)                  /* Select 2nd function (I2C) */
#define GPCTL_EXINT0     (0x0400)                  /* Select 2nd function (EXINT0) */
#define GPCTL_EXINT1     (0x0800)                  /* Select 2nd function (EXINT1) */
#define GPCTL_EXINT2     (0x1000)                  /* Select 2nd function (EXINT2) */
#define GPCTL_EXINT3     (0x2000)                  /* Select 2nd function (EXINT3) */
#define GPCTL_EFIQ_N     (0x4000)                  /* Select 2nd function (EFIQ_N) */

/* ---- BCKCTL bits ------------------------------ */
#define BCKCTL_AD        (0x0001)                  /* ADC */
#define BCKCTL_PWM       (0x0002)                  /* PWM */
#define BCKCTL_ART0      (0x0004)                  /* Auto reload timer(CH0) */
#define BCKCTL_ART1      (0x0008)                  /* Auto reload timer(CH1) */
#define BCKCTL_ART2      (0x0010)                  /* Auto reload timer(CH2) */
#define BCKCTL_ART3      (0x0020)                  /* Auto reload timer(CH3) */
#define BCKCTL_ART4      (0x0040)                  /* Auto reload timer(CH4) */
#define BCKCTL_ART5      (0x0080)                  /* Auto reload timer(CH5) */
#define BCKCTL_DRAM      (0x0100)                  /* DRAM controller */
#define BCKCTL_DMA       (0x0200)                  /* DMAC */
#define BCKCTL_UART      (0x0400)                  /* UART */
#define BCKCTL_SSIO      (0x0800)                  /* SSIO */
#define BCKCTL_I2C       (0x1000)                  /* I2C */

/* ---- CSSW bits -------------------------------- */
#define CSSW_CHG         (0x0001)                  /* CHG bit */
#define CSSW_CHG_SET     (0xA5A5)                  /* Set CHG */
#define CSSW_CHG_RESET   (0x5A5A)                  /* Reset CHG */


/*##############################################################################
## Interrupt numbers
##############################################################################*/

#define INT_COUNT        32  /* Number of interrupts */

#define INT_SYSTEM_TIMER  0
#define INT_WDT           1
#define INT_IVT           2
#define INT_GPIOA         4
#define INT_GPIOB         5
#define INT_GPIOC         6
#define INT_GPIOD         7
#define INT_GPIOE         7
#define INT_SOFTIRQ       8
#define INT_UART          9
#define INT_SIO          10
#define INT_AD           11
#define INT_PWM0         12
#define INT_PWM1         13
#define INT_SSIO         14
#define INT_I2C          15
#define INT_TIMER0       16
#define INT_TIMER1       17
#define INT_TIMER2       18
#define INT_TIMER3       19
#define INT_TIMER4       20
#define INT_TIMER5       21
#define INT_EX0          22
#define INT_DMA0         24
#define INT_DMA1         25
#define INT_EX1          26
#define INT_EX2          28
#define INT_EX3          31


#endif  /* ML674000_h */
