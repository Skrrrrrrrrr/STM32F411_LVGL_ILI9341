################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.c \
../GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.c \
../GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.c \
../GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.c \
../GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.c 

OBJS += \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.o \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.o \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.o \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.o \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.o 

C_DEPS += \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.d \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.d \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.d \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.d \
./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/GUI/generated/guider_fonts/%.o GUI/LVGL/GUI/generated/guider_fonts/%.su GUI/LVGL/GUI/generated/guider_fonts/%.cyclo: ../GUI/LVGL/GUI/generated/guider_fonts/%.c GUI/LVGL/GUI/generated/guider_fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-GUI-2f-generated-2f-guider_fonts

clean-GUI-2f-LVGL-2f-GUI-2f-generated-2f-guider_fonts:
	-$(RM) ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.cyclo ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.d ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.o ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_12.su ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.cyclo ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.d ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.o ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_16.su ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.cyclo ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.d ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.o ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_33.su ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.cyclo ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.d ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.o ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_SourceHanSerifSC_Regular_37.su ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.cyclo ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.d ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.o ./GUI/LVGL/GUI/generated/guider_fonts/lv_font_montserratMedium_16.su

.PHONY: clean-GUI-2f-LVGL-2f-GUI-2f-generated-2f-guider_fonts

