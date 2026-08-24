# GPIO Basics

Introduction to STM32 GPIO programming using direct register access, bitwise operations, and embedded C.

---

## Project: Multi-LED GPIO & Bitwise Control

This project demonstrates register-level GPIO configuration and output control on an STM32 microcontroller. Four onboard LEDs were programmed to operate individually and sequentially, followed by integration of an external LED through a breadboard circuit.

The onboard LEDs were sequenced Green → Blue → Red → Orange using software-controlled timing. The program was then expanded to control an external LED alongside the onboard LEDs, demonstrating GPIO configuration across multiple ports.

### Project Files

[View source code and hardware demonstration](./Multi_LED_GPIO/)

*STM32 GPIO output demonstration using four onboard LEDs and an externally connected breadboard LED.*

## Concepts Demonstrated

- Direct register-level GPIO programming
- RCC peripheral clock configuration
- GPIO mode register configuration
- GPIO output control
- Bitwise operations
- Memory-mapped peripheral access
- Custom C structures for hardware registers
- Multiple GPIO port configuration
- Software-based timing
- Embedded C programming

## Hardware Used

- STM32 Development Board
- Four onboard LEDs
- External LED
- Breadboard
- Jumper wires

## Skills Demonstrated

- Embedded C programming
- Register-level peripheral configuration
- STM32 reference manual navigation
- Bitwise register manipulation
- Hardware/software interfacing
- GPIO debugging
  
