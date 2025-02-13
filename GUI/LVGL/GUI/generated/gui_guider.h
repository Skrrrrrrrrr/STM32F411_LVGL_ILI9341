/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_mainboard;
	bool screen_mainboard_del;
	lv_obj_t *screen_mainboard_cont_meter;
	lv_obj_t *screen_mainboard_label_cur;
	lv_obj_t *screen_mainboard_label_power;
	lv_obj_t *screen_mainboard_label_freq;
	lv_obj_t *screen_mainboard_label_volt;
	lv_obj_t *screen_mainboard_label_3;
	lv_obj_t *screen_mainboard_label_4;
	lv_obj_t *screen_mainboard_label_2;
	lv_obj_t *screen_mainboard_label_1;
	lv_obj_t *screen_mainboard_label_7;
	lv_obj_t *screen_mainboard_label_6;
	lv_obj_t *screen_mainboard_label_5;
	lv_obj_t *screen_mainboard_label_8;
	lv_obj_t *screen_mainboard_cont_ctrl;
	lv_obj_t *screen_mainboard_btn_1;
	lv_obj_t *screen_mainboard_btn_1_label;
	lv_obj_t *screen_mainboard_btn_2;
	lv_obj_t *screen_mainboard_btn_2_label;
	lv_obj_t *screen_mainboard_btn_3;
	lv_obj_t *screen_mainboard_btn_3_label;
	lv_obj_t *screen_mainboard_cont_indicator;
	lv_obj_t *screen_mainboard_btn_4;
	lv_obj_t *screen_mainboard_btn_4_label;
	lv_obj_t *screen_mainboard_btn_5;
	lv_obj_t *screen_mainboard_btn_5_label;
	lv_obj_t *screen_mainboard_btn_6;
	lv_obj_t *screen_mainboard_btn_6_label;
	lv_obj_t *screen_mainboard_btn_8;
	lv_obj_t *screen_mainboard_btn_8_label;
	lv_obj_t *screen_mainboard_btn_9;
	lv_obj_t *screen_mainboard_btn_9_label;
	lv_obj_t *screen_mainboard_btn_10;
	lv_obj_t *screen_mainboard_btn_10_label;
	lv_obj_t *screen_mainboard_btn_11;
	lv_obj_t *screen_mainboard_btn_11_label;
	lv_obj_t *screen_mainboard_btn_12;
	lv_obj_t *screen_mainboard_btn_12_label;
	lv_obj_t *screen_mainboard_btn_13;
	lv_obj_t *screen_mainboard_btn_13_label;
	lv_obj_t *screen_mainboard_label_9;
	lv_obj_t *screen_mainboard_cont_guns;
	lv_obj_t *screen_mainboard_btn_14;
	lv_obj_t *screen_mainboard_btn_14_label;
	lv_obj_t *screen_mainboard_btn_15;
	lv_obj_t *screen_mainboard_btn_15_label;
	lv_obj_t *screen_mainboard_btn_16;
	lv_obj_t *screen_mainboard_btn_16_label;
	lv_obj_t *screen_mainboard_btn_17;
	lv_obj_t *screen_mainboard_btn_17_label;
	lv_obj_t *screen_mainboard_btn_settings;
	lv_obj_t *screen_mainboard_btn_settings_label;
	lv_obj_t *screen_mainboard_spangroup_1;
	lv_span_t *screen_mainboard_spangroup_1_span;
	lv_obj_t *screen_poweron;
	bool screen_poweron_del;
	lv_obj_t *screen_poweron_bar_1;
	lv_obj_t *screen_poweron_label_1;
	lv_obj_t *screen_poweron_label_2;
	lv_obj_t *screen_keyboard;
	bool screen_keyboard_del;
	lv_obj_t *screen_keyboard_label_1;
	lv_obj_t *screen_keyboard_btn_1;
	lv_obj_t *screen_keyboard_btn_1_label;
	lv_obj_t *screen_keyboard_btn_2;
	lv_obj_t *screen_keyboard_btn_2_label;
	lv_obj_t *screen_keyboard_btn_3;
	lv_obj_t *screen_keyboard_btn_3_label;
	lv_obj_t *screen_keyboard_btn_4;
	lv_obj_t *screen_keyboard_btn_4_label;
	lv_obj_t *screen_keyboard_btn_8;
	lv_obj_t *screen_keyboard_btn_8_label;
	lv_obj_t *screen_keyboard_btn_7;
	lv_obj_t *screen_keyboard_btn_7_label;
	lv_obj_t *screen_keyboard_btn_6;
	lv_obj_t *screen_keyboard_btn_6_label;
	lv_obj_t *screen_keyboard_btn_5;
	lv_obj_t *screen_keyboard_btn_5_label;
	lv_obj_t *screen_keyboard_btn_11;
	lv_obj_t *screen_keyboard_btn_11_label;
	lv_obj_t *screen_keyboard_btn_10;
	lv_obj_t *screen_keyboard_btn_10_label;
	lv_obj_t *screen_keyboard_btn_9;
	lv_obj_t *screen_keyboard_btn_9_label;
	lv_obj_t *screen_keyboard_btn_16;
	lv_obj_t *screen_keyboard_btn_16_label;
	lv_obj_t *screen_keyboard_btn_15;
	lv_obj_t *screen_keyboard_btn_15_label;
	lv_obj_t *screen_keyboard_btn_14;
	lv_obj_t *screen_keyboard_btn_14_label;
	lv_obj_t *screen_keyboard_btn_13;
	lv_obj_t *screen_keyboard_btn_13_label;
	lv_obj_t *screen_settings;
	bool screen_settings_del;
	lv_obj_t *screen_settings_table_1;
	lv_obj_t *screen_settings_btn_1;
	lv_obj_t *screen_settings_btn_1_label;
	lv_obj_t *screen_settings_btn_2;
	lv_obj_t *screen_settings_btn_2_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_screen_mainboard(lv_ui *ui);
void setup_scr_screen_poweron(lv_ui *ui);
void setup_scr_screen_keyboard(lv_ui *ui);
void setup_scr_screen_settings(lv_ui *ui);

LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_12)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_37)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_33)


#ifdef __cplusplus
}
#endif
#endif
