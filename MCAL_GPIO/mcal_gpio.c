/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL GPIO                                                              */
/*                                                      Last_update : 13/7/2022                                                              */  
/*********************************************************************************************************************************************/

/* includes */
#include "mcal_gpio.h"

mcal_err_t mcal_gpio_set_pin_direction(mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_direction_t direction)
{
    switch(direction)
    {
        case PIN_OUTPUT:
            if(gpio_set_pin_output(gpio_x, pin_x) != DRIVER_OK)
                return MCAL_FAIL;
            break;
        case PIN_INPUT:
            if(gpio_set_pin_input(gpio_x, pin_x) != DRIVER_OK)
                return MCAL_FAIL;
            break;
        case PIN_INPUT_PU:
            if(gpio_set_pin_input_pu(gpio_x, pin_x) != DRIVER_OK)
                return MCAL_FAIL;
            break;
        default:
            return MCAL_FAIL;
    }
    return MCAL_OK;
}

mcal_err_t mcal_gpio_set_pin_level(mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t level)
{
    switch(level)
    {
        case PIN_HIGH:
            if(gpio_set_pin_high(gpio_x, pin_x) != DRIVER_OK)
                return MCAL_FAIL;
            break;
        case PIN_LOW:
            if(gpio_set_pin_low(gpio_x, pin_x) != DRIVER_OK)
                return MCAL_FAIL;
            break;
        default:
            return MCAL_FAIL;
    }
    return MCAL_OK;
}
mcal_err_t mcal_gpio_get_pin_level(mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x, mcal_gpio_pin_level_t* level)
{
    if(gpio_get_pin_level(gpio_x , pin_x, level) != DRIVER_OK)
        return MCAL_FAIL;
    return MCAL_OK;
}

mcal_err_t mcal_gpio_toggle_pin(mcal_gpio_t gpio_x, mcal_gpio_pin_t pin_x)
{
    if(gpio_toggle_pin(gpio_x, pin_x) != DRIVER_OK)
        return MCAL_FAIL;
    return MCAL_OK;
}
