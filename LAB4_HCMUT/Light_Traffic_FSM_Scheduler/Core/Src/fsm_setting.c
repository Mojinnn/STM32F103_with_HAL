/*
 * fsm_setting.c
 *
 *  Created on: Jun 25, 2025
 *      Author: Lenovo
 */

#include "fsm_setting.h"

void fsm_setting_run() {
	switch (status) {
	case EDIT_RED:
		check_timer_and_display(2, red_edit);
		if (is_button_pressed(0)) {};
		if (is_button_pressed(1)) {
			red_edit++;
			if (red_edit > 99) red_edit = 1;
		}
		if (is_button_pressed(2)) {
			red_duration = red_edit;
			status = MAN_RED;
//			setTimer(LED7SEG, led7SEG_duration);
		}
		break;

	case EDIT_YELLOW:
		check_timer_and_display(3, yellow_edit);
		if (is_button_pressed(0)) {};
		if (is_button_pressed(1)) {
			yellow_edit++;
			if (yellow_edit > 99) yellow_edit = 1;
		}
		if (is_button_pressed(2)) {
			yellow_duration = yellow_edit;
			status = MAN_YELLOW;
//			setTimer(LED7SEG, led7SEG_duration);
		}
		break;

	case EDIT_GREEN:
		check_timer_and_display(4, green_edit);
		if (is_button_pressed(0)) {};
		if (is_button_pressed(1)) {
			green_edit++;
			if (green_edit > 99) green_edit = 1;
		}
		if (is_button_pressed(2)) {
			green_duration = green_edit;
			status = MAN_GREEN;
//			setTimer(LED7SEG, led7SEG_duration);
		}
		break;

	default:
		break;
	}
}

