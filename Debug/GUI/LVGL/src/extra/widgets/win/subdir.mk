################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/extra/widgets/win/lv_win.c 

OBJS += \
./GUI/LVGL/src/extra/widgets/win/lv_win.o 

C_DEPS += \
./GUI/LVGL/src/extra/widgets/win/lv_win.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/extra/widgets/win/%.o GUI/LVGL/src/extra/widgets/win/%.su GUI/LVGL/src/extra/widgets/win/%.cyclo: ../GUI/LVGL/src/extra/widgets/win/%.c GUI/LVGL/src/extra/widgets/win/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-win

clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-win:
	-$(RM) ./GUI/LVGL/src/extra/widgets/win/lv_win.cyclo ./GUI/LVGL/src/extra/widgets/win/lv_win.d ./GUI/LVGL/src/extra/widgets/win/lv_win.o ./GUI/LVGL/src/extra/widgets/win/lv_win.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-win

