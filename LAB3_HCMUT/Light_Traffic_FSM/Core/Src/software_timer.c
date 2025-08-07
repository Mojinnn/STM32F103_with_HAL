/*
 * software_timer.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Lenovo
 */

#include "software_timer.h"

int flag_timer[SIZE];
int timer_count[SIZE];
int CYCLE_TIMER = 10;

void setTimer(int index, int duration) {
	timer_count[index] = duration / CYCLE_TIMER;
	flag_timer[index] = 0;
}
void runTimer(int index) {
	if (timer_count[index] > 0) {
		timer_count[index]--;
		if (timer_count[index] <= 0) {
			flag_timer[index] = 1;
		}
	}
}
