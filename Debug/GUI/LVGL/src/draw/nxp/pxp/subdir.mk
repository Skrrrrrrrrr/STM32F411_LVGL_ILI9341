################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.c \
../GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.c \
../GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.c \
../GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.c 

OBJS += \
./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.o \
./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.o \
./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o \
./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o 

C_DEPS += \
./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.d \
./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.d \
./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d \
./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/nxp/pxp/%.o GUI/LVGL/src/draw/nxp/pxp/%.su GUI/LVGL/src/draw/nxp/pxp/%.cyclo: ../GUI/LVGL/src/draw/nxp/pxp/%.c GUI/LVGL/src/draw/nxp/pxp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp

clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp:
	-$(RM) ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.cyclo ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.d ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.o ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp.su ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.cyclo ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.d ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.o ./GUI/LVGL/src/draw/nxp/pxp/lv_draw_pxp_blend.su ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.cyclo ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.d ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.o ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp.su ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.cyclo ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.d ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.o ./GUI/LVGL/src/draw/nxp/pxp/lv_gpu_nxp_pxp_osa.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-pxp

