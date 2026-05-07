# Toyota Unintended Acceleration Case Study

## Incident Overview
Some Toyota vehicles experienced unintended acceleration events where vehicles accelerated without driver intention.

## System Involved
- Electronic Throttle Control (ETC)
- Accelerator Pedal Position Sensor
- Throttle Actuator Motor
- Engine Control Unit (ECU)

## Basic System Flow
Pedal Sensor → ECU → Throttle Motor → Engine

Brake signal is also monitored by the ECU.

## Technical Understanding
Modern electronic throttle systems are fully drive-by-wire systems.

The accelerator pedal position is measured using sensors and interpreted by the ECU, which controls the throttle actuator motor electronically.

There is no direct mechanical cable connection between pedal and throttle.

## Possible Root Causes
- sensor misreading
- incorrect signal interpretation
- mechanical pedal sticking
- insufficient fail-safe validation

## Safety Concerns
A single incorrect throttle command can create a major safety risk if proper fault detection mechanisms are not implemented.

## Engineering Redesign Proposal
- Dual accelerator pedal sensors
- Plausibility checks between sensor values
- Brake override logic
- Watchdog monitoring
- Limp mode during fault conditions

## Functional Safety Thinking
This type of system is safety-critical and requires:
- redundancy
- fault detection
- fail-safe operation

Likely safety relevance:
ASIL D (high safety criticality)

## Key Learning
Safety-critical automotive systems should never rely on a single sensor or a single point of failure.
