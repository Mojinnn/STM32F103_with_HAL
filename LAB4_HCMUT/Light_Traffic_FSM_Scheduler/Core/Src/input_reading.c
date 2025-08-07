/*
 * input_reading.c
 *
 *  Created on: Jun 23, 2025
 *      Author: Lenovo
 */
#include "input_reading.h"

#define BTN_COUNT 	3

int button_flag[BTN_COUNT] = {0, 0, 0};
int TimeOutForKeyPress = 500;
int keyReg0[BTN_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg1[BTN_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg2[BTN_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int keyReg3[BTN_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

void getKeyInput() {
	uint8_t index;
	for (index = 0; index < BTN_COUNT; index++) {
		keyReg2[index] = keyReg1[index];
		keyReg1[index] = keyReg0[index];

		if (index == 0) {
			keyReg0[index] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		}
		else if (index == 1) {
			keyReg0[index] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		}
		else if (index == 2) {
			keyReg0[index] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
		}

		if (keyReg0[index] == keyReg1[index] && keyReg1[index] == keyReg2[index]) {
			if (keyReg0[index] != keyReg3[index]) {
				keyReg3[index] = keyReg0[index];
				if (keyReg0[index] == PRESSED_STATE) {
					TimeOutForKeyPress = 500;
					button_flag[index] = 1;
				}
				else {
					TimeOutForKeyPress--;
					if (TimeOutForKeyPress == 0) {
						TimeOutForKeyPress = 500;
						if (keyReg0[index] == PRESSED_STATE) {
							button_flag[index] = 1;
						}
					}
				}
			}
		}
	}

}


int is_button_pressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}
