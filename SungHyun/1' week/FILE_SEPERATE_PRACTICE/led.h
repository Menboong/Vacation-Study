// ���� ���� : 2018.1.11 �̼��� 
// led���� ������� 

#ifndef __STM32L0xx_HAL_GPIO_H
#define __STM32L0xx_HAL_GPIO_H

extern "C" {

#include "stm32l0xx_hal_def.h"
#include "stm32l0xx_hal_gpio_ex.h"

void onLed (GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void offLed (GPIO_TypeDef * GPIOx, uint16_t GPIO_Pin);
}

#endif 
