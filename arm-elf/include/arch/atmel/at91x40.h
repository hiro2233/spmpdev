#ifndef at91x40_h
#define at91x40_h
/*******************************************************************************
at91x40.h - Register defs for Atmel AT91x40: AT91M40800, AT91R40807, AT91M40807, 
            AT91R40008, AT91FR4081, AT91F40816, AT91FR40162, AT91FR4042
           
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

#define REG8  (volatile unsigned char*)
#define REG16 (volatile unsigned short*)
#define REG32 (volatile unsigned int*)


/*##############################################################################
## MISC
##############################################################################*/

        /* Constants for data to put in IRQ/FIQ Exception Vectors */
#define VECTDATA_IRQ  0xE51FFF20  /* LDR  PC,[PC,#-0xF20] */
#define VECTDATA_FIQ  0xE51FFF20  /* LDR  PC,[PC,#-0xF20] */


/*##############################################################################
## EBI - External Bus Interface 
##############################################################################*/

#define EBI_BASE             (0xFFE00000)

#define EBI_CSR0             (*(REG32 (EBI_BASE+0x00)))
#define EBI_CSR1             (*(REG32 (EBI_BASE+0x04)))
#define EBI_CSR2             (*(REG32 (EBI_BASE+0x08)))
#define EBI_CSR3             (*(REG32 (EBI_BASE+0x0C)))
#define EBI_CSR4             (*(REG32 (EBI_BASE+0x10)))
#define EBI_CSR5             (*(REG32 (EBI_BASE+0x14)))
#define EBI_CSR6             (*(REG32 (EBI_BASE+0x18)))
#define EBI_CSR7             (*(REG32 (EBI_BASE+0x1C)))
#define EBI_RCR              (*(REG32 (EBI_BASE+0x20)))
#define EBI_MCR              (*(REG32 (EBI_BASE+0x24)))


/*##############################################################################
## PS - Power Savings Controller
##############################################################################*/

#define PS_BASE              (0xFFFF4000)

#define PS_CR                (*(REG32 (PS_BASE + 0x0000)))
#define PS_PCER              (*(REG32 (PS_BASE + 0x0004)))
#define PS_PCDR              (*(REG32 (PS_BASE + 0x0008)))
#define PS_PCSR              (*(REG32 (PS_BASE + 0x000C)))


/*##############################################################################
## AI - ADVANCED INTERRUPT CONTROLLER
##############################################################################*/

#define AIC_BASE             (0xFFFFF000)

#define AIC_SMR0_FIQ         (*(REG32 (AIC_BASE + 0x0000)))
#define AIC_SMR1_SWI         (*(REG32 (AIC_BASE + 0x0004)))
#define AIC_SMR2_USR0        (*(REG32 (AIC_BASE + 0x0008)))
#define AIC_SMR3_USR1        (*(REG32 (AIC_BASE + 0x000C)))
#define AIC_SMR4_TC0         (*(REG32 (AIC_BASE + 0x0010)))
#define AIC_SMR5_TC1         (*(REG32 (AIC_BASE + 0x0014)))
#define AIC_SMR6_TC2         (*(REG32 (AIC_BASE + 0x0018)))
#define AIC_SMR7_WD          (*(REG32 (AIC_BASE + 0x001C)))
#define AIC_SMR8_PIO         (*(REG32 (AIC_BASE + 0x0020)))
#define AIC_SMR9_RES1        (*(REG32 (AIC_BASE + 0x0024)))
#define AIC_SMR10_RES2       (*(REG32 (AIC_BASE + 0x0028)))
#define AIC_SMR11_RES3       (*(REG32 (AIC_BASE + 0x002C)))
#define AIC_SMR12_RES4       (*(REG32 (AIC_BASE + 0x0030)))
#define AIC_SMR13_RES5       (*(REG32 (AIC_BASE + 0x0034)))
#define AIC_SMR14_RES6       (*(REG32 (AIC_BASE + 0x0038)))
#define AIC_SMR15_RES7       (*(REG32 (AIC_BASE + 0x003C)))
#define AIC_SMR16_IRQ0       (*(REG32 (AIC_BASE + 0x0040)))
#define AIC_SMR17_IRQ1       (*(REG32 (AIC_BASE + 0x0044)))
#define AIC_SMR18_IRQ2       (*(REG32 (AIC_BASE + 0x0048)))
#define AIC_SMR19_RES8       (*(REG32 (AIC_BASE + 0x004C)))
#define AIC_SMR20_RES9       (*(REG32 (AIC_BASE + 0x0050)))
#define AIC_SMR21_RES10      (*(REG32 (AIC_BASE + 0x0054)))
#define AIC_SMR22_RES11      (*(REG32 (AIC_BASE + 0x0058)))
#define AIC_SMR23_RES12      (*(REG32 (AIC_BASE + 0x005C)))
#define AIC_SMR24_RES13      (*(REG32 (AIC_BASE + 0x0060)))
#define AIC_SMR25_RES14      (*(REG32 (AIC_BASE + 0x0064)))
#define AIC_SMR26_RES15      (*(REG32 (AIC_BASE + 0x0068)))
#define AIC_SMR27_RES16      (*(REG32 (AIC_BASE + 0x006C)))
#define AIC_SMR28_RES17      (*(REG32 (AIC_BASE + 0x0070)))
#define AIC_SMR29_RES18      (*(REG32 (AIC_BASE + 0x0074)))
#define AIC_SMR30_RES19      (*(REG32 (AIC_BASE + 0x0078)))
#define AIC_SMR31_RES20      (*(REG32 (AIC_BASE + 0x007C)))

#define AIC_SVR0_FIQ         (*(REG32 (AIC_BASE + 0x0080)))
#define AIC_SVR1_SWI         (*(REG32 (AIC_BASE + 0x0084)))
#define AIC_SVR2_USR0        (*(REG32 (AIC_BASE + 0x0088)))
#define AIC_SVR3_USR1        (*(REG32 (AIC_BASE + 0x008C)))
#define AIC_SVR4_TC0         (*(REG32 (AIC_BASE + 0x0090)))
#define AIC_SVR5_TC1         (*(REG32 (AIC_BASE + 0x0094)))
#define AIC_SVR6_TC2         (*(REG32 (AIC_BASE + 0x0098)))
#define AIC_SVR7_WD          (*(REG32 (AIC_BASE + 0x009C)))
#define AIC_SVR8_PIO         (*(REG32 (AIC_BASE + 0x00A0)))
#define AIC_SVR9_RES1        (*(REG32 (AIC_BASE + 0x00A4)))
#define AIC_SVR10_RES2       (*(REG32 (AIC_BASE + 0x00A8)))
#define AIC_SVR11_RES3       (*(REG32 (AIC_BASE + 0x00AC)))
#define AIC_SVR12_RES4       (*(REG32 (AIC_BASE + 0x00B0)))
#define AIC_SVR13_RES5       (*(REG32 (AIC_BASE + 0x00B4)))
#define AIC_SVR14_RES6       (*(REG32 (AIC_BASE + 0x00B8)))
#define AIC_SVR15_RES7       (*(REG32 (AIC_BASE + 0x00BC)))
#define AIC_SVR16_IRQ0       (*(REG32 (AIC_BASE + 0x00C0)))
#define AIC_SVR17_IRQ1       (*(REG32 (AIC_BASE + 0x00C4)))
#define AIC_SVR18_IRQ2       (*(REG32 (AIC_BASE + 0x00C8)))
#define AIC_SVR19_RES8       (*(REG32 (AIC_BASE + 0x00CC)))
#define AIC_SVR20_RES9       (*(REG32 (AIC_BASE + 0x00D0)))
#define AIC_SVR21_RES10      (*(REG32 (AIC_BASE + 0x00D4)))
#define AIC_SVR22_RES11      (*(REG32 (AIC_BASE + 0x00D8)))
#define AIC_SVR23_RES12      (*(REG32 (AIC_BASE + 0x00DC)))
#define AIC_SVR24_RES13      (*(REG32 (AIC_BASE + 0x00E0)))
#define AIC_SVR25_RES14      (*(REG32 (AIC_BASE + 0x00E4)))
#define AIC_SVR26_RES15      (*(REG32 (AIC_BASE + 0x00E8)))
#define AIC_SVR27_RES16      (*(REG32 (AIC_BASE + 0x00EC)))
#define AIC_SVR28_RES17      (*(REG32 (AIC_BASE + 0x00F0)))
#define AIC_SVR29_RES18      (*(REG32 (AIC_BASE + 0x00F4)))
#define AIC_SVR30_RES19      (*(REG32 (AIC_BASE + 0x00F8)))
#define AIC_SVR31_RES20      (*(REG32 (AIC_BASE + 0x00FC)))

#define AIC_IVR              (*(REG32 (AIC_BASE + 0x0100)))
#define AIC_FVR              (*(REG32 (AIC_BASE + 0x0104)))
#define AIC_ISR              (*(REG32 (AIC_BASE + 0x0108)))
#define AIC_IPR              (*(REG32 (AIC_BASE + 0x010C)))

#define AIC_IMR              (*(REG32 (AIC_BASE + 0x0110)))
#define AIC_CISR             (*(REG32 (AIC_BASE + 0x0114)))
#define AIC_RES1             (*(REG32 (AIC_BASE + 0x0118)))
#define AIC_RES2             (*(REG32 (AIC_BASE + 0x011C)))

#define AIC_IECR             (*(REG32 (AIC_BASE + 0x0120)))
#define AIC_IDCR             (*(REG32 (AIC_BASE + 0x0124)))
#define AIC_ICCR             (*(REG32 (AIC_BASE + 0x0128)))
#define AIC_ISCR             (*(REG32 (AIC_BASE + 0x012C)))

#define AIC_EOICR            (*(REG32 (AIC_BASE + 0x0130)))
#define AIC_SPU              (*(REG32 (AIC_BASE + 0x0134)))


/*##############################################################################
## PIO - PARALLEL I/Os
##############################################################################*/

#define PIO_BASE             (0xFFFF0000)

#define PIO_PER              (*(REG32 (PIO_BASE + 0x0000)))
#define PIO_PDR              (*(REG32 (PIO_BASE + 0x0004)))
#define PIO_PSR              (*(REG32 (PIO_BASE + 0x0008)))
#define PIO_RES1             (*(REG32 (PIO_BASE + 0x000C)))
#define PIO_OER              (*(REG32 (PIO_BASE + 0x0010)))
#define PIO_ODR              (*(REG32 (PIO_BASE + 0x0014)))
#define PIO_OSR              (*(REG32 (PIO_BASE + 0x0018)))
#define PIO_RES2             (*(REG32 (PIO_BASE + 0x001C)))
#define PIO_IFER             (*(REG32 (PIO_BASE + 0x0020)))
#define PIO_IFDR             (*(REG32 (PIO_BASE + 0x0024)))
#define PIO_IFSR             (*(REG32 (PIO_BASE + 0x0028)))
#define PIO_RES3             (*(REG32 (PIO_BASE + 0x002C)))
#define PIO_SODR             (*(REG32 (PIO_BASE + 0x0030)))
#define PIO_CODR             (*(REG32 (PIO_BASE + 0x0034)))
#define PIO_ODSR             (*(REG32 (PIO_BASE + 0x0038)))
#define PIO_PDSR             (*(REG32 (PIO_BASE + 0x003C)))
#define PIO_IER              (*(REG32 (PIO_BASE + 0x0040)))
#define PIO_IDR              (*(REG32 (PIO_BASE + 0x0044)))
#define PIO_IMR              (*(REG32 (PIO_BASE + 0x0048)))
#define PIO_ISR              (*(REG32 (PIO_BASE + 0x004C)))


/*##############################################################################
## WD - 
##############################################################################*/

#define WD_BASE              (0xFFFF8000)

#define WD_OMR               (*(REG32 (WD_BASE + 0x00))) 
#define WD_CMR               (*(REG32 (WD_BASE + 0x04))) 
#define WD_CR                (*(REG32 (WD_BASE + 0x08))) 
#define WD_SR                (*(REG32 (WD_BASE + 0x0C))) 


/*##############################################################################
## SF - Special Function Registers
##############################################################################*/

#define SFR_BASE             (0xFFF00000)

#define SF_CIDR              (*(REG32 (SFR_BASE + 0x0000)))
#define SF_EXID              (*(REG32 (SFR_BASE + 0x0004)))
#define SF_RSR               (*(REG32 (SFR_BASE + 0x0008)))
#define SF_MMR               (*(REG32 (SFR_BASE + 0x000C)))
#define SF_PMR               (*(REG32 (SFR_BASE + 0x0018)))


/*##############################################################################
## USART - Universal Synchronous/Asynchronous Receiver/Transmitter
##############################################################################*/

#define USART0_BASE          (0xFFFD0000)
#define USART1_BASE          (0xFFFCC000)

#define US0_CR               (*(REG32 (USART0_BASE+0x00)))
#define US0_MR               (*(REG32 (USART0_BASE+0x04)))
#define US0_IER              (*(REG32 (USART0_BASE+0x08)))
#define US0_IDR              (*(REG32 (USART0_BASE+0x0C)))
#define US0_IMR              (*(REG32 (USART0_BASE+0x10)))
#define US0_CSR              (*(REG32 (USART0_BASE+0x14)))
#define US0_RHR              (*(REG32 (USART0_BASE+0x18)))
#define US0_THR              (*(REG32 (USART0_BASE+0x1C)))
#define US0_BRGR             (*(REG32 (USART0_BASE+0x20)))
#define US0_RTOR             (*(REG32 (USART0_BASE+0x24)))
#define US0_TTGR             (*(REG32 (USART0_BASE+0x28)))
#define US0_RPR              (*(REG32 (USART0_BASE+0x30)))
#define US0_RCR              (*(REG32 (USART0_BASE+0x34)))
#define US0_TPR              (*(REG32 (USART0_BASE+0x38)))
#define US0_TCR              (*(REG32 (USART0_BASE+0x3C)))

#define US1_CR               (*(REG32 (USART1_BASE+0x00)))
#define US1_MR               (*(REG32 (USART1_BASE+0x04)))
#define US1_IER              (*(REG32 (USART1_BASE+0x08)))
#define US1_IDR              (*(REG32 (USART1_BASE+0x0C)))
#define US1_IMR              (*(REG32 (USART1_BASE+0x10)))
#define US1_CSR              (*(REG32 (USART1_BASE+0x14)))
#define US1_RHR              (*(REG32 (USART1_BASE+0x18)))
#define US1_THR              (*(REG32 (USART1_BASE+0x1C)))
#define US1_BRGR             (*(REG32 (USART1_BASE+0x20)))
#define US1_RTOR             (*(REG32 (USART1_BASE+0x24)))
#define US1_TTGR             (*(REG32 (USART1_BASE+0x28)))
#define US1_RPR              (*(REG32 (USART1_BASE+0x30)))
#define US1_RCR              (*(REG32 (USART1_BASE+0x34)))
#define US1_TPR              (*(REG32 (USART1_BASE+0x38)))
#define US1_TCR              (*(REG32 (USART1_BASE+0x3C)))


/*##############################################################################
## TC - TIMER COUNTER
##############################################################################*/

#define TC_BASE              (0xFFFE0000)

#define TC0_CCR              (*(REG32 (TC_BASE + 0x0000)))
#define TC0_CMR              (*(REG32 (TC_BASE + 0x0004)))
#define TC0_RES1             (*(REG32 (TC_BASE + 0x0008)))
#define TC0_RES2             (*(REG32 (TC_BASE + 0x000C)))
#define TC0_CV               (*(REG32 (TC_BASE + 0x0010)))
#define TC0_RA               (*(REG32 (TC_BASE + 0x0014)))
#define TC0_RB               (*(REG32 (TC_BASE + 0x0018)))
#define TC0_RC               (*(REG32 (TC_BASE + 0x001C)))
#define TC0_SR               (*(REG32 (TC_BASE + 0x0020)))
#define TC0_IER              (*(REG32 (TC_BASE + 0x0024)))
#define TC0_IDR              (*(REG32 (TC_BASE + 0x0028)))
#define TC0_IMR              (*(REG32 (TC_BASE + 0x002C)))

#define TC1_CCR              (*(REG32 (TC_BASE + 0x0040)))
#define TC1_CMR              (*(REG32 (TC_BASE + 0x0044)))
#define TC1_RES1             (*(REG32 (TC_BASE + 0x0048)))
#define TC1_RES2             (*(REG32 (TC_BASE + 0x004C)))
#define TC1_CV               (*(REG32 (TC_BASE + 0x0050)))
#define TC1_RA               (*(REG32 (TC_BASE + 0x0054)))
#define TC1_RB               (*(REG32 (TC_BASE + 0x0058)))
#define TC1_RC               (*(REG32 (TC_BASE + 0x005C)))
#define TC1_SR               (*(REG32 (TC_BASE + 0x0060)))
#define TC1_IER              (*(REG32 (TC_BASE + 0x0064)))
#define TC1_IDR              (*(REG32 (TC_BASE + 0x0068)))
#define TC1_IMR              (*(REG32 (TC_BASE + 0x006C)))

#define TC2_CCR              (*(REG32 (TC_BASE + 0x0080)))
#define TC2_CMR              (*(REG32 (TC_BASE + 0x0084)))
#define TC2_RES1             (*(REG32 (TC_BASE + 0x0088)))
#define TC2_RES2             (*(REG32 (TC_BASE + 0x008C)))
#define TC2_CV               (*(REG32 (TC_BASE + 0x0090)))
#define TC2_RA               (*(REG32 (TC_BASE + 0x0094)))
#define TC2_RB               (*(REG32 (TC_BASE + 0x0098)))
#define TC2_RC               (*(REG32 (TC_BASE + 0x009C)))
#define TC2_SR               (*(REG32 (TC_BASE + 0x00A0)))
#define TC2_IER              (*(REG32 (TC_BASE + 0x00A4)))
#define TC2_IDR              (*(REG32 (TC_BASE + 0x00A8)))
#define TC2_IMR              (*(REG32 (TC_BASE + 0x00AC)))

#define TC_BCR               (*(REG32 (TC_BASE + 0x00C0)))
#define TC_BMR               (*(REG32 (TC_BASE + 0x00C4)))


#endif  /* at91x40_h */
