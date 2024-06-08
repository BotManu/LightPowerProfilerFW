/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define BUTTON_TOP_Pin GPIO_PIN_13
#define BUTTON_TOP_GPIO_Port GPIOC
#define BUTTON_TOP_EXTI_IRQn EXTI15_10_IRQn
#define FD_NFC_INT_Pin GPIO_PIN_1
#define FD_NFC_INT_GPIO_Port GPIOC
#define FD_NFC_INT_EXTI_IRQn EXTI1_IRQn
#define PWM_BUZ_Pin GPIO_PIN_0
#define PWM_BUZ_GPIO_Port GPIOA
#define RST_Pin GPIO_PIN_1
#define RST_GPIO_Port GPIOA
#define LC_BAT_Pin GPIO_PIN_3
#define LC_BAT_GPIO_Port GPIOA
#define SPI_CS_Pin GPIO_PIN_4
#define SPI_CS_GPIO_Port GPIOA
#define AN_PIR_Pin GPIO_PIN_7
#define AN_PIR_GPIO_Port GPIOA
#define AN_PIR_EXTI_IRQn EXTI9_5_IRQn
#define DC_Pin GPIO_PIN_4
#define DC_GPIO_Port GPIOC
#define BUSY_Pin GPIO_PIN_5
#define BUSY_GPIO_Port GPIOC
#define INT_LS_Pin GPIO_PIN_1
#define INT_LS_GPIO_Port GPIOB
#define RH_ALRT_Pin GPIO_PIN_2
#define RH_ALRT_GPIO_Port GPIOB
#define CE_QCH_Pin GPIO_PIN_15
#define CE_QCH_GPIO_Port GPIOB
#define PWM_LR_Pin GPIO_PIN_8
#define PWM_LR_GPIO_Port GPIOC
#define PWM_LG_Pin GPIO_PIN_9
#define PWM_LG_GPIO_Port GPIOC
#define LORA_WKP_Pin GPIO_PIN_8
#define LORA_WKP_GPIO_Port GPIOA
#define LORA_TX_Pin GPIO_PIN_9
#define LORA_TX_GPIO_Port GPIOA
#define CS_FLH_Pin GPIO_PIN_10
#define CS_FLH_GPIO_Port GPIOA
#define WP_FLH_Pin GPIO_PIN_15
#define WP_FLH_GPIO_Port GPIOA
#define RES_FLH_Pin GPIO_PIN_10
#define RES_FLH_GPIO_Port GPIOC
#define EN_CO2_Pin GPIO_PIN_2
#define EN_CO2_GPIO_Port GPIOD
#define LORA_RX_Pin GPIO_PIN_3
#define LORA_RX_GPIO_Port GPIOB
#define EN_PM_Pin GPIO_PIN_4
#define EN_PM_GPIO_Port GPIOB
#define INT_BP_Pin GPIO_PIN_5
#define INT_BP_GPIO_Port GPIOB
#define INT_BP_EXTI_IRQn EXTI9_5_IRQn
#define PWR_Pin GPIO_PIN_8
#define PWR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
