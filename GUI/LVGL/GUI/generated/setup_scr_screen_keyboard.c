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



void setup_scr_screen_keyboard(lv_ui *ui)
{
    //Write codes screen_keyboard
    ui->screen_keyboard = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_keyboard, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_keyboard, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_keyboard, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_label_1
    ui->screen_keyboard_label_1 = lv_label_create(ui->screen_keyboard);
    lv_label_set_text(ui->screen_keyboard_label_1, "0");
    lv_label_set_long_mode(ui->screen_keyboard_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_keyboard_label_1, 114, 42);
    lv_obj_set_size(ui->screen_keyboard_label_1, 196, 35);

    //Write style for screen_keyboard_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_label_1, &lv_font_SourceHanSerifSC_Regular_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_keyboard_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_label_1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_keyboard_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_1
    ui->screen_keyboard_btn_1 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_1_label = lv_label_create(ui->screen_keyboard_btn_1);
    lv_label_set_text(ui->screen_keyboard_btn_1_label, "1");
    lv_label_set_long_mode(ui->screen_keyboard_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_1, 114, 105);
    lv_obj_set_size(ui->screen_keyboard_btn_1, 41, 28);

    //Write style for screen_keyboard_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_2
    ui->screen_keyboard_btn_2 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_2_label = lv_label_create(ui->screen_keyboard_btn_2);
    lv_label_set_text(ui->screen_keyboard_btn_2_label, "2");
    lv_label_set_long_mode(ui->screen_keyboard_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_2, 169, 105);
    lv_obj_set_size(ui->screen_keyboard_btn_2, 41, 28);

    //Write style for screen_keyboard_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_3
    ui->screen_keyboard_btn_3 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_3_label = lv_label_create(ui->screen_keyboard_btn_3);
    lv_label_set_text(ui->screen_keyboard_btn_3_label, "3");
    lv_label_set_long_mode(ui->screen_keyboard_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_3, 220, 105);
    lv_obj_set_size(ui->screen_keyboard_btn_3, 41, 28);

    //Write style for screen_keyboard_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_3, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_4
    ui->screen_keyboard_btn_4 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_4_label = lv_label_create(ui->screen_keyboard_btn_4);
    lv_label_set_text(ui->screen_keyboard_btn_4_label, "" LV_SYMBOL_BACKSPACE " ");
    lv_label_set_long_mode(ui->screen_keyboard_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_4, 271, 105);
    lv_obj_set_size(ui->screen_keyboard_btn_4, 41, 28);

    //Write style for screen_keyboard_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_4, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_4, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_8
    ui->screen_keyboard_btn_8 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_8_label = lv_label_create(ui->screen_keyboard_btn_8);
    lv_label_set_text(ui->screen_keyboard_btn_8_label, "C");
    lv_label_set_long_mode(ui->screen_keyboard_btn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_8_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_8, 271, 138);
    lv_obj_set_size(ui->screen_keyboard_btn_8, 41, 28);

    //Write style for screen_keyboard_btn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_8, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_8, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_7
    ui->screen_keyboard_btn_7 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_7_label = lv_label_create(ui->screen_keyboard_btn_7);
    lv_label_set_text(ui->screen_keyboard_btn_7_label, "6");
    lv_label_set_long_mode(ui->screen_keyboard_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_7_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_7, 220, 138);
    lv_obj_set_size(ui->screen_keyboard_btn_7, 41, 28);

    //Write style for screen_keyboard_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_7, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_7, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_6
    ui->screen_keyboard_btn_6 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_6_label = lv_label_create(ui->screen_keyboard_btn_6);
    lv_label_set_text(ui->screen_keyboard_btn_6_label, "5");
    lv_label_set_long_mode(ui->screen_keyboard_btn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_6_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_6, 169, 138);
    lv_obj_set_size(ui->screen_keyboard_btn_6, 41, 28);

    //Write style for screen_keyboard_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_6, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_6, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_5
    ui->screen_keyboard_btn_5 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_5_label = lv_label_create(ui->screen_keyboard_btn_5);
    lv_label_set_text(ui->screen_keyboard_btn_5_label, "4");
    lv_label_set_long_mode(ui->screen_keyboard_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_5, 114, 138);
    lv_obj_set_size(ui->screen_keyboard_btn_5, 41, 28);

    //Write style for screen_keyboard_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_5, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_5, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_11
    ui->screen_keyboard_btn_11 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_11_label = lv_label_create(ui->screen_keyboard_btn_11);
    lv_label_set_text(ui->screen_keyboard_btn_11_label, "9");
    lv_label_set_long_mode(ui->screen_keyboard_btn_11_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_11_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_11, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_11_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_11, 220, 171);
    lv_obj_set_size(ui->screen_keyboard_btn_11, 41, 28);

    //Write style for screen_keyboard_btn_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_11, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_11, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_11, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_10
    ui->screen_keyboard_btn_10 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_10_label = lv_label_create(ui->screen_keyboard_btn_10);
    lv_label_set_text(ui->screen_keyboard_btn_10_label, "8");
    lv_label_set_long_mode(ui->screen_keyboard_btn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_10_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_10, 169, 171);
    lv_obj_set_size(ui->screen_keyboard_btn_10, 41, 28);

    //Write style for screen_keyboard_btn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_10, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_10, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_10, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_9
    ui->screen_keyboard_btn_9 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_9_label = lv_label_create(ui->screen_keyboard_btn_9);
    lv_label_set_text(ui->screen_keyboard_btn_9_label, "7");
    lv_label_set_long_mode(ui->screen_keyboard_btn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_9_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_9, 114, 171);
    lv_obj_set_size(ui->screen_keyboard_btn_9, 41, 28);

    //Write style for screen_keyboard_btn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_9, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_9, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_9, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_16
    ui->screen_keyboard_btn_16 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_16_label = lv_label_create(ui->screen_keyboard_btn_16);
    lv_label_set_text(ui->screen_keyboard_btn_16_label, "" LV_SYMBOL_OK " ");
    lv_label_set_long_mode(ui->screen_keyboard_btn_16_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_16_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_16, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_16_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_16, 271, 171);
    lv_obj_set_size(ui->screen_keyboard_btn_16, 41, 64);

    //Write style for screen_keyboard_btn_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_16, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_16, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_16, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_15
    ui->screen_keyboard_btn_15 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_15_label = lv_label_create(ui->screen_keyboard_btn_15);
    lv_label_set_text(ui->screen_keyboard_btn_15_label, ".");
    lv_label_set_long_mode(ui->screen_keyboard_btn_15_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_15_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_15, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_15_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_15, 220, 207);
    lv_obj_set_size(ui->screen_keyboard_btn_15, 41, 28);

    //Write style for screen_keyboard_btn_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_15, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_15, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_15, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_14
    ui->screen_keyboard_btn_14 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_14_label = lv_label_create(ui->screen_keyboard_btn_14);
    lv_label_set_text(ui->screen_keyboard_btn_14_label, "0");
    lv_label_set_long_mode(ui->screen_keyboard_btn_14_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_14_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_14, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_14_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_14, 169, 207);
    lv_obj_set_size(ui->screen_keyboard_btn_14, 41, 28);

    //Write style for screen_keyboard_btn_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_14, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_14, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_14, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_keyboard_btn_13
    ui->screen_keyboard_btn_13 = lv_btn_create(ui->screen_keyboard);
    ui->screen_keyboard_btn_13_label = lv_label_create(ui->screen_keyboard_btn_13);
    lv_label_set_text(ui->screen_keyboard_btn_13_label, "+/-");
    lv_label_set_long_mode(ui->screen_keyboard_btn_13_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_keyboard_btn_13_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_keyboard_btn_13, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_keyboard_btn_13_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_keyboard_btn_13, 114, 207);
    lv_obj_set_size(ui->screen_keyboard_btn_13, 41, 28);

    //Write style for screen_keyboard_btn_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_keyboard_btn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_keyboard_btn_13, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_keyboard_btn_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_keyboard_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_keyboard_btn_13, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_keyboard_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_keyboard_btn_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_keyboard_btn_13, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_keyboard_btn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_keyboard_btn_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_keyboard.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_keyboard);

}
