################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/core/lv_disp.c \
../GUI/LVGL/src/core/lv_event.c \
../GUI/LVGL/src/core/lv_group.c \
../GUI/LVGL/src/core/lv_indev.c \
../GUI/LVGL/src/core/lv_indev_scroll.c \
../GUI/LVGL/src/core/lv_obj.c \
../GUI/LVGL/src/core/lv_obj_class.c \
../GUI/LVGL/src/core/lv_obj_draw.c \
../GUI/LVGL/src/core/lv_obj_pos.c \
../GUI/LVGL/src/core/lv_obj_scroll.c \
../GUI/LVGL/src/core/lv_obj_style.c \
../GUI/LVGL/src/core/lv_obj_style_gen.c \
../GUI/LVGL/src/core/lv_obj_tree.c \
../GUI/LVGL/src/core/lv_refr.c \
../GUI/LVGL/src/core/lv_theme.c 

OBJS += \
./GUI/LVGL/src/core/lv_disp.o \
./GUI/LVGL/src/core/lv_event.o \
./GUI/LVGL/src/core/lv_group.o \
./GUI/LVGL/src/core/lv_indev.o \
./GUI/LVGL/src/core/lv_indev_scroll.o \
./GUI/LVGL/src/core/lv_obj.o \
./GUI/LVGL/src/core/lv_obj_class.o \
./GUI/LVGL/src/core/lv_obj_draw.o \
./GUI/LVGL/src/core/lv_obj_pos.o \
./GUI/LVGL/src/core/lv_obj_scroll.o \
./GUI/LVGL/src/core/lv_obj_style.o \
./GUI/LVGL/src/core/lv_obj_style_gen.o \
./GUI/LVGL/src/core/lv_obj_tree.o \
./GUI/LVGL/src/core/lv_refr.o \
./GUI/LVGL/src/core/lv_theme.o 

C_DEPS += \
./GUI/LVGL/src/core/lv_disp.d \
./GUI/LVGL/src/core/lv_event.d \
./GUI/LVGL/src/core/lv_group.d \
./GUI/LVGL/src/core/lv_indev.d \
./GUI/LVGL/src/core/lv_indev_scroll.d \
./GUI/LVGL/src/core/lv_obj.d \
./GUI/LVGL/src/core/lv_obj_class.d \
./GUI/LVGL/src/core/lv_obj_draw.d \
./GUI/LVGL/src/core/lv_obj_pos.d \
./GUI/LVGL/src/core/lv_obj_scroll.d \
./GUI/LVGL/src/core/lv_obj_style.d \
./GUI/LVGL/src/core/lv_obj_style_gen.d \
./GUI/LVGL/src/core/lv_obj_tree.d \
./GUI/LVGL/src/core/lv_refr.d \
./GUI/LVGL/src/core/lv_theme.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/core/%.o GUI/LVGL/src/core/%.su GUI/LVGL/src/core/%.cyclo: ../GUI/LVGL/src/core/%.c GUI/LVGL/src/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-core

clean-GUI-2f-LVGL-2f-src-2f-core:
	-$(RM) ./GUI/LVGL/src/core/lv_disp.cyclo ./GUI/LVGL/src/core/lv_disp.d ./GUI/LVGL/src/core/lv_disp.o ./GUI/LVGL/src/core/lv_disp.su ./GUI/LVGL/src/core/lv_event.cyclo ./GUI/LVGL/src/core/lv_event.d ./GUI/LVGL/src/core/lv_event.o ./GUI/LVGL/src/core/lv_event.su ./GUI/LVGL/src/core/lv_group.cyclo ./GUI/LVGL/src/core/lv_group.d ./GUI/LVGL/src/core/lv_group.o ./GUI/LVGL/src/core/lv_group.su ./GUI/LVGL/src/core/lv_indev.cyclo ./GUI/LVGL/src/core/lv_indev.d ./GUI/LVGL/src/core/lv_indev.o ./GUI/LVGL/src/core/lv_indev.su ./GUI/LVGL/src/core/lv_indev_scroll.cyclo ./GUI/LVGL/src/core/lv_indev_scroll.d ./GUI/LVGL/src/core/lv_indev_scroll.o ./GUI/LVGL/src/core/lv_indev_scroll.su ./GUI/LVGL/src/core/lv_obj.cyclo ./GUI/LVGL/src/core/lv_obj.d ./GUI/LVGL/src/core/lv_obj.o ./GUI/LVGL/src/core/lv_obj.su ./GUI/LVGL/src/core/lv_obj_class.cyclo ./GUI/LVGL/src/core/lv_obj_class.d ./GUI/LVGL/src/core/lv_obj_class.o ./GUI/LVGL/src/core/lv_obj_class.su ./GUI/LVGL/src/core/lv_obj_draw.cyclo ./GUI/LVGL/src/core/lv_obj_draw.d ./GUI/LVGL/src/core/lv_obj_draw.o ./GUI/LVGL/src/core/lv_obj_draw.su ./GUI/LVGL/src/core/lv_obj_pos.cyclo ./GUI/LVGL/src/core/lv_obj_pos.d ./GUI/LVGL/src/core/lv_obj_pos.o ./GUI/LVGL/src/core/lv_obj_pos.su ./GUI/LVGL/src/core/lv_obj_scroll.cyclo ./GUI/LVGL/src/core/lv_obj_scroll.d ./GUI/LVGL/src/core/lv_obj_scroll.o ./GUI/LVGL/src/core/lv_obj_scroll.su ./GUI/LVGL/src/core/lv_obj_style.cyclo ./GUI/LVGL/src/core/lv_obj_style.d ./GUI/LVGL/src/core/lv_obj_style.o ./GUI/LVGL/src/core/lv_obj_style.su ./GUI/LVGL/src/core/lv_obj_style_gen.cyclo ./GUI/LVGL/src/core/lv_obj_style_gen.d ./GUI/LVGL/src/core/lv_obj_style_gen.o ./GUI/LVGL/src/core/lv_obj_style_gen.su ./GUI/LVGL/src/core/lv_obj_tree.cyclo ./GUI/LVGL/src/core/lv_obj_tree.d ./GUI/LVGL/src/core/lv_obj_tree.o ./GUI/LVGL/src/core/lv_obj_tree.su ./GUI/LVGL/src/core/lv_refr.cyclo ./GUI/LVGL/src/core/lv_refr.d ./GUI/LVGL/src/core/lv_refr.o ./GUI/LVGL/src/core/lv_refr.su ./GUI/LVGL/src/core/lv_theme.cyclo ./GUI/LVGL/src/core/lv_theme.d ./GUI/LVGL/src/core/lv_theme.o ./GUI/LVGL/src/core/lv_theme.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-core

