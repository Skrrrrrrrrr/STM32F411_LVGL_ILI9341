################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Hardware/ILI9341/subdir.mk
-include GUI/LVGL/src/widgets/subdir.mk
-include GUI/LVGL/src/misc/subdir.mk
-include GUI/LVGL/src/hal/subdir.mk
-include GUI/LVGL/src/font/subdir.mk
-include GUI/LVGL/src/extra/widgets/win/subdir.mk
-include GUI/LVGL/src/extra/widgets/tileview/subdir.mk
-include GUI/LVGL/src/extra/widgets/tabview/subdir.mk
-include GUI/LVGL/src/extra/widgets/spinner/subdir.mk
-include GUI/LVGL/src/extra/widgets/spinbox/subdir.mk
-include GUI/LVGL/src/extra/widgets/span/subdir.mk
-include GUI/LVGL/src/extra/widgets/msgbox/subdir.mk
-include GUI/LVGL/src/extra/widgets/meter/subdir.mk
-include GUI/LVGL/src/extra/widgets/menu/subdir.mk
-include GUI/LVGL/src/extra/widgets/list/subdir.mk
-include GUI/LVGL/src/extra/widgets/led/subdir.mk
-include GUI/LVGL/src/extra/widgets/keyboard/subdir.mk
-include GUI/LVGL/src/extra/widgets/imgbtn/subdir.mk
-include GUI/LVGL/src/extra/widgets/colorwheel/subdir.mk
-include GUI/LVGL/src/extra/widgets/chart/subdir.mk
-include GUI/LVGL/src/extra/widgets/calendar/subdir.mk
-include GUI/LVGL/src/extra/widgets/animimg/subdir.mk
-include GUI/LVGL/src/extra/themes/mono/subdir.mk
-include GUI/LVGL/src/extra/themes/default/subdir.mk
-include GUI/LVGL/src/extra/themes/basic/subdir.mk
-include GUI/LVGL/src/extra/others/snapshot/subdir.mk
-include GUI/LVGL/src/extra/others/msg/subdir.mk
-include GUI/LVGL/src/extra/others/monkey/subdir.mk
-include GUI/LVGL/src/extra/others/imgfont/subdir.mk
-include GUI/LVGL/src/extra/others/ime/subdir.mk
-include GUI/LVGL/src/extra/others/gridnav/subdir.mk
-include GUI/LVGL/src/extra/others/fragment/subdir.mk
-include GUI/LVGL/src/extra/libs/tiny_ttf/subdir.mk
-include GUI/LVGL/src/extra/libs/sjpg/subdir.mk
-include GUI/LVGL/src/extra/libs/rlottie/subdir.mk
-include GUI/LVGL/src/extra/libs/qrcode/subdir.mk
-include GUI/LVGL/src/extra/libs/png/subdir.mk
-include GUI/LVGL/src/extra/libs/gif/subdir.mk
-include GUI/LVGL/src/extra/libs/fsdrv/subdir.mk
-include GUI/LVGL/src/extra/libs/freetype/subdir.mk
-include GUI/LVGL/src/extra/libs/ffmpeg/subdir.mk
-include GUI/LVGL/src/extra/libs/bmp/subdir.mk
-include GUI/LVGL/src/extra/layouts/grid/subdir.mk
-include GUI/LVGL/src/extra/layouts/flex/subdir.mk
-include GUI/LVGL/src/extra/subdir.mk
-include GUI/LVGL/src/draw/swm341_dma2d/subdir.mk
-include GUI/LVGL/src/draw/sw/subdir.mk
-include GUI/LVGL/src/draw/stm32_dma2d/subdir.mk
-include GUI/LVGL/src/draw/sdl/subdir.mk
-include GUI/LVGL/src/draw/renesas/subdir.mk
-include GUI/LVGL/src/draw/nxp/vglite/subdir.mk
-include GUI/LVGL/src/draw/nxp/pxp/subdir.mk
-include GUI/LVGL/src/draw/arm2d/subdir.mk
-include GUI/LVGL/src/draw/subdir.mk
-include GUI/LVGL/src/core/subdir.mk
-include GUI/LVGL/examples/porting/subdir.mk
-include GUI/LVGL/demos/widgets/assets/subdir.mk
-include GUI/LVGL/demos/widgets/subdir.mk
-include GUI/LVGL/demos/stress/subdir.mk
-include GUI/LVGL/demos/music/assets/subdir.mk
-include GUI/LVGL/demos/music/subdir.mk
-include GUI/LVGL/demos/keypad_encoder/subdir.mk
-include GUI/LVGL/demos/benchmark/assets/subdir.mk
-include GUI/LVGL/demos/benchmark/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM32F411_LVGL_ILI9341
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32F411_LVGL_ILI9341.elf \

MAP_FILES += \
STM32F411_LVGL_ILI9341.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32F411_LVGL_ILI9341.list \


# All Target
all: main-build

# Main-build Target
main-build: STM32F411_LVGL_ILI9341.elf secondary-outputs

# Tool invocations
STM32F411_LVGL_ILI9341.elf STM32F411_LVGL_ILI9341.map: $(OBJS) $(USER_OBJS) E:\Workspace\STM32CubeIDE\STM32F411_LVGL_ILI9341\STM32F411CEUX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM32F411_LVGL_ILI9341.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\Workspace\STM32CubeIDE\STM32F411_LVGL_ILI9341\STM32F411CEUX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM32F411_LVGL_ILI9341.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -u _printf_float -u _scanf_float -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32F411_LVGL_ILI9341.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32F411_LVGL_ILI9341.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM32F411_LVGL_ILI9341.elf STM32F411_LVGL_ILI9341.list STM32F411_LVGL_ILI9341.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
