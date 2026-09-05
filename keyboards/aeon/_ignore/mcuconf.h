#pragma once

#include_next <mcuconf.h>

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE

#undef STM32_USB_USE_USB1
#define STM32_USB_USE_USB1 TRUE