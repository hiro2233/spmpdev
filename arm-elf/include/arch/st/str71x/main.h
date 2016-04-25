/*
Added to this distribution by Sten Larsson (sten_larsson at yahoo com).
Please let me know if there is a problem with the file(s).
*/
/******************** (C) COPYRIGHT 2003 ST Microelectronics *******************
* File Name          : main.h
* Author             : MCD Application Team
* Date First Issued  : 27/10/2003
********************************************************************************
* History:
*  27/10/2003 : first release
*******************************************************************************/

#ifndef __main_H
#define __main_H

// used message object numbers
enum {
	CAN_TX_MSGOBJ = 0,
	CAN_RX_MSGOBJ = 1
};

// LED function prototypes
extern void LED_On(int number);
extern void LED_Off(int number);
extern void LED_Toggle(int number);

#endif // __main_H

/******************* (C) COPYRIGHT 2003 STMicroelectronics *****END OF FILE****/
