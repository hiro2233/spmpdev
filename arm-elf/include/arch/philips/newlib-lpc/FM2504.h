/**************************** FM2504.h **********************************/
/* Copyright 2005/03/11 Aeolus Development				*/
/* All rights reserved.							*/
/*									*/
/* Redistribution and use in source and binary forms, with or without	*/
/* modification, are permitted provided that the following conditions	*/
/* are met:								*/
/* 1. Redistributions of source code must retain the above copyright	*/
/*   notice, this list of conditions and the following disclaimer.	*/
/* 2. Redistributions in binary form must reproduce the above copyright	*/
/*   notice, this list of conditions and the following disclaimer in the*/
/*   documentation and/or other materials provided with the 		*/
/*   distribution.							*/
/* 3. The name of the Aeolus Development or its contributors may not be	*/
/* used to endorse or promote products derived from this software 	*/
/* without specific prior written permission.				*/
/*									*/
/* THIS SOFTWARE IS PROVIDED BY THE AEOULUS DEVELOPMENT "AS IS" AND ANY	*/
/* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE	*/
/* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR	*/
/* PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AEOLUS DEVELOPMENT BE	*/
/* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR	*/
/* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF	*/
/* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR 	*/
/* BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,*/
/* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE */
/* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 	*/
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.			*/
/*									*/
/*  Provides definitions and creation routine for a device driver to 	*/
/* support Ramtrons FM2504 SPI based FRAM.				*/
/************************************************************************/
/*
*   TLIB revision history:
*   1 FM2504.h 01-Jan-2006,12:09:22,`RADSETT' Original version.
*   TLIB revision history ends.
*/

#ifndef FM2504__H
#define FM2504__H

#include "dev_cntrl.h"

	/**** Private FM2504 subdevice types and defines. ***/
	/*  Needed for proper definitions but should not be */
	/* used outside of the driver.			    */

#define CMD_QUEUE_LENGTH	(4)	/*  Length of the internal	*/
					/* command queue.  Room for	*/
					/* maximum command length	*/
					/* sequence.			*/

	/* CMD - used to control internal command queue.		*/
typedef enum {
    CMD_NONE,		/*  No command, used to indicate the end of the	*/
    			/* queue.					*/
    CMD_READ,		/*  Perform a read operation using the SPI.	*/
    CMD_WRITE,		/*  Perform a write operation using the SPI.	*/
    CMD_OPEN		/*  Open parent driver, select specific device.	*/
    } CMD;

	/* CMD_QUEUE - Holds a list of waiting commands.		*/
typedef struct {
	CMD cmd;		/*  Command to perform.			*/
	void *ptr;		/*  Pointer to memory to use in command.*/
	size_t len;		/*  Length of memory.			*/
	} CMD_QUEUE[CMD_QUEUE_LENGTH];


	/**** Public FM2504 subdevice types and defines. ***/

	/* FM2504_INSTANCE - Information needed for each device.	*/
typedef struct {
    CMD_QUEUE q;		/*  Commands waiting to execute.	*/
    int command_queue_position;	/*  Where in the command list we have	*/
				/* reached.				*/
    int parent_file;		/*  File number of the parent device.	*/
    char *read_buffer;		/*  Buffer to read into on current read	*/
    				/* cycle.				*/
    size_t read_chars;		/*  Bytes left to read in current read 	*/
    				/* cycle.				*/
    _off_t device_offset;	/*  Where in the device current read 	*/
    				/* and write operations should occur.	*/
    int zero_buffer;		/*  Is parent zero buffered?		*/
    int blocking;		/*  Is this devices I/O blocking? 	*/
    unsigned char buf[3];	/*  Small local device specific buffer	*/
    				/* for building up commands to send to 	*/
				/* the FM2504.				*/
    } FM2504_INSTANCE;

/************************** CreateFM2504 ********************************/
/*  Given the appropriate structures initialize them to create a driver	*/
/* that can be added to an SPI driver to control an FM2504.		*/
/*  NOTE:  The parameters passed by pointer MUST last as long as the	*/
/* device driver, they are not copied.					*/
int CreateFM2504(  
    unsigned int device_number, 	/*  Device number to select the	*/
					/* particular FM2504.		*/
    const char *name, 			/*  Name to give the device.	*/
    FM2504_INSTANCE *instance, 		/*  Structure to contain FM2504 */
    					/* instance specific data.	*/
    struct device_table_entry *dt, 	/*  Device driver table.	*/
    SUB_DEVICE_INFO *inf);		/*  General instance specific 	*/
    					/* data.			*/


#endif /* FM2504__H */
