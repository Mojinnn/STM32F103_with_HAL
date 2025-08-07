/*
 * unittest.c
 *
 *  Created on: Jun 25, 2025
 *      Author: Lenovo
 */
#include "unittest.h"

void unittest_blink() {
	HAL_GPIO_TogglePin(Blink_led_GPIO_Port, Blink_led_Pin);
}


