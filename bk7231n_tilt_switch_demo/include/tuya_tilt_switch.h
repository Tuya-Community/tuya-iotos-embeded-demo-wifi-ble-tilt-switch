/**
 * @File: tuya_tilt_switch.h 
 * @Author: huanling.zhang@tuya.com 
 * @Last Modified time: 2021-03-13 
 * @Description:tilt_switch detection demo 
 */
#ifndef __TUYA_TILT_SWITCH_H__
#define __TUYA_TILT_SWITCH_H__

#include "tuya_cloud_types.h"
#include "tuya_gpio.h"

#define     TILT_SWITCH_PIN      TY_GPIOA_20

VOID tilt_witch_init(VOID);
VOID tilt_switch_task(VOID);

#endif

