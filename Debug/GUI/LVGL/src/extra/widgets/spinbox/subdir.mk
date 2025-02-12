################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.c 

OBJS += \
./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.o 

C_DEPS += \
./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/extra/widgets/spinbox/%.o GUI/LVGL/src/extra/widgets/spinbox/%.su GUI/LVGL/src/extra/widgets/spinbox/%.cyclo: ../GUI/LVGL/src/extra/widgets/spinbox/%.c GUI/LVGL/src/extra/widgets/spinbox/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinbox

clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinbox:
	-$(RM) ./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.cyclo ./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.d ./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.o ./GUI/LVGL/src/extra/widgets/spinbox/lv_spinbox.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-widgets-2f-spinbox

