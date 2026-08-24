# Final Integrated STM32 Game

Final embedded-systems project integrating keypad input, seven-segment display output, LED feedback, and application logic into a complete STM32-based interactive system.

## Project Overview

This project served as the final integration of the STM32 concepts developed throughout the previous exercises. Rather than controlling a single peripheral, the system combines multiple hardware interfaces and software functions within one embedded application.

The program uses a 4×3 matrix keypad for user input, a seven-segment display for numerical output, and STM32 onboard LEDs for visual feedback. Functionality developed during the earlier keypad and seven-segment exercises was incorporated into the final application through reusable C functions and header files.

## System Architecture

```text
          4×3 Matrix Keypad
                  │
                  ▼
           Keypad Scanning
                  │
                  ▼
        ┌───────────────────┐
        │       STM32       │
        │                   │
        │    Game Logic     │
        │  State / Control  │
        └─────────┬─────────┘
                  │
             ┌────┴────┐
             ▼         ▼
       Onboard LEDs   Seven-Segment
        Feedback        Display
```

The STM32 acts as the central controller, continuously processing keypad input and updating the appropriate hardware outputs according to the current application state.

## Software Architecture

The program was organized by separating the main application logic from reusable peripheral-control functions.

- **`final_game.c`** — Main application logic and overall system control
- **`keypad_func.h`** — Keypad scanning and input-processing functions
- **`seven_segment_display.h`** — Seven-segment display control and numerical output functions

This structure allowed functionality developed during the earlier exercises to be reused within the final application while keeping the main program more organized.

## Hardware Used

- STM32 Development Board
- 4×3 Matrix Keypad
- Seven-Segment Display
- Onboard LEDs
- Breadboard
- Jumper Wires

## Concepts Demonstrated

- STM32 GPIO input and output
- Matrix keypad scanning
- Seven-segment display control
- User-input processing
- LED feedback
- Application state management
- Peripheral integration
- Modular Embedded C programming
- Hardware/software interfacing

## Engineering Development

The final project built directly on the individual hardware exercises completed earlier in the course. Each peripheral was first implemented and tested independently before being incorporated into the final system.

**Seven-Segment Control → Pushbutton Interaction → Keypad Scanning → Keypad/Display Integration → Final Integrated Application**

This development process provided experience progressing from individual peripheral control toward a complete embedded application involving multiple hardware inputs and outputs.

## Project Files

- [`final_game.c`](./final_game.c) — Main application logic and system control
- [`keypad_func.h`](./keypad_func.h) — Matrix keypad scanning and input functions
- [`seven_segment_display.h`](./seven_segment_display.h) — Seven-segment display control functions

## Skills Demonstrated

- Embedded C programming
- STM32 application development
- Multi-peripheral integration
- Modular software organization
- GPIO configuration
- Input/output processing
- Hardware/software debugging
- Embedded-system design

## Project Outcome

This project brought together the individual embedded-system concepts developed throughout the STM32 coursework into a single integrated application. Building and testing the keypad, seven-segment display, GPIO inputs, and LED outputs independently before combining them provided experience with both modular software development and multi-peripheral hardware integration.

The completed system demonstrates the progression from basic microcontroller peripheral control to the development of a larger embedded application incorporating user input, program logic, and multiple physical outputs.
