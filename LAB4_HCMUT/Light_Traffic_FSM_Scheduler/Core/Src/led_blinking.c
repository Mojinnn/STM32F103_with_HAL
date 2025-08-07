/*
 * led_blinking.c
 *
 *  Created on: Jun 24, 2025
 *      Author: Lenovo
 */

#include "led_blinking.h"

void blink_red() {
	HAL_GPIO_TogglePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin);
	HAL_GPIO_TogglePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin);
}

void blink_yellow() {
	HAL_GPIO_TogglePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin);
	HAL_GPIO_TogglePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin);
}

void blink_green() {
	HAL_GPIO_TogglePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin);
	HAL_GPIO_TogglePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin);
}
