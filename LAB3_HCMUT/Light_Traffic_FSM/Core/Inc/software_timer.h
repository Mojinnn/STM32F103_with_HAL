/*
 * software_timer.h
 *
 *  Created on: Jul 1, 2025
 *      Author: Lenovo
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

#define SIZE 		10

extern int flag_timer[SIZE];

void setTimer(int, int);
void runTimer(int);

#endif /* INC_SOFTWARE_TIMER_H_ */
