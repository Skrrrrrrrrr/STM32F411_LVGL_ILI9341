################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/demos/stress/lv_demo_stress.c 

OBJS += \
./GUI/LVGL/demos/stress/lv_demo_stress.o 

C_DEPS += \
./GUI/LVGL/demos/stress/lv_demo_stress.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/demos/stress/%.o GUI/LVGL/demos/stress/%.su GUI/LVGL/demos/stress/%.cyclo: ../GUI/LVGL/demos/stress/%.c GUI/LVGL/demos/stress/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-demos-2f-stress

clean-GUI-2f-LVGL-2f-demos-2f-stress:
	-$(RM) ./GUI/LVGL/demos/stress/lv_demo_stress.cyclo ./GUI/LVGL/demos/stress/lv_demo_stress.d ./GUI/LVGL/demos/stress/lv_demo_stress.o ./GUI/LVGL/demos/stress/lv_demo_stress.su

.PHONY: clean-GUI-2f-LVGL-2f-demos-2f-stress

