################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.c \
../GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.c 

OBJS += \
./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.o \
./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.o 

C_DEPS += \
./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.d \
./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/renesas/%.o GUI/LVGL/src/draw/renesas/%.su GUI/LVGL/src/draw/renesas/%.cyclo: ../GUI/LVGL/src/draw/renesas/%.c GUI/LVGL/src/draw/renesas/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-renesas

clean-GUI-2f-LVGL-2f-src-2f-draw-2f-renesas:
	-$(RM) ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.cyclo ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.d ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.o ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_draw_label.su ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.cyclo ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.d ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.o ./GUI/LVGL/src/draw/renesas/lv_gpu_d2_ra6m3.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-renesas

