#ifndef mc9328mx1_h
#define mc9328mx1_h
/*******************************************************************************
mc9328mx1.h - Register defs for Motorola MC9328MX1 (Dragonball MX1)
 

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


#define RESET_RSR                  (REG32 (0x0021B800))         /* Reset Source Register */

#define SYSCTRL_SIDR               (REG32 (0x0021B804))         /* Silicon ID Register */
#define SYSCTRL_FMCR               (REG32 (0x0021B808))         /* Function Multiplexing Control Register */
#define SYSCTRL_GPCR               (REG32 (0x0021B80C))         /* Global Peripheral Control Register */

#define AITC_INTCNTL               (REG32 (0x00223000))         /* Interrupt Control Register */
#define AITC_NIMASK                (REG32 (0x00223004))         /* Normal Interrupt Mask Register */
#define AITC_INTENNUM              (REG32 (0x00223008))         /* Interrupt Enable Number Register */
#define AITC_INTDISNUM             (REG32 (0x0022300C))         /* Interrupt Disable Number Register */
#define AITC_INTENABLEH            (REG32 (0x00223010))         /* Interrupt Enable Register High */
#define AITC_INTENABLEL            (REG32 (0x00223014))         /* Interrupt Enable Register Low */
#define AITC_INTTYPEH              (REG32 (0x00223018))         /* Interrupt Type Register High */
#define AITC_INTTYPEL              (REG32 (0x0022301C))         /* Interrupt Type Register Low */
#define AITC_NIPRIORITY7           (REG32 (0x00223020))         /* Normal Interrupt Priority Level Register 7 */
#define AITC_NIPRIORITY6           (REG32 (0x00223024))         /* Normal Interrupt Priority Level Register 6 */
#define AITC_NIPRIORITY5           (REG32 (0x00223028))         /* Normal Interrupt Priority Level Register 5 */
#define AITC_NIPRIORITY4           (REG32 (0x0022302C))         /* Normal Interrupt Priority Level Register 4 */
#define AITC_NIPRIORITY3           (REG32 (0x00223030))         /* Normal Interrupt Priority Level Register 3 */
#define AITC_NIPRIORITY2           (REG32 (0x00223034))         /* Normal Interrupt Priority Level Register 2 */
#define AITC_NIPRIORITY1           (REG32 (0x00223038))         /* Normal Interrupt Priority Level Register 1 */
#define AITC_NIPRIORITY0           (REG32 (0x0022303C))         /* Normal Interrupt Priority Level Register 0 */
#define AITC_NIVECSR               (REG32 (0x00223040))         /* Normal Interrupt Vector and Status Register */
#define AITC_FIVECSR               (REG32 (0x00223044))         /* Fast Interrupt Vector and Status Register */
#define AITC_INTSRCH               (REG32 (0x00223048))         /* Interrupt Source Register High */
#define AITC_INTSRCL               (REG32 (0x0022304C))         /* Interrupt Source Register Low */
#define AITC_INTFRCH               (REG32 (0x00223050))         /* Interrupt Force Register High */
#define AITC_INTFRCL               (REG32 (0x00223054))         /* Interrupt Force Register Low */
#define AITC_NIPNDH                (REG32 (0x00223058))         /* Normal Interrupt Pending Register High */
#define AITC_NIPNDL                (REG32 (0x0022305C))         /* Normal Interrupt Pending Register Low */
#define AITC_FIPNDH                (REG32 (0x00223060))         /* Fast Interrupt Pending Register High */
#define AITC_FIPNDL                (REG32 (0x00223064))         /* Fast Interrupt Pending Register Low */

#define EIM_CS0U                   (REG32 (0x00220000))         /* Chip Select 0 Upper Control Register */
#define EIM_CS0L                   (REG32 (0x00220004))         /* Chip Select 0 Lower Control Register */
#define EIM_CS1U                   (REG32 (0x00220008))         /* Chip Select 1 Upper Control Register */
#define EIM_CS1L                   (REG32 (0x0022000C))         /* Chip Select 1 Lower Control Register */
#define EIM_CS2U                   (REG32 (0x00220010))         /* Chip Select 2 Upper Control Register */
#define EIM_CS2L                   (REG32 (0x00220014))         /* Chip Select 2 Lower Control Register */
#define EIM_CS3U                   (REG32 (0x00220018))         /* Chip Select 3 Upper Control Register */
#define EIM_CS3L                   (REG32 (0x0022001C))         /* Chip Select 3 Lower Control Register */
#define EIM_CS4U                   (REG32 (0x00220020))         /* Chip Select 4 Upper Control Register */
#define EIM_CS4L                   (REG32 (0x00220024))         /* Chip Select 4 Lower Control Register */
#define EIM_CS5U                   (REG32 (0x00220028))         /* Chip Select 5 Upper Control Register */
#define EIM_CS5L                   (REG32 (0x0022002C))         /* Chip Select 5 Lower Control Register */
#define EIM_WEIM                   (REG32 (0x00220030))         /* WEIM Configuration Register */

#define PLL_CSCR                   (REG32 (0x0021B000))         /* Clock Source Control Register */
#define PLL_MPCTL0                 (REG32 (0x0021B004))         /* MCU PLL Control Register 0 */
#define PLL_MPCTL1                 (REG32 (0x0021B008))         /* MCU PLL and System Clock Control Register 1 */
#define PLL_UPCTL0                 (REG32 (0x0021B00C))         /* USB PLL Control Register 0 */
#define PLL_UPCTL1                 (REG32 (0x0021B010))         /* USB PLL Control Register 1 */
#define PLL_PCDR                   (REG32 (0x0021B020))         /* Peripheral Clock Divider Register */

#define DMAC_DCR                   (REG32 (0x00209000))         /* DMA Control Register */
#define DMAC_DISR                  (REG32 (0x00209004))         /* DMA Interrupt Status Register */
#define DMAC_DIMR                  (REG32 (0x00209008))         /* DMA Interrupt Mask Register */
#define DMAC_DBTOSR                (REG32 (0x0020900C))         /* DMA Burst Time-Out Status Register */
#define DMAC_DRTOSR                (REG32 (0x00209010))         /* DMA Request Time-Out Status Register */
#define DMAC_DSESR                 (REG32 (0x00209014))         /* DMA Transfer Error Status Register */
#define DMAC_DBOSR                 (REG32 (0x00209018))         /* DMA Buffer Overflow Status Register */
#define DMAC_DBTOCR                (REG32 (0x0020901C))         /* DMA Burst Time-Out Control Register */
#define DMAC_WSRA                  (REG32 (0x00209040))         /* W-Size Register A */
#define DMAC_XSRA                  (REG32 (0x00209044))         /* X-Size Register A */
#define DMAC_YSRA                  (REG32 (0x00209048))         /* Y-Size Register A */
#define DMAC_WSRB                  (REG32 (0x0020904C))         /* W-Size Register B */
#define DMAC_XSRB                  (REG32 (0x00209050))         /* X-Size Register B */
#define DMAC_YSRB                  (REG32 (0x00209054))         /* Y-Size Register B */
#define DMAC0_SAR                  (REG32 (0x00209080))         /* Channel 0 Source Address Register */
#define DMAC0_DAR                  (REG32 (0x00209084))         /* Channel 0 Destination Address Register */
#define DMAC0_CNTR                 (REG32 (0x00209088))         /* Channel 0 Count Register */
#define DMAC0_CCR                  (REG32 (0x0020908C))         /* Channel 0 Control Register */
#define DMAC0_RSSR                 (REG32 (0x00209090))         /* Channel 0 Request Source Select Register */
#define DMAC0_BLR                  (REG32 (0x00209094))         /* Channel 0 Burst Length Register */
#define DMAC0_RTOR                 (REG32 (0x00209098))         /* Channel 0 Request Time-Out Register */
#define DMAC0_BUCR                 (REG32 (0x00209098))         /* Channel 0 Bus Utilization Control Register */
#define DMAC1_SAR                  (REG32 (0x002090C0))         /* Channel 1 Source Address Register */
#define DMAC1_DAR                  (REG32 (0x002090C4))         /* Channel 1 Destination Address Register */
#define DMAC1_CNTR                 (REG32 (0x002090C8))         /* Channel 1 Count Register */
#define DMAC1_CCR                  (REG32 (0x002090CC))         /* Channel 1 Control Register */
#define DMAC1_RSSR                 (REG32 (0x002090D0))         /* Channel 1 Request Source Select Register */
#define DMAC1_BLR                  (REG32 (0x002090D4))         /* Channel 1 Burst Length Register */
#define DMAC1_RTOR                 (REG32 (0x002090D8))         /* Channel 1 Request Time-Out Register */
#define DMAC1_BUCR                 (REG32 (0x002090D8))         /* Channel 1 Bus Utilization Control Register */
#define DMAC2_SAR                  (REG32 (0x00209100))         /* Channel 2 Source Address Register */
#define DMAC2_DAR                  (REG32 (0x00209104))         /* Channel 2 Destination Address Register */
#define DMAC2_CNTR                 (REG32 (0x00209108))         /* Channel 2 Count Register */
#define DMAC2_CCR                  (REG32 (0x0020910C))         /* Channel 2 Control Register */
#define DMAC2_RSSR                 (REG32 (0x00209110))         /* Channel 2 Request Source Select Register */
#define DMAC2_BLR                  (REG32 (0x00209114))         /* Channel 2 Burst Length Register */
#define DMAC2_RTOR                 (REG32 (0x00209118))         /* Channel 2 Request Time-Out Register */
#define DMAC2_BUCR                 (REG32 (0x00209118))         /* Channel 2 Bus Utilization Control Register */
#define DMAC3_SAR                  (REG32 (0x00209140))         /* Channel 3 Source Address Register */
#define DMAC3_DAR                  (REG32 (0x00209144))         /* Channel 3 Destination Address Register */
#define DMAC3_CNTR                 (REG32 (0x00209148))         /* Channel 3 Count Register */
#define DMAC3_CCR                  (REG32 (0x0020914C))         /* Channel 3 Control Register */
#define DMAC3_RSSR                 (REG32 (0x00209150))         /* Channel 3 Request Source Select Register */
#define DMAC3_BLR                  (REG32 (0x00209154))         /* Channel 3 Burst Length Register */
#define DMAC3_RTOR                 (REG32 (0x00209158))         /* Channel 3 Request Time-Out Register */
#define DMAC3_BUCR                 (REG32 (0x00209158))         /* Channel 3 Bus Utilization Control Register */
#define DMAC4_SAR                  (REG32 (0x00209180))         /* Channel 4 Source Address Register */
#define DMAC4_DAR                  (REG32 (0x00209184))         /* Channel 4 Destination Address Register */
#define DMAC4_CNTR                 (REG32 (0x00209188))         /* Channel 4 Count Register */
#define DMAC4_CCR                  (REG32 (0x0020918C))         /* Channel 4 Control Register */
#define DMAC4_RSSR                 (REG32 (0x00209190))         /* Channel 4 Request Source Select Register */
#define DMAC4_BLR                  (REG32 (0x00209194))         /* Channel 4 Burst Length Register */
#define DMAC4_RTOR                 (REG32 (0x00209198))         /* Channel 4 Request Time-Out Register */
#define DMAC4_BUCR                 (REG32 (0x00209198))         /* Channel 4 Bus Utilization Control Register */
#define DMAC5_SAR                  (REG32 (0x002091C0))         /* Channel 5 Source Address Register */
#define DMAC5_DAR                  (REG32 (0x002091C4))         /* Channel 5 Destination Address Register */
#define DMAC5_CNTR                 (REG32 (0x002091C8))         /* Channel 5 Count Register */
#define DMAC5_CCR                  (REG32 (0x002091CC))         /* Channel 5 Control Register */
#define DMAC5_RSSR                 (REG32 (0x002091D0))         /* Channel 5 Request Source Select Register */
#define DMAC5_BLR                  (REG32 (0x002091D4))         /* Channel 5 Burst Length Register */
#define DMAC5_RTOR                 (REG32 (0x002091D8))         /* Channel 5 Request Time-Out Register */
#define DMAC5_BUCR                 (REG32 (0x002091D8))         /* Channel 5 Bus Utilization Control Register */
#define DMAC6_SAR                  (REG32 (0x00209200))         /* Channel 6 Source Address Register */
#define DMAC6_DAR                  (REG32 (0x00209204))         /* Channel 6 Destination Address Register */
#define DMAC6_CNTR                 (REG32 (0x00209208))         /* Channel 6 Count Register */
#define DMAC6_CCR                  (REG32 (0x0020920C))         /* Channel 6 Control Register */
#define DMAC6_RSSR                 (REG32 (0x00209210))         /* Channel 6 Request Source Select Register */
#define DMAC6_BLR                  (REG32 (0x00209214))         /* Channel 6 Burst Length Register */
#define DMAC6_RTOR                 (REG32 (0x00209218))         /* Channel 6 Request Time-Out Register */
#define DMAC6_BUCR                 (REG32 (0x00209218))         /* Channel 6 Bus Utilization Control Register */
#define DMAC7_SAR                  (REG32 (0x00209240))         /* Channel 7 Source Address Register */
#define DMAC7_DAR                  (REG32 (0x00209244))         /* Channel 7 Destination Address Register */
#define DMAC7_CNTR                 (REG32 (0x00209248))         /* Channel 7 Count Register */
#define DMAC7_CCR                  (REG32 (0x0020924C))         /* Channel 7 Control Register */
#define DMAC7_RSSR                 (REG32 (0x00209250))         /* Channel 7 Request Source Select Register */
#define DMAC7_BLR                  (REG32 (0x00209254))         /* Channel 7 Burst Length Register */
#define DMAC7_RTOR                 (REG32 (0x00209258))         /* Channel 7 Request Time-Out Register */
#define DMAC7_BUCR                 (REG32 (0x00209258))         /* Channel 7 Bus Utilization Control Register */
#define DMAC8_SAR                  (REG32 (0x00209280))         /* Channel 8 Source Address Register */
#define DMAC8_DAR                  (REG32 (0x00209284))         /* Channel 8 Destination Address Register */
#define DMAC8_CNTR                 (REG32 (0x00209288))         /* Channel 8 Count Register */
#define DMAC8_CCR                  (REG32 (0x0020928C))         /* Channel 8 Control Register */
#define DMAC8_RSSR                 (REG32 (0x00209290))         /* Channel 8 Request Source Select Register */
#define DMAC8_BLR                  (REG32 (0x00209294))         /* Channel 8 Burst Length Register */
#define DMAC8_RTOR                 (REG32 (0x00209298))         /* Channel 8 Request Time-Out Register */
#define DMAC8_BUCR                 (REG32 (0x00209298))         /* Channel 8 Bus Utilization Control Register */
#define DMAC9_SAR                  (REG32 (0x002092C0))         /* Channel 9 Source Address Register */
#define DMAC9_DAR                  (REG32 (0x002092C4))         /* Channel 9 Destination Address Register */
#define DMAC9_CNTR                 (REG32 (0x002092C8))         /* Channel 9 Count Register */
#define DMAC9_CCR                  (REG32 (0x002092CC))         /* Channel 9 Control Register */
#define DMAC9_RSSR                 (REG32 (0x002092D0))         /* Channel 9 Request Source Select Register */
#define DMAC9_BLR                  (REG32 (0x002092D4))         /* Channel 9 Burst Length Register */
#define DMAC9_RTOR                 (REG32 (0x002092D8))         /* Channel 9 Request Time-Out Register */
#define DMAC9_BUCR                 (REG32 (0x002092D8))         /* Channel 9 Bus Utilization Control Register */
#define DMAC10_SAR                 (REG32 (0x00209300))         /* Channel 10 Source Address Register */
#define DMAC10_DAR                 (REG32 (0x00209304))         /* Channel 10 Destination Address Register */
#define DMAC10_CNTR                (REG32 (0x00209308))         /* Channel 10 Count Register */
#define DMAC10_CCR                 (REG32 (0x0020930C))         /* Channel 10 Control Register */
#define DMAC10_RSSR                (REG32 (0x00209310))         /* Channel 10 Request Source Select Register */
#define DMAC10_BLR                 (REG32 (0x00209314))         /* Channel 10 Burst Length Register */
#define DMAC10_RTO                 (REG32 (0x00209318))         /* Channel 10 Request Time-Out Register */
#define DMAC10_BUCR                (REG32 (0x00209318))         /* Channel 10 Bus Utilization Control Register */
#define DMAC_TCR                   (REG32 (0x00209340))         /* Test Control Register */
#define DMAC_TFIFOAR               (REG32 (0x00209344))         /* Test FIFO A Register */
#define DMAC_TDRR                  (REG32 (0x00209348))         /* Test DMA Request Register */
#define DMAC_TDIPR                 (REG32 (0x0020934C))         /* Test DMA In Progress Register */
#define DMAC_TFIFOBR               (REG32 (0x00209350))         /* Test FIFO B Register */

#define WD_WCR                     (REG32 (0x00201000))         /* Watchdog Control Register */
#define WD_WSR                     (REG32 (0x00201004))         /* Watchdog Service Register */
#define WD_WSTR                    (REG32 (0x00201008))         /* Watchdog Status Register */

#define ASP_ASP_PADFIFO            (REG32 (0x00215000))         /* Pen Sample FIFO */
#define ASP_ASP_VADFIFO            (REG32 (0x00215004))         /* Voice ADC Register */
#define ASP_ASP_VDAFIFO            (REG32 (0x00215008))         /* Voice DAC Register */
#define ASP_ASP_VADCOEF            (REG32 (0x0021500C))         /* Voice ADC FIR Coefficients RAM */
#define ASP_ASP_ACNTLCR            (REG32 (0x00215010))         /* Control Register */
#define ASP_ASP_PSMPLRG            (REG32 (0x00215014))         /* Pen A/D Sample Rate Control Register */
#define ASP_ASP_ICNTLR             (REG32 (0x00215018))         /* Interrupt Control Register */
#define ASP_ASP_ISTATR             (REG32 (0x0021501C))         /* Interrupt/Error Status Register */
#define ASP_ASP_VADGAIN            (REG32 (0x00215020))         /* Voice ADC Control Register */
#define ASP_ASP_VDAGAIN            (REG32 (0x00215024))         /* Voice DAC Control Register */
#define ASP_ASP_VDACOEF            (REG32 (0x00215028))         /* Voice DAC FIR Coefficients RAM */
#define ASP_ASP_CLKDIV             (REG32 (0x0021502C))         /* Clock Divide Register */
#define ASP_ASP_CMPCNTL            (REG32 (0x00215030))         /* Compare Control Register */

#define BTA_COMMAND                (REG32 (0x00216000))         /* Command Register */
#define BTA_STATUS                 (REG32 (0x00216000))         /* Status Register */
#define BTA_PACKET_HEADER          (REG32 (0x00216004))         /* Packet Header Register */
#define BTA_PAYLOAD_HEADER         (REG32 (0x00216008))         /* Payload Header Register */
#define BTA_NATIVE_COUNT           (REG32 (0x0021600C))         /* Native Count Register */
#define BTA_ESTIMATED_COUNT        (REG32 (0x00216010))         /* Estimated Count Register */
#define BTA_OFFSET_COUNT           (REG32 (0x00216014))         /* Offset Count Register */
#define BTA_NATIVECLK_LOW          (REG32 (0x00216018))         /* Native Clock Low Register */
#define BTA_NATIVECLK_HIGH         (REG32 (0x0021601C))         /* Native Clock High Register */
#define BTA_ESTIMATED_CLK_LOW      (REG32 (0x00216020))         /* Estimated Clock Low Register */
#define BTA_ESTIMATED_CLK_HIGH     (REG32 (0x00216024))         /* Estimated Clock High Register */
#define BTA_OFFSET_CLK_LOW         (REG32 (0x00216028))         /* Offset Clock Low Register */
#define BTA_OFFSET_CLK_HIGH        (REG32 (0x0021602C))         /* Offset Clock High Register */
#define BTA_HECCRC_CONTROL         (REG32 (0x00216030))         /* HECCRC Control Register */
#define BTA_WHITE_CONTROL          (REG32 (0x00216034))         /* White Control Register */
#define BTA_ENCRYPTION_CONTROL_X13 (REG32 (0x00216038))         /* Encryption Control X13 Register */
#define BTA_CORRELATION_TIME_SETUP (REG32 (0x00216040))         /* Correlation Time Setup Register */
#define BTA_CORRELATION_TIME_STAMP (REG32 (0x00216040))         /* Correlation Time Stamp Register */
#define BTA_RF_GPO                 (REG32 (0x00216048))         /* RF GPO Register */
#define BTA_PWM_RSSI               (REG32 (0x0021604C))         /* PWM Received Signal Strength Indicator Register */
#define BTA_TIME_A_B               (REG32 (0x00216050))         /* Time A & B Register */
#define BTA_TIME_C_D               (REG32 (0x00216054))         /* Time C & D Register */
#define BTA_PWM_TX                 (REG32 (0x00216058))         /* PWM TX Register */
#define BTA_RF_CONTROL             (REG32 (0x0021605C))         /* RF Control Register */
#define BTA_RF_STATUS              (REG32 (0x0021605C))         /* RF Status Register */
#define BTA_RX_TIME                (REG32 (0x00216060))         /* RX Time Register */
#define BTA_TX_TIME                (REG32 (0x00216064))         /* TX Time Register */
#define BTA_BAT                    (REG32 (0x00216068))         /* Bluetooth Application Timer Register */
#define BTA_THRESHOLD              (REG32 (0x0021606C))         /* Threshold Register */
#define BTA_CORRELATION_MAX        (REG32 (0x0021606C))         /* Correlation Max Register */
#define BTA_SYNCH_WORD_0           (REG32 (0x00216070))         /* Synch Word 0 Register */
#define BTA_SYNCH_WORD_1           (REG32 (0x00216074))         /* Synch Word 1 Register */
#define BTA_SYNCH_WORD_2           (REG32 (0x00216078))         /* Synch Word 2 Register */
#define BTA_SYNCH_WORD_3           (REG32 (0x0021607C))         /* Synch Word 3 Register */
#define BTA_BUF_WORD_0             (REG32 (0x00216080))         /* Buf Word 0 (LW0) Register */
#define BTA_BUF_WORD_1             (REG32 (0x00216084))         /* Buf Word 1 (LW0) Register */
#define BTA_BUF_WORD_2             (REG32 (0x00216088))         /* Buf Word 2 (LW0) Register */
#define BTA_BUF_WORD_3             (REG32 (0x0021608C))         /* Buf Word 3 (LW0) Register */
#define BTA_BUF_WORD_4             (REG32 (0x00216090))         /* Buf Word 4 (LW0) Register */
#define BTA_BUF_WORD_5             (REG32 (0x00216094))         /* Buf Word 5 (LW0) Register */
#define BTA_BUF_WORD_6             (REG32 (0x00216098))         /* Buf Word 6 (LW0) Register */
#define BTA_BUF_WORD_7             (REG32 (0x0021609C))         /* Buf Word 7 (LW0) Register */
#define BTA_BUF_WORD_8             (REG32 (0x002160A0))         /* Buf Word 8 (LW0) Register */
#define BTA_BUF_WORD_9             (REG32 (0x002160A4))         /* Buf Word 9 (LW0) Register */
#define BTA_BUF_WORD_10            (REG32 (0x002160A8))         /* Buf Word 10 (LW0) Register */
#define BTA_BUF_WORD_11            (REG32 (0x002160AC))         /* Buf Word 11 (LW0) Register */
#define BTA_BUF_WORD_12            (REG32 (0x002160B0))         /* Buf Word 12 (LW0) Register */
#define BTA_BUF_WORD_13            (REG32 (0x002160B4))         /* Buf Word 13 (LW0) Register */
#define BTA_BUF_WORD_14            (REG32 (0x002160B8))         /* Buf Word 14 (LW0) Register */
#define BTA_BUF_WORD_15            (REG32 (0x002160BC))         /* Buf Word 15 (LW0) Register */
#define BTA_BUF_WORD_16            (REG32 (0x002160C0))         /* Buf Word 16 (LW0) Register */
#define BTA_BUF_WORD_17            (REG32 (0x002160C4))         /* Buf Word 17 (LW0) Register */
#define BTA_BUF_WORD_18            (REG32 (0x002160C8))         /* Buf Word 18 (LW0) Register */
#define BTA_BUF_WORD_19            (REG32 (0x002160CC))         /* Buf Word 19 (LW0) Register */
#define BTA_BUF_WORD_20            (REG32 (0x002160D0))         /* Buf Word 20 (LW0) Register */
#define BTA_BUF_WORD_21            (REG32 (0x002160D4))         /* Buf Word 21 (LW0) Register */
#define BTA_BUF_WORD_22            (REG32 (0x002160D8))         /* Buf Word 22 (LW0) Register */
#define BTA_BUF_WORD_23            (REG32 (0x002160DC))         /* Buf Word 23 (LW0) Register */
#define BTA_BUF_WORD_24            (REG32 (0x002160E0))         /* Buf Word 24 (LW0) Register */
#define BTA_BUF_WORD_25            (REG32 (0x002160E4))         /* Buf Word 25 (LW0) Register */
#define BTA_BUF_WORD_26            (REG32 (0x002160E8))         /* Buf Word 26 (LW0) Register */
#define BTA_BUF_WORD_27            (REG32 (0x002160EC))         /* Buf Word 27 (LW0) Register */
#define BTA_BUF_WORD_28            (REG32 (0x002160F0))         /* Buf Word 28 (LW0) Register */
#define BTA_BUF_WORD_29            (REG32 (0x002160F4))         /* Buf Word 29 (LW7) Register */
#define BTA_BUF_WORD_30            (REG32 (0x002160F8))         /* Buf Word 30 (LW7) Register */
#define BTA_BUF_WORD_31            (REG32 (0x002160FC))         /* Buf Word 31 (LW7) Register */
#define BTA_WAKEUP_1               (REG32 (0x00216100))         /* WakeUp 1 Register */
#define BTA_WAKEUP_2               (REG32 (0x00216104))         /* WakeUp 2 Register */
#define BTA_WAKEUP_DELTA4          (REG32 (0x0021610C))         /* WakeUp Delta4 Register */
#define BTA_WAKEUP_4               (REG32 (0x0021610C))         /* WakeUp 4 Register */
#define BTA_WU_CONTROL             (REG32 (0x00216110))         /* WakeUp Control Register */
#define BTA_WU_STATUS              (REG32 (0x00216110))         /* WakeUp Status Register */
#define BTA_WU_COUNT               (REG32 (0x00216114))         /* WakeUp Count Register */
#define BTA_CLK_CONTROL            (REG32 (0x00216118))         /* Clock Control Register */
#define BTA_SPI_WORD0              (REG32 (0x00216120))         /* SPI Word0 Register */
#define BTA_SPI_WORD1              (REG32 (0x00216124))         /* SPI Word1 Register */
#define BTA_SPI_WORD2              (REG32 (0x00216128))         /* SPI Word2 Register */
#define BTA_SPI_WORD3              (REG32 (0x0021612C))         /* SPI Word3 Register */
#define BTA_SPI_WRITE_ADDR         (REG32 (0x00216130))         /* SPI Write Address Register */
#define BTA_SPI_READ_ADDR          (REG32 (0x00216134))         /* SPI Read Address Register */
#define BTA_SPI_CONTROL            (REG32 (0x00216138))         /* SPI Control Registef */
#define BTA_SPI_STATUS             (REG32 (0x00216138))         /* SPI Status Register */
#define BTA_HOP0                   (REG32 (0x00216140))         /* Hop 0 (Frequency In) Register */
#define BTA_HOP_FREQ_OUT           (REG32 (0x00216140))         /* Hop Frequency Out Register */
#define BTA_HOP1                   (REG32 (0x00216144))         /* Hop 1 (Frequency In) Register */
#define BTA_HOP2                   (REG32 (0x00216148))         /* Hop 2 (Frequency In) Register */
#define BTA_HOP3                   (REG32 (0x0021614C))         /* Hop 3 (Frequency In) Register */
#define BTA_HOP4                   (REG32 (0x00216150))         /* Hop 4 (Frequency In) Register */
#define BTA_INTERRUPT_VECTOR       (REG32 (0x00216160))         /* Interrupt Vector Register */
#define BTA_SYNC_METRIC            (REG32 (0x00216170))         /* Synchronization Metric Register */
#define BTA_SYNC_FC                (REG32 (0x00216174))         /* Synchronize Frequency Carrier Register */
#define BTA_WORD_REVERSE           (REG32 (0x00216178))         /* Word Reverse Register */
#define BTA_BYTE_REVERSE           (REG32 (0x0021617C))         /* Byte Reverse Register */

#define MMA_MMA_MAC_MOD            (REG32 (0x00222000))         /* MMA MAC Module Register */
#define MMA_MMA_MAC_CTRL           (REG32 (0x00222004))         /* MMA MAC Control Register */
#define MMA_MMA_MAC_MULT           (REG32 (0x00222008))         /* MMA MAC Multiply Counter Register */
#define MMA_MMA_MAC_ACCU           (REG32 (0x0022200C))         /* MMA MAC Accumulate Counter Register */
#define MMA_MMA_MAC_INTR           (REG32 (0x00222010))         /* MMA MAC Interrupt Register */
#define MMA_MMA_MAC_INTR_MASK      (REG32 (0x00222014))         /* MMA MAC Interrupt Mask Register */
#define MMA_MMA_MAC_FIFO           (REG32 (0x00222018))         /* MMA MAC FIFO Register */
#define MMA_MMA_MAC_FIFO_STAT      (REG32 (0x0022201C))         /* MMA MAC FIFO Status Register */
#define MMA_MMA_MAC_BURST          (REG32 (0x00222020))         /* MMA MAC Burst Count Register */
#define MMA_MMA_MAC_BITSEL         (REG32 (0x00222024))         /* MMA MAC Bit Select Register */
#define MMA_MMA_MAC_XBASE          (REG32 (0x00222200))         /* MMA MAC X Base Address Register */
#define MMA_MMA_MAC_XINDEX         (REG32 (0x00222204))         /* MMA MAC X Index Register */
#define MMA_MMA_MAC_XLENGTH        (REG32 (0x00222208))         /* MMA MAC X Length Register */
#define MMA_MMA_MAC_XMODIFY        (REG32 (0x0022220C))         /* MMA MAC X Modify Register */
#define MMA_MMA_MAC_XINCR          (REG32 (0x00222210))         /* MMA MAC X Increment Register */
#define MMA_MMA_MAC_XCOUNT         (REG32 (0x00222214))         /* MMA MAC X Count Register */
#define MMA_MMA_MAC_YBASE          (REG32 (0x00222300))         /* MMA MAC Y Base Address Register */
#define MMA_MMA_MAC_YINDEX         (REG32 (0x00222304))         /* MMA MAC Y Index Register */
#define MMA_MMA_MAC_YLENGTH        (REG32 (0x00222308))         /* MMA MAC Y Length Register */
#define MMA_MMA_MAC_YMODIFY        (REG32 (0x0022230C))         /* MMA MAC Y Modify Register */
#define MMA_MMA_MAC_YINCR          (REG32 (0x00222310))         /* MMA MAC Y Increment Register */
#define MMA_MMA_MAC_YCOUNT         (REG32 (0x00222314))         /* MMA MAC Y Count Register */
#define MMA_MMA_DCTCTRL            (REG32 (0x00222400))         /* DCT/iDCT Control Register */
#define MMA_MMA_DCTVERSION         (REG32 (0x00222404))         /* DCT/iDCT Version Register */
#define MMA_MMA_DCTIRQENA          (REG32 (0x00222408))         /* DCT/iDCT IRQ Enable Register */
#define MMA_MMA_DCTIRQSTAT         (REG32 (0x0022240C))         /* DCT/iDCT IRQ Status Register */
#define MMA_DSA_DCTSRCDATA         (REG32 (0x00222410))         /* DCT/iDCT Source Data Address */
#define MMA_MMA_DCTDESDATA         (REG32 (0x00222414))         /* DCT/iDCT Destination Data Address */
#define MMA_MMA_DCTXOFF            (REG32 (0x00222418))         /* DCT/iDCT X-Offset Address */
#define MMA_MM_DCTYOFF             (REG32 (0x0022241C))         /* DCT/iDCT Y-Offset Address */
#define MMA_MMA_DCTXYCNT           (REG32 (0x00222420))         /* DCT/iDCT XY Count */
#define MMA_MMA_DCTSKIP            (REG32 (0x00222424))         /* DCT/iDCT Skip Address */
#define MMA_MMA_DCTFIFO            (REG32 (0x00222500))         /* DCT/iDCT Data FIFO */

#define SPI1_RXDATAREG             (REG32 (0x00213000))         /* SPI 1 Rx Data Register */
#define SPI1_TXDATAREG             (REG32 (0x00213004))         /* SPI 1 Tx Data Register */
#define SPI1_CONTROLREG            (REG32 (0x00213008))         /* SPI 1 Control Register */
#define SPI1_INTREG                (REG32 (0x0021300C))         /* SPI 1 Interrupt Control/Status Register */
#define SPI1_TESTREG               (REG32 (0x00213010))         /* SPI 1 Test Register */
#define SPI1_PERIODREG             (REG32 (0x00213014))         /* SPI 1 Sample Period Control Register */
#define SPI1_DMAREG                (REG32 (0x00213018))         /* SPI 1 DMA Control Register */
#define SPI1_RESETREG              (REG32 (0x0021301C))         /* SPI 1 Soft Reset Register */
#define SPI2_RXDATAREG             (REG32 (0x00219000))         /* SPI 2 Rx Data Register */
#define SPI2_TXDATAREG             (REG32 (0x00219004))         /* SPI 2 Tx Data Register */
#define SPI2_CONTROLREG            (REG32 (0x00219008))         /* SPI 2 Control Register */
#define SPI2_INTREG                (REG32 (0x0021900C))         /* SPI 2 Interrupt Control/Status Register */
#define SPI2_TESTREG               (REG32 (0x00219010))         /* SPI 2 Test Register */
#define SPI2_PERIODREG             (REG32 (0x00219014))         /* SPI 2 Sample Period Control Register */
#define SPI2_DMAREG                (REG32 (0x00219018))         /* SPI 2 DMA Control Register */
#define SPI2_RESETREG              (REG32 (0x0021901C))         /* SPI 2 Soft Reset Register */

#define LCD_SSA                    (REG32 (0x00205000))         /* Screen Start Address Register */
#define LCD_SIZE                   (REG32 (0x00205004))         /* Size Register */
#define LCD_VPW                    (REG32 (0x00205008))         /* Virtual Page Width Register */
#define LCD_CPOS                   (REG32 (0x0020500C))         /* LCD Cursor Position Register */
#define LCD_LCWHB                  (REG32 (0x00205010))         /* LCD Cursor Width Height and Blink Register */
#define LCD_LCHCC                  (REG32 (0x00205014))         /* LCD Color Cursor Mapping Register */
#define LCD_PCR                    (REG32 (0x00205018))         /* Panel Configuration Register */
#define LCD_HCR                    (REG32 (0x0020501C))         /* Horizontal Configuration Register */
#define LCD_VCR                    (REG32 (0x00205020))         /* Vertical Configuration Register */
#define LCD_POS                    (REG32 (0x00205024))         /* Panning Offset Register */
#define LCD_LGPMR                  (REG32 (0x00205028))         /* LCD Gray Palette Mapping Register */
#define LCD_PWMR                   (REG32 (0x0020502C))         /* PWM Contrast Control Register */
#define LCD_DMACR                  (REG32 (0x00205030))         /* DMA Control Register */
#define LCD_RMCR                   (REG32 (0x00205034))         /* Refresh Mode Control Register */
#define LCD_LCDICR                 (REG32 (0x00205038))         /* Interrupt Configuration Register */
#define LCD_LCDISR                 (REG32 (0x00205040))         /* Interrupt Status Register */

#define MMC_STR_STP_CLK            (REG32 (0x00214000))         /* MMC/SD Clock Control Register */
#define MMC_STATUS                 (REG32 (0x00214004))         /* MMC/SD Status Register */
#define MMC_CLK_RATE               (REG32 (0x00214008))         /* MMC/SD Clock Rate Register */
#define MMC_CMD_DAT_CONT           (REG32 (0x0021400C))         /* MMC/SD Command and Data Control Register */
#define MMC_RES_TO                 (REG32 (0x00214010))         /* MMC/SD Response Time Out Register */
#define MMC_READ_TO                (REG32 (0x00214014))         /* MMC/SD Read Time Out Register */
#define MMC_BLK_LEN                (REG32 (0x00214018))         /* MMC/SD Block Length Register */
#define MMC_NOB                    (REG32 (0x0021401C))         /* MMC/SD Number of Blocks Register */
#define MMC_REV_NO                 (REG32 (0x00214020))         /* MMC/SD Revision Number Register */
#define MMC_INT_MASK               (REG32 (0x00214024))         /* MMC/SD Interrupt Mask Register */
#define MMC_CMD                    (REG32 (0x00214028))         /* MMC/SD Command Number Register */
#define MMC_ARGH                   (REG32 (0x0021402C))         /* MMC/SD Higher Argument Register */
#define MMC_ARGL                   (REG32 (0x00214030))         /* MMC/SD Lower Argument Register */
#define MMC_RES_FIFO               (REG32 (0x00214034))         /* MMC/SD Response FIFO Register */
#define MMC_BUFFER_ACCESS          (REG32 (0x00214038))         /* MMC/SD Buffer Access Register */

#define MSC_MSCMD                  (REG32 (0x0021A000))         /* Memory Stick Command Register */
#define MSC_MSCS                   (REG32 (0x0021A002))         /* Memory Stick Control/Status Register */
#define MSC_MSTDATA                (REG32 (0x0021A004))         /* Memory Stick Transmit FIFO Data Register */
#define MSC_MSRDATA                (REG32 (0x0021A004))         /* Memory Stick Receive FIFO Data Register */
#define MSC_MSICS                  (REG32 (0x0021A006))         /* Memory Stick Interrupt Control/Status Register */
#define MSC_MSPPCD                 (REG32 (0x0021A008))         /* Memory Stick Parallel Port Control/Data Register */
#define MSC_MSC2                   (REG32 (0x0021A00A))         /* Memory Stick Control 2 Register */
#define MSC_MSACD                  (REG32 (0x0021A00C))         /* Memory Stick Auto Command Register */
#define MSC_MSFAECS                (REG32 (0x0021A00E))         /* Memory Stick FIFO Access Error Control/Status Register */
#define MSC_MSCLKD                 (REG32 (0x0021A010))         /* Memory Stick Serial Clock Divider Register */
#define MSC_MSDRQC                 (REG32 (0x0021A012))         /* Memory Stick DMA Request Control Register */

#define PWM_PWMC                   (REG32 (0x00208000))         /* PWM Control Register */
#define PWM_PWMS                   (REG32 (0x00208004))         /* PWM Sample Register */
#define PWM_PWMP                   (REG32 (0x00208008))         /* PWM Period Register */
#define PWM_PWMCNT                 (REG32 (0x0020800C))         /* PWM Counter Register */

#define RTC_HOURMIN                (REG32 (0x00204000))         /* RTC Hours and Minutes Counter Register */
#define RTC_SECONDS                (REG32 (0x00204004))         /* RTC Seconds Counter Register */
#define RTC_ALRM_HM                (REG32 (0x00204008))         /* RTC Hours and Minutes Alarm Register */
#define RTC_ALRM_SEC               (REG32 (0x0020400C))         /* RTC Seconds Alarm Register */
#define RTC_RCCTL                  (REG32 (0x00204010))         /* RTC Control Register */
#define RTC_RTCISR                 (REG32 (0x00204014))         /* RTC Interrupt Status Register */
#define RTC_RTCIENR                (REG32 (0x00204018))         /* RTC Interrupt Enable Register */
#define RTC_STPWCH                 (REG32 (0x0020401C))         /* Stopwatch Minutes Register */
#define RTC_DAYR                   (REG32 (0x00204020))         /* RTC Days Counter Register */
#define RTC_DAYALARM               (REG32 (0x00204024))         /* RTC Day Alarm Register */

#define SDRAM_SDCTL0               (REG32 (0x00221000))         /* SDRAM 0 Control Register */
#define SDRAM_SDCTL1               (REG32 (0x00221004))         /* SDRAM 1 Control Register */
#define SDRAM_MISCELLANEOUS        (REG32 (0x00221014))         /* Miscellaneous Register */
#define SDRAM_SDRST                (REG32 (0x00221018))         /* SDRAM Reset Register */

#define SIM_PORT_CNTL              (REG32 (0x00211000))         /* Port Control Register */
#define SIM_CNTL                   (REG32 (0x00211004))         /* Control Register */
#define SIM_RCV_THRESHOLD          (REG32 (0x00211008))         /* Receive Threshold Register */
#define SIM_ENABLE                 (REG32 (0x0021100C))         /* Transmit/Receive Enable Register */
#define SIM_XMT_STATUS             (REG32 (0x00211010))         /* Transmit Status Register */
#define SIM_RCV_STATUS             (REG32 (0x00211014))         /* Receive Status Register */
#define SIM_INT_MASK               (REG32 (0x00211018))         /* Interrupt Mask Register */
#define SIM_XMT_BUF                (REG32 (0x0021101C))         /* Port Transmit Buffer Register */
#define SIM_RCV_BUF                (REG32 (0x00211020))         /* Receive Buffer Register */
#define SIM_PORT_DETECT            (REG32 (0x00211024))         /* Detect Register */
#define SIM_XMT_THRESHOLD          (REG32 (0x00211028))         /* Transmit Threshold Register */
#define SIM_GUARD_CNTL             (REG32 (0x0021102C))         /* Transmit Guard Control Register */
#define SIM_OD_CONFIG              (REG32 (0x00211030))         /* Open-Drain Configuration Control Register */
#define SIM_RESET_CNTL             (REG32 (0x00211034))         /* Reset Control Register */
#define SIM_CHAR_WAIT              (REG32 (0x00211038))         /* Character Wait Timer Register */
#define SIM_GPCNT                  (REG32 (0x0021103C))         /* General Purpose Counter Register */
#define SIM_DIVISOR                (REG32 (0x00211040))         /* Divisor Register */

#define T1_TCTL1                   (REG32 (0x00202000))         /* Timer 1 Control Register */
#define T1_TPRER1                  (REG32 (0x00202004))         /* Timer 1 Prescaler Register */
#define T1_TCMP1                   (REG32 (0x00202008))         /* Timer 1 Compare Register */
#define T1_TCR1                    (REG32 (0x0020200C))         /* Timer 1 Capture Register */
#define T1_TCN1                    (REG32 (0x00202010))         /* Timer 1 Counter Register */
#define T1_TSTAT1                  (REG32 (0x00202014))         /* Timer 1 Status Register */
#define T2_TCTL2                   (REG32 (0x00203000))         /* Timer 2 Control Register */
#define T2_TPRER2                  (REG32 (0x00203004))         /* Timer 2 Prescaler Register */
#define T2_TCMP2                   (REG32 (0x00203008))         /* Timer 2 Compare Register */
#define T2_TCR2                    (REG32 (0x0020300C))         /* Timer 2 Capture Register */
#define T2_TCN2                    (REG32 (0x00203010))         /* Timer 2 Counter Register */
#define T2_TSTAT2                  (REG32 (0x00203014))         /* Timer 2 Status Register */

#define UART1_URX0D                (REG32 (0x00206000))         /* UART1 Receiver Register 0 */
#define UART1_URX1D                (REG32 (0x00206004))         /* UART1 Receiver Register 1 */
#define UART1_URX2D                (REG32 (0x00206008))         /* UART1 Receiver Register 2 */
#define UART1_URX3D                (REG32 (0x0020600C))         /* UART1 Receiver Register 3 */
#define UART1_URX4D                (REG32 (0x00206010))         /* UART1 Receiver Register 4 */
#define UART1_URX5D                (REG32 (0x00206014))         /* UART1 Receiver Register 5 */
#define UART1_URX6D                (REG32 (0x00206018))         /* UART1 Receiver Register 6 */
#define UART1_URX7D                (REG32 (0x0020601C))         /* UART1 Receiver Register 7 */
#define UART1_URX8D                (REG32 (0x00206020))         /* UART1 Receiver Register 8 */
#define UART1_URX9D                (REG32 (0x00206024))         /* UART1 Receiver Register 9 */
#define UART1_URX10D               (REG32 (0x00206028))         /* UART1 Receiver Register 10 */
#define UART1_URX11D               (REG32 (0x0020602C))         /* UART1 Receiver Register 11 */
#define UART1_URX12D               (REG32 (0x00206030))         /* UART1 Receiver Register 12 */
#define UART1_URX13D               (REG32 (0x00206034))         /* UART1 Receiver Register 13 */
#define UART1_URX14D               (REG32 (0x00206038))         /* UART1 Receiver Register 14 */
#define UART1_URX15D               (REG32 (0x0020603C))         /* UART1 Receiver Register 15 */
#define UART1_UTX0D                (REG32 (0x00206040))         /* UART1 Transmitter Register 0 */
#define UART1_UTX1D                (REG32 (0x00206044))         /* UART1 Transmitter Register 1 */
#define UART1_UTX2D                (REG32 (0x00206048))         /* UART1 Transmitter Register 2 */
#define UART1_UTX3D                (REG32 (0x0020604C))         /* UART1 Transmitter Register 3 */
#define UART1_UTX4D                (REG32 (0x00206050))         /* UART1 Transmitter Register 4 */
#define UART1_UTX5D                (REG32 (0x00206054))         /* UART1 Transmitter Register 5 */
#define UART1_UTX6D                (REG32 (0x00206058))         /* UART1 Transmitter Register 6 */
#define UART1_UTX7D                (REG32 (0x0020605C))         /* UART1 Transmitter Register 7 */
#define UART1_UTX8D                (REG32 (0x00206060))         /* UART1 Transmitter Register 8 */
#define UART1_UTX9D                (REG32 (0x00206064))         /* UART1 Transmitter Register 9 */
#define UART1_UTX10D               (REG32 (0x00206068))         /* UART1 Transmitter Register 10 */
#define UART1_UTX11D               (REG32 (0x0020606C))         /* UART1 Transmitter Register 11 */
#define UART1_UTX12D               (REG32 (0x00206070))         /* UART1 Transmitter Register 12 */
#define UART1_UTX13D               (REG32 (0x00206074))         /* UART1 Transmitter Register 13 */
#define UART1_UTX14D               (REG32 (0x00206078))         /* UART1 Transmitter Register 14 */
#define UART1_UTX15D               (REG32 (0x0020607C))         /* UART1 Transmitter Register 15 */
#define UART1_UCR1                 (REG32 (0x00206080))         /* UART1 Control Register 1 */
#define UART1_UCR2                 (REG32 (0x00206084))         /* UART1 Control Register 2 */
#define UART1_UCR3                 (REG32 (0x00206088))         /* UART1 Control Register 3 */
#define UART1_UCR4                 (REG32 (0x0020608C))         /* UART1 Control Register 4 */
#define UART1_UFCR                 (REG32 (0x00206090))         /* UART1 FIFO Control Register */
#define UART1_USR1                 (REG32 (0x00206094))         /* UART1 Status Register 1 */
#define UART1_USR2                 (REG32 (0x00206098))         /* UART1 Status Register 2 */
#define UART1_UESC                 (REG32 (0x0020609C))         /* UART1 Escape Character Register */
#define UART1_UTIM                 (REG32 (0x002060A0))         /* UART1 Escape Timer Register */
#define UART1_UBIR                 (REG32 (0x002060A4))         /* UART1 BRM Incremental Register */
#define UART1_UBMR                 (REG32 (0x002060A8))         /* UART1 BRM Modulator Register */
#define UART1_UBRC                 (REG32 (0x002060AC))         /* UART1 Baud Rate Count Register */
#define UART1_BIPR1                (REG32 (0x002060B0))         /* UART1 BRM Incremental Preset Register 1 */
#define UART1_BIPR2                (REG32 (0x002060B4))         /* UART1 BRM Incremental Preset Register 2 */
#define UART1_BIPR3                (REG32 (0x002060B8))         /* UART1 BRM Incremental Preset Register 3 */
#define UART1_BIPR4                (REG32 (0x002060BC))         /* UART1 BRM Incremental Preset Register 4 */
#define UART1_BMPR1                (REG32 (0x002060C0))         /* UART1 BRM Modulator Preset Register 1 */
#define UART1_BMPR2                (REG32 (0x002060C4))         /* UART1 BRM Modulator Preset Register 2 */
#define UART1_BMPR3                (REG32 (0x002060C8))         /* UART1 BRM Modulator Preset Register 3 */
#define UART1_BMPR4                (REG32 (0x002060CC))         /* UART1 BRM Modulator Preset Register 4 */
#define UART1_UTS                  (REG32 (0x002060D0))         /* UART1 Test Register 1 */
#define UART2_URX0D                (REG32 (0x00207000))         /* UART2 Receiver Register 0 */
#define UART2_URX1D                (REG32 (0x00207004))         /* UART2 Receiver Register 1 */
#define UART2_URX2D                (REG32 (0x00207008))         /* UART2 Receiver Register 2 */
#define UART2_URX3D                (REG32 (0x0020700C))         /* UART2 Receiver Register 3 */
#define UART2_URX4D                (REG32 (0x00207010))         /* UART2 Receiver Register 4 */
#define UART2_URX5D                (REG32 (0x00207014))         /* UART2 Receiver Register 5 */
#define UART2_URX6D                (REG32 (0x00207018))         /* UART2 Receiver Register 6 */
#define UART2_URX7D                (REG32 (0x0020701C))         /* UART2 Receiver Register 7 */
#define UART2_URX8D                (REG32 (0x00207020))         /* UART2 Receiver Register 8 */
#define UART2_URX9D                (REG32 (0x00207024))         /* UART2 Receiver Register 9 */
#define UART2_URX10D               (REG32 (0x00207028))         /* UART2 Receiver Register 10 */
#define UART2_URX11D               (REG32 (0x0020702C))         /* UART2 Receiver Register 11 */
#define UART2_URX12D               (REG32 (0x00207030))         /* UART2 Receiver Register 12 */
#define UART2_URX13D               (REG32 (0x00207034))         /* UART2 Receiver Register 13 */
#define UART2_URX14D               (REG32 (0x00207038))         /* UART2 Receiver Register 14 */
#define UART2_URX15D               (REG32 (0x0020703C))         /* UART2 Receiver Register 15 */
#define UART2_UTX0D                (REG32 (0x00207040))         /* UART2 Transmitter Register 0 */
#define UART2_UTX1D                (REG32 (0x00207044))         /* UART2 Transmitter Register 1 */
#define UART2_UTX2D                (REG32 (0x00207048))         /* UART2 Transmitter Register 2 */
#define UART2_UTX3D                (REG32 (0x0020704C))         /* UART2 Transmitter Register 3 */
#define UART2_UTX4D                (REG32 (0x00207050))         /* UART2 Transmitter Register 4 */
#define UART2_UTX5D                (REG32 (0x00207054))         /* UART2 Transmitter Register 5 */
#define UART2_UTX6D                (REG32 (0x00207058))         /* UART2 Transmitter Register 6 */
#define UART2_UTX7D                (REG32 (0x0020705C))         /* UART2 Transmitter Register 7 */
#define UART2_UTX8D                (REG32 (0x00207060))         /* UART2 Transmitter Register 8 */
#define UART2_UTX9D                (REG32 (0x00207064))         /* UART2 Transmitter Register 9 */
#define UART2_UTX10D               (REG32 (0x00207068))         /* UART2 Transmitter Register 10 */
#define UART2_UTX11D               (REG32 (0x0020706C))         /* UART2 Transmitter Register 11 */
#define UART2_UTX12D               (REG32 (0x00207070))         /* UART2 Transmitter Register 12 */
#define UART2_UTX13D               (REG32 (0x00207074))         /* UART2 Transmitter Register 13 */
#define UART2_UTX14D               (REG32 (0x00207078))         /* UART2 Transmitter Register 14 */
#define UART2_UTX15D               (REG32 (0x0020707C))         /* UART2 Transmitter Register 15 */
#define UART2_UCR1                 (REG32 (0x00207080))         /* UART2 Control Register 1 */
#define UART2_UCR2                 (REG32 (0x00207084))         /* UART2 Control Register 2 */
#define UART2_UCR3                 (REG32 (0x00207088))         /* UART2 Control Register 3 */
#define UART2_UCR4                 (REG32 (0x0020708C))         /* UART2 Control Register 4 */
#define UART2_UFCR                 (REG32 (0x00207090))         /* UART2 FIFO Control Register */
#define UART2_USR1                 (REG32 (0x00207094))         /* UART2 Status Register 1 */
#define UART2_USR2                 (REG32 (0x00207098))         /* UART2 Status Register 2 */
#define UART2_UESC                 (REG32 (0x0020709C))         /* UART2 Escape Character Register */
#define UART2_UTIM                 (REG32 (0x002070A0))         /* UART2 Escape Timer Register */
#define UART2_UBIR                 (REG32 (0x002070A4))         /* UART2 BRM Incremental Register */
#define UART2_UBMR                 (REG32 (0x002070A8))         /* UART2 BRM Modulator Register */
#define UART2_UBRC                 (REG32 (0x002070AC))         /* UART2 Baud Rate Count Register */
#define UART2_BIPR1                (REG32 (0x002070B0))         /* UART2 BRM Incremental Preset Register 1 */
#define UART2_BIPR2                (REG32 (0x002070B4))         /* UART2 BRM Incremental Preset Register 2 */
#define UART2_BIPR3                (REG32 (0x002070B8))         /* UART2 BRM Incremental Preset Register 3 */
#define UART2_BIPR4                (REG32 (0x002070BC))         /* UART2 BRM Incremental Preset Register 4 */
#define UART2_BMPR1                (REG32 (0x002070C0))         /* UART2 BRM Modulator Preset Register 1 */
#define UART2_BMPR2                (REG32 (0x002070C4))         /* UART2 BRM Modulator Preset Register 2 */
#define UART2_BMPR3                (REG32 (0x002070C8))         /* UART2 BRM Modulator Preset Register 3 */
#define UART2_BMPR4                (REG32 (0x002070CC))         /* UART2 BRM Modulator Preset Register 4 */
#define UART2_UTS                  (REG32 (0x002070D0))         /* UART2 Test Register 1 */

#define USB_FRAME                  (REG32 (0x00212000))         /* USB Frame Number and Match Register */
#define USB_SPEC                   (REG32 (0x00212004))         /* USB Specification and Release Number Register */
#define USB_STAT                   (REG32 (0x00212008))         /* USB Status Register */
#define USB_CTRL                   (REG32 (0x0021200C))         /* USB Control Register */
#define USB_DADR                   (REG32 (0x00212010))         /* USB Descriptor RAM Address Register */
#define USB_DDAT                   (REG32 (0x00212014))         /* USB Descriptor RAM/Endpoint Buffer Data Register */
#define USB_INTR                   (REG32 (0x00212018))         /* USB Interrupt Status Register */
#define USB_MASK                   (REG32 (0x0021201C))         /* USB Interrupt Mask Register */
#define USB_ENAB                   (REG32 (0x00212024))         /* USB Enable Register */
#define USB_EP0_STAT               (REG32 (0x00212030))         /* Endpoint 0 Status/Control Register */
#define USB_EP0_INTR               (REG32 (0x00212034))         /* Endpoint 0 Interrupt Status Register */
#define USB_EP0_MASK               (REG32 (0x00212038))         /* Endpoint 0 Interrupt Mask Register */
#define USB_EP0_FDAT               (REG32 (0x0021203C))         /* Endpoint 0 FIFO Data Register */
#define USB_EP0_FSTAT              (REG32 (0x00212040))         /* Endpoint 0 FIFO Status Register */
#define USB_EP0_FCTRL              (REG32 (0x00212044))         /* Endpoint 0 FIFO Control Register */
#define USB_EP0_LRFP               (REG32 (0x00212048))         /* Endpoint 0 Last Read Frame Pointer Register */
#define USB_EP0_LWFP               (REG32 (0x0021204C))         /* Endpoint 0 Last Write Frame Pointer Register */
#define USB_EP0_FALRM              (REG32 (0x00212050))         /* Endpoint 0 FIFO Alarm Register */
#define USB_EP0_FRDP               (REG32 (0x00212054))         /* Endpoint 0 FIFO Read Pointer Register */
#define USB_EP0_FWRP               (REG32 (0x00212058))         /* Endpoint 0 FIFO Write Pointer Register */
#define USB_EP1_STAT               (REG32 (0x00212060))         /* Endpoint 1 Status/Control Register */
#define USB_EP1_INTR               (REG32 (0x00212064))         /* Endpoint 1 Interrupt Status Register */
#define USB_EP1_MASK               (REG32 (0x00212068))         /* Endpoint 1 Interrupt Mask Register */
#define USB_EP1_FDAT               (REG32 (0x0021206C))         /* Endpoint 1 FIFO Data Register */
#define USB_EP1_FSTAT              (REG32 (0x00212070))         /* Endpoint 1 FIFO Status Register */
#define USB_EP1_FCTRL              (REG32 (0x00212074))         /* Endpoint 1 FIFO Control Register */
#define USB_EP1_LRFP               (REG32 (0x00212078))         /* Endpoint 1 Last Read Frame Pointer Register */
#define USB_EP1_LWFP               (REG32 (0x0021207C))         /* Endpoint 1 Last Write Frame Pointer Register */
#define USB_EP1_FALRM              (REG32 (0x00212080))         /* Endpoint 1 FIFO Alarm Register */
#define USB_EP1_FRDP               (REG32 (0x00212084))         /* Endpoint 1 FIFO Read Pointer Register */
#define USB_EP1_FWRP               (REG32 (0x00212088))         /* Endpoint 1 FIFO Write Pointer Register */
#define USB_EP2_STAT               (REG32 (0x00212090))         /* Endpoint 2 Status/Control Register */
#define USB_EP2_INTR               (REG32 (0x00212094))         /* Endpoint 2 Interrupt Status Register */
#define USB_EP2_MASK               (REG32 (0x00212098))         /* Endpoint 2 Interrupt Mask Register */
#define USB_EP2_FDAT               (REG32 (0x0021209C))         /* Endpoint 2 FIFO Data Register */
#define USB_EP2_FSTAT              (REG32 (0x002120A0))         /* Endpoint 2 FIFO Status Register */
#define USB_EP2_FCTRL              (REG32 (0x002120A4))         /* Endpoint 2 FIFO Control Register */
#define USB_EP2_LRFP               (REG32 (0x002120A8))         /* Endpoint 2 Last Read Frame Pointer Register */
#define USB_EP2_LWFP               (REG32 (0x002120AC))         /* Endpoint 2 Last Write Frame Pointer Register */
#define USB_EP2_FALRM              (REG32 (0x002120B0))         /* Endpoint 2 FIFO Alarm Register */
#define USB_EP2_FRDP               (REG32 (0x002120B4))         /* Endpoint 2 FIFO Read Pointer Register */
#define USB_EP2_FWRP               (REG32 (0x002120B8))         /* Endpoint 2 FIFO Write Pointer Register */
#define USB_EP3_STAT               (REG32 (0x002120C0))         /* Endpoint 3 Status/Control Register */
#define USB_EP3_INTR               (REG32 (0x002120C4))         /* Endpoint 3 Interrupt Status Register */
#define USB_EP3_MASK               (REG32 (0x002120C8))         /* Endpoint 3 Interrupt Mask Register */
#define USB_EP3_FDAT               (REG32 (0x002120CC))         /* Endpoint 3 FIFO Data Register */
#define USB_EP3_FSTAT              (REG32 (0x002120D0))         /* Endpoint 3 FIFO Status Register */
#define USB_EP3_FCTRL              (REG32 (0x002120D4))         /* Endpoint 3 FIFO Control Register */
#define USB_EP3_LRFP               (REG32 (0x002120D8))         /* Endpoint 3 Last Read Frame Pointer Register */
#define USB_EP3_LWFP               (REG32 (0x002120DC))         /* Endpoint 3 Last Write Frame Pointer Register */
#define USB_EP3_FALRM              (REG32 (0x002120E0))         /* Endpoint 3 FIFO Alarm Register */
#define USB_EP3_FRDP               (REG32 (0x002120E4))         /* Endpoint 3 FIFO Read Pointer Register */
#define USB_EP3_FWRP               (REG32 (0x002120E8))         /* Endpoint 3 FIFO Write Pointer Register */
#define USB_EP4_STAT               (REG32 (0x002120F0))         /* Endpoint 4 Status/Control Register */
#define USB_EP4_INTR               (REG32 (0x002120F4))         /* Endpoint 4 Interrupt Status Register */
#define USB_EP4_MASK               (REG32 (0x002120F8))         /* Endpoint 4 Interrupt Mask Register */
#define USB_EP4_FDAT               (REG32 (0x002120FC))         /* Endpoint 4 FIFO Data Register */
#define USB_EP4_FSTAT              (REG32 (0x00212100))         /* Endpoint 4 FIFO Status Register */
#define USB_EP4_FCTRL              (REG32 (0x00212104))         /* Endpoint 4 FIFO Control Register */
#define USB_EP4_LRFP               (REG32 (0x00212108))         /* Endpoint 4 Last Read Frame Pointer Register */
#define USB_EP4_LWFP               (REG32 (0x0021210C))         /* Endpoint 4 Last Write Frame Pointer Register */
#define USB_EP4_FALRM              (REG32 (0x00212110))         /* Endpoint 4 FIFO Alarm Register */
#define USB_EP4_FRDP               (REG32 (0x00212114))         /* Endpoint 4 FIFO Read Pointer Register */
#define USB_EP4_FWRP               (REG32 (0x00212118))         /* Endpoint 4 FIFO Write Pointer Register */
#define USB_EP5_STAT               (REG32 (0x00212120))         /* Endpoint 5 Status/Control Register */
#define USB_EP5_INTR               (REG32 (0x00212124))         /* Endpoint 5 Interrupt Status Register */
#define USB_EP5_MASK               (REG32 (0x00212128))         /* Endpoint 5 Interrupt Mask Register */
#define USB_EP5_FDAT               (REG32 (0x0021212C))         /* Endpoint 5 FIFO Data Register */
#define USB_EP5_FSTAT              (REG32 (0x00212130))         /* Endpoint 5 FIFO Status Register */
#define USB_EP5_FCTRL              (REG32 (0x00212134))         /* Endpoint 5 FIFO Control Register */
#define USB_EP5_LRFP               (REG32 (0x00212138))         /* Endpoint 5 Last Read Frame Pointer Register */
#define USB_EP5_LWFP               (REG32 (0x0021213C))         /* Endpoint 5 Last Write Frame Pointer Register */
#define USB_EP5_FALRM              (REG32 (0x00212140))         /* Endpoint 5 FIFO Alarm Register */
#define USB_EP5_FRDP               (REG32 (0x00212144))         /* Endpoint 5 FIFO Read Pointer Register */
#define USB_EP5_FWRP               (REG32 (0x00212148))         /* Endpoint 5 FIFO Write Pointer Register */

#define I2C_IADR                   (REG32 (0x00217000))         /* I2C Address Register */
#define I2C_IFDR                   (REG32 (0x00217004))         /* I2C Frequency Divider Register */
#define I2C_I2CR                   (REG32 (0x00217008))         /* I2C Control Register */
#define I2C_I2CSR                  (REG32 (0x0021700C))         /* I2C Status Register */
#define I2C_I2DR                   (REG32 (0x00217010))         /* I2C Data I/O Register */

#define SSI_STX                    (REG32 (0x00218000))         /* SSI Transmit Data Register */
#define SSI_SRX                    (REG32 (0x00218004))         /* SSI Receive Data Register */
#define SSI_SCSR                   (REG32 (0x00218008))         /* SSI Control/Status Register */
#define SSI_STCR                   (REG32 (0x0021800C))         /* SSI Transmit Configuration Register */
#define SSI_SRCR                   (REG32 (0x00218010))         /* SSI Receive Configuration Register */
#define SSI_STCCR                  (REG32 (0x00218014))         /* SSI Transmit Clock Control Register */
#define SSI_SRCCR                  (REG32 (0x00218018))         /* SSI Receive Clock Control Register */
#define SSI_STSR                   (REG32 (0x0021801C))         /* SSI Time Slot Register */
#define SSI_SFCSR                  (REG32 (0x00218020))         /* SSI FIFO Control/Status Register */
#define SSI_SOR                    (REG32 (0x00218028))         /* SSI Option Register */

#define CSI_CSICR1                 (REG32 (0x00224000))         /* CSI Control Register 1 */
#define CSI_CSICR2                 (REG32 (0x00224004))         /* CSI Control Register 2 */
#define CSI_CSISR                  (REG32 (0x00224008))         /* CSI Status Register 1 */

#define GPIOA_DDIR                 (REG32 (0x0021C000))         /* Port A Data Direction Register */
#define GPIOA_OCR1                 (REG32 (0x0021C004))         /* Port A Output Configuration Register 1 */
#define GPIOA_OCR2                 (REG32 (0x0021C008))         /* Port A Output Configuration Register 2 */
#define GPIOA_ICONFA1              (REG32 (0x0021C00C))         /* Port A Input Configuration Register A1 */
#define GPIOA_ICONFA2              (REG32 (0x0021C010))         /* Port A Input Configuration Register A2 */
#define GPIOA_ICONFB1              (REG32 (0x0021C014))         /* Port A Input Configuration Register B1 */
#define GPIOA_ICONFB2              (REG32 (0x0021C018))         /* Port A Input Configuration Register B2 */
#define GPIOA_DR                   (REG32 (0x0021C01C))         /* Port A Data Register */
#define GPIOA_GIUS                 (REG32 (0x0021C020))         /* Port A GPIO In Use Register */
#define GPIOA_SSR                  (REG32 (0x0021C024))         /* Port A Sample Status Register */
#define GPIOA_ICR1                 (REG32 (0x0021C028))         /* Port A Interrupt Configuration Register 1 */
#define GPIOA_ICR2                 (REG32 (0x0021C02C))         /* Port A Interrupt Configuration Register 2 */
#define GPIOA_IMR                  (REG32 (0x0021C030))         /* Port A Interrupt Mask Register */
#define GPIOA_ISR                  (REG32 (0x0021C034))         /* Port A Interrupt Status Register */
#define GPIOA_GPR                  (REG32 (0x0021C038))         /* Port A General Purpose Register */
#define GPIOA_SWR                  (REG32 (0x0021C03C))         /* Port A Software Reset Register */
#define GPIOA_PUEN                 (REG32 (0x0021C040))         /* Port A Pull_Up Enable Register */
#define GPIOB_DDIR                 (REG32 (0x0021C100))         /* Port B Data Direction Register */
#define GPIOB_OCR1                 (REG32 (0x0021C104))         /* Port B Output Configuration Register 1 */
#define GPIOB_OCR2                 (REG32 (0x0021C108))         /* Port B Output Configuration Register 2 */
#define GPIOB_ICONFA1              (REG32 (0x0021C10C))         /* Port B Input Configuration Register A1 */
#define GPIOB_ICONFA2              (REG32 (0x0021C110))         /* Port B Input Configuration Register A2 */
#define GPIOB_ICONFB1              (REG32 (0x0021C114))         /* Port B Input Configuration Register B1 */
#define GPIOB_ICONFB2              (REG32 (0x0021C118))         /* Port B Input Configuration Register B2 */
#define GPIOB_DR                   (REG32 (0x0021C11C))         /* Port B Data Register */
#define GPIOB_GIUS                 (REG32 (0x0021C120))         /* Port B GPIO In Use Register */
#define GPIOB_SSR                  (REG32 (0x0021C124))         /* Port B Sample Status Register */
#define GPIOB_ICR1                 (REG32 (0x0021C128))         /* Port B Interrupt Configuration Register 1 */
#define GPIOB_ICR2                 (REG32 (0x0021C12C))         /* Port B Interrupt Configuration Register 2 */
#define GPIOB_IMR                  (REG32 (0x0021C130))         /* Port B Interrupt Mask Register */
#define GPIOB_ISR                  (REG32 (0x0021C134))         /* Port B Interrupt Status Register */
#define GPIOB_GPR                  (REG32 (0x0021C138))         /* Port B General Purpose Register */
#define GPIOB_SWR                  (REG32 (0x0021C13C))         /* Port B Software Reset Register */
#define GPIOB_PUEN                 (REG32 (0x0021C140))         /* Port B Pull_Up Enable Register */
#define GPIOC_DDIR                 (REG32 (0x0021C200))         /* Port C Data Direction Register */
#define GPIOC_OCR1                 (REG32 (0x0021C204))         /* Port C Output Configuration Register 1 */
#define GPIOC_OCR2                 (REG32 (0x0021C208))         /* Port C Output Configuration Register 2 */
#define GPIOC_ICONFA1              (REG32 (0x0021C20C))         /* Port C Input Configuration Register A1 */
#define GPIOC_ICONFA2              (REG32 (0x0021C210))         /* Port C Input Configuration Register A2 */
#define GPIOC_ICONFB1              (REG32 (0x0021C214))         /* Port C Input Configuration Register B1 */
#define GPIOC_ICONFB2              (REG32 (0x0021C218))         /* Port C Input Configuration Register B2 */
#define GPIOC_DR                   (REG32 (0x0021C21C))         /* Port C Data Register */
#define GPIOC_GIUS                 (REG32 (0x0021C220))         /* Port C GPIO In Use Register */
#define GPIOC_SSR                  (REG32 (0x0021C224))         /* Port C Sample Status Register */
#define GPIOC_ICR1                 (REG32 (0x0021C228))         /* Port C Interrupt Configuration Register 1 */
#define GPIOC_ICR2                 (REG32 (0x0021C22C))         /* Port C Interrupt Configuration Register 2 */
#define GPIOC_IMR                  (REG32 (0x0021C230))         /* Port C Interrupt Mask Register */
#define GPIOC_ISR                  (REG32 (0x0021C234))         /* Port C Interrupt Status Register */
#define GPIOC_GPR                  (REG32 (0x0021C238))         /* Port C General Purpose Register */
#define GPIOC_SWR                  (REG32 (0x0021C23C))         /* Port C Software Reset Register */
#define GPIOC_PUEN                 (REG32 (0x0021C240))         /* Port C Pull_Up Enable Register */
#define GPIOD_DDIR                 (REG32 (0x0021C300))         /* Port D Data Direction Register */
#define GPIOD_OCR1                 (REG32 (0x0021C304))         /* Port D Output Configuration Register 1 */
#define GPIOD_OCR2                 (REG32 (0x0021C308))         /* Port D Output Configuration Register 2 */
#define GPIOD_ICONFA1              (REG32 (0x0021C30C))         /* Port D Input Configuration Register A1 */
#define GPIOD_ICONFA2              (REG32 (0x0021C310))         /* Port D Input Configuration Register A2 */
#define GPIOD_ICONFB1              (REG32 (0x0021C314))         /* Port D Input Configuration Register B1 */
#define GPIOD_ICONFB2              (REG32 (0x0021C318))         /* Port D Input Configuration Register B2 */
#define GPIOD_DR                   (REG32 (0x0021C31C))         /* Port D Data Register */
#define GPIOD_GIUS                 (REG32 (0x0021C320))         /* Port D GPIO In Use Register */
#define GPIOD_SSR                  (REG32 (0x0021C324))         /* Port D Sample Status Register */
#define GPIOD_ICR1                 (REG32 (0x0021C328))         /* Port D Interrupt Configuration Register 1 */
#define GPIOD_ICR2                 (REG32 (0x0021C32C))         /* Port D Interrupt Configuration Register 2 */
#define GPIOD_IMR                  (REG32 (0x0021C330))         /* Port D Interrupt Mask Register */
#define GPIOD_ISR                  (REG32 (0x0021C334))         /* Port D Interrupt Status Register */
#define GPIOD_GPR                  (REG32 (0x0021C338))         /* Port D General Purpose Register */
#define GPIOD_SWR                  (REG32 (0x0021C33C))         /* Port D Software Reset Register */
#define GPIOD_PUEN                 (REG32 (0x0021C340))         /* Port D Pull_Up Enable Register */


#endif /* MC9328MX1_h */
