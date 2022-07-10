/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL GPIO                                                              */
/*                                                      Last_update : 10/7/2022                                                               */  
/*********************************************************************************************************************************************/
#include "gpio.h"

mcal_err_t mcal_gpio_set_pin_direction(gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_direction_t dir)
{
    
}
mcal_err_t mcal_gpio_set_pin_level    (gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_level_t level);
mcal_err_t mcal_gpio_get_pin_level    (gpio_t gpio_x, gpio_pin_t pin_x, gpio_pin_level_t* level);
mcal_err_t mcal_gpio_toggle_pin       (gpio_t gpio_x, gpio_pin_t pin_x);
