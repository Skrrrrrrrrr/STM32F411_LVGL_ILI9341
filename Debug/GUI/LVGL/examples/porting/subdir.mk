################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GUI/LVGL/examples/porting/lv_port_disp.c \
../GUI/LVGL/examples/porting/lv_port_fs.c \
../GUI/LVGL/examples/porting/lv_port_indev.c 

OBJS += \
./GUI/LVGL/examples/porting/lv_port_disp.o \
./GUI/LVGL/examples/porting/lv_port_fs.o \
./GUI/LVGL/examples/porting/lv_port_indev.o 

C_DEPS += \
./GUI/LVGL/examples/porting/lv_port_disp.d \
./GUI/LVGL/examples/porting/lv_port_fs.d \
./GUI/LVGL/examples/porting/lv_port_indev.d 


# Each subdirectory must supply rules for building sources it contributes
GUI/LVGL/examples/porting/%.o GUI/LVGL/examples/porting/%.su GUI/LVGL/examples/porting/%.cyclo: ../GUI/LVGL/examples/porting/%.c GUI/LVGL/examples/porting/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DLV_LVGL_H_INCLUDE_SIMPLE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/Hardware/ILI9341" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/src" -I"E:/Workspace/STM32CubeIDE/STM32F411_LVGL_ILI9341/GUI/LVGL/examples/porting" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-GUI-2f-LVGL-2f-examples-2f-porting

clean-GUI-2f-LVGL-2f-examples-2f-porting:
	-$(RM) ./GUI/LVGL/examples/porting/lv_port_disp.cyclo ./GUI/LVGL/examples/porting/lv_port_disp.d ./GUI/LVGL/examples/porting/lv_port_disp.o ./GUI/LVGL/examples/porting/lv_port_disp.su ./GUI/LVGL/examples/porting/lv_port_fs.cyclo ./GUI/LVGL/examples/porting/lv_port_fs.d ./GUI/LVGL/examples/porting/lv_port_fs.o ./GUI/LVGL/examples/porting/lv_port_fs.su ./GUI/LVGL/examples/porting/lv_port_indev.cyclo ./GUI/LVGL/examples/porting/lv_port_indev.d ./GUI/LVGL/examples/porting/lv_port_indev.o ./GUI/LVGL/examples/porting/lv_port_indev.su

.PHONY: clean-GUI-2f-LVGL-2f-examples-2f-porting

