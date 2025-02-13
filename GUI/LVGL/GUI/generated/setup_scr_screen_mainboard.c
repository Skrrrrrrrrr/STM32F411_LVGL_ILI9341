/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_mainboard(lv_ui *ui)
{
    //Write codes screen_mainboard
    ui->screen_mainboard = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_mainboard, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_mainboard, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_mainboard, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_cont_meter
    ui->screen_mainboard_cont_meter = lv_obj_create(ui->screen_mainboard);
    lv_obj_set_pos(ui->screen_mainboard_cont_meter, 5, 10);
    lv_obj_set_size(ui->screen_mainboard_cont_meter, 299, 158);
    lv_obj_set_scrollbar_mode(ui->screen_mainboard_cont_meter, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_mainboard_cont_meter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_cont_meter, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_mainboard_cont_meter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_mainboard_cont_meter, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_mainboard_cont_meter, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_cont_meter, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_cont_meter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_cont_meter, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_cont_meter, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_cont_meter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_cont_meter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_cont_meter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_cont_meter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_cont_meter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_cur
    ui->screen_mainboard_label_cur = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_cur, "0.0");
    lv_label_set_long_mode(ui->screen_mainboard_label_cur, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_cur, 142, 48);
    lv_obj_set_size(ui->screen_mainboard_label_cur, 57, 16);

    //Write style for screen_mainboard_label_cur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_cur, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_cur, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_cur, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_cur, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_cur, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_power
    ui->screen_mainboard_label_power = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_power, "0.0");
    lv_label_set_long_mode(ui->screen_mainboard_label_power, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_power, 140, 121);
    lv_obj_set_size(ui->screen_mainboard_label_power, 51, 16);

    //Write style for screen_mainboard_label_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_power, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_power, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_power, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_freq
    ui->screen_mainboard_label_freq = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_freq, "50.0");
    lv_label_set_long_mode(ui->screen_mainboard_label_freq, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_freq, 22, 122);
    lv_obj_set_size(ui->screen_mainboard_label_freq, 66, 21);

    //Write style for screen_mainboard_label_freq, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_freq, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_freq, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_freq, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_freq, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_freq, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_freq, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_volt
    ui->screen_mainboard_label_volt = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_volt, "0.0");
    lv_label_set_long_mode(ui->screen_mainboard_label_volt, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_volt, 27, 50);
    lv_obj_set_size(ui->screen_mainboard_label_volt, 63, 15);

    //Write style for screen_mainboard_label_volt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_volt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_volt, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_volt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_volt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_volt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_volt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_3
    ui->screen_mainboard_label_3 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_3, "频率");
    lv_label_set_long_mode(ui->screen_mainboard_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_3, 33, 94);
    lv_obj_set_size(ui->screen_mainboard_label_3, 90, 17);

    //Write style for screen_mainboard_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_3, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_4
    ui->screen_mainboard_label_4 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_4, "功率");
    lv_label_set_long_mode(ui->screen_mainboard_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_4, 148, 93);
    lv_obj_set_size(ui->screen_mainboard_label_4, 101, 19);

    //Write style for screen_mainboard_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_4, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_2
    ui->screen_mainboard_label_2 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_2, "电压");
    lv_label_set_long_mode(ui->screen_mainboard_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_2, 26, 20);
    lv_obj_set_size(ui->screen_mainboard_label_2, 100, 32);

    //Write style for screen_mainboard_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_1
    ui->screen_mainboard_label_1 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_1, "电流");
    lv_label_set_long_mode(ui->screen_mainboard_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_1, 150, 17);
    lv_obj_set_size(ui->screen_mainboard_label_1, 100, 32);

    //Write style for screen_mainboard_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_7
    ui->screen_mainboard_label_7 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_7, "kVA");
    lv_label_set_long_mode(ui->screen_mainboard_label_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_7, 210, 120);
    lv_obj_set_size(ui->screen_mainboard_label_7, 36, 18);

    //Write style for screen_mainboard_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_7, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_6
    ui->screen_mainboard_label_6 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_6, "A");
    lv_label_set_long_mode(ui->screen_mainboard_label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_6, 220, 46);
    lv_obj_set_size(ui->screen_mainboard_label_6, 17, 22);

    //Write style for screen_mainboard_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_6, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_5
    ui->screen_mainboard_label_5 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_5, "V");
    lv_label_set_long_mode(ui->screen_mainboard_label_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_5, 102, 50);
    lv_obj_set_size(ui->screen_mainboard_label_5, 28, 21);

    //Write style for screen_mainboard_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_5, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_8
    ui->screen_mainboard_label_8 = lv_label_create(ui->screen_mainboard_cont_meter);
    lv_label_set_text(ui->screen_mainboard_label_8, "Hz");
    lv_label_set_long_mode(ui->screen_mainboard_label_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_8, 98, 120);
    lv_obj_set_size(ui->screen_mainboard_label_8, 33, 21);

    //Write style for screen_mainboard_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_8, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_cont_ctrl
    ui->screen_mainboard_cont_ctrl = lv_obj_create(ui->screen_mainboard);
    lv_obj_set_pos(ui->screen_mainboard_cont_ctrl, 315, 121);
    lv_obj_set_size(ui->screen_mainboard_cont_ctrl, 162, 47);
    lv_obj_set_scrollbar_mode(ui->screen_mainboard_cont_ctrl, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_mainboard_cont_ctrl, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_cont_ctrl, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_mainboard_cont_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_mainboard_cont_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_mainboard_cont_ctrl, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_cont_ctrl, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_cont_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_cont_ctrl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_cont_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_cont_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_cont_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_cont_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_cont_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_cont_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_1
    ui->screen_mainboard_btn_1 = lv_btn_create(ui->screen_mainboard_cont_ctrl);
    ui->screen_mainboard_btn_1_label = lv_label_create(ui->screen_mainboard_btn_1);
    lv_label_set_text(ui->screen_mainboard_btn_1_label, "自动");
    lv_label_set_long_mode(ui->screen_mainboard_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_1, 6, 9);
    lv_obj_set_size(ui->screen_mainboard_btn_1, 48, 26);

    //Write style for screen_mainboard_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_2
    ui->screen_mainboard_btn_2 = lv_btn_create(ui->screen_mainboard_cont_ctrl);
    ui->screen_mainboard_btn_2_label = lv_label_create(ui->screen_mainboard_btn_2);
    lv_label_set_text(ui->screen_mainboard_btn_2_label, "手动");
    lv_label_set_long_mode(ui->screen_mainboard_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_2, 59, 9);
    lv_obj_set_size(ui->screen_mainboard_btn_2, 44, 26);

    //Write style for screen_mainboard_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_3
    ui->screen_mainboard_btn_3 = lv_btn_create(ui->screen_mainboard_cont_ctrl);
    ui->screen_mainboard_btn_3_label = lv_label_create(ui->screen_mainboard_btn_3);
    lv_label_set_text(ui->screen_mainboard_btn_3_label, "开机");
    lv_label_set_long_mode(ui->screen_mainboard_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_3, 107, 8);
    lv_obj_set_size(ui->screen_mainboard_btn_3, 47, 27);

    //Write style for screen_mainboard_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_3, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_cont_indicator
    ui->screen_mainboard_cont_indicator = lv_obj_create(ui->screen_mainboard);
    lv_obj_set_pos(ui->screen_mainboard_cont_indicator, 5, 173);
    lv_obj_set_size(ui->screen_mainboard_cont_indicator, 300, 142);
    lv_obj_set_scrollbar_mode(ui->screen_mainboard_cont_indicator, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_mainboard_cont_indicator, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_cont_indicator, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_mainboard_cont_indicator, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_mainboard_cont_indicator, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_mainboard_cont_indicator, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_cont_indicator, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_cont_indicator, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_cont_indicator, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_cont_indicator, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_cont_indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_cont_indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_cont_indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_cont_indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_cont_indicator, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_4
    ui->screen_mainboard_btn_4 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_4_label = lv_label_create(ui->screen_mainboard_btn_4);
    lv_label_set_text(ui->screen_mainboard_btn_4_label, "漏电警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_4, 3, 11);
    lv_obj_set_size(ui->screen_mainboard_btn_4, 89, 28);

    //Write style for screen_mainboard_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_4, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_4, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_5
    ui->screen_mainboard_btn_5 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_5_label = lv_label_create(ui->screen_mainboard_btn_5);
    lv_label_set_text(ui->screen_mainboard_btn_5_label, "缺油警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_5, 196, 12);
    lv_obj_set_size(ui->screen_mainboard_btn_5, 89, 28);

    //Write style for screen_mainboard_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_5, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_5, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_6
    ui->screen_mainboard_btn_6 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_6_label = lv_label_create(ui->screen_mainboard_btn_6);
    lv_label_set_text(ui->screen_mainboard_btn_6_label, "过温警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_6, 200, 103);
    lv_obj_set_size(ui->screen_mainboard_btn_6, 89, 28);

    //Write style for screen_mainboard_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_6, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_6, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_8
    ui->screen_mainboard_btn_8 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_8_label = lv_label_create(ui->screen_mainboard_btn_8);
    lv_label_set_text(ui->screen_mainboard_btn_8_label, "漏液警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_8_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_8, 99, 12);
    lv_obj_set_size(ui->screen_mainboard_btn_8, 89, 28);

    //Write style for screen_mainboard_btn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_8, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_8, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_9
    ui->screen_mainboard_btn_9 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_9_label = lv_label_create(ui->screen_mainboard_btn_9);
    lv_label_set_text(ui->screen_mainboard_btn_9_label, "过载警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_9_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_9, 5, 103);
    lv_obj_set_size(ui->screen_mainboard_btn_9, 89, 28);

    //Write style for screen_mainboard_btn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_9, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_9, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_9, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_10
    ui->screen_mainboard_btn_10 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_10_label = lv_label_create(ui->screen_mainboard_btn_10);
    lv_label_set_text(ui->screen_mainboard_btn_10_label, "缺相警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_10_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_10, 197, 59);
    lv_obj_set_size(ui->screen_mainboard_btn_10, 89, 28);

    //Write style for screen_mainboard_btn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_10, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_10, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_10, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_11
    ui->screen_mainboard_btn_11 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_11_label = lv_label_create(ui->screen_mainboard_btn_11);
    lv_label_set_text(ui->screen_mainboard_btn_11_label, "欠压警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_11_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_11_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_11, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_11_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_11, 101, 59);
    lv_obj_set_size(ui->screen_mainboard_btn_11, 89, 28);

    //Write style for screen_mainboard_btn_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_11, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_11, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_11, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_12
    ui->screen_mainboard_btn_12 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_12_label = lv_label_create(ui->screen_mainboard_btn_12);
    lv_label_set_text(ui->screen_mainboard_btn_12_label, "过压警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_12_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_12_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_12, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_12_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_12, 4, 60);
    lv_obj_set_size(ui->screen_mainboard_btn_12, 89, 28);

    //Write style for screen_mainboard_btn_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_12, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_12, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_12, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_13
    ui->screen_mainboard_btn_13 = lv_btn_create(ui->screen_mainboard_cont_indicator);
    ui->screen_mainboard_btn_13_label = lv_label_create(ui->screen_mainboard_btn_13);
    lv_label_set_text(ui->screen_mainboard_btn_13_label, "堵转警告");
    lv_label_set_long_mode(ui->screen_mainboard_btn_13_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_13_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_13, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_13_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_13, 103, 104);
    lv_obj_set_size(ui->screen_mainboard_btn_13, 89, 28);

    //Write style for screen_mainboard_btn_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_13, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_13, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_13, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_label_9
    ui->screen_mainboard_label_9 = lv_label_create(ui->screen_mainboard);
    lv_label_set_text(ui->screen_mainboard_label_9, "" LV_SYMBOL_CLOSE " 设备离线");
    lv_label_set_long_mode(ui->screen_mainboard_label_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_mainboard_label_9, 320, 16);
    lv_obj_set_size(ui->screen_mainboard_label_9, 103, 18);

    //Write style for screen_mainboard_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_label_9, lv_color_hex(0xc7c7c7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_label_9, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_mainboard_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_cont_guns
    ui->screen_mainboard_cont_guns = lv_obj_create(ui->screen_mainboard);
    lv_obj_set_pos(ui->screen_mainboard_cont_guns, 315, 173);
    lv_obj_set_size(ui->screen_mainboard_cont_guns, 162, 141);
    lv_obj_set_scrollbar_mode(ui->screen_mainboard_cont_guns, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_mainboard_cont_guns, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_mainboard_cont_guns, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_mainboard_cont_guns, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_mainboard_cont_guns, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_mainboard_cont_guns, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_cont_guns, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_mainboard_cont_guns, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_cont_guns, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_cont_guns, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_mainboard_cont_guns, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_mainboard_cont_guns, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_mainboard_cont_guns, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_mainboard_cont_guns, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_cont_guns, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_14
    ui->screen_mainboard_btn_14 = lv_btn_create(ui->screen_mainboard_cont_guns);
    ui->screen_mainboard_btn_14_label = lv_label_create(ui->screen_mainboard_btn_14);
    lv_label_set_text(ui->screen_mainboard_btn_14_label, "" LV_SYMBOL_WIFI " A枪");
    lv_label_set_long_mode(ui->screen_mainboard_btn_14_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_14_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_14, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_14_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_14, 11, 13);
    lv_obj_set_size(ui->screen_mainboard_btn_14, 140, 20);

    //Write style for screen_mainboard_btn_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_14, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_14, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_14, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_15
    ui->screen_mainboard_btn_15 = lv_btn_create(ui->screen_mainboard_cont_guns);
    ui->screen_mainboard_btn_15_label = lv_label_create(ui->screen_mainboard_btn_15);
    lv_label_set_text(ui->screen_mainboard_btn_15_label, "" LV_SYMBOL_WIFI " B枪");
    lv_label_set_long_mode(ui->screen_mainboard_btn_15_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_15_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_15, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_15_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_15, 10, 43);
    lv_obj_set_size(ui->screen_mainboard_btn_15, 140, 20);

    //Write style for screen_mainboard_btn_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_15, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_15, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_15, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_16
    ui->screen_mainboard_btn_16 = lv_btn_create(ui->screen_mainboard_cont_guns);
    ui->screen_mainboard_btn_16_label = lv_label_create(ui->screen_mainboard_btn_16);
    lv_label_set_text(ui->screen_mainboard_btn_16_label, "" LV_SYMBOL_WIFI " C枪");
    lv_label_set_long_mode(ui->screen_mainboard_btn_16_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_16_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_16, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_16_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_16, 11, 74);
    lv_obj_set_size(ui->screen_mainboard_btn_16, 140, 20);

    //Write style for screen_mainboard_btn_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_16, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_16, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_16, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_17
    ui->screen_mainboard_btn_17 = lv_btn_create(ui->screen_mainboard_cont_guns);
    ui->screen_mainboard_btn_17_label = lv_label_create(ui->screen_mainboard_btn_17);
    lv_label_set_text(ui->screen_mainboard_btn_17_label, "" LV_SYMBOL_WIFI " D枪");
    lv_label_set_long_mode(ui->screen_mainboard_btn_17_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_17_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_17, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_17_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_17, 10, 103);
    lv_obj_set_size(ui->screen_mainboard_btn_17, 140, 20);

    //Write style for screen_mainboard_btn_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_17, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_17, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_17, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_17, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_btn_settings
    ui->screen_mainboard_btn_settings = lv_btn_create(ui->screen_mainboard);
    ui->screen_mainboard_btn_settings_label = lv_label_create(ui->screen_mainboard_btn_settings);
    lv_label_set_text(ui->screen_mainboard_btn_settings_label, " " LV_SYMBOL_SETTINGS " ");
    lv_label_set_long_mode(ui->screen_mainboard_btn_settings_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_mainboard_btn_settings_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_mainboard_btn_settings, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_mainboard_btn_settings_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_mainboard_btn_settings, 448, 10);
    lv_obj_set_size(ui->screen_mainboard_btn_settings, 25, 23);

    //Write style for screen_mainboard_btn_settings, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_mainboard_btn_settings, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_mainboard_btn_settings, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_mainboard_btn_settings, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_mainboard_btn_settings, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_mainboard_btn_settings, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_mainboard_btn_settings, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_mainboard_btn_settings, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_mainboard_btn_settings, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_mainboard_btn_settings, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_mainboard_btn_settings, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_mainboard_spangroup_1
    ui->screen_mainboard_spangroup_1 = lv_spangroup_create(ui->screen_mainboard);
    lv_spangroup_set_align(ui->screen_mainboard_spangroup_1, LV_TEXT_ALIGN_LEFT);
    lv_spangroup_set_overflow(ui->screen_mainboard_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
    lv_spangroup_set_mode(ui->screen_mainboard_spangroup_1, LV_SPAN_MODE_BREAK);
    //create span
    ui->screen_mainboard_spangroup_1_span = lv_spangroup_new_span(ui->screen_mainboard_spangroup_1);
    lv_span_set_text(ui->screen_mainboard_spangroup_1_span, "警告类型和警告值");
    lv_style_set_text_color(&ui->screen_mainboard_spangroup_1_span->style, lv_color_hex(0xf00000));
    lv_style_set_text_decor(&ui->screen_mainboard_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
    lv_style_set_text_font(&ui->screen_mainboard_spangroup_1_span->style, &lv_font_SourceHanSerifSC_Regular_12);
    lv_obj_set_pos(ui->screen_mainboard_spangroup_1, 320, 47);
    lv_obj_set_size(ui->screen_mainboard_spangroup_1, 148, 64);

    //Write style state: LV_STATE_DEFAULT for &style_screen_mainboard_spangroup_1_main_main_default
    static lv_style_t style_screen_mainboard_spangroup_1_main_main_default;
    ui_init_style(&style_screen_mainboard_spangroup_1_main_main_default);

    lv_style_set_border_width(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_radius(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_bg_opa(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_pad_top(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_pad_right(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_pad_left(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_style_set_shadow_width(&style_screen_mainboard_spangroup_1_main_main_default, 0);
    lv_obj_add_style(ui->screen_mainboard_spangroup_1, &style_screen_mainboard_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_spangroup_refr_mode(ui->screen_mainboard_spangroup_1);

    //The custom code of screen_mainboard.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_mainboard);

    //Init events for screen.
    events_init_screen_mainboard(ui);
}
