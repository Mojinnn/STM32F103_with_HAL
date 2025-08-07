/*
 * input_reading.c
 *
 *  Created on: Jun 11, 2025
 *      Author: Lenovo
 */

#include "input_reading.h"

// The number of BUTTON
#define NO_OF_BUTTON 1

// BUTTON state
#define BUTTON_IS_PRESSED	GPIO_PIN_SET
#define BUTTON_IS_RELEASED	GPIO_PIN_RESET

// Duration for AUTOMATIC INCREASE, because timer is 10ms. Aim 1s so need 100 timer
#define DURATION_FOR_INCREASE_AUTO	100


// 1 Buffer for Result
static GPIO_PinState buttonBuffer[NO_OF_BUTTON];
// 2 Buffer for DEBOUNCE
static GPIO_PinState debounceButtonBufferS1[NO_OF_BUTTON];
static GPIO_PinState debounceButtonBufferS2[NO_OF_BUTTON];

// Flag and counter for BUTTON is Pressed more than 1s
static uint8_t flagForButtonPressed1s[NO_OF_BUTTON];
static uint16_t counterForButtonPressed1s[NO_OF_BUTTON];


void button_reading () {
	for (uint8_t i = 0; i < NO_OF_BUTTON; i++) {
		debounceButtonBufferS2[i] = debounceButtonBufferS1[i];
		debounceButtonBufferS1[i] = HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin);

		if (debounceButtonBufferS1[i] == debounceButtonBufferS2[i]) {
			buttonBuffer[i] = debounceButtonBufferS1[i];

			if (buttonBuffer[i] == BUTTON_IS_PRESSED) {
				if (counterForButtonPressed1s[i] < DURATION_FOR_INCREASE_AUTO) {
					counterForButtonPressed1s[i]++;
				}
				else {
					flagForButtonPressed1s[i] = 1;
				}
			}
			else {
				counterForButtonPressed1s[i] = 0;
				flagForButtonPressed1s[i] = 0;
			}
		}
	}

}
unsigned char is_button_pressed (unsigned char index) {
	if (index >= NO_OF_BUTTON) return 0;
	return (buttonBuffer[index] == BUTTON_IS_PRESSED);
}

unsigned char is_button_press_1s (unsigned char index) {
	if (index >= NO_OF_BUTTON) return 0xff;
	return (flagForButtonPressed1s[index] == 1);
}
