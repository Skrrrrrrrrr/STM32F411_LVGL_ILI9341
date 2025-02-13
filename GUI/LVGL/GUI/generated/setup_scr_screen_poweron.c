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



void setup_scr_screen_poweron(lv_ui *ui)
{
    //Write codes screen_poweron
    ui->screen_poweron = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_poweron, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_poweron, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_poweron, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_poweron, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_poweron_bar_1
    ui->screen_poweron_bar_1 = lv_bar_create(ui->screen_poweron);
    lv_obj_set_style_anim_time(ui->screen_poweron_bar_1, 1000, 0);
    lv_bar_set_mode(ui->screen_poweron_bar_1, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_poweron_bar_1, 0, 100);
    lv_bar_set_value(ui->screen_poweron_bar_1, 0, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_poweron_bar_1, 46, 298);
    lv_obj_set_size(ui->screen_poweron_bar_1, 400, 5);

    //Write style for screen_poweron_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_poweron_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_poweron_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_poweron_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_poweron_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_poweron_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_poweron_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_poweron_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_poweron_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_poweron_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_poweron_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_poweron_label_1
    ui->screen_poweron_label_1 = lv_label_create(ui->screen_poweron);
    lv_label_set_text(ui->screen_poweron_label_1, "开机进度");
    lv_label_set_long_mode(ui->screen_poweron_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_poweron_label_1, 51, 245);
    lv_obj_set_size(ui->screen_poweron_label_1, 380, 30);

    //Write style for screen_poweron_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_poweron_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_poweron_label_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_poweron_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_poweron_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_poweron_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_poweron_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_poweron_label_2
    ui->screen_poweron_label_2 = lv_label_create(ui->screen_poweron);
    lv_label_set_text(ui->screen_poweron_label_2, "智能清洁系统");
    lv_label_set_long_mode(ui->screen_poweron_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_poweron_label_2, 35, 75);
    lv_obj_set_size(ui->screen_poweron_label_2, 371, 94);

    //Write style for screen_poweron_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_poweron_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_poweron_label_2, &lv_font_SourceHanSerifSC_Regular_37, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_poweron_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_poweron_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_poweron_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_poweron_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_poweron.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_poweron);

    //Init events for screen.
    events_init_screen_poweron(ui);
}
