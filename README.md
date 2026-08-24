# STM32 Microcontroller Projects

Embedded systems projects developed using STM32 microcontrollers to explore
low-level hardware control, GPIO interfacing, interrupt-driven programming,
and peripheral integration using Embedded C.

## Overview

This repository documents a progression of STM32 embedded-systems projects,
beginning with direct register-level GPIO control and advancing to
interrupt-driven applications and external hardware interfacing.

The projects demonstrate both low-level register manipulation and STM32 HAL
development, with an emphasis on understanding how software interacts directly
with microcontroller peripherals.

## Skills & Technologies

**Programming:** C · Embedded C

**Platform:** STM32

**Concepts:** GPIO · Register-Level Programming · Bitwise Operations ·
External Interrupts · Event-Driven Programming · Peripheral Interfacing ·
Matrix Keypad Scanning · Seven-Segment Displays

## Projects

### 1. GPIO Basics — Direct Register Control

Introduction to low-level STM32 peripheral control using direct register
access and bitwise operations.

The project configures the GPIOD peripheral clock and GPIO registers directly
to control the onboard LED without relying on high-level GPIO functions.

**Key Concepts:** RCC Configuration · GPIO Registers · Bitwise Operations ·
Direct Register Access

[View GPIO Basics](GPIO-Basics/)

---

### 2. External Interrupt LED Control

Interrupt-driven embedded application using an external pushbutton input to
control onboard LEDs.

The project introduces external interrupt configuration, GPIO event handling,
HAL callbacks, and state-dependent program behavior.

**Key Concepts:** EXTI · Interrupt Handling · Event-Driven Programming ·
HAL Callbacks · State Tracking

[View External Interrupt project](./Interrupts/External_Interrupt_LED/)

---

### 3. Keypad-to-Seven-Segment Interface

Hardware-interface project connecting a 4×3 matrix keypad to a seven-segment
display through an STM32 microcontroller.

The program continuously scans the keypad's row and column lines, detects
numerical key presses, and maps the selected value to the appropriate
seven-segment output.

**Key Concepts:** Matrix Scanning · GPIO Interfacing · Input Processing ·
Binary Segment Mapping · Hardware/Software Integration

[View Keypad Interface](Keypad-Interface/)

## Engineering Progression

These projects represent a progression from basic microcontroller peripheral
configuration toward more complete embedded hardware/software systems:

**Register-Level GPIO Control → External Interrupts → Peripheral Interfacing**

Working through these projects provided experience with both direct hardware
register manipulation and higher-level STM32 HAL development while reinforcing
the relationship between embedded software and physical hardware.
