/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Led_Red_Y_Pin GPIO_PIN_4
#define Led_Red_Y_GPIO_Port GPIOA
#define Led_Yellow_Y_Pin GPIO_PIN_5
#define Led_Yellow_Y_GPIO_Port GPIOA
#define Led_Green_Y_Pin GPIO_PIN_6
#define Led_Green_Y_GPIO_Port GPIOA
#define Led_Red_X_Pin GPIO_PIN_7
#define Led_Red_X_GPIO_Port GPIOA
#define A_H_Pin GPIO_PIN_0
#define A_H_GPIO_Port GPIOB
#define B_H_Pin GPIO_PIN_1
#define B_H_GPIO_Port GPIOB
#define C_H_Pin GPIO_PIN_2
#define C_H_GPIO_Port GPIOB
#define D_V_Pin GPIO_PIN_10
#define D_V_GPIO_Port GPIOB
#define E_V_Pin GPIO_PIN_11
#define E_V_GPIO_Port GPIOB
#define F_V_Pin GPIO_PIN_12
#define F_V_GPIO_Port GPIOB
#define G_V_Pin GPIO_PIN_13
#define G_V_GPIO_Port GPIOB
#define Led_Yellow_X_Pin GPIO_PIN_8
#define Led_Yellow_X_GPIO_Port GPIOA
#define Led_Green_X_Pin GPIO_PIN_9
#define Led_Green_X_GPIO_Port GPIOA
#define D_H_Pin GPIO_PIN_3
#define D_H_GPIO_Port GPIOB
#define E_H_Pin GPIO_PIN_4
#define E_H_GPIO_Port GPIOB
#define F_H_Pin GPIO_PIN_5
#define F_H_GPIO_Port GPIOB
#define G_H_Pin GPIO_PIN_6
#define G_H_GPIO_Port GPIOB
#define A_V_Pin GPIO_PIN_7
#define A_V_GPIO_Port GPIOB
#define B_V_Pin GPIO_PIN_8
#define B_V_GPIO_Port GPIOB
#define C_V_Pin GPIO_PIN_9
#define C_V_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
