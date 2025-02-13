################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/widgets/lv_arc.c \
../GUI/LVGL/src/widgets/lv_bar.c \
../GUI/LVGL/src/widgets/lv_btn.c \
../GUI/LVGL/src/widgets/lv_btnmatrix.c \
../GUI/LVGL/src/widgets/lv_canvas.c \
../GUI/LVGL/src/widgets/lv_checkbox.c \
../GUI/LVGL/src/widgets/lv_dropdown.c \
../GUI/LVGL/src/widgets/lv_img.c \
../GUI/LVGL/src/widgets/lv_label.c \
../GUI/LVGL/src/widgets/lv_line.c \
../GUI/LVGL/src/widgets/lv_objx_templ.c \
../GUI/LVGL/src/widgets/lv_roller.c \
../GUI/LVGL/src/widgets/lv_slider.c \
../GUI/LVGL/src/widgets/lv_switch.c \
../GUI/LVGL/src/widgets/lv_table.c \
../GUI/LVGL/src/widgets/lv_textarea.c 

OBJS += \
./GUI/LVGL/src/widgets/lv_arc.o \
./GUI/LVGL/src/widgets/lv_bar.o \
./GUI/LVGL/src/widgets/lv_btn.o \
./GUI/LVGL/src/widgets/lv_btnmatrix.o \
./GUI/LVGL/src/widgets/lv_canvas.o \
./GUI/LVGL/src/widgets/lv_checkbox.o \
./GUI/LVGL/src/widgets/lv_dropdown.o \
./GUI/LVGL/src/widgets/lv_img.o \
./GUI/LVGL/src/widgets/lv_label.o \
./GUI/LVGL/src/widgets/lv_line.o \
./GUI/LVGL/src/widgets/lv_objx_templ.o \
./GUI/LVGL/src/widgets/lv_roller.o \
./GUI/LVGL/src/widgets/lv_slider.o \
./GUI/LVGL/src/widgets/lv_switch.o \
./GUI/LVGL/src/widgets/lv_table.o \
./GUI/LVGL/src/widgets/lv_textarea.o 

C_DEPS += \
./GUI/LVGL/src/widgets/lv_arc.d \
./GUI/LVGL/src/widgets/lv_bar.d \
./GUI/LVGL/src/widgets/lv_btn.d \
./GUI/LVGL/src/widgets/lv_btnmatrix.d \
./GUI/LVGL/src/widgets/lv_canvas.d \
./GUI/LVGL/src/widgets/lv_checkbox.d \
./GUI/LVGL/src/widgets/lv_dropdown.d \
./GUI/LVGL/src/widgets/lv_img.d \
./GUI/LVGL/src/widgets/lv_label.d \
./GUI/LVGL/src/widgets/lv_line.d \
./GUI/LVGL/src/widgets/lv_objx_templ.d \
./GUI/LVGL/src/widgets/lv_roller.d \
./GUI/LVGL/src/widgets/lv_slider.d \
./GUI/LVGL/src/widgets/lv_switch.d \
./GUI/LVGL/src/widgets/lv_table.d \
./GUI/LVGL/src/widgets/lv_textarea.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/widgets/%.o GUI/LVGL/src/widgets/%.su GUI/LVGL/src/widgets/%.cyclo: ../GUI/LVGL/src/widgets/%.c GUI/LVGL/src/widgets/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-widgets

clean-GUI-2f-LVGL-2f-src-2f-widgets:
	-$(RM) ./GUI/LVGL/src/widgets/lv_arc.cyclo ./GUI/LVGL/src/widgets/lv_arc.d ./GUI/LVGL/src/widgets/lv_arc.o ./GUI/LVGL/src/widgets/lv_arc.su ./GUI/LVGL/src/widgets/lv_bar.cyclo ./GUI/LVGL/src/widgets/lv_bar.d ./GUI/LVGL/src/widgets/lv_bar.o ./GUI/LVGL/src/widgets/lv_bar.su ./GUI/LVGL/src/widgets/lv_btn.cyclo ./GUI/LVGL/src/widgets/lv_btn.d ./GUI/LVGL/src/widgets/lv_btn.o ./GUI/LVGL/src/widgets/lv_btn.su ./GUI/LVGL/src/widgets/lv_btnmatrix.cyclo ./GUI/LVGL/src/widgets/lv_btnmatrix.d ./GUI/LVGL/src/widgets/lv_btnmatrix.o ./GUI/LVGL/src/widgets/lv_btnmatrix.su ./GUI/LVGL/src/widgets/lv_canvas.cyclo ./GUI/LVGL/src/widgets/lv_canvas.d ./GUI/LVGL/src/widgets/lv_canvas.o ./GUI/LVGL/src/widgets/lv_canvas.su ./GUI/LVGL/src/widgets/lv_checkbox.cyclo ./GUI/LVGL/src/widgets/lv_checkbox.d ./GUI/LVGL/src/widgets/lv_checkbox.o ./GUI/LVGL/src/widgets/lv_checkbox.su ./GUI/LVGL/src/widgets/lv_dropdown.cyclo ./GUI/LVGL/src/widgets/lv_dropdown.d ./GUI/LVGL/src/widgets/lv_dropdown.o ./GUI/LVGL/src/widgets/lv_dropdown.su ./GUI/LVGL/src/widgets/lv_img.cyclo ./GUI/LVGL/src/widgets/lv_img.d ./GUI/LVGL/src/widgets/lv_img.o ./GUI/LVGL/src/widgets/lv_img.su ./GUI/LVGL/src/widgets/lv_label.cyclo ./GUI/LVGL/src/widgets/lv_label.d ./GUI/LVGL/src/widgets/lv_label.o ./GUI/LVGL/src/widgets/lv_label.su ./GUI/LVGL/src/widgets/lv_line.cyclo ./GUI/LVGL/src/widgets/lv_line.d ./GUI/LVGL/src/widgets/lv_line.o ./GUI/LVGL/src/widgets/lv_line.su ./GUI/LVGL/src/widgets/lv_objx_templ.cyclo ./GUI/LVGL/src/widgets/lv_objx_templ.d ./GUI/LVGL/src/widgets/lv_objx_templ.o ./GUI/LVGL/src/widgets/lv_objx_templ.su ./GUI/LVGL/src/widgets/lv_roller.cyclo ./GUI/LVGL/src/widgets/lv_roller.d ./GUI/LVGL/src/widgets/lv_roller.o ./GUI/LVGL/src/widgets/lv_roller.su ./GUI/LVGL/src/widgets/lv_slider.cyclo ./GUI/LVGL/src/widgets/lv_slider.d ./GUI/LVGL/src/widgets/lv_slider.o ./GUI/LVGL/src/widgets/lv_slider.su ./GUI/LVGL/src/widgets/lv_switch.cyclo ./GUI/LVGL/src/widgets/lv_switch.d ./GUI/LVGL/src/widgets/lv_switch.o ./GUI/LVGL/src/widgets/lv_switch.su ./GUI/LVGL/src/widgets/lv_table.cyclo ./GUI/LVGL/src/widgets/lv_table.d ./GUI/LVGL/src/widgets/lv_table.o ./GUI/LVGL/src/widgets/lv_table.su ./GUI/LVGL/src/widgets/lv_textarea.cyclo ./GUI/LVGL/src/widgets/lv_textarea.d ./GUI/LVGL/src/widgets/lv_textarea.o ./GUI/LVGL/src/widgets/lv_textarea.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-widgets

