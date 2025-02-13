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



void setup_scr_screen_settings(lv_ui *ui)
{
    //Write codes screen_settings
    ui->screen_settings = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_settings, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_settings, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_settings, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_settings, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_settings_table_1
    ui->screen_settings_table_1 = lv_table_create(ui->screen_settings);
    lv_table_set_col_cnt(ui->screen_settings_table_1,3);
    lv_table_set_row_cnt(ui->screen_settings_table_1,6);
    lv_table_set_cell_value(ui->screen_settings_table_1,0,0,"名称");
    lv_table_set_cell_value(ui->screen_settings_table_1,1,0,"输入电压");
    lv_table_set_cell_value(ui->screen_settings_table_1,2,0,"漏电保护");
    lv_table_set_cell_value(ui->screen_settings_table_1,3,0,"过载保护");
    lv_table_set_cell_value(ui->screen_settings_table_1,4,0,"堵转值");
    lv_table_set_cell_value(ui->screen_settings_table_1,5,0,"过温保护");
    lv_table_set_cell_value(ui->screen_settings_table_1,0,1,"下限值");
    lv_table_set_cell_value(ui->screen_settings_table_1,1,1,"200");
    lv_table_set_cell_value(ui->screen_settings_table_1,2,1,"0");
    lv_table_set_cell_value(ui->screen_settings_table_1,3,1,"0");
    lv_table_set_cell_value(ui->screen_settings_table_1,4,1,"20");
    lv_table_set_cell_value(ui->screen_settings_table_1,5,1,"50");
    lv_table_set_cell_value(ui->screen_settings_table_1,0,2,"上限值");
    lv_table_set_cell_value(ui->screen_settings_table_1,1,2,"460");
    lv_table_set_cell_value(ui->screen_settings_table_1,2,2,"300");
    lv_table_set_cell_value(ui->screen_settings_table_1,3,2,"20");
    lv_table_set_cell_value(ui->screen_settings_table_1,4,2,"25");
    lv_table_set_cell_value(ui->screen_settings_table_1,5,2,"70");
    lv_obj_set_pos(ui->screen_settings_table_1, 47, 36);
    lv_obj_set_scrollbar_mode(ui->screen_settings_table_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_settings_table_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_settings_table_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_settings_table_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_settings_table_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_settings_table_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_settings_table_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_settings_table_1, lv_color_hex(0xd5dee6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_settings_table_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_settings_table_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_settings_table_1, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_settings_table_1, lv_color_hex(0x393c41), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_settings_table_1, &lv_font_SourceHanSerifSC_Regular_12, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_settings_table_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_settings_table_1, LV_TEXT_ALIGN_CENTER, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_settings_table_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_settings_table_1, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_settings_table_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_settings_table_1, lv_color_hex(0xd5dee6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_settings_table_1, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_settings_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_settings_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_settings_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_settings_table_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes screen_settings_btn_1
    ui->screen_settings_btn_1 = lv_btn_create(ui->screen_settings);
    ui->screen_settings_btn_1_label = lv_label_create(ui->screen_settings_btn_1);
    lv_label_set_text(ui->screen_settings_btn_1_label, "确认");
    lv_label_set_long_mode(ui->screen_settings_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_settings_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_settings_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_settings_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_settings_btn_1, 334, 271);
    lv_obj_set_size(ui->screen_settings_btn_1, 93, 25);

    //Write style for screen_settings_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_settings_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_settings_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_settings_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_settings_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_settings_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_settings_btn_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_settings_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_settings_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_settings_btn_2
    ui->screen_settings_btn_2 = lv_btn_create(ui->screen_settings);
    ui->screen_settings_btn_2_label = lv_label_create(ui->screen_settings_btn_2);
    lv_label_set_text(ui->screen_settings_btn_2_label, "取消");
    lv_label_set_long_mode(ui->screen_settings_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_settings_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_settings_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_settings_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_settings_btn_2, 222, 268);
    lv_obj_set_size(ui->screen_settings_btn_2, 90, 29);

    //Write style for screen_settings_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_settings_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_settings_btn_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_settings_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_settings_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_settings_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_settings_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_settings_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_settings_btn_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_settings_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_settings_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_settings.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_settings);

    //Init events for screen.
    events_init_screen_settings(ui);
}
