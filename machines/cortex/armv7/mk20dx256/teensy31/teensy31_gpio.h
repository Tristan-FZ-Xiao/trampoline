#ifndef __teensy31_gpio_h__
#define __teensy31_gpio_h__

#include "tpl_compiler.h"
#include "tpl_os_std_types.h"

FUNC(void, OS_CODE) digitalWrite(uint8, uint8);

FUNC(uint8, OS_CODE) digitalRead(uint8);

FUNC(void, OS_CODE) pinMode(uint8, uint8);

#endif /* __teensy31_gpio_h__ */