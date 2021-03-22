/**
 * @File: tuya_dp_process.h 
 * @Author: huanling.zhang@tuya.com 
 * @Last Modified time: 2021-03-13 
 * @Description: tilt_switch detection demo 
 */

#ifndef __TUYA_DP_PROCESS_H_
#define __TUYA_DP_PROCESS_H_

#include "tuya_cloud_com_defs.h"
#include "tuya_cloud_types.h"

#define     OFF      0
#define     ON       1

//设备状态结构体
typedef struct {
    UCHAR_T switch_sta;
    UCHAR_T last_switch_sta;
}switch_detection_S;

extern switch_detection_S  tilt_switch_status;

VOID updata_dp_all(VOID);
VOID dp_process(IN CONST TY_OBJ_DP_S *root);


#endif

