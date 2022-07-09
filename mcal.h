/*********************************************************************************************************************************************/
/*                                                      Author      : Islam Tarek                                                            */
/*                                                      SW_Module   : MCAL                                                                   */
/*                                                      Last_update : 9/7/2022                                                               */  
/*********************************************************************************************************************************************/
#ifndef MCAL_MCAL_H_
#define MCAL_MCAL_H_

#define ATMEGA32    1

#if ATMEGA32
    #include "../Atmega32-Drivers"
#endif

typedef enum
{
    MCAL_FAIL = -1,
    MCAL_OK
}mcal_err_t;


#endif