/*
 * myNRF24.c
 *
 *  Created on: 19 sep. 2016
 *      Author: Hans-van-der-Heide
 */




#include "myNRF24.h"

//*************************auxillery functions**********************************//
//*******************not actually for NRF24 control*****************************//

//blink leds for debugging purposes
void fun(){
	  //HAL_GPIO_WritePin(GPIOE, LD3_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOE, LD4_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	  HAL_GPIO_WritePin(GPIOE, LD4_Pin, GPIO_PIN_RESET);
	//  HAL_GPIO_WritePin(GPIOE, LD6_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	 // HAL_GPIO_WritePin(GPIOE, LD6_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOE, LD8_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	  HAL_GPIO_WritePin(GPIOE, LD8_Pin, GPIO_PIN_RESET);
	 // HAL_GPIO_WritePin(GPIOE, LD10_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	 // HAL_GPIO_WritePin(GPIOE, LD10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOE, LD9_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	  HAL_GPIO_WritePin(GPIOE, LD9_Pin, GPIO_PIN_RESET);
	 // HAL_GPIO_WritePin(GPIOE, LD7_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	 // HAL_GPIO_WritePin(GPIOE, LD7_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOE, LD5_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
	  HAL_GPIO_WritePin(GPIOE, LD5_Pin, GPIO_PIN_RESET);
	 // HAL_GPIO_WritePin(GPIOE, LD3_Pin, GPIO_PIN_SET);
	  HAL_Delay(100);
}
