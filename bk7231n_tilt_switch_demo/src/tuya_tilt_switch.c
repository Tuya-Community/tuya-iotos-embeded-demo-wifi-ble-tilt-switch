/**
 * @File: tuya_tilt_switch.c 
 * @Author: hunaling.zhang@tuya.com 
 * @Last Modified time: 2021-03-13 
 * @Description:tilt_switch detection demo 
 */

#include "tuya_dp_process.h"
#include "tuya_tilt_switch.h"
#include "tuya_iot_com_api.h"
#include "uni_log.h"

#include "FreeRTOS.h"
#include "task.h"
#include "uni_thread.h"

VOID tilt_switch_init(VOID)
{
    tuya_gpio_inout_set(TILT_SWITCH_PIN, TRUE);
    tuya_hal_thread_create(NULL, "check_switch_status", 512 * 4, TRD_PRIO_2, tilt_switch_task);
}

VOID tilt_switch_task(VOID)
{   
    while(1) { 
        
        if (TRUE == tuya_gpio_read(TILT_SWITCH_PIN)) {
            tilt_switch_status.switch_sta = OFF;
            PR_NOTICE("OFF");
        } else {
            tilt_switch_status.switch_sta = ON;
            PR_NOTICE("ON");
        }
        
        updata_dp_all();
        tuya_hal_system_sleep(1000);

    }
}

