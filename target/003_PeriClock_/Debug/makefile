################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
003_PeriClock_.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
003_PeriClock_.list \

OBJCOPY_BIN += \
003_PeriClock_.bin \


# All Target
all: 003_PeriClock_.elf secondary-outputs

# Tool invocations
003_PeriClock_.elf: $(OBJS) $(USER_OBJS) D:\Udemy\Master-Microcontroller-and-Embedded-Driver-Development-1\target\003_PeriClock_\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "003_PeriClock_.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\Udemy\Master-Microcontroller-and-Embedded-Driver-Development-1\target\003_PeriClock_\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="003_PeriClock_.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

003_PeriClock_.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "003_PeriClock_.list"
	@echo 'Finished building: $@'
	@echo ' '

003_PeriClock_.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "003_PeriClock_.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
