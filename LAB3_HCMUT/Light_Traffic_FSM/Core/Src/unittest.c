/*
 * unittest.c
 *
 *  Created on: Jul 1, 2025
 *      Author: Lenovo
 */

#include "unittest.h"

void unittest_blink(void) {
	HAL_GPIO_TogglePin(Blink_Led_GPIO_Port, Blink_Led_Pin);
}
