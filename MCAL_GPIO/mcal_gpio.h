/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL GPIO                                                              */
/*                                                      Last_update : 10/8/2022                                                              */  
/*********************************************************************************************************************************************/

#ifndef MCAL_GPIO_MCAL_GPIO_H_
#define MCAL_GPIO_MCAL_GPIO_H_

/* Includes */
#include "../mcal.h"
#include "../../driver/HT66F489/GPIO/gpio.h" /* This will change depending on the MCU used*/

/* MCAL GPIO ports */
typedef enum
{
    MCAL_GPIO_A = 0x00,
    MCAL_GPIO_B,
    MCAL_GPIO_C,
    MCAL_GPIO_D,
    MCAL_GPIO_MAX
}mcal_gpio_t;

/* MCAL GPIO pins*/
typedef uint8_t mcal_gpio_pin_t;
#define MCAL_PIN_0           0x01
#define MCAL_PIN_1           0x02
#define MCAL_PIN_2           0x04
#define MCAL_PIN_3           0x08
#define MCAL_PIN_4           0x10
#define MCAL_PIN_5           0x20
#define MCAL_PIN_6           0x40
#define MCAL_PIN_7           0x80
#define MCAL_PIN_ALL         0xff

/* MCAL GPIO pin direction*/
typedef uint8_t mcal_gpio_pin_direction_t;
#define PIN_OUTPUT      0
#define PIN_INPUT       1
#define PIN_INPUT_PU    2

/* MCAL GPIO pin level */
typedef uint8_t mcal_gpio_pin_level_t;
#define PIN_LOW         0
#define PIN_HIGH        1

/* MCAL GPIO Wake up state */
typedef uint8_t mcal_gpio_wake_up_state_t;
#define WAKE_UP_DISABLE     0
#define WAKE_UP_ENABLE      1

/* MCAL GPIO Source Current */ 
typedef uint8_t mcal_current_t;
#define CURRNET_SRC_1_5_uA      0      /*  1.5 micro Ampere @ 3.0 volt              */
#define CURRNET_SRC_2_0_uA      1      /*  2.0 micro Ampere @ 3.0 volt              */
#define CURRNET_SRC_3_0_uA      2      /*  3.0 micro Ampere @ 3.0 volt              */ 
#define CURRNET_SRC_3_6_uA      3      /*  3.6 micro Ampere @ 5.0 volt              */
#define CURRNET_SRC_6_0_uA      4      /*  6.0 micro Ampere @ 3.0 volt or 5.0 volt  */ 
#define CURRNET_SRC_8_0_uA      5      /*  8.0 micro Ampere @ 5.0 volt              */
#define CURRNET_SRC_18_0_uA     6      /*  18.0 micro Ampere @ 5.0 volt             */

/* MCAL GPIO Source Current */ 
typedef uint8_t mcal_voltage_src_t;
#define VOLTAGE_SRC_3_V         0
#define VOLTAGE_SRC_5_V         1

/* APIs*/
mcal_err_t mcal_gpio_set_pin_direction  (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_direction_t direction);
mcal_err_t mcal_gpio_set_pin_level      (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t level);
mcal_err_t mcal_gpio_get_pin_level      (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t* level);
mcal_err_t mcal_gpio_toggle_pin         (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x);
mcal_err_t mcal_gpio_set_wake_up_state  (mcal_gpio_pin_t pin_x, mcal_gpio_wake_up_state_t state);
mcal_err_t mcal_gpio_set_src_current    (mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_voltage_src_t voltage, mcal_current_t current);

#endif
