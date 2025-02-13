################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/hal/lv_hal_disp.c \
../GUI/LVGL/src/hal/lv_hal_indev.c \
../GUI/LVGL/src/hal/lv_hal_tick.c 

OBJS += \
./GUI/LVGL/src/hal/lv_hal_disp.o \
./GUI/LVGL/src/hal/lv_hal_indev.o \
./GUI/LVGL/src/hal/lv_hal_tick.o 

C_DEPS += \
./GUI/LVGL/src/hal/lv_hal_disp.d \
./GUI/LVGL/src/hal/lv_hal_indev.d \
./GUI/LVGL/src/hal/lv_hal_tick.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/hal/%.o GUI/LVGL/src/hal/%.su GUI/LVGL/src/hal/%.cyclo: ../GUI/LVGL/src/hal/%.c GUI/LVGL/src/hal/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-hal

clean-GUI-2f-LVGL-2f-src-2f-hal:
	-$(RM) ./GUI/LVGL/src/hal/lv_hal_disp.cyclo ./GUI/LVGL/src/hal/lv_hal_disp.d ./GUI/LVGL/src/hal/lv_hal_disp.o ./GUI/LVGL/src/hal/lv_hal_disp.su ./GUI/LVGL/src/hal/lv_hal_indev.cyclo ./GUI/LVGL/src/hal/lv_hal_indev.d ./GUI/LVGL/src/hal/lv_hal_indev.o ./GUI/LVGL/src/hal/lv_hal_indev.su ./GUI/LVGL/src/hal/lv_hal_tick.cyclo ./GUI/LVGL/src/hal/lv_hal_tick.d ./GUI/LVGL/src/hal/lv_hal_tick.o ./GUI/LVGL/src/hal/lv_hal_tick.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-hal

