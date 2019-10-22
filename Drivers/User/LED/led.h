
#include "stm32f1xx_hal.h"
#include "main.h"
#define LED_ON 0
#define LED_OFF 1


#define LED_1_ON()              HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_RESET);
#define LED_1_OFF()             HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, GPIO_PIN_SET);
#define LED_2_ON()              HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_RESET);
#define LED_2_OFF()             HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, GPIO_PIN_SET);

void LED_Control(uint8_t status);