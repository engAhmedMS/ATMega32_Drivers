/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  LED.h
 *       Module:  -
 *
 *  Description:  Header file for interfacing with LEDs   
 *  
 *********************************************************************************************************************/
#ifndef LED_H
#define LED_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	YELLOW,
	BLUE,
	GREEN,
	RED
	}LED_ID;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LED_INIT(void);
void LED_ON(LED_ID led_id);
void LED_OFF(LED_ID led_id);
void LED_TOG(LED_ID led_id);
 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: FILE_NAME.h
 *********************************************************************************************************************/
