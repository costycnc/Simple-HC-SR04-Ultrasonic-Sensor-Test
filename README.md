# Simple HC-SR04 Ultrasonic Sensor Test

## Description

video https://www.youtube.com/shorts/KtlPhS5CgYE

test now https://costycnc.github.io/avr-compiler-js#echo

This simple Arduino sketch uses the HC-SR04 ultrasonic sensor to determine if an object is **near** or **far** based on a fixed-interval test of the echo pin state.

It does **NOT measure the duration** of the echo signal like typical examples using `pulseIn()`. Instead, it:

- Sends a 10 µs trigger pulse  
- Waits for a short delay (e.g., 1 ms)  
- Reads the echo pin:  
  - If HIGH → echo pulse is still ongoing → object is **far** (LED ON)  
  - If LOW → echo pulse ended → object is **near** (LED OFF)  

The onboard LED (pin 13) lights up if the object is far.

## Hardware Connections

- HC-SR04 Trigger pin → Arduino pin 9  
- HC-SR04 Echo pin → Arduino pin 10  
- Arduino built-in LED → pin 13 (to indicate near/far object)  

## How the code works

1. Sends a 10-microsecond trigger pulse to the sensor.  
2. Waits for a short delay (e.g., 1 ms).  
3. Reads the echo pin: if HIGH, the LED turns ON (object far), if LOW, the LED turns OFF (object near).  

### Note on the delay

Changing the delay value adjusts the distance threshold:  
- 1 ms corresponds roughly to 10 cm (approximate measurement)  
- 2 ms corresponds roughly to 30 cm (approximate measurement)  

## Usage

Upload the sketch to an Arduino connected to the sensor as described.  
Use the built-in LED to visually indicate the presence of a near or far object.

## Possible Improvements

- Adjust the wait time (1 ms) to change the distance threshold  
- Add more distance levels using multiple wait intervals or LEDs  
- Handle timeout or error conditions if echo stays HIGH too long  
- Port to AVR assembly or other architectures  

## Contributing

Feel free to fork, open issues, or submit pull requests to improve this project!

## License

This project is licensed under the MIT License.

---

Author: costycnc  
Date: 2025  


