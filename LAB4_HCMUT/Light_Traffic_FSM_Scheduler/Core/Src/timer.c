/*
 * timer.c
 *
 *  Created on: Jun 18, 2025
 *      Author: Lenovo
 */

#include "timer.h"

int flag_timer[SIZE];
int count[SIZE];
int CYCLE_TIMER = 10;


void setTimer(int index, int duration) {
	count[index] = duration / CYCLE_TIMER;
	flag_timer[index] = 0;
}

void runTimer(int index) {
	if (count[index] > 0) {
		count[index]--;
		if (count[index] <= 0) {
			flag_timer[index] = 1;
		}
	}
}

