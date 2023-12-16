/*****************************************************************************
 * @Author                : Islam Tarek<islamtarek0550@gmail.com>            *
 * @CreatedDate           : 2023-08-28 14:35:39                              *
 * @LastEditors           : Islam Tarek<islamtarek0550@gmail.com>            *
 * @LastEditDate          : 2023-12-16 16:04:09                              *
 * @FilePath              : MCAL.h                                           *
 ****************************************************************************/

#ifndef MCAL_MCAL_H_
#define MCAL_MCAL_H_

/**
 * @section Includes
 */

#include "../MC_Drivers/Atmega32/GPIO/GPIO_int.h"


/**
 * @section Typedefs
 */

/**
 * @brief GPIO typedefs
*/

typedef gpio_port_t mcal_port_t;
typedef gpio_pin_t  mcal_pin_t;

/**
 * @section Macros Definiton
 */

/**
 * @brief Ports Definitions
 * @note May be updated depending on MCU.
 */

#define MCAL_PORT_A PORT_A
#define MCAL_PORT_B PORT_B
#define MCAL_PORT_C PORT_C
#define MCAL_PORT_D PORT_D

/**
 * @brief Pins Definitions
 * @note May be updated depending on MCU.
 */

#define MCAL_PIN_0      PIN_0
#define MCAL_PIN_1      PIN_1
#define MCAL_PIN_2      PIN_2
#define MCAL_PIN_3      PIN_3
#define MCAL_PIN_4      PIN_4
#define MCAL_PIN_5      PIN_5
#define MCAL_PIN_6      PIN_6
#define MCAL_PIN_7      PIN_7
#define MCAL_PIN_ALL    PIN_ALL

/**
 * @brief Levels Definitions
 * @note May be updated depending on MCU.
 */

#define MCAL_PIN_LOW    PIN_LOW_LEVEL
#define MCAL_PIN_HIGH   PIN_HIGH_LEVEL

/**
 * @brief Modes Definitions
 * @note May be updated depending on MCU.
 */

#define MCAL_PIN_INPUT_FLOATING     PIN_FLOATING_INPUT
#define MCAL_PIN_INPUT_PULL_UP      PIN_PULL_UP_INPUT
#define MCAL_PIN_INPUT_PULL_DOWN    PIN_PULL_DOWN_INPUT
#define MCAL_PIN_OUTPUT             PIN_OUTPUT


/**
 * @section Macros Like Functions Definitions
 */

/**
 * @brief GPIO APIs
 * @note May be modified or updated depending on MCU.
 */

#define MCAL_GPIO_set_pin_mode      GPIO_set_pin_mode
#define MCAL_GPIO_set_pin_level     GPIO_set_pin_level
#define MCAL_GPIO_get_pin_level     GPIO_get_pin_level
#define MCAL_GPIO_toggle_pin_level  GPIO_tog_pin_level

#endif