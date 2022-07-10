/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL GPIO                                                              */
/*                                                      Last_update : 10/7/2022                                                               */  
/*********************************************************************************************************************************************/
#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_

/******************** Includes *******************/
#include "../../drivers/"
#include "../mcal.h"

/****************** Definitions ******************/
typedef enum
{
    GPIO_A = 0,
    GPIO_B,
    GPIO_C,
    GPIO_D,
    GPIO_MAX
}gpio_t;

typedef uint8_t gpio_pin_t;

#define PIN_0   0x01
#define PIN_1   0x02
#define PIN_2   0x04
#define PIN_3   0x08
#define PIN_4   0x10
#define PIN_5   0x20
#define PIN_6   0x40
#define PIN_7   0x80
#define PIN_ALL 0xFF


typedef uint8_t gpio_pin_level_t;

#define PIN_LOW     0b0
#define PIN_HIGH    0b1


typedef uint8_t gpio_pin_direction_t;

#define PIN_OUTPUT      0x00
#define PIN_INPUT       0x01
#define PIN_INPUT_PU    0x02


/******************* APIs *******************/

mcal_err_t mcal_gpio_set_pin_direction(gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_direction_t dir);
mcal_err_t mcal_gpio_set_pin_level    (gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_level_t level);
mcal_err_t mcal_gpio_get_pin_level    (gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_level_t* level);
mcal_err_t mcal_gpio_toggle_pin       (gpio_t gpio_x, gpio_pin_t pin_x);

#endif