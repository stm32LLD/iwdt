// Copyright (c) 2023 Ziga Miklosic
// All Rights Reserved
////////////////////////////////////////////////////////////////////////////////
/**
*@file      iwdt.h
*@brief     Independent WDT LL drivers based on STM32 HAL library
*@author    Ziga Miklosic
*@email		ziga.miklosic@gmail.si
*@date      04.05.2023
*@version   V0.1.0
*/
////////////////////////////////////////////////////////////////////////////////
/**
*@addtogroup IWDT_API
* @{ <!-- BEGIN GROUP -->
*
*/
////////////////////////////////////////////////////////////////////////////////

#ifndef __IWDT_H
#define __IWDT_H

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

/**
 *  Module version
 */
#define IWDT_VER_MAJOR          ( 0 )
#define IWDT_VER_MINOR          ( 1 )
#define IWDT_VER_DEVELOP        ( 0 )

/**
 *  IWDT status
 */
typedef enum
{
    eIWDT_OK        = 0x00U,    /**<Normal operation */
    eIWDT_ERROR     = 0x01U,    /**<General error code */
} iwdt_status_t;

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////
iwdt_status_t iwdt_init     (void);
iwdt_status_t iwdt_start    (void);
iwdt_status_t iwdt_kick     (void);

#endif // __IWDT_H

////////////////////////////////////////////////////////////////////////////////
/**
* @} <!-- END GROUP -->
*/
////////////////////////////////////////////////////////////////////////////////
