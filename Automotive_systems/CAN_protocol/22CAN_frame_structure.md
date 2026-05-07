# CAN Frame Structure

## Overview
A CAN frame is a structured message format used for communication between ECUs on a CAN bus.

## Standard CAN Frame Fields
SOF → Identifier → RTR → Control → Data → CRC → ACK → EOF

## Important Fields

### Identifier
Determines:
- message priority
- source relevance

Lower identifier values have higher priority during arbitration.

### Data Field
Contains actual payload data.

Standard CAN supports:
0–8 bytes of data.

### CRC
Used for error detection during communication.

### ACK
Acknowledgement bit confirming successful reception.

## Example Message
ID = 0x120

Possible payload:
- Vehicle speed
- Engine temperature
- Fault flags

## Automotive Relevance
CAN frames are used for:
- sensor communication
- ECU synchronization
- fault diagnostics
- real-time vehicle control

## Key Learning
CAN communication uses structured frames with priority-based arbitration and error detection mechanisms.
