/*
 * timer.c
 *
 *  Created on: Jun 11, 2025
 *      Author: Lenovo
 */

#include "timer.h"

//int flag_timer;
//int counter;
//int CYCLE_TIMER = 10;
//
//void setTimer(int duration) {
//	counter = duration / CYCLE_TIMER;
//	flag_timer = 0;
//}
//void runTimer() {
//	if (counter > 0) {
//		counter--;
//		if (counter <= 0) {
//			flag_timer = 1;
//		}
//	}
//}

void HAL_TIM_PeriodElapseCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM2) {
		button_reading();
	}
}

