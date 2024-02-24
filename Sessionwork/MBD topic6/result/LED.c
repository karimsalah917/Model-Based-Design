/******************************************************************************
*
* Module: LED DRIVER FOR AVR ATMEGA 32
*
* File Name: LED.c
*
* Description: SOURCE FILE OF THE DRIVER
*
* Author: karim salah
*
*****************************************************************************/
#include "LED.h"
#include "avr/io.h"
/********************************************************************************************************/
/*                                       LED SET FUNCTION                                               */
/********************************************************************************************************/
LED_enumError_t LED_SET(LED_ID_t  LED_NAME_ID,LED_enumState_t LED_OUTPUT_STATE)
{
	DDRA=255;
    PORTA=255;
}