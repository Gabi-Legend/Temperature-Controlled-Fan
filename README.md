Temperature Controlled Fan

A simple Arduino project that automatically turns a fan on when the temperature drops below a set threshold.
---
Components

Arduino board

L298N motor driver

DC motor (fan)

Temperature sensor (e.g., LM35 or DHT11)

Jumper wires

External power supply for the motor
---
How it Works

The Arduino reads the temperature from the sensor.
If the temperature goes below a defined value, the Arduino activates the motor driver and starts the fan.
---
Connections

Temperature sensor connected to an Arduino input pin

L298N IN1 and IN2 connected to Arduino digital pins

Fan connected to the motor driver outputs

External power supply connected to the L298N
---
Usage

Upload the Arduino code, power the circuit, and the fan will automatically start when the temperature condition is met.
