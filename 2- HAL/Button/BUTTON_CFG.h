/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  BUTTON_CFG
 *       Module:  -
 *
 *  Description:  header file to specify button connection (PULL UP - PULL DOWN)     
 *  
 *********************************************************************************************************************/
#ifndef BUTTON_CFG_H
#define BUTTON_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define PULL_DOWN 0
#define PULL_UP 1
#define INTERNAL_PULL_UP 2

#define BUTTON1_CONNECTION	INTERNAL_PULL_UP
#define BUTTON2_CONNECTION	INTERNAL_PULL_UP
#define BUTTON3_CONNECTION	INTERNAL_PULL_UP
#define BUTTON4_CONNECTION	INTERNAL_PULL_UP

#define NUMBER_BUTTONS	4
#define BUTTON_PORT		DIO_PORTD
#define BUTTON1_CHANNEL	7
#define BUTTON2_CHANNEL	6
#define BUTTON3_CHANNEL	5
#define BUTTON4_CHANNEL	3

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: FILE_NAME.h
 *********************************************************************************************************************/
