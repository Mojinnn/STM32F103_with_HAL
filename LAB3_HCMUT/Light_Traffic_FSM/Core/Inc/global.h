/*
 * global.h
 *
 *  Created on: Jul 1, 2025
 *      Author: Lenovo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "led_7SEG.h"
#include "light_control.h"
#include "software_timer.h"
#include "unittest.h"
#include "input_reading.h"


// Define state for Light Traffic
#define INIT			0

#define AUTO_RED_GREEN	1
#define AUTO_RED_YELLOW 2
#define AUTO_GREEN_RED	3
#define AUTO_YELLOW_RED 4

#define MAN_RED			11
#define MAN_YELLOW		12
#define MAN_GREEN		13

#define EDIT_RED		21
#define EDIT_YELLOW		22
#define EDIT_GREEN		23

// Define other components
#define BLINK			5
#define BUTTON			6
#define LED7SEG			7

extern int status;

extern int red_duration;
extern int green_duration;
extern int yellow_duration;

extern int red_edit;
extern int yellow_edit;
extern int green_edit;

extern int light_countdown_X;
extern int light_countdown_Y;

extern int count_for_led7seg;
extern int led7seg_duration;

void check_timer_and_display_mode(int, int);



#endif /* INC_GLOBAL_H_ */
