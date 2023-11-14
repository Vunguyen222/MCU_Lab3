/*
 * System_FSM.c
 *
 *  Created on: Nov 13, 2023
 *      Author: DELL
 */
#include "System_FSM.h"

void SystemFSM(){
	switch(status){
		case INIT:
			if(is_button_pressed(1) == 1){
				HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin, SET);
				status = MODE1_NORMAL;
				setTimer(100, 0);
				setTimer(100, 1);
				TL1 = RED;
				TL2 = GREEN;
			}
			break;
		case MODE1_NORMAL:
			//TrafficLightFSM1();
			//TrafficLightFSM2();
			HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, SET);
			break;
		case MODE2_MANRED:
			break;
		case MODE3_MANYELLOW:
			break;
		case MODE4_MANGREEN:
			break;
		default:
			break;
	}
}
