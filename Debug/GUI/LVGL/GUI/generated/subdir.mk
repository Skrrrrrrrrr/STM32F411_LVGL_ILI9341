################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/GUI/generated/events_init.c \
../GUI/LVGL/GUI/generated/gui_guider.c \
../GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.c \
../GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.c \
../GUI/LVGL/GUI/generated/setup_scr_screen_poweron.c \
../GUI/LVGL/GUI/generated/setup_scr_screen_settings.c \
../GUI/LVGL/GUI/generated/widgets_init.c 

OBJS += \
./GUI/LVGL/GUI/generated/events_init.o \
./GUI/LVGL/GUI/generated/gui_guider.o \
./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.o \
./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.o \
./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.o \
./GUI/LVGL/GUI/generated/setup_scr_screen_settings.o \
./GUI/LVGL/GUI/generated/widgets_init.o 

C_DEPS += \
./GUI/LVGL/GUI/generated/events_init.d \
./GUI/LVGL/GUI/generated/gui_guider.d \
./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.d \
./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.d \
./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.d \
./GUI/LVGL/GUI/generated/setup_scr_screen_settings.d \
./GUI/LVGL/GUI/generated/widgets_init.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/GUI/generated/%.o GUI/LVGL/GUI/generated/%.su GUI/LVGL/GUI/generated/%.cyclo: ../GUI/LVGL/GUI/generated/%.c GUI/LVGL/GUI/generated/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-GUI-2f-generated

clean-GUI-2f-LVGL-2f-GUI-2f-generated:
	-$(RM) ./GUI/LVGL/GUI/generated/events_init.cyclo ./GUI/LVGL/GUI/generated/events_init.d ./GUI/LVGL/GUI/generated/events_init.o ./GUI/LVGL/GUI/generated/events_init.su ./GUI/LVGL/GUI/generated/gui_guider.cyclo ./GUI/LVGL/GUI/generated/gui_guider.d ./GUI/LVGL/GUI/generated/gui_guider.o ./GUI/LVGL/GUI/generated/gui_guider.su ./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.cyclo ./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.d ./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.o ./GUI/LVGL/GUI/generated/setup_scr_screen_keyboard.su ./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.cyclo ./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.d ./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.o ./GUI/LVGL/GUI/generated/setup_scr_screen_mainboard.su ./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.cyclo ./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.d ./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.o ./GUI/LVGL/GUI/generated/setup_scr_screen_poweron.su ./GUI/LVGL/GUI/generated/setup_scr_screen_settings.cyclo ./GUI/LVGL/GUI/generated/setup_scr_screen_settings.d ./GUI/LVGL/GUI/generated/setup_scr_screen_settings.o ./GUI/LVGL/GUI/generated/setup_scr_screen_settings.su ./GUI/LVGL/GUI/generated/widgets_init.cyclo ./GUI/LVGL/GUI/generated/widgets_init.d ./GUI/LVGL/GUI/generated/widgets_init.o ./GUI/LVGL/GUI/generated/widgets_init.su

.PHONY: clean-GUI-2f-LVGL-2f-GUI-2f-generated

