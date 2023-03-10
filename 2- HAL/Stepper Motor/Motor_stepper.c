/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Motor_stepper.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "bit_math.h"
#include "Std_Types.h"
#include "dio.h"
#include "Motor_stepper.h"
#include "Motor_stepper_CFG.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          :
*
* \Description     : this service for configuring IO channel
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) :


* \Return value:   : None
*******************************************************************************/
#define NUMBER_CHANNELS	4
static u8 arr_stepper_channels[NUMBER_CHANNELS] = {MOTOR_A_PIN, MOTOR_A_BAR_PIN, MOTOR_B_PIN, MOTOR_B_BAR_PIN};
static u8 step = 0;
void Stepper_Init()
{
	for(u8 idx; idx<NUMBER_CHANNELS; idx++)
	{
		dio_vidConfigChannel(MOTOR_PORT, arr_stepper_channels[idx], OUTPUT);
	}


}

void Stepper_TurnRightHalf()
{


}

void Stepper_TurnLeftHalf()
{


}

void Stepper_TurnRightFull()
{
	step++;
	for(u8 idx; idx<NUMBER_CHANNELS; idx++)
	{
		dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[idx], STD_LOW);
	}
	dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[step%NUMBER_CHANNELS], STD_HIGH);
	dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[(step+1)%NUMBER_CHANNELS], STD_HIGH);
}

void Stepper_TurnLeftFull()
{
	step--;
	for(u8 idx; idx<NUMBER_CHANNELS; idx++)
	{
		dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[idx], STD_LOW);
	}
	dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[step%NUMBER_CHANNELS], STD_HIGH);
	dio_vidWriteChannel(MOTOR_PORT, arr_stepper_channels[(step+1)%NUMBER_CHANNELS], STD_HIGH);
}


/**********************************************************************************************************************
 *  END OF FILE: Motor_stepper.c
 *********************************************************************************************************************/
