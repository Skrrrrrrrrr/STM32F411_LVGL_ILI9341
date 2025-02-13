################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/lv_draw.c \
../GUI/LVGL/src/draw/lv_draw_arc.c \
../GUI/LVGL/src/draw/lv_draw_img.c \
../GUI/LVGL/src/draw/lv_draw_label.c \
../GUI/LVGL/src/draw/lv_draw_layer.c \
../GUI/LVGL/src/draw/lv_draw_line.c \
../GUI/LVGL/src/draw/lv_draw_mask.c \
../GUI/LVGL/src/draw/lv_draw_rect.c \
../GUI/LVGL/src/draw/lv_draw_transform.c \
../GUI/LVGL/src/draw/lv_draw_triangle.c \
../GUI/LVGL/src/draw/lv_img_buf.c \
../GUI/LVGL/src/draw/lv_img_cache.c \
../GUI/LVGL/src/draw/lv_img_decoder.c 

OBJS += \
./GUI/LVGL/src/draw/lv_draw.o \
./GUI/LVGL/src/draw/lv_draw_arc.o \
./GUI/LVGL/src/draw/lv_draw_img.o \
./GUI/LVGL/src/draw/lv_draw_label.o \
./GUI/LVGL/src/draw/lv_draw_layer.o \
./GUI/LVGL/src/draw/lv_draw_line.o \
./GUI/LVGL/src/draw/lv_draw_mask.o \
./GUI/LVGL/src/draw/lv_draw_rect.o \
./GUI/LVGL/src/draw/lv_draw_transform.o \
./GUI/LVGL/src/draw/lv_draw_triangle.o \
./GUI/LVGL/src/draw/lv_img_buf.o \
./GUI/LVGL/src/draw/lv_img_cache.o \
./GUI/LVGL/src/draw/lv_img_decoder.o 

C_DEPS += \
./GUI/LVGL/src/draw/lv_draw.d \
./GUI/LVGL/src/draw/lv_draw_arc.d \
./GUI/LVGL/src/draw/lv_draw_img.d \
./GUI/LVGL/src/draw/lv_draw_label.d \
./GUI/LVGL/src/draw/lv_draw_layer.d \
./GUI/LVGL/src/draw/lv_draw_line.d \
./GUI/LVGL/src/draw/lv_draw_mask.d \
./GUI/LVGL/src/draw/lv_draw_rect.d \
./GUI/LVGL/src/draw/lv_draw_transform.d \
./GUI/LVGL/src/draw/lv_draw_triangle.d \
./GUI/LVGL/src/draw/lv_img_buf.d \
./GUI/LVGL/src/draw/lv_img_cache.d \
./GUI/LVGL/src/draw/lv_img_decoder.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/%.o GUI/LVGL/src/draw/%.su GUI/LVGL/src/draw/%.cyclo: ../GUI/LVGL/src/draw/%.c GUI/LVGL/src/draw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw

clean-GUI-2f-LVGL-2f-src-2f-draw:
	-$(RM) ./GUI/LVGL/src/draw/lv_draw.cyclo ./GUI/LVGL/src/draw/lv_draw.d ./GUI/LVGL/src/draw/lv_draw.o ./GUI/LVGL/src/draw/lv_draw.su ./GUI/LVGL/src/draw/lv_draw_arc.cyclo ./GUI/LVGL/src/draw/lv_draw_arc.d ./GUI/LVGL/src/draw/lv_draw_arc.o ./GUI/LVGL/src/draw/lv_draw_arc.su ./GUI/LVGL/src/draw/lv_draw_img.cyclo ./GUI/LVGL/src/draw/lv_draw_img.d ./GUI/LVGL/src/draw/lv_draw_img.o ./GUI/LVGL/src/draw/lv_draw_img.su ./GUI/LVGL/src/draw/lv_draw_label.cyclo ./GUI/LVGL/src/draw/lv_draw_label.d ./GUI/LVGL/src/draw/lv_draw_label.o ./GUI/LVGL/src/draw/lv_draw_label.su ./GUI/LVGL/src/draw/lv_draw_layer.cyclo ./GUI/LVGL/src/draw/lv_draw_layer.d ./GUI/LVGL/src/draw/lv_draw_layer.o ./GUI/LVGL/src/draw/lv_draw_layer.su ./GUI/LVGL/src/draw/lv_draw_line.cyclo ./GUI/LVGL/src/draw/lv_draw_line.d ./GUI/LVGL/src/draw/lv_draw_line.o ./GUI/LVGL/src/draw/lv_draw_line.su ./GUI/LVGL/src/draw/lv_draw_mask.cyclo ./GUI/LVGL/src/draw/lv_draw_mask.d ./GUI/LVGL/src/draw/lv_draw_mask.o ./GUI/LVGL/src/draw/lv_draw_mask.su ./GUI/LVGL/src/draw/lv_draw_rect.cyclo ./GUI/LVGL/src/draw/lv_draw_rect.d ./GUI/LVGL/src/draw/lv_draw_rect.o ./GUI/LVGL/src/draw/lv_draw_rect.su ./GUI/LVGL/src/draw/lv_draw_transform.cyclo ./GUI/LVGL/src/draw/lv_draw_transform.d ./GUI/LVGL/src/draw/lv_draw_transform.o ./GUI/LVGL/src/draw/lv_draw_transform.su ./GUI/LVGL/src/draw/lv_draw_triangle.cyclo ./GUI/LVGL/src/draw/lv_draw_triangle.d ./GUI/LVGL/src/draw/lv_draw_triangle.o ./GUI/LVGL/src/draw/lv_draw_triangle.su ./GUI/LVGL/src/draw/lv_img_buf.cyclo ./GUI/LVGL/src/draw/lv_img_buf.d ./GUI/LVGL/src/draw/lv_img_buf.o ./GUI/LVGL/src/draw/lv_img_buf.su ./GUI/LVGL/src/draw/lv_img_cache.cyclo ./GUI/LVGL/src/draw/lv_img_cache.d ./GUI/LVGL/src/draw/lv_img_cache.o ./GUI/LVGL/src/draw/lv_img_cache.su ./GUI/LVGL/src/draw/lv_img_decoder.cyclo ./GUI/LVGL/src/draw/lv_img_decoder.d ./GUI/LVGL/src/draw/lv_img_decoder.o ./GUI/LVGL/src/draw/lv_img_decoder.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw

