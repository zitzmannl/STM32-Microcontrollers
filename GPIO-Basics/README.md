# GPIO Basics

Introduction to STM32 GPIO programming using direct register access and embedded C.

---

# Project: Blue LED Bitwise Control

This project demonstrates basic STM32 GPIO output control using direct register programming. The onboard blue LED connected to pin PD15 is configured as an output and blinked using a software delay loop.

---

## Concepts Demonstrated

- RCC peripheral clock configuration
- GPIO mode register setup
- GPIO output control
- Bitwise operations
- Register-level programming
- Embedded C development
- STM32 peripheral configuration

---

## Hardware Used

- STM32 Development Board
- Onboard Blue LED (PD15)

---

## Skills Demonstrated

- Embedded C programming
- Register-level microcontroller programming
- Bitwise register manipulation
- STM32 peripheral configuration
- GPIO hardware control
- Hardware/software debugging

---

## Engineering Takeaways

This project introduced direct interaction with STM32 hardware registers and demonstrated how peripheral configuration is performed below the level of higher-level hardware abstraction functions.

Configuring the RCC and GPIO registers directly provided practical experience with bitwise operations, register masking, peripheral clock control, and GPIO configuration in embedded C. The project established the low-level foundation for the more advanced interrupt-driven and peripheral-interface projects in this repository.
