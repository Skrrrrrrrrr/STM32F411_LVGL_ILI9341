################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/extra/libs/png/lodepng.c \
../GUI/LVGL/src/extra/libs/png/lv_png.c 

OBJS += \
./GUI/LVGL/src/extra/libs/png/lodepng.o \
./GUI/LVGL/src/extra/libs/png/lv_png.o 

C_DEPS += \
./GUI/LVGL/src/extra/libs/png/lodepng.d \
./GUI/LVGL/src/extra/libs/png/lv_png.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/extra/libs/png/%.o GUI/LVGL/src/extra/libs/png/%.su GUI/LVGL/src/extra/libs/png/%.cyclo: ../GUI/LVGL/src/extra/libs/png/%.c GUI/LVGL/src/extra/libs/png/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png

clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png:
	-$(RM) ./GUI/LVGL/src/extra/libs/png/lodepng.cyclo ./GUI/LVGL/src/extra/libs/png/lodepng.d ./GUI/LVGL/src/extra/libs/png/lodepng.o ./GUI/LVGL/src/extra/libs/png/lodepng.su ./GUI/LVGL/src/extra/libs/png/lv_png.cyclo ./GUI/LVGL/src/extra/libs/png/lv_png.d ./GUI/LVGL/src/extra/libs/png/lv_png.o ./GUI/LVGL/src/extra/libs/png/lv_png.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-png

