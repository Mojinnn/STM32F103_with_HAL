/*
 * timer.h
 *
 *  Created on: Jun 11, 2025
 *      Author: Lenovo
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

//extern int flag_timer;
//
//void setTimer(int);
//void runTimer();

#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapseCallback(TIM_HandleTypeDef *htim);

#endif /* INC_TIMER_H_ */
