# External Interrupts

Introduction to event-driven embedded programming on the STM32 using GPIO external interrupts and the Hardware Abstraction Layer (HAL).

## Project: External Interrupt LED Control

This project demonstrates the use of a GPIO external interrupt to modify an active LED sequence on an STM32 microcontroller.

Four onboard LEDs connected to GPIO pins PD12–PD15 are continuously sequenced during normal program execution. The currently active LED is tracked by the program. A pushbutton connected to PB5 is configured as a rising-edge external interrupt through the STM32 EXTI and NVIC systems.

When the button generates an interrupt, the `HAL_GPIO_EXTI_Callback()` function identifies the active LED and temporarily modifies its behavior in response to the button input.

## Hardware Demonstration

The interrupt-driven LED control program was implemented and tested on physical STM32 hardware. During normal operation, the four onboard LEDs cycle sequentially. The external pushbutton generates a GPIO interrupt, causing the program to respond through the interrupt callback based on the currently active LED.

[View hardware demonstration](./External_Interrupt_LED/Interrupt_LED_Demo.mp4)

## Concepts Demonstrated

- GPIO external interrupts
- STM32 EXTI configuration
- NVIC interrupt configuration
- Rising-edge interrupt triggering
- HAL interrupt callbacks
- GPIO input and output
- Event-driven embedded programming
- Program state tracking

## Hardware Used

- STM32 Development Board
- Onboard LEDs
- External pushbutton
- Breadboard
- Jumper wires

## Skills Demonstrated

- Embedded C programming
- STM32 HAL
- Interrupt configuration
- Interrupt service handling
- GPIO peripheral configuration
- Hardware/software interfacing
- Embedded debugging
