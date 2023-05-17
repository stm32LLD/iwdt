# **STM32 Independent Watchdog Low Level Driver**
Following repository constains STM32 Independent Watchdog (IWDT) Low Level (LL) driver C implementation based on STM32 HAL library.

Module shall support all STM32 device famility, as all STM32 MCU incorporates independent WDT.

## **Dependencies**

### **1. STM32 HAL library**
STM32 IWDT LL driver module uses STM32 HAL library.


## **API**
| API Functions | Description | Prototype |
| --- | ----------- | ----- |
| **iwdt_init** | Initialization of IWDT module | iwdt_status_t iwdt_init(void) |
| **iwdt_start** | Start IWDT | iwdt_status_t iwdt_start(void) |
| **iwdt_kick** | Kick IWDT | iwdt_status_t iwdt_kick(void) |


## **Usage**

**GENERAL NOTICE: Put all user code between sections: USER CODE BEGIN & USER CODE END!**

**1. Copy template files to root directory of the module**

Copy configuration file *iwdt_cfg* to root directory and replace file extension (.htmp/.ctmp -> .h/.c).

**2. Change default HAL library include to target microprocessor inside ***iwdt_cfg.h***:**

Following example shows HAL library include for STM32L4 family:
```C
// USER INCLUDE BEGIN...

#include "stm32l4xx_hal.h"

// USER INCLUDE END...
```

**3. Configure IWDT module for application needs by changing ***iwdt_cfg.h***. Configuration options are following:**

| Configuration | Description |
| --- | --- |
| **IWDT_CFG_PERIOD_MS** 			    | Watchdog period time in ms |
| **IWDT_CFG_ASSERT_EN** 		        | Enable/Disable assertions |
| **IWDT_ASSERT** 		                | Assert definition |


**4. Initialize & start IWDT**
```C
// Init IWDT
iwdt_init();

// Start IWDT
iwdt_start();
```

**5. Kick IWDT**
```C
// Kick 10x per watchdog period
@ ( IWDT_CFG_PERIOD_MS / 10 )
{
    iwdt_kick();
}
```
