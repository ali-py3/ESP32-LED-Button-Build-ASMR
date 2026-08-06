# ESP32 LED and Push Button Project

A simple ESP32 project that toggles an LED each time a push button is pressed.

## Components

- ESP32 development board
- Breadboard
- LED
- Push button
- 220Ω or 330Ω resistor
- Jumper wires

## Pin Connections

| Component | ESP32 Pin |
|---|---|
| LED | GPIO 2 |
| Push button | GPIO 19 |
| Ground | GND |

The push button uses the ESP32 internal pull-up resistor with `INPUT_PULLUP`.

## How It Works

Each time the push button is pressed, the LED changes state:

- If the LED is off, it turns on.
- If the LED is on, it turns off.

## Arduino Code

The Arduino sketch is available here:

`ESP32_LED_Button/ESP32_LED_Button.ino`

## Circuit

![ESP32 circuit](circuit.jpg)

## Video

Watch the full relaxing ESP32 build video on YouTube.

## License

This project is available for educational and personal use.
