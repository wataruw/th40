/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio
    ChibiOS - Copyright (C) 2021 Stefan Kerkmann

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#pragma once

#define STM32F0xx_MCUCONF

#define STM32_NO_INIT                       FALSE
#define STM32_PVD_ENABLE                    FALSE
#define STM32_PLS                           STM32_PLS_LEV0
#define STM32_HSI_ENABLED                   TRUE
#define STM32_HSI14_ENABLED                 TRUE
#define STM32_HSI48_ENABLED                 FALSE
#define STM32_LSI_ENABLED                   TRUE
#define STM32_HSE_ENABLED                   FALSE
#define STM32_LSE_ENABLED                   FALSE
#define STM32_SW                            STM32_SW_PLL
#define STM32_PLLSRC                        STM32_PLLSRC_HSI_DIV2
#define STM32_PREDIV_VALUE                  1
#define STM32_PLLMUL_VALUE                  12
#define STM32_HPRE                          STM32_HPRE_DIV1
#define STM32_PPRE                          STM32_PPRE_DIV1
#define STM32_MCOSEL                        STM32_MCOSEL_NOCLOCK
#define STM32_MCOPRE                        STM32_MCOPRE_DIV1
#define STM32_PLLNODIV                      STM32_PLLNODIV_DIV2

/* Peripherals */
#define STM32_ADC_USE_ADC1                  FALSE
#define STM32_CAN_USE_CAN1                  FALSE
#define STM32_DAC_USE_DAC1                  FALSE
#define STM32_GPT_USE_TIM1                  FALSE
#define STM32_GPT_USE_TIM2                  FALSE
#define STM32_GPT_USE_TIM3                  FALSE
#define STM32_GPT_USE_TIM14                 FALSE
#define STM32_I2C_USE_I2C1                  TRUE
#define STM32_I2C_USE_I2C2                  FALSE
#define STM32_PWM_USE_ADVANCED              FALSE
#define STM32_PWM_USE_TIM1                  FALSE
#define STM32_PWM_USE_TIM2                  FALSE
#define STM32_PWM_USE_TIM3                  TRUE
#define STM32_PWM_USE_TIM14                 FALSE
#define STM32_RTC_USE_RTC                   FALSE
#define STM32_SERIAL_USE_USART1             FALSE
#define STM32_SERIAL_USE_USART2             FALSE
#define STM32_SPI_USE_SPI1                  FALSE
#define STM32_SPI_USE_SPI2                  FALSE
#define STM32_TIM_USE_TIM1                  FALSE
#define STM32_TIM_USE_TIM2                  FALSE
#define STM32_TIM_USE_TIM3                  TRUE
#define STM32_TIM_USE_TIM14                 FALSE
#define STM32_UART_USE_USART1               FALSE
#define STM32_UART_USE_USART2               FALSE
#define STM32_USB_USE_USB1                  TRUE
#define STM32_WDG_USE_IWDG                  FALSE

/* USB peripheral configuration */
#define STM32_USB_USE_USB1                  TRUE
#define STM32_USB_LOW_POWER_ON_SUSPEND      FALSE
#define STM32_USB_USB1_LP_IRQ_PRIORITY      2

/* Timer driver system settings */
#define STM32_PWM_USE_TIM3                  TRUE
#define STM32_GPT_TIM3_IRQ_PRIORITY        7
#define STM32_TIM3_SUPPRESS_ISR            TRUE

/* I2C driver system settings */
#define STM32_I2C_USE_DMA                   TRUE
#define STM32_I2C_BUSY_TIMEOUT              50
#define STM32_I2C_I2C1_IRQ_PRIORITY        3
#define STM32_I2C_I2C2_IRQ_PRIORITY        3
#define STM32_I2C_I2C1_DMA_PRIORITY        1
#define STM32_I2C_I2C2_DMA_PRIORITY        1
#define STM32_I2C_DMA_ERROR_HOOK(i2cp)     osalSysHalt("DMA failure")

