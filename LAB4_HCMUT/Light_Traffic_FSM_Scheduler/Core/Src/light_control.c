/*
 * light_control.c
 *
 *  Created on: Jun 24, 2025
 *      Author: Lenovo
 */

#include "light_control.h"

void light_red_X() {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, SET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin, RESET);
}

void light_red_Y() {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, SET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

void light_yellow_X() {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, SET);
	HAL_GPIO_WritePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin, RESET);
}

void light_yellow_Y() {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, SET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

void light_green_X() {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin, SET);
}

void light_green_Y() {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, SET);
}

void clear_all_light () {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin, RESET);

	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

//int counter_h, counter_v;
//int state_h, state_v;
//
//void light_init () {
//	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, SET);
//	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
//	HAL_GPIO_WritePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin, RESET);
//	state_h = RED;
//	counter_h = counter[RED];
//	display7SEG_H(counter_h);
//

//	state_v = GREEN;
//	counter_v = counter[GREEN];
//	display7SEG_V(counter_v);
//}
//
//void control_light(int *state, int *counter, int index) {
//	GPIO_TypeDef* GPIO_Port[3][2] = {
//				{Red_Led_X_GPIO_Port, Red_Led_Y_GPIO_Port},
//				{Yellow_Led_X_GPIO_Port, Yellow_Led_Y_GPIO_Port},
//				{Green_Led_X_GPIO_Port, Green_Led_Y_GPIO_Port}
//		};
//
//	uint16_t GPIO_PIN[3][2] = {
//			{Red_Led_X_Pin, Red_Led_Y_Pin},
//			{Yellow_Led_X_Pin, Yellow_Led_Y_Pin},
//			{Green_Led_X_Pin, Green_Led_Y_Pin}
//		};
//
//
//	switch (*state) {
//		case RED:
//			if (*counter <= 0) {
//				*state = GREEN;
//				HAL_GPIO_WritePin(GPIO_Port[0][index], GPIO_PIN[0][index], RESET);
//				HAL_GPIO_WritePin(GPIO_Port[1][index], GPIO_PIN[1][index], RESET);
//				HAL_GPIO_WritePin(GPIO_Port[2][index], GPIO_PIN[2][index], SET);
//				*counter = counter[GREEN];
//			}
//			break;
//		case YELLOW:
//			if (*counter <= 0) {
//				*state = RED;
//				HAL_GPIO_WritePin(GPIO_Port[0][index], GPIO_PIN[0][index], SET);
//				HAL_GPIO_WritePin(GPIO_Port[1][index], GPIO_PIN[1][index], RESET);
//				HAL_GPIO_WritePin(GPIO_Port[2][index], GPIO_PIN[2][index], RESET);
//				*counter = counter[RED];
//			}
//			break;
//		case GREEN:
//			if (*counter <= 0) {
//				*state = YELLOW;
//				HAL_GPIO_WritePin(GPIO_Port[0][index], GPIO_PIN[0][index], RESET);
//				HAL_GPIO_WritePin(GPIO_Port[1][index], GPIO_PIN[1][index], SET);
//				HAL_GPIO_WritePin(GPIO_Port[2][index], GPIO_PIN[2][index], RESET);
//				*counter = counter[YELLOW];
//			}
//			break;
//		default:
//			break;
//	}
//}
//
//void control_4light() {
//	control_light(&state_h, &counter_h, 0);
//	display7SEG_H(counter_h);
//	counter_h--;
//
//	control_light(&state_v, &counter_v, 1);
//	display7SEG_V(counter_v);
//	counter_v--;
//}

