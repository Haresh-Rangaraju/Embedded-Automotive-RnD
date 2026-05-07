# ADC with Potentiometer

## Overview
This project demonstrates analog-to-digital conversion using a potentiometer and Arduino Nano.

## Objective
Convert analog voltage into digital ADC values and validate the readings using physical voltage measurements.

## Components Used
- Arduino Nano
- Breadboard
- 10k Potentiometer
- Jumper wires

## Working Principle
The potentiometer generates a variable analog voltage between 0V and 5V.

Arduino ADC converts this voltage into a digital value between 0 and 1023.

## ADC Formula
ADC = (Vin / 5V) × 1023

## Observations
- ADC value changes with potentiometer rotation
- Output is mostly linear
- Small fluctuations observed due to noise

## Key Learning
ADC converts real-world analog signals into digital values for embedded processing.
