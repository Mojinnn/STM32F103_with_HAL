/*
 * global.h
 *
 *  Created on: Jun 24, 2025
 *      Author: Lenovo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#include "display7SEG.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "fsm_setting.h"
#include "input_reading.h"
#include "led_blinking.h"
#include "light_control.h"
#include "timer.h"
#include "unittest.h"


// Define status for FSM
#define INIT				0
#define AUTO_RED_GREEN		1
#define AUTO_RED_YELLOW		2
#define AUTO_GREEN_RED		3
#define AUTO_YELLOW_RED		4

#define MAN_RED 			10
#define MAN_YELLOW			11
#define MAN_GREEN			12

#define EDIT_RED			20
#define EDIT_YELLOW			21
#define EDIT_GREEN			22


// Define component of timer
#define LED7SEG 			5
#define BUTTON				6
#define BLINK				7


extern int status;

extern int red_duration;
extern int yellow_duration;
extern int green_duration;

extern int red_edit;
extern int yellow_edit;
extern int green_edit;

extern int light_countdown_X;
extern int light_countdown_Y;

extern int counter_for_7SEG;
extern int led7SEG_duration;

void check_timer_and_display(int, int);

#endif /* INC_GLOBAL_H_ */
