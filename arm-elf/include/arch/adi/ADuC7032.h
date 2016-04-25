//===============================================
//  ADuC7032 HEADER FILE REV 0.2
//===============================================
 


	

//  INTERRUPTS

#define INTBASE 	(*(volatile unsigned long *) 	0XFFFF0000)
#define IRQSTA	 	(*(volatile unsigned long *) 	0XFFFF0000)
#define IRQSIQ	 	(*(volatile unsigned long *) 	0XFFFF0004)
#define IRQEN	 	(*(volatile unsigned long *) 	0XFFFF0008)
#define IRQCLR	 	(*(volatile unsigned long *) 	0XFFFF000C)
#define SWICFG	 	(*(volatile unsigned long *) 	0XFFFF0010)
#define FIQSTA	 	(*(volatile unsigned long *) 	0XFFFF0100)
#define FIQSIQ	 	(*(volatile unsigned long *) 	0XFFFF0104)
#define FIQEN	 	(*(volatile unsigned long *) 	0XFFFF0108)
#define FIQCLR	 	(*(volatile unsigned long *) 	0XFFFF010C)


// 	REMAP

#define REMAPBASE	(*(volatile unsigned long *) 	0XFFFF0200)
#define SYSCON	 	(*(volatile unsigned long *) 	0XFFFF0200)
#define SYSMAP0	 	(*(volatile unsigned long *) 	0XFFFF0220)
#define RSTSTA	 	(*(volatile unsigned long *) 	0XFFFF0230)
#define RSTCLR	 	(*(volatile unsigned long *) 	0XFFFF0234)
#define SYSSER0	 	(*(volatile unsigned long *) 	0XFFFF0238)
#define SYSSER1	 	(*(volatile unsigned long *) 	0XFFFF023C)

// 	TIMERS

#define TIMERBASE 	(*(volatile unsigned long *) 	0XFFFF0300)
#define T0LD	 	(*(volatile unsigned long *) 	0XFFFF0300)
#define T0VAL0	 	(*(volatile unsigned long *) 	0XFFFF0304)
#define T0VAL1	 	(*(volatile unsigned long *) 	0XFFFF0308)
#define T0CON	 	(*(volatile unsigned long *) 	0XFFFF030C)
#define T0CLRI	 	(*(volatile unsigned long *) 	0XFFFF0310)
#define T0CAP	 	(*(volatile unsigned long *) 	0XFFFF0314)

#define T1LD 	 	(*(volatile unsigned long *) 	0XFFFF0320)
#define T1VAL 	 	(*(volatile unsigned long *) 	0XFFFF0324)
#define T1CON	 	(*(volatile unsigned long *) 	0XFFFF0328)
#define T1CLRI	 	(*(volatile unsigned long *) 	0XFFFF032C)
#define T1CAP	 	(*(volatile unsigned long *) 	0XFFFF0330)

#define T2LD 	 	(*(volatile unsigned long *) 	0XFFFF0340)
#define T2VAL 	 	(*(volatile unsigned long *) 	0XFFFF0344)
#define T2CON	 	(*(volatile unsigned long *) 	0XFFFF0348)
#define T2CLRI	 	(*(volatile unsigned long *) 	0XFFFF034C)

#define T3LD 	 	(*(volatile unsigned long *) 	0XFFFF0360)
#define T3VAL 	 	(*(volatile unsigned long *) 	0XFFFF0364)
#define T3CON	 	(*(volatile unsigned long *) 	0XFFFF0368)
#define T3CLRI	 	(*(volatile unsigned long *) 	0XFFFF036C)


// 	PLL

#define PLLBASE	 	(*(volatile unsigned long *) 	0XFFFF0400)
#define PLLSTA	 	(*(volatile unsigned long *) 	0XFFFF0400)
#define POWKEY0	 	(*(volatile unsigned long *) 	0XFFFF0404)
#define POWCON	 	(*(volatile unsigned long *) 	0XFFFF0408)
#define POWKEY1	 	(*(volatile unsigned long *) 	0XFFFF040C)
#define PLLKEY0	 	(*(volatile unsigned long *) 	0XFFFF0410)
#define PLLCON	 	(*(volatile unsigned long *) 	0XFFFF0414)
#define PLLKEY1	 	(*(volatile unsigned long *) 	0XFFFF0418)
 


//	ADC

#define ADCBASE 	(*(volatile unsigned long *) 	0XFFFF0500)
#define ADCSTA	 	(*(volatile unsigned long *) 	0XFFFF0500)
#define ADCMSKI 	(*(volatile unsigned long *) 	0XFFFF0504)
#define ADCMDE	 	(*(volatile unsigned long *) 	0XFFFF0508)
#define ADC0CON 	(*(volatile unsigned long *) 	0XFFFF050C)
#define ADC1CON 	(*(volatile unsigned long *) 	0XFFFF0510)
#define ADC2CON		(*(volatile unsigned long *)	0xFFFF0514)
#define ADCFLT	 	(*(volatile unsigned long *) 	0XFFFF0518)
#define ADCCFG	 	(*(volatile unsigned long *) 	0XFFFF051C)
#define ADC0DAT 	(*(volatile unsigned long *) 	0XFFFF0520)
#define ADC1DAT 	(*(volatile unsigned long *) 	0XFFFF0524)
#define ADC2DAT 	(*(volatile unsigned long *) 	0XFFFF0528)
#define ADCBUF	 	(*(volatile unsigned long *) 	0XFFFF052C)
#define ADC0OF	 	(*(volatile unsigned long *) 	0XFFFF0530)
#define ADC1OF 		(*(volatile unsigned long *) 	0XFFFF0534)
#define ADC2OF 		(*(volatile unsigned long *) 	0XFFFF0538)
#define ADC0GN	 	(*(volatile unsigned long *) 	0XFFFF053C)
#define ADC1GN	 	(*(volatile unsigned long *) 	0XFFFF0540)
#define ADC2GN	 	(*(volatile unsigned long *) 	0XFFFF0544)
#define ADC0RCL 	(*(volatile unsigned long *) 	0XFFFF0548)
#define ADC0RCV 	(*(volatile unsigned long *) 	0XFFFF054C)
#define ADC0TH	 	(*(volatile unsigned long *) 	0XFFFF0550)
#define ADC0TCL 	(*(volatile unsigned long *) 	0XFFFF0554)
#define ADC0THV 	(*(volatile unsigned long *) 	0XFFFF0558)
#define ADC0ACC	 	(*(volatile unsigned long *) 	0XFFFF055C)
#define ADC0ATH 	(*(volatile unsigned long *) 	0XFFFF0560)
 
//	UART

#define UARTBASE	(*(volatile unsigned long *) 	0XFFFF0700) 
#define COMTX		(*(volatile unsigned long *) 	0XFFFF0700)
#define COMRX		(*(volatile unsigned long *) 	0XFFFF0700)
#define COMDIV0		(*(volatile unsigned long *) 	0XFFFF0700)
#define COMIEN0		(*(volatile unsigned long *) 	0XFFFF0704)
#define COMDIV1  	(*(volatile unsigned long *) 	0XFFFF0704)
#define COMIID0  	(*(volatile unsigned long *) 	0XFFFF0708)
#define COMCON0  	(*(volatile unsigned long *) 	0XFFFF070C)
#define COMCON1  	(*(volatile unsigned long *) 	0XFFFF0710)
#define COMSTA0  	(*(volatile unsigned long *) 	0XFFFF0714)
#define COMSTA1  	(*(volatile unsigned long *) 	0XFFFF0718)
#define COMSCR   	(*(volatile unsigned long *) 	0XFFFF071C)
#define COMIEN1  	(*(volatile unsigned long *) 	0XFFFF0720)
#define COMIID1  	(*(volatile unsigned long *) 	0XFFFF0724)
#define COMADR 		(*(volatile unsigned long *) 	0XFFFF0728)
#define COMDIV2  	(*(volatile unsigned long *) 	0XFFFF072C)

//	LIN

#define LHSBASE		(*(volatile unsigned long *) 	0XFFFF0780)
#define LHSSTA		(*(volatile unsigned long *) 	0XFFFF0780)
#define LHSCON0		(*(volatile unsigned long *) 	0XFFFF0784)
#define LHSVAL0		(*(volatile unsigned long *) 	0XFFFF0788)
#define LHSCON1		(*(volatile unsigned long *) 	0XFFFF078C)
#define LHSVAL1		(*(volatile unsigned long *) 	0XFFFF0790)
#define LHSCAP		(*(volatile unsigned long *) 	0XFFFF0794)
#define LHSCMP		(*(volatile unsigned long *) 	0XFFFF0798)


//	HVBase

#define HVBASE		(*(volatile unsigned long *) 	0XFFFF0800)
#define HVCON		(*(volatile unsigned long *) 	0XFFFF0804)
#define HVDAT		(*(volatile unsigned long *) 	0XFFFF080C)



//	SPI

#define SPIBASE		(*(volatile unsigned long *) 	0XFFFF0A00)
#define SPISTA		(*(volatile unsigned long *) 	0XFFFF0A00)
#define SPIRX		(*(volatile unsigned long *) 	0XFFFF0A04)
#define SPITX		(*(volatile unsigned long *) 	0XFFFF0A08)
#define SPIDIV		(*(volatile unsigned long *) 	0XFFFF0A0C)
#define SPICON		(*(volatile unsigned long *) 	0XFFFF0A10)


//	GPIO

#define GPIOBASE	(*(volatile unsigned long *) 	0XFFFF0D00)
#define GP0CON		(*(volatile unsigned long *) 	0XFFFF0D00)
#define GP1CON		(*(volatile unsigned long *) 	0XFFFF0D04)
#define GP2CON		(*(volatile unsigned long *) 	0XFFFF0D08)

#define GP0DAT		(*(volatile unsigned long *) 	0XFFFF0D20)
#define GP0SET		(*(volatile unsigned long *) 	0XFFFF0D24)
#define GP0CLR		(*(volatile unsigned long *) 	0XFFFF0D28)

#define GP1DAT		(*(volatile unsigned long *) 	0XFFFF0D30)
#define GP1SET		(*(volatile unsigned long *) 	0XFFFF0D34)
#define GP1CLR		(*(volatile unsigned long *) 	0XFFFF0D38)


#define GP2DAT		(*(volatile unsigned long *) 	0XFFFF0D40)
#define GP2SET		(*(volatile unsigned long *) 	0XFFFF0D44)
#define GP2CLR		(*(volatile unsigned long *) 	0XFFFF0D48)



//	FLASH

#define FEE0STA		(*(volatile unsigned long *) 	0XFFFF0E00)
#define FEE0MOD		(*(volatile unsigned long *) 	0XFFFF0E04)
#define FEE0CON		(*(volatile unsigned long *) 	0XFFFF0E08)
#define FEE0DAT		(*(volatile unsigned long *) 	0XFFFF0E0C)
#define FEE0ADR		(*(volatile unsigned long *) 	0XFFFF0E10)

#define FEE0SIG		(*(volatile unsigned long *) 	0XFFFF0E18)
#define FEE0PRO		(*(volatile unsigned long *) 	0XFFFF0E1C)
#define FEE0HID		(*(volatile unsigned long *) 	0XFFFF0E20)
 
#define FEE1STA		(*(volatile unsigned long *) 	0XFFFF0E80)
#define FEE1MOD		(*(volatile unsigned long *) 	0XFFFF0E84)
#define FEE1CON		(*(volatile unsigned long *) 	0XFFFF0E88)
#define FEE1DAT		(*(volatile unsigned long *) 	0XFFFF0E8C)
#define FEE1ADR		(*(volatile unsigned long *) 	0XFFFF0E90)
#define FEE1SIG		(*(volatile unsigned long *) 	0XFFFF0E98)
#define FEE1PRO		(*(volatile unsigned long *) 	0XFFFF0E9C)
#define FEE1HID		(*(volatile unsigned long *) 	0XFFFF0EA0)

 

void  	(*IRQ)(void);	/* 	Function Pointers for Interupts */
void 	(*SWI)(void);
void 	(*FIQ)(void);
void  	(*UNDEF)(void);
void 	(*PABORT)(void);
void 	(*DABORT)(void);


