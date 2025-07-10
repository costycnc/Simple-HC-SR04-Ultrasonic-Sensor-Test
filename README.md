# Simple HC-SR04 Ultrasonic Sensor Test

## Description

This simple Arduino sketch uses the HC-SR04 ultrasonic sensor to determine if an object is **near** or **far** based on a fixed-interval test of the echo pin state.

It does **NOT measure the duration** of the echo signal like typical examples using `pulseIn()`. Instead:

- Sends a 10 µs trigger pulse
- Waits 1 millisecond
- Reads the echo pin:
  - If HIGH → echo pulse is still ongoing → object is far
  - If LOW → echo pulse ended → object is near

The onboard LED (pin 13) lights up if the object is far.

## Hardware Connections

- TRIG -> Arduino Pin 9
- ECHO -> Arduino Pin 10
- Onboard LED -> Arduino Pin 13

## Usage

Upload the sketch to a compatible Arduino board.  
Open the serial monitor to see "Object is near" or "Object is far" messages.

## Possible Improvements

- Adjust the wait time (1 ms) to change the distance threshold
- Add more distance levels using multiple wait intervals or LEDs
- Handle timeout or error conditions if echo stays HIGH too long
- Port to AVR assembly or other architectures

---

Project created by [your-name-or-nickname]

