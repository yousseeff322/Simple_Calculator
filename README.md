# ATmega32 Simple Calculator - README

The ATmega32 Simple Calculator project showcases the implementation of a basic calculator using the ATmega32 microcontroller. This calculator is capable of performing addition, subtraction, multiplication, and division operations. The user interacts with the calculator through a keypad, and the results are displayed on an LCD screen.

## Table of Contents

- [Introduction](#introduction)
- [Setup](#setup)
- [Usage](#usage)
- [Code Overview](#code-overview)
- [Simulation](#simulation)
- [Future Improvements](#future-improvements)

## Introduction

This project demonstrates how to build a simple calculator application using the ATmega32 microcontroller. By integrating drivers for DIO , PORT , LCD, and a keypad, users can input numerical values and select arithmetic operations to perform calculations.

## Setup

1. **Hardware Connections**: Connect the ATmega32 microcontroller, LCD ( 4 BIT MODE ) , and keypad following the specified wiring diagram.
2. **Drivers Configuration**: Configure DIO , PORT, LCD, and keypad drivers to ensure proper communication with the hardware.
3. **Code Development**: Develop the source code using a suitable Integrated Development Environment (IDE) such as Atmel Studio.
4. **Loading Code**: Compile the code and load it onto the ATmega32 microcontroller using the appropriate programming method.
5. **Verify Connections**: Double-check that all connections are secure and accurate.
6. **Power On**: Power on the microcontroller to initiate the calculator application.

## Usage

1. **LCD Display**: The LCD screen will display input values, selected operations, and calculation results.
2. **Input**: Use the keypad to input numerical values for calculations.
3. **Operation Selection**: Press the appropriate operation key (+, -, *, /) to choose the desired arithmetic operation.
4. **Calculation**: Press '=' to perform the calculation. The result will be displayed on the LCD.
5. **Clear**: Press 'c' to clear the input and LCD display for a new calculation.

## Code Overview

The main code file (usually named `main.c`) contains the heart of the calculator's functionality. The code structure includes:

- Initialization of drivers and variables
- A continuous loop for user interaction
- Handling keypad input and updating the display
- Performing calculations based on user input and selected operation

Please refer to the source code comments for detailed explanations of each code section.

## Simulation

Included with the project is a Proteus simulation file that replicates the calculator's behavior. Running this simulation allows you to observe how the calculator interacts with the keypad and LCD virtually.

## Future Improvements

The project has potential for expansion:

- **Decimal Support**: Enhance the calculator to handle decimal numbers and floating-point arithmetic.
- **Memory Functions**: Implement memory storage and retrieval features for calculations.
- **Advanced Operations**: Add support for more advanced mathematical operations.
- **User Interface**: Design a more user-friendly and intuitive interface on the LCD screen.

![Screenshot 2023-08-28 011853](https://github.com/yousseeff322/Simple_Calculator/assets/119132407/5cceae1a-6042-4bba-83af-28ed63df5129)

