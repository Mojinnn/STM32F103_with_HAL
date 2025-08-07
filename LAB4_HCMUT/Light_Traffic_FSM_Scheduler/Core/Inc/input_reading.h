/*
 * input_reading.h
 *
 *  Created on: Jun 23, 2025
 *      Author: Lenovo
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "global.h"


#define NORMAL_STATE		GPIO_PIN_SET
#define PRESSED_STATE		GPIO_PIN_RESET

void getKeyInput(void);
int is_button_pressed(int);


#endif /* INC_INPUT_READING_H_ */
