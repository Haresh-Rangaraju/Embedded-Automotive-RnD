# LM35 Temperature Sensor Interface

## Overview
This project demonstrates temperature measurement using the LM35 analog temperature sensor and Arduino Nano.

## Objective
Convert temperature into voltage, then ADC values, and validate the sensor readings using physical measurements.

## Components Used
- Arduino Nano
- LM35 Temperature Sensor
- Breadboard
- Jumper wires

## Sensor Characteristics
- Analog output sensor
- Sensitivity: 10mV/°C
- Operating voltage: 4V–30V

## Working Principle
The LM35 outputs a voltage proportional to temperature.

Example:
- 25°C → 0.25V
- 30°C → 0.30V

Arduino converts the analog voltage into ADC values and calculates temperature.

## Formula Used
Voltage = ADC × (5.0 / 1023.0)

Temperature = Voltage / 0.01

## Observations
- Temperature changes slowly when touched
- Minor fluctuations observed in readings
- ADC values correspond approximately with measured voltage

## Key Learning
Real-world sensors introduce noise, delay, and small measurement variations which must be validated during embedded system development.
