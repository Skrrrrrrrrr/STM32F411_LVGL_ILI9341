################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.c \
../GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.c 

OBJS += \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.o \
./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.o 

C_DEPS += \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.d \
./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/nxp/vglite/%.o GUI/LVGL/src/draw/nxp/vglite/%.su GUI/LVGL/src/draw/nxp/vglite/%.cyclo: ../GUI/LVGL/src/draw/nxp/vglite/%.c GUI/LVGL/src/draw/nxp/vglite/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite

clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite:
	-$(RM) ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.d ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.o ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite.su ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.d ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.o ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_arc.su ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.d ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.o ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_blend.su ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.d ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.o ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_line.su ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.d ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.o ./GUI/LVGL/src/draw/nxp/vglite/lv_draw_vglite_rect.su ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.d ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.o ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_buf.su ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.cyclo ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.d ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.o ./GUI/LVGL/src/draw/nxp/vglite/lv_vglite_utils.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-nxp-2f-vglite

