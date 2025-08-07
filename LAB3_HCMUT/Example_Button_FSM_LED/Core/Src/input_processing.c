/*
 * input_processing.c
 *
 *  Created on: Jun 11, 2025
 *      Author: Lenovo
 */

#include "input_processing.h"

enum ButtonState{BUTTON_PRESSED, BUTTON_RELEASED, BUTTON_PRESSED_FOR_1S};

enum ButtonState BUTTON_state = BUTTON_RELEASED;

void fsm_for_input_processing() {
	switch (BUTTON_state) {
	case BUTTON_RELEASED:
		HAL_GPIO_WritePin(Led_1_GPIO_Port, Led_1_Pin, RESET);
		if (is_button_pressed(0)) {
			BUTTON_state = BUTTON_PRESSED;
		}
		break;
	case BUTTON_PRESSED:
		HAL_GPIO_WritePin(Led_1_GPIO_Port, Led_1_Pin, SET);
		if (is_button_press_1s(0)) {
			BUTTON_state = BUTTON_PRESSED_FOR_1S;
		}
		if (!is_button_pressed(0)) {
			BUTTON_state = BUTTON_RELEASED;
		}
		break;
	case BUTTON_PRESSED_FOR_1S:
		HAL_GPIO_WritePin(Led_1_GPIO_Port, Led_1_Pin, RESET);
		HAL_GPIO_WritePin(Led_2_GPIO_Port, Led_2_Pin, SET);
		if (!is_button_pressed(0)) {
			BUTTON_state = BUTTON_RELEASED;
		}
		break;
	default:
		HAL_GPIO_WritePin(Led_1_GPIO_Port, Led_1_Pin, RESET);
		HAL_GPIO_WritePin(Led_2_GPIO_Port, Led_2_Pin, RESET);
		BUTTON_state = BUTTON_RELEASED;
		break;
	}
}
