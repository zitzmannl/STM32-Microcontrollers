# STM32-Microcontrollers
Embedded systems and STM32 microcontroller projects using C programming and register-level development.

## Blue LED Bitwise Control

This project demonstrates basic STM32 GPIO output control using direct register access. The program enables the GPIOD peripheral clock, configures pin PD15 as an output, and blinks the onboard blue LED using a software delay loop.

### Concepts Demonstrated
- RCC peripheral clock configuration
- GPIO mode register setup
- GPIO output control
- Direct register access
- Bitwise operations
- Custom typedef structures for hardware registers

### Hardware
- STM32 development board
- Onboard blue LED connected to PD15

### File
- `BlueLED_Bitwise.c`
