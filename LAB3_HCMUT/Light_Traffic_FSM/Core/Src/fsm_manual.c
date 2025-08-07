/*
 * fsm_manual.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Lenovo
 */

#include "fsm_manual.h"

void fsm_manual_run () {
	switch (status) {
	case MAN_RED:
		check_timer_and_display_mode(2, red_duration);

		if (is_button_pressed(0)) {
			status = MAN_YELLOW;

			clear_all_light();

			setTimer(LED7SEG, led7seg_duration);
		}

		if (is_button_pressed(1)) {
			status = EDIT_RED;

			red_edit++;
			if (red_edit > 99) {
				red_edit = 1;
			}

			setTimer(LED7SEG, led7seg_duration);
		}

		break;
	case MAN_YELLOW:
		check_timer_and_display_mode(3, yellow_duration);

		if (is_button_pressed(0)) {
			status = MAN_GREEN;

			clear_all_light();

			setTimer(LED7SEG, led7seg_duration);
		}

		if (is_button_pressed(1)) {
			status = EDIT_YELLOW;

			yellow_edit++;
			if (yellow_edit > 99) {
				yellow_edit = 1;
			}

			setTimer(LED7SEG, led7seg_duration);
		}

		break;
	case MAN_GREEN:
		check_timer_and_display_mode(4, green_duration);

		if (is_button_pressed(0)) {
			status = INIT;

			clear_all_light();

			setTimer(LED7SEG, led7seg_duration);
		}

		if (is_button_pressed(1)) {
			status = EDIT_GREEN;

			green_edit++;
			if(green_edit > 99) {
				green_edit = 1;
			}

			setTimer(LED7SEG, led7seg_duration);
		}
		break;
	default:
		break;
	}
}

