/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL GPIO                                                              */
/*                                                      Last_update : 13/7/2022                                                              */  
/*********************************************************************************************************************************************/

#ifndef MCAL_GPIO_MCAL_GPIO_H_
#define MCAL_GPIO_MCAL_GPIO_H_

/* Includes */
#include "../mcal.h"
#include "../../drivers/Atmega32/GPIO/gpio.h" /* This will change depending on the MCU used*/

/* MCAL GPIO ports */
typedef enum
{
    GPIO_A = 0x00,
    GPIO_B,
    GPIO_C,
    GPIO_D,
    GPIO_MAX
}mcal_gpio_t;

/* MCAL GPIO pins*/
typedef uint8_t mcal_gpio_pin_t;
#define PIN_0           0x01
#define PIN_1           0x02
#define PIN_2           0x04
#define PIN_3           0x08
#define PIN_4           0x10
#define PIN_5           0x20
#define PIN_6           0x40
#define PIN_7           0x80
#define PIN_ALL         0xff

/* MCAL GPIO pin direction*/
typedef uint8_t mcal_gpio_pin_direction_t;
#define PIN_OUTPUT      0
#define PIN_INPUT       1
#define PIN_INPUT_PU    2

/* MCAL GPIO pin level*/
typedef uint8_t mcal_gpio_pin_level_t;
#define PIN_HIGH        0
#define PIN_LOW         1

/* APIs*/
mcal_err_t mcal_gpio_set_pin_direction  (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_direction_t direction);
mcal_err_t mcal_gpio_set_pin_level      (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t level);
mcal_err_t mcal_gpio_get_pin_level      (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t* level);
mcal_err_t mcal_gpio_toggle_pin         (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x);

#endif
