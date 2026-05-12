# Interrupts

STM32 interrupt-based embedded systems programming projects using external inputs and event-driven logic.

---

# Project: External Interrupt LED Control

This project demonstrates interrupt-driven LED control using STM32 external interrupts and GPIO event handling.

The system continuously cycles through onboard LEDs until a button connected to GPIO pin PB5 triggers an external interrupt. Once the interrupt occurs, the currently active LED begins blinking until the button is released.

---

## Concepts Demonstrated

- External interrupts (EXTI)
- GPIO interrupt handling
- HAL interrupt callbacks
- Event-driven programming
- GPIO output control
- Embedded debugging
- State tracking using variables

---

## Hardware Used

- STM32 Development Board
- Onboard LEDs (PD12–PD15)
- Pushbutton Input (PB5)

---

## Features

- Sequential LED cycling
- Interrupt-triggered LED blinking
- Real-time button detection
- State-dependent LED control

---

## Skills Demonstrated

- Embedded C programming
- STM32 HAL development
- Interrupt service routines
- Hardware/software interfacing
- Event-driven system design
- Embedded troubleshooting

---

## Future Improvements

- Hardware timer interrupts
- Debouncing implementation
- Non-blocking delays
- RTOS integration
- Multiple interrupt sources
