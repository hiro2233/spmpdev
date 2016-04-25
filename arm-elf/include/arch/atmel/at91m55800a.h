#ifndef at91m55800a_h
#define at91m55800a_h
/*******************************************************************************
at91m55800a.h - Register defs for Atmel AT91M55800A

           
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
## APMC - Advanced Power Management Controller
##############################################################################*/

#define APMC_BASE            (0xFFFF4000)

#define APMC_SCER            (*(REG32 (APMC_BASE+0x00)))
#define APMC_SCDR            (*(REG32 (APMC_BASE+0x04)))
#define APMC_SCSR            (*(REG32 (APMC_BASE+0x08)))
#define APMC_PCER            (*(REG32 (APMC_BASE+0x10)))
#define APMC_PCDR            (*(REG32 (APMC_BASE+0x14)))
#define APMC_PCSR            (*(REG32 (APMC_BASE+0x18)))
#define APMC_CGMR            (*(REG32 (APMC_BASE+0x20)))
#define APMC_PCR             (*(REG32 (APMC_BASE+0x28)))
#define APMC_PMR             (*(REG32 (APMC_BASE+0x2C)))
#define APMC_SR              (*(REG32 (APMC_BASE+0x30)))
#define APMC_IER             (*(REG32 (APMC_BASE+0x34)))
#define APMC_IDR             (*(REG32 (APMC_BASE+0x38)))
#define APMC_IMR             (*(REG32 (APMC_BASE+0x3C)))


/*##############################################################################
## RTC - Real-time Clock
##############################################################################*/

#define RTC_BASE          (0xFFFB8000)

#define RTC_MR               (*(REG32 (RTC_BASE+0x00)))
#define RTC_HMR              (*(REG32 (RTC_BASE+0x04)))
#define RTC_TIMR             (*(REG32 (RTC_BASE+0x08)))
#define RTC_CALR             (*(REG32 (RTC_BASE+0x0C)))
#define RTC_TAR              (*(REG32 (RTC_BASE+0x10)))
#define RTC_CAR              (*(REG32 (RTC_BASE+0x14)))
#define RTC_SR               (*(REG32 (RTC_BASE+0x18)))
#define RTC_SCR              (*(REG32 (RTC_BASE+0x1C)))
#define RTC_IER              (*(REG32 (RTC_BASE+0x20)))
#define RTC_IDR              (*(REG32 (RTC_BASE+0x24)))
#define RTC_IMR              (*(REG32 (RTC_BASE+0x28)))
#define RTC_VER              (*(REG32 (RTC_BASE+0x2C)))


/*##############################################################################
## WD - Watchdog
##############################################################################*/

#define WD_BASE              (0xFFFF8000)

#define WD_OMR               (*(REG32 (WD_BASE+0x00))) 
#define WD_CMR               (*(REG32 (WD_BASE+0x04))) 
#define WD_CR                (*(REG32 (WD_BASE+0x08))) 
#define WD_SR                (*(REG32 (WD_BASE+0x0C))) 


/*##############################################################################
## AI - ADVANCED INTERRUPT CONTROLLER
##############################################################################*/

#define AIC_BASE             (0xFFFFF000)

#define AIC_SMR00_FIQ        (*(REG32 (AIC_BASE+0x00)))
#define AIC_SMR01_SWI        (*(REG32 (AIC_BASE+0x04)))
#define AIC_SMR02_USR0       (*(REG32 (AIC_BASE+0x08)))
#define AIC_SMR03_USR1       (*(REG32 (AIC_BASE+0x0C)))
#define AIC_SMR04_USR2       (*(REG32 (AIC_BASE+0x10)))
#define AIC_SMR05_SPI        (*(REG32 (AIC_BASE+0x14)))
#define AIC_SMR06_TC0        (*(REG32 (AIC_BASE+0x18)))
#define AIC_SMR07_TC1        (*(REG32 (AIC_BASE+0x1C)))
#define AIC_SMR08_TC2        (*(REG32 (AIC_BASE+0x20)))
#define AIC_SMR09_TC3        (*(REG32 (AIC_BASE+0x24)))
#define AIC_SMR10_TC4        (*(REG32 (AIC_BASE+0x28)))
#define AIC_SMR11_TC5        (*(REG32 (AIC_BASE+0x2C)))
#define AIC_SMR12_WD         (*(REG32 (AIC_BASE+0x30)))
#define AIC_SMR13_PIOA       (*(REG32 (AIC_BASE+0x34)))
#define AIC_SMR14_PIOB       (*(REG32 (AIC_BASE+0x38)))
#define AIC_SMR15_ADC0       (*(REG32 (AIC_BASE+0x3C)))
#define AIC_SMR16_ADC1       (*(REG32 (AIC_BASE+0x40)))
#define AIC_SMR17_DAC0       (*(REG32 (AIC_BASE+0x44)))
#define AIC_SMR18_DAC1       (*(REG32 (AIC_BASE+0x48)))
#define AIC_SMR19_RTC        (*(REG32 (AIC_BASE+0x4C)))
#define AIC_SMR20_APMC       (*(REG32 (AIC_BASE+0x50)))
#define AIC_SMR21_RES1       (*(REG32 (AIC_BASE+0x54)))
#define AIC_SMR22_RES2       (*(REG32 (AIC_BASE+0x58)))
#define AIC_SMR23_SLOW_CLK   (*(REG32 (AIC_BASE+0x5C)))
#define AIC_SMR24_IRQ5       (*(REG32 (AIC_BASE+0x60)))
#define AIC_SMR25_IRQ4       (*(REG32 (AIC_BASE+0x64)))
#define AIC_SMR26_IRQ3       (*(REG32 (AIC_BASE+0x68)))
#define AIC_SMR27_IRQ2       (*(REG32 (AIC_BASE+0x6C)))
#define AIC_SMR28_IRQ1       (*(REG32 (AIC_BASE+0x70)))
#define AIC_SMR29_IRQ0       (*(REG32 (AIC_BASE+0x74)))
#define AIC_SMR30_COMM_RX    (*(REG32 (AIC_BASE+0x78)))
#define AIC_SMR31_COMM_TX    (*(REG32 (AIC_BASE+0x7C)))

#define AIC_SVR00_FIQ        (*(REG32 (AIC_BASE+0x80)))
#define AIC_SVR01_SWI        (*(REG32 (AIC_BASE+0x84)))
#define AIC_SVR02_USR0       (*(REG32 (AIC_BASE+0x88)))
#define AIC_SVR03_USR1       (*(REG32 (AIC_BASE+0x8C)))
#define AIC_SVR04_USR2       (*(REG32 (AIC_BASE+0x90)))
#define AIC_SVR05_SPI        (*(REG32 (AIC_BASE+0x94)))
#define AIC_SVR06_TC0        (*(REG32 (AIC_BASE+0x98)))
#define AIC_SVR07_TC1        (*(REG32 (AIC_BASE+0x9C)))
#define AIC_SVR08_TC2        (*(REG32 (AIC_BASE+0xA0)))
#define AIC_SVR09_TC3        (*(REG32 (AIC_BASE+0xA4)))
#define AIC_SVR10_TC4        (*(REG32 (AIC_BASE+0xA8)))
#define AIC_SVR11_TC5        (*(REG32 (AIC_BASE+0xAC)))
#define AIC_SVR12_WD         (*(REG32 (AIC_BASE+0xB0)))
#define AIC_SVR13_PIOA       (*(REG32 (AIC_BASE+0xB4)))
#define AIC_SVR14_PIOB       (*(REG32 (AIC_BASE+0xB8)))
#define AIC_SVR15_ADC0       (*(REG32 (AIC_BASE+0xBC)))
#define AIC_SVR16_ADC1       (*(REG32 (AIC_BASE+0xC0)))
#define AIC_SVR17_DAC0       (*(REG32 (AIC_BASE+0xC4)))
#define AIC_SVR18_DAC1       (*(REG32 (AIC_BASE+0xC8)))
#define AIC_SVR19_RTC        (*(REG32 (AIC_BASE+0xCC)))
#define AIC_SVR20_APMC       (*(REG32 (AIC_BASE+0xD0)))
#define AIC_SVR21_RES1       (*(REG32 (AIC_BASE+0xD4)))
#define AIC_SVR22_RES2       (*(REG32 (AIC_BASE+0xD8)))
#define AIC_SVR23_SLOW_CLK   (*(REG32 (AIC_BASE+0xDC)))
#define AIC_SVR24_IRQ5       (*(REG32 (AIC_BASE+0xE0)))
#define AIC_SVR25_IRQ4       (*(REG32 (AIC_BASE+0xE4)))
#define AIC_SVR26_IRQ3       (*(REG32 (AIC_BASE+0xE8)))
#define AIC_SVR27_IRQ2       (*(REG32 (AIC_BASE+0xEC)))
#define AIC_SVR28_IRQ1       (*(REG32 (AIC_BASE+0xF0)))
#define AIC_SVR29_IRQ0       (*(REG32 (AIC_BASE+0xF4)))
#define AIC_SVR30_COMM_RX    (*(REG32 (AIC_BASE+0xF8)))
#define AIC_SVR31_COMM_TX    (*(REG32 (AIC_BASE+0xFC)))

#define AIC_IVR              (*(REG32 (AIC_BASE+0x0100)))
#define AIC_FVR              (*(REG32 (AIC_BASE+0x0104)))
#define AIC_ISR              (*(REG32 (AIC_BASE+0x0108)))
#define AIC_IPR              (*(REG32 (AIC_BASE+0x010C)))

#define AIC_IMR              (*(REG32 (AIC_BASE+0x0110)))
#define AIC_CISR             (*(REG32 (AIC_BASE+0x0114)))
#define AIC_RES1             (*(REG32 (AIC_BASE+0x0118)))
#define AIC_RES2             (*(REG32 (AIC_BASE+0x011C)))

#define AIC_IECR             (*(REG32 (AIC_BASE+0x0120)))
#define AIC_IDCR             (*(REG32 (AIC_BASE+0x0124)))
#define AIC_ICCR             (*(REG32 (AIC_BASE+0x0128)))
#define AIC_ISCR             (*(REG32 (AIC_BASE+0x012C)))

#define AIC_EOICR            (*(REG32 (AIC_BASE+0x0130)))
#define AIC_SPU              (*(REG32 (AIC_BASE+0x0134)))

#define   AIC_INT_MASK_FIQ      0x00000001
#define   AIC_INT_MASK_SWI      0x00000002
#define   AIC_INT_MASK_USR0     0x00000004
#define   AIC_INT_MASK_USR1     0x00000008
#define   AIC_INT_MASK_USR2     0x00000010
#define   AIC_INT_MASK_SPI      0x00000020
#define   AIC_INT_MASK_TC0      0x00000040
#define   AIC_INT_MASK_TC1      0x00000080
#define   AIC_INT_MASK_TC2      0x00000100
#define   AIC_INT_MASK_TC3      0x00000200
#define   AIC_INT_MASK_TC4      0x00000400
#define   AIC_INT_MASK_TC5      0x00000800
#define   AIC_INT_MASK_WD       0x00001000
#define   AIC_INT_MASK_PIOA     0x00002000
#define   AIC_INT_MASK_PIOB     0x00004000
#define   AIC_INT_MASK_ADC0     0x00008000
#define   AIC_INT_MASK_ADC1     0x00010000
#define   AIC_INT_MASK_DAC0     0x00020000
#define   AIC_INT_MASK_DAC1     0x00040000
#define   AIC_INT_MASK_RTC      0x00080000
#define   AIC_INT_MASK_APMC     0x00100000
#define   AIC_INT_MASK_RES1     0x00200000
#define   AIC_INT_MASK_RES2     0x00400000
#define   AIC_INT_MASK_SLOW_CLK 0x00800000
#define   AIC_INT_MASK_IRQ5     0x01000000
#define   AIC_INT_MASK_IRQ4     0x02000000
#define   AIC_INT_MASK_IRQ3     0x04000000
#define   AIC_INT_MASK_IRQ2     0x08000000
#define   AIC_INT_MASK_IRQ1     0x10000000
#define   AIC_INT_MASK_IRQ0     0x20000000
#define   AIC_INT_MASK_COMM_RX  0x40000000
#define   AIC_INT_MASK_COMM_TX  0x80000000


/*##############################################################################
## PIO - PARALLEL I/Os
##############################################################################*/

#define PIOA_BASE            (0xFFFEC000)
#define PIOB_BASE            (0xFFFF0000)

#define PIOA_PER             (*(REG32 (PIOA_BASE+0x00)))
#define PIOA_PDR             (*(REG32 (PIOA_BASE+0x04)))
#define PIOA_PSR             (*(REG32 (PIOA_BASE+0x08)))
#define PIOA_OER             (*(REG32 (PIOA_BASE+0x10)))
#define PIOA_ODR             (*(REG32 (PIOA_BASE+0x14)))
#define PIOA_OSR             (*(REG32 (PIOA_BASE+0x18)))
#define PIOA_IFER            (*(REG32 (PIOA_BASE+0x20)))
#define PIOA_IFDR            (*(REG32 (PIOA_BASE+0x24)))
#define PIOA_IFSR            (*(REG32 (PIOA_BASE+0x28)))
#define PIOA_SODR            (*(REG32 (PIOA_BASE+0x30)))
#define PIOA_CODR            (*(REG32 (PIOA_BASE+0x34)))
#define PIOA_ODSR            (*(REG32 (PIOA_BASE+0x38)))
#define PIOA_PDSR            (*(REG32 (PIOA_BASE+0x3C)))
#define PIOA_IER             (*(REG32 (PIOA_BASE+0x40)))
#define PIOA_IDR             (*(REG32 (PIOA_BASE+0x44)))
#define PIOA_IMR             (*(REG32 (PIOA_BASE+0x48)))
#define PIOA_ISR             (*(REG32 (PIOA_BASE+0x4C)))
#define PIOA_MDER            (*(REG32 (PIOA_BASE+0x50)))
#define PIOA_MDDR            (*(REG32 (PIOA_BASE+0x54)))
#define PIOA_MDSR            (*(REG32 (PIOA_BASE+0x58)))

#define PIOB_PER             (*(REG32 (PIOB_BASE+0x00)))
#define PIOB_PDR             (*(REG32 (PIOB_BASE+0x04)))
#define PIOB_PSR             (*(REG32 (PIOB_BASE+0x08)))
#define PIOB_OER             (*(REG32 (PIOB_BASE+0x10)))
#define PIOB_ODR             (*(REG32 (PIOB_BASE+0x14)))
#define PIOB_OSR             (*(REG32 (PIOB_BASE+0x18)))
#define PIOB_IFER            (*(REG32 (PIOB_BASE+0x20)))
#define PIOB_IFDR            (*(REG32 (PIOB_BASE+0x24)))
#define PIOB_IFSR            (*(REG32 (PIOB_BASE+0x28)))
#define PIOB_SODR            (*(REG32 (PIOB_BASE+0x30)))
#define PIOB_CODR            (*(REG32 (PIOB_BASE+0x34)))
#define PIOB_ODSR            (*(REG32 (PIOB_BASE+0x38)))
#define PIOB_PDSR            (*(REG32 (PIOB_BASE+0x3C)))
#define PIOB_IER             (*(REG32 (PIOB_BASE+0x40)))
#define PIOB_IDR             (*(REG32 (PIOB_BASE+0x44)))
#define PIOB_IMR             (*(REG32 (PIOB_BASE+0x48)))
#define PIOB_ISR             (*(REG32 (PIOB_BASE+0x4C)))
#define PIOB_MDER            (*(REG32 (PIOB_BASE+0x50)))
#define PIOB_MDDR            (*(REG32 (PIOB_BASE+0x54)))
#define PIOB_MDSR            (*(REG32 (PIOB_BASE+0x58)))


/*##############################################################################
## SF - Special Function Registers
##############################################################################*/

#define SFR_BASE             (0xFFF00000)

#define SF_CIDR              (*(REG32 (SFR_BASE+0x00)))
#define SF_EXID              (*(REG32 (SFR_BASE+0x04)))
#define SF_RSR               (*(REG32 (SFR_BASE+0x08)))
#define SF_PMR               (*(REG32 (SFR_BASE+0x18)))


/*##############################################################################
## USART - Universal Synchronous/Asynchronous Receiver/Transmitter
##############################################################################*/

#define USART0_BASE          (0xFFFC0000)
#define USART1_BASE          (0xFFFC4000)
#define USART2_BASE          (0xFFFC8000)

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

#define US2_CR               (*(REG32 (USART2_BASE+0x00)))
#define US2_MR               (*(REG32 (USART2_BASE+0x04)))
#define US2_IER              (*(REG32 (USART2_BASE+0x08)))
#define US2_IDR              (*(REG32 (USART2_BASE+0x0C)))
#define US2_IMR              (*(REG32 (USART2_BASE+0x10)))
#define US2_CSR              (*(REG32 (USART2_BASE+0x14)))
#define US2_RHR              (*(REG32 (USART2_BASE+0x18)))
#define US2_THR              (*(REG32 (USART2_BASE+0x1C)))
#define US2_BRGR             (*(REG32 (USART2_BASE+0x20)))
#define US2_RTOR             (*(REG32 (USART2_BASE+0x24)))
#define US2_TTGR             (*(REG32 (USART2_BASE+0x28)))
#define US2_RPR              (*(REG32 (USART2_BASE+0x30)))
#define US2_RCR              (*(REG32 (USART2_BASE+0x34)))
#define US2_TPR              (*(REG32 (USART2_BASE+0x38)))
#define US2_TCR              (*(REG32 (USART2_BASE+0x3C)))


/*##############################################################################
## TC - TIMER COUNTER
##############################################################################*/

#define TC_BASE              (0xFFFD0000)

#define TC0_CCR              (*(REG32 (TC_BASE+0x00)))
#define TC0_CMR              (*(REG32 (TC_BASE+0x04)))
#define TC0_RES1             (*(REG32 (TC_BASE+0x08)))
#define TC0_RES2             (*(REG32 (TC_BASE+0x0C)))
#define TC0_CV               (*(REG32 (TC_BASE+0x10)))
#define TC0_RA               (*(REG32 (TC_BASE+0x14)))
#define TC0_RB               (*(REG32 (TC_BASE+0x18)))
#define TC0_RC               (*(REG32 (TC_BASE+0x1C)))
#define TC0_SR               (*(REG32 (TC_BASE+0x20)))
#define TC0_IER              (*(REG32 (TC_BASE+0x24)))
#define TC0_IDR              (*(REG32 (TC_BASE+0x28)))
#define TC0_IMR              (*(REG32 (TC_BASE+0x2C)))

#define TC1_CCR              (*(REG32 (TC_BASE+0x40)))
#define TC1_CMR              (*(REG32 (TC_BASE+0x44)))
#define TC1_RES1             (*(REG32 (TC_BASE+0x48)))
#define TC1_RES2             (*(REG32 (TC_BASE+0x4C)))
#define TC1_CV               (*(REG32 (TC_BASE+0x50)))
#define TC1_RA               (*(REG32 (TC_BASE+0x54)))
#define TC1_RB               (*(REG32 (TC_BASE+0x58)))
#define TC1_RC               (*(REG32 (TC_BASE+0x5C)))
#define TC1_SR               (*(REG32 (TC_BASE+0x60)))
#define TC1_IER              (*(REG32 (TC_BASE+0x64)))
#define TC1_IDR              (*(REG32 (TC_BASE+0x68)))
#define TC1_IMR              (*(REG32 (TC_BASE+0x6C)))

#define TC2_CCR              (*(REG32 (TC_BASE+0x80)))
#define TC2_CMR              (*(REG32 (TC_BASE+0x84)))
#define TC2_RES1             (*(REG32 (TC_BASE+0x88)))
#define TC2_RES2             (*(REG32 (TC_BASE+0x8C)))
#define TC2_CV               (*(REG32 (TC_BASE+0x90)))
#define TC2_RA               (*(REG32 (TC_BASE+0x94)))
#define TC2_RB               (*(REG32 (TC_BASE+0x98)))
#define TC2_RC               (*(REG32 (TC_BASE+0x9C)))
#define TC2_SR               (*(REG32 (TC_BASE+0xA0)))
#define TC2_IER              (*(REG32 (TC_BASE+0xA4)))
#define TC2_IDR              (*(REG32 (TC_BASE+0xA8)))
#define TC2_IMR              (*(REG32 (TC_BASE+0xAC)))

#define TC_BCR               (*(REG32 (TC_BASE+0xC0)))
#define TC_BMR               (*(REG32 (TC_BASE+0xC4)))

/*##############################################################################
## SPI - Serial Peripheral
##############################################################################*/

#define SPI_BASE             (0xFFFBC000)

#define SP_CR                (*(REG32 (SPI_BASE+0x00)))
#define SP_MR                (*(REG32 (SPI_BASE+0x04)))
#define SP_RDR               (*(REG32 (SPI_BASE+0x08)))
#define SP_TDR               (*(REG32 (SPI_BASE+0x0C)))
#define SP_SR                (*(REG32 (SPI_BASE+0x10)))
#define SP_IER               (*(REG32 (SPI_BASE+0x14)))
#define SP_IDR               (*(REG32 (SPI_BASE+0x18)))
#define SP_IMR               (*(REG32 (SPI_BASE+0x1C)))
#define SP_RPR               (*(REG32 (SPI_BASE+0x20)))
#define SP_RCR               (*(REG32 (SPI_BASE+0x24)))
#define SP_TPR               (*(REG32 (SPI_BASE+0x28)))
#define SP_TCR               (*(REG32 (SPI_BASE+0x2C)))
#define SP_CSR0              (*(REG32 (SPI_BASE+0x30)))
#define SP_CSR1              (*(REG32 (SPI_BASE+0x34)))
#define SP_CSR2              (*(REG32 (SPI_BASE+0x38)))
#define SP_CSR3              (*(REG32 (SPI_BASE+0x3C)))


/*##############################################################################
## ADC - Analog-to-digital converter
##############################################################################*/

#define ADC0_BASE            (0xFFFB0000)
#define ADC1_BASE            (0xFFFB4000)

#define ADC0_CR              (*(REG32 (ADC0_BASE+0x00)))
#define ADC0_MR              (*(REG32 (ADC0_BASE+0x04)))
#define ADC0_CHER            (*(REG32 (ADC0_BASE+0x10)))
#define ADC0_CHDR            (*(REG32 (ADC0_BASE+0x14)))
#define ADC0_CHSR            (*(REG32 (ADC0_BASE+0x18)))
#define ADC0_SR              (*(REG32 (ADC0_BASE+0x20)))
#define ADC0_IER             (*(REG32 (ADC0_BASE+0x24)))
#define ADC0_IDR             (*(REG32 (ADC0_BASE+0x28)))
#define ADC0_IMR             (*(REG32 (ADC0_BASE+0x2C)))
#define ADC0_CDR0            (*(REG32 (ADC0_BASE+0x30)))
#define ADC0_CDR1            (*(REG32 (ADC0_BASE+0x34)))
#define ADC0_CDR2            (*(REG32 (ADC0_BASE+0x38)))
#define ADC0_CDR3            (*(REG32 (ADC0_BASE+0x3C)))

#define ADC1_CR              (*(REG32 (ADC1_BASE+0x00)))
#define ADC1_MR              (*(REG32 (ADC1_BASE+0x04)))
#define ADC1_CHER            (*(REG32 (ADC1_BASE+0x10)))
#define ADC1_CHDR            (*(REG32 (ADC1_BASE+0x14)))
#define ADC1_CHSR            (*(REG32 (ADC1_BASE+0x18)))
#define ADC1_SR              (*(REG32 (ADC1_BASE+0x20)))
#define ADC1_IER             (*(REG32 (ADC1_BASE+0x24)))
#define ADC1_IDR             (*(REG32 (ADC1_BASE+0x28)))
#define ADC1_IMR             (*(REG32 (ADC1_BASE+0x2C)))
#define ADC1_CDR0            (*(REG32 (ADC1_BASE+0x30)))
#define ADC1_CDR1            (*(REG32 (ADC1_BASE+0x34)))
#define ADC1_CDR2            (*(REG32 (ADC1_BASE+0x38)))
#define ADC1_CDR3            (*(REG32 (ADC1_BASE+0x3C)))


/*##############################################################################
## DAC - Digital-to-analog converter
##############################################################################*/

#define DAC0_BASE            (0xFFFA8000)
#define DAC1_BASE            (0xFFFAC000)

#define DAC0_CR              (*(REG32 (DAC0_BASE+0x00)))
#define DAC0_MR              (*(REG32 (DAC0_BASE+0x04)))
#define DAC0_DHR             (*(REG32 (DAC0_BASE+0x08)))
#define DAC0_DOR             (*(REG32 (DAC0_BASE+0x0C)))
#define DAC0_SR              (*(REG32 (DAC0_BASE+0x10)))
#define DAC0_IER             (*(REG32 (DAC0_BASE+0x14)))
#define DAC0_IDR             (*(REG32 (DAC0_BASE+0x18)))
#define DAC0_IMR             (*(REG32 (DAC0_BASE+0x1C)))

#define DAC1_CR              (*(REG32 (DAC1_BASE+0x00)))
#define DAC1_MR              (*(REG32 (DAC1_BASE+0x04)))
#define DAC1_DHR             (*(REG32 (DAC1_BASE+0x08)))
#define DAC1_DOR             (*(REG32 (DAC1_BASE+0x0C)))
#define DAC1_SR              (*(REG32 (DAC1_BASE+0x10)))
#define DAC1_IER             (*(REG32 (DAC1_BASE+0x14)))
#define DAC1_IDR             (*(REG32 (DAC1_BASE+0x18)))
#define DAC1_IMR             (*(REG32 (DAC1_BASE+0x1C)))


#endif  /* at91m55800a_h */
