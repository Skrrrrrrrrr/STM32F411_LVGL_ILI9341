################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.c \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.c \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.c \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.c \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.c \
../GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.c \
../GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.c \
../GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.c \
../GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.c 

OBJS += \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.o \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.o \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.o \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.o \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.o \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.o \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.o \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.o \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.o 

C_DEPS += \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.d \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.d \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.d \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.d \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.d \
./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.d \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.d \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.d \
./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/demos/benchmark/assets/%.o GUI/LVGL/demos/benchmark/assets/%.su GUI/LVGL/demos/benchmark/assets/%.cyclo: ../GUI/LVGL/demos/benchmark/assets/%.c GUI/LVGL/demos/benchmark/assets/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/Button" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/custom" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/GUI/generated/guider_customer_fonts" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-demos-2f-benchmark-2f-assets

clean-GUI-2f-LVGL-2f-demos-2f-benchmark-2f-assets:
	-$(RM) ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_alpha16.su ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_argb.su ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_chroma_keyed.su ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_indexed16.su ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb.su ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.cyclo ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.d ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.o ./GUI/LVGL/demos/benchmark/assets/img_benchmark_cogwheel_rgb565a8.su ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.cyclo ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.d ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.o ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_12_compr_az.c.su ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.cyclo ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.d ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.o ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_16_compr_az.c.su ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.cyclo ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.d ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.o ./GUI/LVGL/demos/benchmark/assets/lv_font_bechmark_montserrat_28_compr_az.c.su

.PHONY: clean-GUI-2f-LVGL-2f-demos-2f-benchmark-2f-assets

