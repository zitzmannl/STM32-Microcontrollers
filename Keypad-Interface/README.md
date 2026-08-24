# Keypad & Seven-Segment Interface

Integrated STM32 peripheral-interface project combining matrix-keypad scanning, seven-segment display control, GPIO input/output, and embedded C logic.

## Project Overview

This project developed a 4×3 matrix-keypad interface and seven-segment display system using an STM32 microcontroller.

The keypad was scanned by driving one row LOW at a time while reading the column inputs through pull-up resistors. Each detected row-column combination was mapped to a corresponding keypad character.

A reusable seven-segment `Display()` function used a binary digit map to control the individual display segments and render numerical values from 0–9.

## System Behavior

The project progressed through several stages:

- Seven-segment digit display and 0–9 counting
- Matrix-keypad scanning and key detection
- Keypad-controlled LED behavior
- Keypad-to-seven-segment numerical display
- Timed LED/display interaction
- Final integrated timing game using keypad input and sensor/button logic

## Concepts Demonstrated

- 4×3 matrix-keypad scanning
- Row/column GPIO interfacing
- Pull-up input configuration
- Seven-segment display control
- Binary digit mapping
- GPIO input/output
- Input debouncing
- State tracking
- HAL GPIO functions
- Hardware/software integration

## Hardware Used

- STM32 Development Board
- 4×3 Matrix Keypad
- Seven-Segment Display
- Onboard LEDs
- Pushbutton
- Light sensor
- Breadboard and jumper wires
