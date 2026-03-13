# Temperature Controlled Fan

A simple Arduino project that automatically turns a fan on or off depending on the temperature.

---

## Overview

This project uses an Arduino, a temperature sensor, and an L298N motor driver to control a DC fan.
When the temperature drops below a defined threshold, the fan starts automatically.

---

## Components

* Arduino board
* L298N motor driver
* DC motor / fan
* Temperature sensor (LM35, DHT11, etc.)
* Jumper wires
* External power supply

---

## How It Works

The Arduino reads the temperature from the sensor continuously.
If the temperature goes below a predefined value, the Arduino activates the motor driver and starts the fan.

---

## Setup

1. Connect the temperature sensor to the Arduino.
2. Connect the L298N input pins to Arduino digital pins.
3. Connect the fan to the motor driver outputs.
4. Provide external power to the motor driver.
5. Upload the code to the Arduino.

---

## License

Free to use for educational purposes.
