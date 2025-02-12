################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/src/misc/lv_anim.c \
../GUI/LVGL/src/misc/lv_anim_timeline.c \
../GUI/LVGL/src/misc/lv_area.c \
../GUI/LVGL/src/misc/lv_async.c \
../GUI/LVGL/src/misc/lv_bidi.c \
../GUI/LVGL/src/misc/lv_color.c \
../GUI/LVGL/src/misc/lv_fs.c \
../GUI/LVGL/src/misc/lv_gc.c \
../GUI/LVGL/src/misc/lv_ll.c \
../GUI/LVGL/src/misc/lv_log.c \
../GUI/LVGL/src/misc/lv_lru.c \
../GUI/LVGL/src/misc/lv_math.c \
../GUI/LVGL/src/misc/lv_mem.c \
../GUI/LVGL/src/misc/lv_printf.c \
../GUI/LVGL/src/misc/lv_style.c \
../GUI/LVGL/src/misc/lv_style_gen.c \
../GUI/LVGL/src/misc/lv_templ.c \
../GUI/LVGL/src/misc/lv_timer.c \
../GUI/LVGL/src/misc/lv_tlsf.c \
../GUI/LVGL/src/misc/lv_txt.c \
../GUI/LVGL/src/misc/lv_txt_ap.c \
../GUI/LVGL/src/misc/lv_utils.c 

OBJS += \
./GUI/LVGL/src/misc/lv_anim.o \
./GUI/LVGL/src/misc/lv_anim_timeline.o \
./GUI/LVGL/src/misc/lv_area.o \
./GUI/LVGL/src/misc/lv_async.o \
./GUI/LVGL/src/misc/lv_bidi.o \
./GUI/LVGL/src/misc/lv_color.o \
./GUI/LVGL/src/misc/lv_fs.o \
./GUI/LVGL/src/misc/lv_gc.o \
./GUI/LVGL/src/misc/lv_ll.o \
./GUI/LVGL/src/misc/lv_log.o \
./GUI/LVGL/src/misc/lv_lru.o \
./GUI/LVGL/src/misc/lv_math.o \
./GUI/LVGL/src/misc/lv_mem.o \
./GUI/LVGL/src/misc/lv_printf.o \
./GUI/LVGL/src/misc/lv_style.o \
./GUI/LVGL/src/misc/lv_style_gen.o \
./GUI/LVGL/src/misc/lv_templ.o \
./GUI/LVGL/src/misc/lv_timer.o \
./GUI/LVGL/src/misc/lv_tlsf.o \
./GUI/LVGL/src/misc/lv_txt.o \
./GUI/LVGL/src/misc/lv_txt_ap.o \
./GUI/LVGL/src/misc/lv_utils.o 

C_DEPS += \
./GUI/LVGL/src/misc/lv_anim.d \
./GUI/LVGL/src/misc/lv_anim_timeline.d \
./GUI/LVGL/src/misc/lv_area.d \
./GUI/LVGL/src/misc/lv_async.d \
./GUI/LVGL/src/misc/lv_bidi.d \
./GUI/LVGL/src/misc/lv_color.d \
./GUI/LVGL/src/misc/lv_fs.d \
./GUI/LVGL/src/misc/lv_gc.d \
./GUI/LVGL/src/misc/lv_ll.d \
./GUI/LVGL/src/misc/lv_log.d \
./GUI/LVGL/src/misc/lv_lru.d \
./GUI/LVGL/src/misc/lv_math.d \
./GUI/LVGL/src/misc/lv_mem.d \
./GUI/LVGL/src/misc/lv_printf.d \
./GUI/LVGL/src/misc/lv_style.d \
./GUI/LVGL/src/misc/lv_style_gen.d \
./GUI/LVGL/src/misc/lv_templ.d \
./GUI/LVGL/src/misc/lv_timer.d \
./GUI/LVGL/src/misc/lv_tlsf.d \
./GUI/LVGL/src/misc/lv_txt.d \
./GUI/LVGL/src/misc/lv_txt_ap.d \
./GUI/LVGL/src/misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/src/misc/%.o GUI/LVGL/src/misc/%.su GUI/LVGL/src/misc/%.cyclo: ../GUI/LVGL/src/misc/%.c GUI/LVGL/src/misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-src-2f-misc

clean-GUI-2f-LVGL-2f-src-2f-misc:
	-$(RM) ./GUI/LVGL/src/misc/lv_anim.cyclo ./GUI/LVGL/src/misc/lv_anim.d ./GUI/LVGL/src/misc/lv_anim.o ./GUI/LVGL/src/misc/lv_anim.su ./GUI/LVGL/src/misc/lv_anim_timeline.cyclo ./GUI/LVGL/src/misc/lv_anim_timeline.d ./GUI/LVGL/src/misc/lv_anim_timeline.o ./GUI/LVGL/src/misc/lv_anim_timeline.su ./GUI/LVGL/src/misc/lv_area.cyclo ./GUI/LVGL/src/misc/lv_area.d ./GUI/LVGL/src/misc/lv_area.o ./GUI/LVGL/src/misc/lv_area.su ./GUI/LVGL/src/misc/lv_async.cyclo ./GUI/LVGL/src/misc/lv_async.d ./GUI/LVGL/src/misc/lv_async.o ./GUI/LVGL/src/misc/lv_async.su ./GUI/LVGL/src/misc/lv_bidi.cyclo ./GUI/LVGL/src/misc/lv_bidi.d ./GUI/LVGL/src/misc/lv_bidi.o ./GUI/LVGL/src/misc/lv_bidi.su ./GUI/LVGL/src/misc/lv_color.cyclo ./GUI/LVGL/src/misc/lv_color.d ./GUI/LVGL/src/misc/lv_color.o ./GUI/LVGL/src/misc/lv_color.su ./GUI/LVGL/src/misc/lv_fs.cyclo ./GUI/LVGL/src/misc/lv_fs.d ./GUI/LVGL/src/misc/lv_fs.o ./GUI/LVGL/src/misc/lv_fs.su ./GUI/LVGL/src/misc/lv_gc.cyclo ./GUI/LVGL/src/misc/lv_gc.d ./GUI/LVGL/src/misc/lv_gc.o ./GUI/LVGL/src/misc/lv_gc.su ./GUI/LVGL/src/misc/lv_ll.cyclo ./GUI/LVGL/src/misc/lv_ll.d ./GUI/LVGL/src/misc/lv_ll.o ./GUI/LVGL/src/misc/lv_ll.su ./GUI/LVGL/src/misc/lv_log.cyclo ./GUI/LVGL/src/misc/lv_log.d ./GUI/LVGL/src/misc/lv_log.o ./GUI/LVGL/src/misc/lv_log.su ./GUI/LVGL/src/misc/lv_lru.cyclo ./GUI/LVGL/src/misc/lv_lru.d ./GUI/LVGL/src/misc/lv_lru.o ./GUI/LVGL/src/misc/lv_lru.su ./GUI/LVGL/src/misc/lv_math.cyclo ./GUI/LVGL/src/misc/lv_math.d ./GUI/LVGL/src/misc/lv_math.o ./GUI/LVGL/src/misc/lv_math.su ./GUI/LVGL/src/misc/lv_mem.cyclo ./GUI/LVGL/src/misc/lv_mem.d ./GUI/LVGL/src/misc/lv_mem.o ./GUI/LVGL/src/misc/lv_mem.su ./GUI/LVGL/src/misc/lv_printf.cyclo ./GUI/LVGL/src/misc/lv_printf.d ./GUI/LVGL/src/misc/lv_printf.o ./GUI/LVGL/src/misc/lv_printf.su ./GUI/LVGL/src/misc/lv_style.cyclo ./GUI/LVGL/src/misc/lv_style.d ./GUI/LVGL/src/misc/lv_style.o ./GUI/LVGL/src/misc/lv_style.su ./GUI/LVGL/src/misc/lv_style_gen.cyclo ./GUI/LVGL/src/misc/lv_style_gen.d ./GUI/LVGL/src/misc/lv_style_gen.o ./GUI/LVGL/src/misc/lv_style_gen.su ./GUI/LVGL/src/misc/lv_templ.cyclo ./GUI/LVGL/src/misc/lv_templ.d ./GUI/LVGL/src/misc/lv_templ.o ./GUI/LVGL/src/misc/lv_templ.su ./GUI/LVGL/src/misc/lv_timer.cyclo ./GUI/LVGL/src/misc/lv_timer.d ./GUI/LVGL/src/misc/lv_timer.o ./GUI/LVGL/src/misc/lv_timer.su ./GUI/LVGL/src/misc/lv_tlsf.cyclo ./GUI/LVGL/src/misc/lv_tlsf.d ./GUI/LVGL/src/misc/lv_tlsf.o ./GUI/LVGL/src/misc/lv_tlsf.su ./GUI/LVGL/src/misc/lv_txt.cyclo ./GUI/LVGL/src/misc/lv_txt.d ./GUI/LVGL/src/misc/lv_txt.o ./GUI/LVGL/src/misc/lv_txt.su ./GUI/LVGL/src/misc/lv_txt_ap.cyclo ./GUI/LVGL/src/misc/lv_txt_ap.d ./GUI/LVGL/src/misc/lv_txt_ap.o ./GUI/LVGL/src/misc/lv_txt_ap.su ./GUI/LVGL/src/misc/lv_utils.cyclo ./GUI/LVGL/src/misc/lv_utils.d ./GUI/LVGL/src/misc/lv_utils.o ./GUI/LVGL/src/misc/lv_utils.su

.PHONY: clean-GUI-2f-LVGL-2f-src-2f-misc

