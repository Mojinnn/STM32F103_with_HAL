/*
 * global.c
 *
 *  Created on: Jun 24, 2025
 *      Author: Lenovo
 */

#include "global.h"

int status = 0;

int red_duration = 5;
int yellow_duration = 2;
int green_duration = 3;

int red_edit = 0;
int yellow_edit = 0;
int green_edit = 0;

int light_countdown_X = 0;
int light_countdown_Y = 0;

int counter_for_7SEG = 0;
int led7SEG_duration = 250;

void check_timer_and_display(int mode, int duration) {
	counter_for_7SEG++;
	if (counter_for_7SEG >= 4) counter_for_7SEG = 0;
	if (counter_for_7SEG %2 == 0) {
		if (mode == 2) {
			blink_red();
		}
		else if (mode == 3) {
			blink_yellow();
		}
		else if (mode == 4) {
			blink_green();
		}
	}

	display7SEG_H(mode);
	display7SEG_V(duration);
}
