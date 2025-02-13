################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/demos/benchmark/lv_demo_benchmark.c 

OBJS += \
./GUI/LVGL/demos/benchmark/lv_demo_benchmark.o 

C_DEPS += \
./GUI/LVGL/demos/benchmark/lv_demo_benchmark.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/demos/benchmark/%.o GUI/LVGL/demos/benchmark/%.su GUI/LVGL/demos/benchmark/%.cyclo: ../GUI/LVGL/demos/benchmark/%.c GUI/LVGL/demos/benchmark/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-demos-2f-benchmark

clean-GUI-2f-LVGL-2f-demos-2f-benchmark:
	-$(RM) ./GUI/LVGL/demos/benchmark/lv_demo_benchmark.cyclo ./GUI/LVGL/demos/benchmark/lv_demo_benchmark.d ./GUI/LVGL/demos/benchmark/lv_demo_benchmark.o ./GUI/LVGL/demos/benchmark/lv_demo_benchmark.su

.PHONY: clean-GUI-2f-LVGL-2f-demos-2f-benchmark

