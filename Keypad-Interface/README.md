# Keypad & Seven-Segment Interface

STM32 embedded-systems projects exploring seven-segment display control, pushbutton inputs, matrix keypad scanning, and the integration of multiple peripherals into a complete interactive system.

## Overview

These projects build progressively from basic seven-segment display control to more complex hardware/software interfacing using pushbuttons, LEDs, and a 4×3 matrix keypad.

The final project combines the individual concepts into an integrated game using keypad input, LED feedback, and seven-segment display output.

---

## Project Progression

### 1. Seven-Segment Basics

Introduces seven-segment display control using an STM32 microcontroller. Numerical values are mapped to the appropriate segment combinations and displayed through GPIO outputs.

**Key Concepts:** GPIO Output · Seven-Segment Displays · Segment Mapping · Embedded C

[View Seven-Segment Basics](./Seven-Segment-Basics/)

---

### 2. Seven-Segment Button Control

Expands the seven-segment implementation by incorporating pushbutton input, allowing the displayed value to be modified through physical user interaction.

**Key Concepts:** GPIO Input · Pushbutton Interfacing · Display Control · Program State

[View Seven-Segment Button Control](./Seven-Segment-Button-Control/)

---

### 3. Keypad LED Control

Introduces matrix keypad interfacing by scanning keypad rows and columns to detect user input and control STM32 LED outputs.

**Key Concepts:** Matrix Keypad Scanning · GPIO Input/Output · Row/Column Detection · Hardware Interfacing

[View Keypad LED Control](./Keypad-LED-Control/)

---

### 4. Keypad-to-Seven-Segment Interface

Integrates the matrix keypad with the seven-segment display. The STM32 continuously scans the keypad, identifies numerical key presses, and displays the corresponding value.

**Key Concepts:** Matrix Scanning · Input Processing · Seven-Segment Output · Peripheral Integration

[View Keypad-to-Seven-Segment Interface](./Keypad-Seven-Segment/)

---

### 5. Final Integrated Game

Combines the keypad, seven-segment display, LEDs, and embedded program logic into a complete interactive application.

The project builds on the previous exercises by integrating multiple input and output peripherals within a single STM32 program and organizing reusable functionality into separate header files.

**Key Concepts:** Peripheral Integration · Modular Embedded C · Keypad Input · Display Output · LED Feedback · Application Logic

[View Final Integrated Game](./Final-Integrated-Game/)

---

## Concepts Demonstrated

- STM32 GPIO input and output
- Seven-segment display control
- Binary segment mapping
- Matrix keypad scanning
- Pushbutton interfacing
- Embedded input processing
- Peripheral integration
- Hardware/software interfacing
- Modular C programming
- Embedded system debugging

## Hardware Used

- STM32 Development Board
- 4×3 Matrix Keypad
- Seven-Segment Display
- Pushbuttons
- Onboard LEDs
- Breadboard
- Jumper Wires

## Engineering Progression

The project sequence demonstrates the development of individual embedded-system functions before integrating them into a larger application:

**Seven-Segment Output → Pushbutton Input → Matrix Keypad Scanning → Keypad/Display Integration → Complete Embedded Application**

This progression provided experience developing and debugging individual hardware interfaces before combining multiple peripherals and software functions into a complete embedded system.
