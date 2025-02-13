################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.c \
../GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.c 

OBJS += \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.o \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.o 

C_DEPS += \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.d \
./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/draw/sdl/%.o GUI/LVGL/src/draw/sdl/%.su GUI/LVGL/src/draw/sdl/%.cyclo: ../GUI/LVGL/src/draw/sdl/%.c GUI/LVGL/src/draw/sdl/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sdl

clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sdl:
	-$(RM) ./GUI/LVGL/src/draw/sdl/lv_draw_sdl.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_arc.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_bg.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_composite.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_img.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_label.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_layer.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_line.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_mask.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_polygon.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_rect.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_stack_blur.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_texture_cache.su ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.cyclo ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.d ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.o ./GUI/LVGL/src/draw/sdl/lv_draw_sdl_utils.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-draw-2f-sdl

