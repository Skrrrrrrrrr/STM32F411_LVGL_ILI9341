/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef enum WorkStatus{
    OK,
    Running,
    Error,
    Warning,
    Stopped,
    WorkStatusCNT
}eWorkStatus;

typedef enum WorkMode  {
    NotConneted,    
    Manual,
    Auto,
    Wired,
    Wireless,
    WorkModeCNT
}eWorkMode;

typedef enum Warning{
    NONE,
    OverLeakage,
    OverVoltage,
    UnderVoltage,
    PhaseLoss,
    OverLoad,
    MotorStalling,
    OilStarvation,//ȱ��
    OverTemperature,
    WarningCNT
}eWarning;

typedef struct FuelGun{
    uint32_t uuuid;
    uint8_t ipAddr[4];
    eWorkMode eWorkMode;
}sGuns;

typedef struct WasherPowerController{
    uint32_t uuuid;
    uint8_t ipAddr[4];
    eWorkStatus eWorkStatus;
    eWarning eWarning;
    eWorkMode eWorkMode;
    union Data{
        float fVoltage;
        float fCurrent;
        float fFrequency;
        float fPower;
        float fTemperature;
        float fInnage;//ʣ������
        uint64_t uRuningTime;
    } data;
    sGuns sGuns[4];

}sWasherPowerController;

// #ifdef LV_SPRINTF_CUSTOM 0
// #define LV_SPRINTF_CUSTOM 1
// #endif

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
    sWasherPowerController sWasherPowerController={
    1,
    {192,168,0,1},
    Stopped,
    NONE,
    Manual,
    {380.0f,8.0f,0.0f,0.0f,0.0f,0.0f,0},
    {
        {1,{192,168,1,2},NotConneted},
        {2,{192,168,1,3},NotConneted},
        {3,{192,168,1,4},NotConneted},
        {4,{192,168,1,5},NotConneted},
    }
    };
    sWasherPowerController.data.fFrequency=50.0f;
    sWasherPowerController.data.fPower=sWasherPowerController.data.fVoltage*sWasherPowerController.data.fCurrent*1.732f;
    lv_label_set_text_fmt(ui->screen_mainboard_label_volt, "%d",380);
    lv_label_set_text_fmt(ui->screen_mainboard_label_cur, "%d",16);
    lv_label_set_text_fmt(ui->screen_mainboard_label_power,"%d",23);

}