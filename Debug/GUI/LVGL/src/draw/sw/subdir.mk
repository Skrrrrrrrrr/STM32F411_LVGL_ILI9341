################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/sw/lv_draw_sw.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_arc.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_blend.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_dither.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_img.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_layer.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_letter.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_line.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_rect.c \
../GUI/LVGL/src/draw/sw/lv_draw_sw_transform.c 

OBJS += \
./GUI/LVGL/src/draw/sw/lv_draw_sw.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_img.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_line.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.o \
./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.o 

C_DEPS += \
./GUI/LVGL/src/draw/sw/lv_draw_sw.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_img.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_line.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.d \
./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/sw/%.o GUI/LVGL/src/draw/sw/%.su GUI/LVGL/src/draw/sw/%.cyclo: ../GUI/LVGL/src/draw/sw/%.c GUI/LVGL/src/draw/sw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sw

clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sw:
	-$(RM) ./GUI/LVGL/src/draw/sw/lv_draw_sw.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw.d ./GUI/LVGL/src/draw/sw/lv_draw_sw.o ./GUI/LVGL/src/draw/sw/lv_draw_sw.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_arc.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_blend.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_dither.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_gradient.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_img.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_img.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_img.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_img.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_layer.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_letter.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_line.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_line.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_line.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_line.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_polygon.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_rect.su ./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.cyclo ./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.d ./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.o ./GUI/LVGL/src/draw/sw/lv_draw_sw_transform.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sw

