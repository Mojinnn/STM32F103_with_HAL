#include "light_control.h"

void blink_red(void) {
	HAL_GPIO_TogglePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin);
	HAL_GPIO_TogglePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin);
}

void blink_yellow(void) {
	HAL_GPIO_TogglePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin);
	HAL_GPIO_TogglePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin);
}

void blink_green(void) {
	HAL_GPIO_TogglePin(Green_Led_X_GPIO_Port, Green_Led_X_Pin);
	HAL_GPIO_TogglePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin);
}

void clear_all_light(void) {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

void red_light_X(void) {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, SET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_X_Pin, RESET);
}

void red_light_Y(void) {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, SET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

void yellow_light_X(void) {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, SET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_X_Pin, RESET);
}

void yellow_light_Y(void) {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, SET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, RESET);
}

void green_light_X(void) {
	HAL_GPIO_WritePin(Red_Led_X_GPIO_Port, Red_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_X_GPIO_Port, Yellow_Led_X_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_X_Pin, SET);
}

void green_light_Y(void) {
	HAL_GPIO_WritePin(Red_Led_Y_GPIO_Port, Red_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Yellow_Led_Y_GPIO_Port, Yellow_Led_Y_Pin, RESET);
	HAL_GPIO_WritePin(Green_Led_Y_GPIO_Port, Green_Led_Y_Pin, SET);
}
