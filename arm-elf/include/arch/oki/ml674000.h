/**********************************************************************************/
/*                                                                                */
/*    Copyright (C) 2001 Oki Electric Industry Co., LTD.                          */
/*                                                                                */
/*    System Name    :  ML674000                                                  */
/*    Module Name    :  Common definition include file for ML674000               */
/*    File   Name    :  ML674000.h                                                */
/*    Revision       :  01.00                                                     */
/*    Date           :  2001/10/19                                                */
/*                                                                                */
/**********************************************************************************/
#ifndef ML674000_H
#define ML674000_H

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------ uPLAT-7B core -----------------------------------*/
/*****************************************************/
/*    interrupt control register                     */
/*****************************************************/
#define ICR_BASE    0x78000000      /* base address of interrupt control register */
#define IRQ         (ICR_BASE+0x00) /* IRQ register */
#define IRQS        (ICR_BASE+0x04) /* IRQ soft register */
#define FIQ         (ICR_BASE+0x08) /* FIQ register */
#define FIQRAW      (ICR_BASE+0x0C) /* FIQRAW status register */
#define FIQEN       (ICR_BASE+0x10) /* FIQ enable register */
#define IRN         (ICR_BASE+0x14) /* IRQ number register */
#define CIL         (ICR_BASE+0x18) /* current IRQ level register */
#define IRL         (ICR_BASE+0x1C) /* IRQ level register */
#define ILC0        (ICR_BASE+0x20) /* IRQ level control register 0 */
#define ILC1        (ICR_BASE+0x24) /* IRQ level control register 1 */
#define CILCL       (ICR_BASE+0x28) /* current IRQ level clear register */
#define CILE        (ICR_BASE+0x2C) /* current IRQ level encode register */

/* bit field of IRQ register */
#define IRQ_nIR0    0x00000001  /* nIR[0] */
#define IRQ_nIR1    0x00000002  /* nIR[1] */
#define IRQ_nIR2    0x00000004  /* nIR[2] */
#define IRQ_nIR3    0x00000008  /* nIR[3] */
#define IRQ_nIR4    0x00000010  /* nIR[4] */
#define IRQ_nIR5    0x00000020  /* nIR[5] */
#define IRQ_nIR6    0x00000040  /* nIR[6] */
#define IRQ_nIR7    0x00000080  /* nIR[7] */
#define IRQ_nIR8    0x00000100  /* nIR[8] */
#define IRQ_nIR9    0x00000200  /* nIR[9] */
#define IRQ_nIR10   0x00000400  /* nIR[10] */
#define IRQ_nIR11   0x00000800  /* nIR[11] */
#define IRQ_nIR12   0x00001000  /* nIR[12] */
#define IRQ_nIR13   0x00002000  /* nIR[13] */
#define IRQ_nIR14   0x00004000  /* nIR[14] */
#define IRQ_nIR15   0x00008000  /* nIR[15] */

/* bit field of CIL register */
#define CIL_INT_LV1 0x00000002  /* interrupt level 1 */
#define CIL_INT_LV2 0x00000004  /* interrupt level 2 */
#define CIL_INT_LV3 0x00000008  /* interrupt level 3 */
#define CIL_INT_LV4 0x00000010  /* interrupt level 4 */
#define CIL_INT_LV5 0x00000020  /* interrupt level 5 */
#define CIL_INT_LV6 0x00000040  /* interrupt level 6 */
#define CIL_INT_LV7 0x00000080  /* interrupt level 7 */

/* bit field of ILC0 register */
#define ILC0_INT_LV1    0x11111111  /* interrupt level 1 */
#define ILC0_INT_LV2    0x22222222  /* interrupt level 2 */
#define ILC0_INT_LV3    0x33333333  /* interrupt level 3 */
#define ILC0_INT_LV4    0x44444444  /* interrupt level 4 */
#define ILC0_INT_LV5    0x55555555  /* interrupt level 5 */
#define ILC0_INT_LV6    0x66666666  /* interrupt level 6 */
#define ILC0_INT_LV7    0x77777777  /* interrupt level 7 */
#define ILC0_ILR0       0x00000007  /* nIR[0] */
#define ILC0_ILR1       0x00000070  /* nIR[1],nIR[2],nIR[3] */
#define ILC0_ILR4       0x00070000  /* nIR[4],nIR[5] */
#define ILC0_ILR6       0x07000000  /* nIR[6],nIR[7] */

/* bit field of ILC1 register */
#define ILC1_INT_LV1    0x11111111  /* interrupt level 1 */
#define ILC1_INT_LV2    0x22222222  /* interrupt level 2 */
#define ILC1_INT_LV3    0x33333333  /* interrupt level 3 */
#define ILC1_INT_LV4    0x44444444  /* interrupt level 4 */
#define ILC1_INT_LV5    0x55555555  /* interrupt level 5 */
#define ILC1_INT_LV6    0x66666666  /* interrupt level 6 */
#define ILC1_INT_LV7    0x77777777  /* interrupt level 7 */
#define ILC1_ILR8       0x00000007  /* nIR[8] */
#define ILC1_ILR9       0x00000070  /* nIR[9] */
#define ILC1_ILR10      0x00000700  /* nIR[10] */
#define ILC1_ILR11      0x00007000  /* nIR[11] */
#define ILC1_ILR12      0x00070000  /* nIR[12] */
#define ILC1_ILR13      0x00700000  /* nIR[13] */
#define ILC1_ILR14      0x07000000  /* nIR[14] */
#define ILC1_ILR15      0x70000000  /* nIR[15] */

/* bit field of CILCL register */
#define CILCL_CLEAR     0x01        /* most significant '1' bit of CIL is cleared */

/*****************************************************/
/*    external memory control register               */
/*****************************************************/
#define EMCR_BASE   0x78100000          /* base address */
#define BWC         (EMCR_BASE+0x00)    /* bus width control register */
#define ROMAC       (EMCR_BASE+0x04)    /* external ROM access control register */
#define RAMAC       (EMCR_BASE+0x08)    /* external SRAM access control register */
#define IO0AC       (EMCR_BASE+0x0C)    /* external IO0 access control register */
#define IO1AC       (EMCR_BASE+0x10)    /* external IO1 access control register */

/*****************************************************/
/*    system control register                        */
/*****************************************************/
#define SCR_BASE    0xB8000000      /* base address */
#define IDR         (SCR_BASE+0x00) /* ID register */
#define CKSTP       (SCR_BASE+0x04) /* clock stop register */
#define CGBCNT0     (SCR_BASE+0x08) /* clock(CGB) control register 0 */
#define CKWT        (SCR_BASE+0x0C) /* clock wait register */
#define RMPCON      (SCR_BASE+0x10) /* remap control register */
#define PST         (SCR_BASE+0x14) /* peripheral status register */
#define CGBCNT1     (SCR_BASE+0x18) /* clock(CGB) control register 1 */
#define CGBCNT2     (SCR_BASE+0x1C) /* clock(CGB) control register 2 */

/* bit field of CKSTP register */
#define CKSTP_CPUG  0x04        /* CPU group HALT */
#define CKSTP_TIC   0x02        /* TIC HALT */
#define CKSTP_SIO   0x01        /* SIO HALT */
#define CKSTP_STOP  0xF0        /* clock stop */

/* bit field of CGBCNT0 register */
#define CGBCNT0_CLK1    0x00        /* CPUCLK */
#define CGBCNT0_CLK2    0x01        /* CPUCLK/2 */
#define CGBCNT0_CLK4    0x02        /* CPUCLK/4 */
#define CGBCNT0_CLK8    0x03        /* CPUCLK/8 */

/* bit field of RMPCON register */
#define RMPCON_ENABLE   0x08        /* remap enabled */
#define RMPCON_DISABLE  0x00        /* remap disabled */
#define RMPCON_AHB      0x02        /* device space is AHB bus*/
#define RMPCON_EXT      0x00        /* device space is external bus */
#define RMPCON_DRAM     0x01        /* memory type is DRAM */
#define RMPCON_SRAM     0x00        /* memory type is SRAM */
#define RMPCON_IRAM     0x04        /* memory type is internal RAM */


/*****************************************************/
/*    system timer control register                  */
/*****************************************************/
#define STCR_BASE   0xB8001000          /* base address */
#define TMEN        (STCR_BASE+0x04)    /* timer enable register */
#define TMRLR       (STCR_BASE+0x08)    /* timer reload register */
#define TMOVF       (STCR_BASE+0x10)    /* overflow register */

/* bit field of TMEN register */
#define TMEN_TCEN   0x01        /* timer enabled */

/* bit field of TMOVF register */
#define TMOVF_OVF   0x01        /* overflow generated */


/*****************************************************/
/*    SIO control register                           */
/*****************************************************/
#define SC_BASE     0xB8002000      /* base address */
#define SIOBUF      (SC_BASE+0x00)  /* transmiting/receiving buffer register */
#define SIOSTA      (SC_BASE+0x04)  /* SIO status register */
#define SIOCON      (SC_BASE+0x08)  /* SIO control register */
#define SIOBCN      (SC_BASE+0x0C)  /* baud rate control register */
#define SIOBTC      (SC_BASE+0x10)  /* baud rate timer counter */
#define SIOBT       (SC_BASE+0x14)  /* baud rate timer register */
#define SIOTCN      (SC_BASE+0x18)  /* SIO test control register */

/* bit field of SIOSTA register */
#define SIOSTA_FERR     0x0001      /* framing error */
#define SIOSTA_OERR     0x0002      /* overrun error */
#define SIOSTA_PERR     0x0004      /* parity error */
#define SIOSTA_RVIRQ    0x0010      /* receive ready */
#define SIOSTA_TRIRQ    0x0020      /* transmit ready */

/* bit field of SIOCON register */
#define SIOCON_LN7      0x0001      /* data length : 7bit */
#define SIOCON_LN8      0x0000      /* data length : 8bit */
#define SIOCON_PEN      0x0002      /* parity enabled */
#define SIOCON_PDIS     0x0000      /* parity disabled */
#define SIOCON_EVN      0x0004      /* even parity */
#define SIOCON_ODD      0x0000      /* odd parity */
#define SIOCON_TSTB1    0x0008      /* stop bit : 1 */
#define SIOCON_TSTB2    0x0000      /* stop bit : 2 */

/* bit field of SIOBCN register */
#define SIOBCN_BGRUN    0x0010      /* count start */

/* bit field of SIOTCN register */
#define SIOTCN_MFERR    0x0001      /* generate framin error */
#define SIOTCN_MPERR    0x0002      /* generate parity error */
#define SIOTCN_LBTST    0x0080      /* loop back test */


/*---------------------------------- ML674000 ------------------------------------*/
/*****************************************************/
/*    timer control register                         */
/*****************************************************/
#define TCR_BASE    0xB7F00000  /* base address */
#define TIMECNTL0   (TCR_BASE+0x00) /* timer0 control register */
#define TIMEBASE0   (TCR_BASE+0x04) /* timer0 base register */
#define TIMECNT0    (TCR_BASE+0x08) /* timer0 counter register */
#define TIMECMP0    (TCR_BASE+0x0C) /* timer0 compare register */
#define TIMESTAT0   (TCR_BASE+0x10) /* timer0 status register */
#define TIMECNTL1   (TCR_BASE+0x20) /* timer1 control register */
#define TIMEBASE1   (TCR_BASE+0x24) /* timer1 base register */
#define TIMECNT1    (TCR_BASE+0x28) /* timer1 counter register */
#define TIMECMP1    (TCR_BASE+0x2C) /* timer1 compare register */
#define TIMESTAT1   (TCR_BASE+0x30) /* timer1 status register */
#define TIMECNTL2   (TCR_BASE+0x40) /* timer2 control register */
#define TIMEBASE2   (TCR_BASE+0x44) /* timer2 base register */
#define TIMECNT2    (TCR_BASE+0x48) /* timer2 counter register */
#define TIMECMP2    (TCR_BASE+0x4C) /* timer2 compare register */
#define TIMESTAT2   (TCR_BASE+0x50) /* timer2 status register */
#define TIMECNTL3   (TCR_BASE+0x60) /* timer3 control register */
#define TIMEBASE3   (TCR_BASE+0x64) /* timer3 base register */
#define TIMECNT3    (TCR_BASE+0x68) /* timer3 counter register */
#define TIMECMP3    (TCR_BASE+0x6C) /* timer3 compare register */
#define TIMESTAT3   (TCR_BASE+0x70) /* timer3 status register */
#define TIMECNTL4   (TCR_BASE+0x80) /* timer4 control register */
#define TIMEBASE4   (TCR_BASE+0x84) /* timer4 base register */
#define TIMECNT4    (TCR_BASE+0x88) /* timer4 counter register */
#define TIMECMP4    (TCR_BASE+0x8C) /* timer4 compare register */
#define TIMESTAT4   (TCR_BASE+0x90) /* timer4 status register */
#define TIMECNTL5   (TCR_BASE+0xA0) /* timer5 control register */
#define TIMEBASE5   (TCR_BASE+0xA4) /* timer5 base register */
#define TIMECNT5    (TCR_BASE+0xA8) /* timer5 counter register */
#define TIMECMP5    (TCR_BASE+0xAC) /* timer5 compare register */
#define TIMESTAT5   (TCR_BASE+0xB0) /* timer5 status register */

/* bit field of TIMECNTL0-5 register */
#define TIMECNTL_CLK    0x0000  /* CPUCLK */
#define TIMECNTL_CLK2   0x0020  /* CPUCLK/2 */
#define TIMECNTL_CLK4   0x0040  /* CPUCLK/4 */
#define TIMECNTL_CLK8   0x0060  /* CPUCLK/8 */
#define TIMECNTL_CLK16  0x0080  /* CPUCLK/16 */
#define TIMECNTL_CLK32  0x00A0  /* CPUCLK/32 */
#define TIMECNTL_IE     0x0010  /* enable interrupt */
#define TIMECNTL_START  0x0008  /* timer start */
#define TIMECNTL_OS     0x0001  /* one shot timer */
#define TIMECNTL_INT    0x0000  /* interval timer */

/* bit field of TIMESTAT0-5 register */
#define TIMESTAT_STATUS 0x0001  /* status bit */

/*****************************************************/
/*    Watch Dog Timer control register               */
/*****************************************************/
#define WDT_BASE    0xB7E00000  /* base address */
#define WDTCON      (WDT_BASE+0x00) /* Watch Dog Timer control register */
#define WDTBCON     (WDT_BASE+0x04) /* time base counter control register */
#define WDSTAT     (WDT_BASE+0x14) /* Watch Dog Timer status register */

/* bit field of WDTCON */
#define WDTCON_0xC3 0xC3    /* 0xC3 */
#define WDTCON_0x3C 0x3C    /* 0x3C */

/* bit field of WDTBCON */
#define WDTBCON_WDHLT   0x80  /* HALT */
#define WDTBCON_RESET   0x20  /* reset */
#define WDTBCON_INT     0x00  /* generate interrupt */
#define WDTBCON_ITEN    0x10  /* enable interval timer */
#define WDTBCON_ITM     0x08  /* interval timer mode */
#define WDTBCON_WDTM    0x00  /* WDT mode */
#define WDTBCON_CLK32   0x00  /* CPUCLK/32 */
#define WDTBCON_CLK64   0x01  /* CPUCLK/64 */
#define WDTBCON_CLK128  0x02  /* CPUCLK/128 */
#define WDTBCON_CLK256  0x03  /* CPUCLK/256 */
#define WDTBCON_WE      0x5A  /* enable writing to this register */

/* bit field of WDTSTAT */
#define WDSTAT_RSTWDT  0x01  /* reset by WDT */
#define WDSTAT_RSTPWON 0x00  /* reset by power on */
#define WDSTAT_WDTIST  0x10  /* WDT interrupt */
#define WDSTAT_IVTIST  0x20  /* IVT interrupt */


/*****************************************************/
/*    UART control register                          */
/*****************************************************/
#define UCR_BASE    0xB7B00000  /* base address */
#define UARTRBR     (UCR_BASE+0x00) /* receiver buffer register */
#define UARTTHR     (UCR_BASE+0x00) /* transmitter buffer register */
#define UARTIER     (UCR_BASE+0x04) /* interrupt enable register */
#define UARTIIR     (UCR_BASE+0x08) /* interrupt identification */
#define UARTFCR     (UCR_BASE+0x08) /* FIFO control register */
#define UARTLCR     (UCR_BASE+0x0C) /* line control register */
#define UARTMCR     (UCR_BASE+0x10) /* modem control register */
#define UARTLSR     (UCR_BASE+0x14) /* line status register */
#define UARTMSR     (UCR_BASE+0x18) /* modem status register */
#define UARTSCR     (UCR_BASE+0x1C) /* scratchpad register */
#define UARTDLL     (UCR_BASE+0x00) /* divisor latch(LSB) */
#define UARTDLM     (UCR_BASE+0x04) /* divisor latch(MSB) */

/* bit field of UARTLCR register */
#define UARTLCR_LEN5    0x0000  /* data length : 5bit */
#define UARTLCR_LEN6    0x0001  /* data length : 6bit */
#define UARTLCR_LEN7    0x0002  /* data length : 7bit */
#define UARTLCR_LEN8    0x0003  /* data length : 8bit */
#define UARTLCR_STB1    0x0000  /* stop bit : 1 */
#define UARTLCR_STB2    0x0004  /* stop bit : 2(data length 6-8) */
#define UARTLCR_STB1_5  0x0004  /* stop bit : 1.5(data length 5) */
#define UARTLCR_PEN     0x0008  /* parity enabled */
#define UARTLCR_PDIS    0x0000  /* parity disabled */
#define UARTLCR_EVN     0x0010  /* even parity */
#define UARTLCR_ODD     0x0000  /* odd parity */
#define UARTLCR_SP      0x0020  /* stick parity */
#define UARTLCR_BRK     0x0040  /* break delivery */
#define UARTLCR_DLAB    0x0080  /* devisor latch access bit */

/* bit field of UARTLSR register */
#define UARTLSR_DR      0x0001  /* data ready */
#define UARTLSR_OE      0x0002  /* overrun error */
#define UARTLSR_PE      0x0004  /* parity error */
#define UARTLSR_FE      0x0008  /* framing error */
#define UARTLSR_BI      0x0010  /* break interrupt */
#define UARTLSR_THRE    0x0020  /* transmitter holding register empty */
#define UARTLSR_TEMT    0x0040  /* transmitter empty */
#define UARTLSR_ERF     0x0080  /* receiver FIFO error */

/* bit field of UARTFCR register */
#define UARTFCR_FE      0x0001  /* FIFO enable */
#define UARTFCR_FD      0x0000  /* FIFO disable */
#define UARTFCR_RFCLR   0x0002  /* receiver FIFO clear */
#define UARTFCR_TFCLR   0x0004  /* transmitter FIFO clear */
#define UARTFCR_RFLV1   0x0000  /* RCVR FIFO interrupt trigger level : 1byte */
#define UARTFCR_RFLV4   0x0040  /* RCVR FIFO interrupt trigger level : 4byte */
#define UARTFCR_RFLV8   0x0080  /* RCVR FIFO interrupt trigger level : 8byte */
#define UARTFCR_RFLV14  0x00C0  /* RCVR FIFO interrupt trigger level : 14byte */

/* bit field of UARTMCR register */
#define UARTMCR_DTR     0x0001  /* data terminal ready */
#define UARTMCR_RTS     0x0002  /* request to send */
#define UARTMCR_LOOP    0x0010  /* loopback */

/* bit field of UARTMSR register */
#define UARTMSR_DCTS    0x0001  /* delta clear to send */
#define UARTMSR_DDSR    0x0002  /* delta data set ready */
#define UARTMSR_TERI    0x0004  /* trailing edge of ring endicator */
#define UARTMSR_DDCD    0x0008  /* delta data carrer detect */
#define UARTMSR_CTS     0x0010  /* clear to send */
#define UARTMSR_DSR     0x0020  /* data set ready */
#define UARTMSR_RI      0x0040  /* ring indicator */
#define UARTMSR_DCD     0x0080  /* data carrer detect */

/* bit field of UARTIIR register */
#define UARTIIR_IP      0x0001  /* interrupt generated */
#define UARTIIR_LINE    0x0006  /* receiver line status interrupt */
#define UARTIIR_RCV     0x0004  /* receiver interrupt */
#define UARTIIR_TO      0x000C  /* time out interrupt */
#define UARTIIR_TRA     0x0002  /* transmitter interrupt */
#define UARTIIR_FM      0x00C0  /* FIFO mode */

/* bit field of UARTIER register */
#define UARTIER_ERBF    0x0001  /* enable received data available interrupt */
#define UARTIER_ETBEF   0x0002  /* enable transmitter holding register empty interrupt */
#define UARTIER_ELSI    0x0004  /* enable receiver line status interrupt */
#define UARTIER_EDSI    0x0008  /* enable modem status interrupt */


/*****************************************************/
/*    PWM control register                           */
/*****************************************************/
#define PWM_BASE    0xB7D00000  /* base address */
#define PWR0        (PWM_BASE+0x00) /* PWM register 0 */
#define PWCY0       (PWM_BASE+0x04) /* PWM cycle register 0 */
#define PWC0        (PWM_BASE+0x08) /* PWM counter 0 */
#define PWCON0      (PWM_BASE+0x0C) /* PWM contrlo register 0 */
#define PWR1        (PWM_BASE+0x20) /* PWM register 1 */
#define PWCY1       (PWM_BASE+0x24) /* PWM cycle register 1 */
#define PWC1        (PWM_BASE+0x28) /* PWM counter 1 */
#define PWCON1      (PWM_BASE+0x2C) /* PWM contrlo register 1 */
#define PWINTSTS    (PWM_BASE+0x3C) /* PWM interrupt status register */

/* bit field of PWCON0,1 register */
#define PWCON_PWR       0x0001  /* enable PWC */
#define PWCON_CLK1      0x0000  /* 1/1 CPUCLK */
#define PWCON_CLK4      0x0002  /* 1/4 CPUCLK */
#define PWCON_CLK16     0x0004  /* 1/16 CPUCLK */
#define PWCON_CLK32     0x0006  /* 1/32 CPUCLK */
#define PWCON_INTIE     0x0040  /* enable interrupt */
#define PWCON_PWCOV     0x0080

/* bit field of PWSTAT  register */
#define PWINTSTS_INT1S    0x0200  /* CH1 interrupt generated */
#define PWINTSTS_INT0S    0x0100  /* CH0 interrupt generated */
#define PWINTSTS_INT1CLR  0x0002  /* CH1 interrupt clear */
#define PWINTSTS_INT0CLR  0x0001  /* CH0 interrupt clear */


/*****************************************************/
/*    port control register                           */
/*****************************************************/
#define PCR_BASE    0xB7A00000  /* base address */
#define GPPOA       (PCR_BASE+0x00) /* port A output register */
#define GPPIA       (PCR_BASE+0x04) /* port A input register */
#define GPPMA       (PCR_BASE+0x08) /* port A Mode register */
#define GPIEA       (PCR_BASE+0x0C) /* port A interrupt enable */
#define GPIPA       (PCR_BASE+0x10) /* port A interrupt Polarity */
#define GPISA       (PCR_BASE+0x14) /* port A interrupt Status */
#define GPPOB       (PCR_BASE+0x20) /* port B Output register */
#define GPPIB       (PCR_BASE+0x24) /* port B Input register */
#define GPPMB       (PCR_BASE+0x28) /* port B Mode register */
#define GPIEB       (PCR_BASE+0x2C) /* port B interrupt enable */
#define GPIPB       (PCR_BASE+0x30) /* port B interrupt Polarity */
#define GPISB       (PCR_BASE+0x34) /* port B interrupt Status */


/*****************************************************/
/*    ADC control register                           */
/*****************************************************/
#define ADC_BASE    0xB6000000  /* base address */
#define ADCON0      (ADC_BASE+0x00) /* ADC control 0 register */
#define ADCON1      (ADC_BASE+0x04) /* ADC control 1 register */
#define ADCON2      (ADC_BASE+0x08) /* ADC control 2 register */
#define ADINT       (ADC_BASE+0x0C) /* AD interrupt control register */
#define ADFINT      (ADC_BASE+0x10) /* AD Forced interrupt register */
#define ADR0        (ADC_BASE+0x14) /* AD Result 0 register */
#define ADR1        (ADC_BASE+0x18) /* AD Result 1 register */
#define ADR2        (ADC_BASE+0x1C) /* AD Result 2 register */
#define ADR3        (ADC_BASE+0x20) /* AD Result 3 register */
#define ADR4        (ADC_BASE+0x24) /* AD Result 4 register */
#define ADR5        (ADC_BASE+0x28) /* AD Result 5 register */
#define ADR6        (ADC_BASE+0x2C) /* AD Result 6 register */
#define ADR7        (ADC_BASE+0x30) /* AD Result 7 register */


/* bit field of ADCON0 register */
#define ADCON0_CH0_7    0x0000  /* CH0-CH7 */
#define ADCON0_CH1_7    0x0001  /* CH1-CH7 */
#define ADCON0_CH2_7    0x0002  /* CH2-CH7 */
#define ADCON0_CH3_7    0x0003  /* CH3-CH7 */
#define ADCON0_CH4_7    0x0004  /* CH4-CH7 */
#define ADCON0_CH5_7    0x0005  /* CH5-CH7 */
#define ADCON0_CH6_7    0x0006  /* CH6-CH7 */
#define ADCON0_CH7      0x0007  /* CH7 */
#define ADCON0_ADRUN    0x0010  /* AD conversion start */
#define ADCON0_SCNC     0x0040  /* Stop after a round */

/* bit field of ADCON1 register */
#define ADCON1_CH0      0x0000  /* CH0 */
#define ADCON1_CH1      0x0001  /* CH1 */
#define ADCON1_CH2      0x0002  /* CH2 */
#define ADCON1_CH3      0x0003  /* CH3 */
#define ADCON1_CH4      0x0004  /* CH4 */
#define ADCON1_CH5      0x0005  /* CH5 */
#define ADCON1_CH6      0x0006  /* CH6 */
#define ADCON1_CH7      0x0007  /* CH7 */
#define ADCON1_STS      0x0010  /* AD conversion start */

/* bit field of ADCON2 register */
#define ADCON2_CLK2     0x0001  /* CPUCLK/2 */
#define ADCON2_CLK4     0x0002  /* CPUCLK/4 */
#define ADCON2_CLK8     0x0003  /* CPUCLK/8 */

/* bit field of ADINT register */
#define ADINT_INTSN     0x0001  /* AD conversion of ch7 finished (scan mode) */
#define ADINT_INTST     0x0002  /* AD conversion finished (select mode) */
#define ADINT_ADSNIE    0x0004  /* enable interrupt (scan mode) */
#define ADINT_ADSTIE    0x0008  /* enable interrupt (select mode) */

/* bit field of ADICNT register */
#define ADICNT_ADFAS    0x0001  /* Assert interrupt signal */


/*****************************************************/
/*    DMA control register                           */
/*****************************************************/
#define DMA_BASE    0x7BE00000  /* base address */
#define DMAMOD      (DMA_BASE+0x0000)   /* DMA Mode register */
#define DMASTA      (DMA_BASE+0x0004)   /* DMA Status register */
#define DMAINT      (DMA_BASE+0x0008)   /* DMA interrupt Status register */
#define DMACMSK0    (DMA_BASE+0x0100)   /* Channel 0 Mask register */
#define DMACTMOD0   (DMA_BASE+0x0104)   /* Channel 0 Transfer Mode register */
#define DMACSAD0    (DMA_BASE+0x0108)   /* Channel 0 Source Address register */
#define DMACDAD0    (DMA_BASE+0x010C)   /* Channel 0 Destination Address register */
#define DMACSIZ0    (DMA_BASE+0x0110)   /* Channel 0 Transfer Size register */
#define DMACCINT0   (DMA_BASE+0x0114)   /* Channel 0 interrupt Clear register */
#define DMACMSK1    (DMA_BASE+0x0200)   /* Channel 1 Mask register */
#define DMACTMOD1   (DMA_BASE+0x0204)   /* Channel 1 Transfer Mode register */
#define DMACSAD1    (DMA_BASE+0x0208)   /* Channel 1 Source Address register */
#define DMACDAD1    (DMA_BASE+0x020C)   /* Channel 1 Destination Address register */
#define DMACSIZ1    (DMA_BASE+0x0210)   /* Channel 1 Transfer Size register */
#define DMACCINT1   (DMA_BASE+0x0214)   /* Channel 1 interrupt Clear register */

/* bit field of DMAMOD register */
#define DMAMOD_FIX  0x0000  /* Priority of DMA channel : CH0 > CH1 */
#define DMAMOD_RR   0x0001  /* Priority of DMA channel : Round robin */

/* bit field of DMASTA register */
#define DMASTA_STA0 0x0001  /* Non-transmitted data is in CH0 */
#define DMASTA_STA1 0x0002  /* Non-transmitted data is in CH1 */

/* bit field of DMAINT register */
#define DMAINT_IREQ0    0x00000001  /* CH0 interrupt */
#define DMAINT_IREQ1    0x00000002  /* CH1 interrupt */
#define DMAINT_ISTA0    0x00000100  /* CH0 abnormal end */
#define DMAINT_ISTA1    0x00000200  /* CH1 abnormal end */
#define DMAINT_ISTP0    0x00010000  /* CH0 abnormal end situation */
#define DMAINT_ISTP1    0x00020000  /* CH1 abnormal end situation */

/* bit field of DMAMSK0,1 register */
#define DMACMSK_MSK  0x00000001  /* Mask */

/* bit field of DMATMOD0,1 register */
#define DMACTMOD_ARQ    0x00000001  /* Auto request */
#define DMACTMOD_ERQ    0x00000000  /* External request */
#define DMACTMOD_BYTE   0x00000000  /* Byte transmission */
#define DMACTMOD_HWORD  0x00000002  /* Half word transmission */
#define DMACTMOD_WORD   0x00000004  /* Word transmission */
#define DMACTMOD_SFA    0x00000000  /* Source data type(fixed address device) */
#define DMACTMOD_SIA    0x00000008  /* Source data type(incremental address device) */
#define DMACTMOD_DFA    0x00000000  /* Destination data type(fixed address device) */
#define DMACTMOD_DIA    0x00000010  /* Destination data type(incremental address device) */
#define DMACTMOD_BM     0x00000000  /* Bus request mode(burst mode) */
#define DMACTMOD_CSM    0x00000020  /* Bus request mode(cycle steal mode) */
#define DMACTMOD_IMK    0x00000040  /* interrupt mask */


/*****************************************************/
/*    interrupt control register                     */
/*****************************************************/
#define EIC_BASE    0x7BF00000  /* base address */
#define IRS         (EIC_BASE+0x00) /* Extended interrupt Size register */
#define IRCL        (EIC_BASE+0x04) /* Extended interrupt Clear register */
#define IRQA        (EIC_BASE+0x10) /* Extended interrupt IRQ register */
#define IDM         (EIC_BASE+0x14) /* Extended interrupt Mode control register */
#define ILC         (EIC_BASE+0x18) /* Extended interrupt IRQ Level control register */

/* bit field of IRQA register */
#define IRQA_IRQ16  0x00000001  /* IRQ16 */
#define IRQA_IRQ17  0x00000002  /* IRQ17 */
#define IRQA_IRQ18  0x00000004  /* IRQ18 */
#define IRQA_IRQ19  0x00000008  /* IRQ19 */
#define IRQA_IRQ20  0x00000010  /* IRQ20 */
#define IRQA_IRQ21  0x00000020  /* IRQ21 */
#define IRQA_IRQ22  0x00000040  /* IRQ22 */
#define IRQA_IRQ23  0x00000080  /* IRQ23 */
#define IRQA_IRQ24  0x00000100  /* IRQ24 */
#define IRQA_IRQ25  0x00000200  /* IRQ25 */
#define IRQA_IRQ26  0x00000400  /* IRQ26 */
#define IRQA_IRQ27  0x00000800  /* IRQ27 */
#define IRQA_IRQ28  0x00001000  /* IRQ28 */
#define IRQA_IRQ29  0x00002000  /* IRQ29 */
#define IRQA_IRQ30  0x00004000  /* IRQ30 */
#define IRQA_IRQ31  0x00008000  /* IRQ31 */

/* bit field of IDM register */
#define IDM_IDM16   0x00000001  /* IRQ16, IRQ17 */
#define IDM_IDM18   0x00000004  /* IRQ18, IRQ19 */
#define IDM_IDM20   0x00000010  /* IRQ20, IRQ21 */
#define IDM_IDM22   0x00000040  /* IRQ22, IRQ23 */
#define IDM_IDM24   0x00000100  /* IRQ24, IRQ25 */
#define IDM_IDM26   0x00000400  /* IRQ26, IRQ27 */
#define IDM_IDM28   0x00001000  /* IRQ28, IRQ29 */
#define IDM_IDM30   0x00004000  /* IRQ30, IRQ31 */
#define IDM_IDMP16  0x00000002  /* IRQ16, IRQ17 */
#define IDM_IDMP18  0x00000008  /* IRQ18, IRQ19 */
#define IDM_IDMP20  0x00000020  /* IRQ20, IRQ21 */
#define IDM_IDMP22  0x00000080  /* IRQ22, IRQ23 */
#define IDM_IDMP24  0x00000200  /* IRQ24, IRQ25 */
#define IDM_IDMP26  0x00000800  /* IRQ26, IRQ27 */
#define IDM_IDMP28  0x00002000  /* IRQ28, IRQ29 */
#define IDM_IDMP30  0x00008000  /* IRQ30, IRQ31 */
#define IDM_INT_L_L 0x00000000  /* level sensing, interrupt occurs when 'L' */
#define IDM_INT_L_H 0x0000AAAA  /* level sensing, interrupt occurs when 'H' */
#define IDM_INT_E_F 0x00005555  /* edge sensing, interrupt occurs when falling edge */
#define IDM_INT_E_R 0x0000FFFF  /* edge sensing, interrupt occurs when rising edge */
#define IDM_IRQ16   0x00000003	/* IRQ16 */
#define IDM_IRQ17   0x00000003	/* IRQ17 */
#define IDM_IRQ18   0x0000000C	/* IRQ18 */
#define IDM_IRQ19   0x0000000C	/* IRQ19 */
#define IDM_IRQ20   0x00000030	/* IRQ20 */
#define IDM_IRQ21   0x00000030	/* IRQ21 */
#define IDM_IRQ22   0x000000C0	/* IRQ22 */
#define IDM_IRQ23   0x000000C0	/* IRQ23 */
#define IDM_IRQ24   0x00000300	/* IRQ24 */
#define IDM_IRQ25   0x00000300	/* IRQ25 */
#define IDM_IRQ26   0x00000C00	/* IRQ26 */
#define IDM_IRQ27   0x00000C00	/* IRQ27 */
#define IDM_IRQ28   0x00003000	/* IRQ28 */
#define IDM_IRQ29   0x00003000	/* IRQ29 */
#define IDM_IRQ30   0x0000C000	/* IRQ30 */
#define IDM_IRQ31   0x0000C000	/* IRQ31 */


/* bit field of ILC register */
#define ILC_INT_LV1 0x11111111  /* interrupt level 1 */
#define ILC_INT_LV2 0x22222222  /* interrupt level 2 */
#define ILC_INT_LV3 0x33333333  /* interrupt level 3 */
#define ILC_INT_LV4 0x44444444  /* interrupt level 4 */
#define ILC_INT_LV5 0x55555555  /* interrupt level 5 */
#define ILC_INT_LV6 0x66666666  /* interrupt level 6 */
#define ILC_INT_LV7 0x77777777  /* interrupt level 7 */
#define ILC_ILC16   0x00000007  /* IRQ16, IRQ17 */
#define ILC_ILC18   0x00000070  /* IRQ18, IRQ19 */
#define ILC_ILC20   0x00000700  /* IRQ20, IRQ21 */
#define ILC_ILC22   0x00007000  /* IRQ22, IRQ23 */
#define ILC_ILC24   0x00070000  /* IRQ24, IRQ25 */
#define ILC_ILC26   0x00700000  /* IRQ26, IRQ27 */
#define ILC_ILC28   0x07000000  /* IRQ28, IRQ29 */
#define ILC_ILC30   0x70000000  /* IRQ30, IRQ31 */


/*****************************************************/
/*    DRAM control register                          */
/*****************************************************/
#define DCR_BASE    0x78180000  /* base address */
#define DBWC        (DCR_BASE+0x00) /* DRAM Bus Width control register */
#define DRMC        (DCR_BASE+0x04) /* DRAM control register */
#define DRPC        (DCR_BASE+0x08) /* DRAM Attribute parameter Setup register */
#define SDMD        (DCR_BASE+0x0C) /* SDRAM Mode Setup register */
#define DCMD        (DCR_BASE+0x10) /* DRAM Command register */
#define RFSH0       (DCR_BASE+0x14) /* DRAM Refresh Cycle register 0 */
#define PDWC        (DCR_BASE+0x18) /* Power Down Mode control register */
#define RFSH1       (DCR_BASE+0x1C) /* DRAM Refresh Cycle register 1 */

/* bit field of DBWC register */
#define DBWC_UM         0x00        /* un-mounted */
#define DBWC_8bit       0x01        /* 8bit width */
#define DBWC_16bit      0x02        /* 16bit width */
#define DBWC_32bit      0x03        /* 32bit width */

/* bit field of DRMC register */
#define DRMC_8bit       0x00        /* DRAM column length : 8bit */
#define DRMC_9bit       0x01        /* DRAM column length : 9bit */
#define DRMC_10bit      0x02        /* DRAM column length : 10bit */
#define DRMC_SDRAM      0x00        /* DRAM architecture : SDRAM */
#define DRMC_EDO        0x04        /* DRAM architecture : EDO-DRAM */
#define DRMC_2CLK       0x00        /* SDRAM pre-charge latency : 2clock */
#define DRMC_CAS        0x10        /* SDRAM pre-charge latency : same as CAS latency */
#define DRMC_PD_DIS     0x00        /* automatic shift to SDRAM power down mode : disable */
#define DRMC_PD_EN      0x40        /* automatic shift to SDRAM power down mode : enable */
#define DRMC_CBR_STOP   0x00        /* CBR refresh : stop */
#define DRMC_CBR_EXE    0x80        /* CBR refresh : execution */

/* bit field of SDMD register */
#define SDMD_CL2        0x00        /* SDRAM CAS latency : 2 */
#define SDMD_CL3        0x01        /* SDRAM CAS latency : 3 */
#define SDMD_MODEWR     0x80        /* setting operation : valid */

/* bit field of DCMD register */
#define DCMD_S_PALL     0x04        /* SDRAM all bank pre-charge command */
#define DCMD_S_REF      0x05        /* SDRAM CBR refresh command */
#define DCMD_S_SELF     0x06        /* SDRAM self refresh start command */
#define DCMD_S_SREX     0x07        /* SDRAM self refresh stop command */
#define DCMD_EDO_PC     0x04        /* EDO-DRAM pre-charge cycle */
#define DCMD_EDO_REF    0x05        /* EDO-DRAM CBR refresh cycle */
#define DCMD_EDO_SELF   0x06        /* EDO-DRAM self refresh start cycle */
#define DCMD_EDO_SREX   0x07        /* EDO-DRAM self refresh stop cycle */

/* bit field of RFSH register */
#define RFSH0_DOUBLE    0x00        /* refresh frequency = refreqa * 2 */
#define RFSH0_SINGLE    0x01        /* refresh frequency = refreqa */

/* bit field of PDWC register */
#define PDWC_1  0x00    /* when  1 or more cycles of idol state continue,
                           it shifts to power down mode. */
#define PDWC_2  0x01    /*                   :                   */
#define PDWC_3  0x02    /*                   :                   */
#define PDWC_4  0x03    /*                   :                   */
#define PDWC_5  0x04    /*                   :                   */
#define PDWC_6  0x05    /*                   :                   */
#define PDWC_7  0x06    /*                   :                   */
#define PDWC_8  0x07    /*                   :                   */
#define PDWC_9  0x08    /*                   :                   */
#define PDWC_10 0x09    /*                   :                   */
#define PDWC_11 0x0A    /*                   :                   */
#define PDWC_12 0x0B    /*                   :                   */
#define PDWC_13 0x0C    /*                   :                   */
#define PDWC_14 0x0D    /*                   :                   */
#define PDWC_15 0x0E    /*                   :                   */
#define PDWC_16 0x0F    /* when 16 or more cycles of idol state continue,
                           it shifts to power down mode. */


/*****************************************************/
/*    Chip configuration register                    */
/*****************************************************/
#define CCR_BASE    0xB7000000  /* base address */
#define GPCTL       (CCR_BASE+0x00) /* port function control register */
#define BCKCTL      (CCR_BASE+0x04) /* clock control register */
#define CSSW        (CCR_BASE+0x10) /* external ROM/RAM chip cell control register */

/* bit field of SCCW register */
#define CSSW_SET    0xA5A5  /* set CHG */
#define CSSW_RESET  0x5A5A  /* reset CHG */


/*****************************************************/
/*    interrupt number                               */
/*****************************************************/
#define INT_SYSTEM_TIMER    0
#define INT_WDT             1
#define INT_IVT             2
#define INT_GPIOA           4
#define INT_GPIOB           5
#define INT_SOFTIRQ         8
#define INT_UART            9
#define INT_SIO             10
#define INT_AD              11
#define INT_PWM0            12
#define INT_PWM1            13
#define INT_TIMER0          16
#define INT_TIMER1          17
#define INT_TIMER2          18
#define INT_TIMER3          19
#define INT_TIMER4          20
#define INT_TIMER5          21
#define INT_DMA0            24
#define INT_DMA1            25
#define INT_EX0             28
#define INT_EX1             29
#define INT_EX2             30
#define INT_EX3             31

#ifdef __cplusplus
};      /* End of 'extern "C"' */
#endif
#endif  /* End of ML674000.h */
