/*
 * software_timer.c
 *
 *  Created on: Jul 18, 2025
 *      Author: Lenovo
 */

#include "software_timer.h"

int flag_timer[SIZE];
int counter_timer[SIZE];
int TIMER_CYCLE = 10;

void setTimer(int index, int duration) {
	counter_timer[index] = duration/TIMER_CYCLE;
	flag_timer[index] = 0;
}

void runTimer(int index) {
	if (counter_timer[index] > 0) {
		counter_timer[index]--;
		if (counter_timer <= 0) {
			flag_timer[index] = 1;
		}
	}
}
