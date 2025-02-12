################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/extra/libs/freetype/lv_freetype.c 

OBJS += \
./GUI/LVGL/src/extra/libs/freetype/lv_freetype.o 

C_DEPS += \
./GUI/LVGL/src/extra/libs/freetype/lv_freetype.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/extra/libs/freetype/%.o GUI/LVGL/src/extra/libs/freetype/%.su GUI/LVGL/src/extra/libs/freetype/%.cyclo: ../GUI/LVGL/src/extra/libs/freetype/%.c GUI/LVGL/src/extra/libs/freetype/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-freetype

clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-freetype:
	-$(RM) ./GUI/LVGL/src/extra/libs/freetype/lv_freetype.cyclo ./GUI/LVGL/src/extra/libs/freetype/lv_freetype.d ./GUI/LVGL/src/extra/libs/freetype/lv_freetype.o ./GUI/LVGL/src/extra/libs/freetype/lv_freetype.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-extra-2f-libs-2f-freetype

