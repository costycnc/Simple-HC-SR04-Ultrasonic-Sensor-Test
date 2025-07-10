/*
  Simple HC-SR04 Ultrasonic Sensor Test

  This Arduino sketch sends a trigger pulse to the HC-SR04 sensor,
  waits a fixed interval (1 millisecond), then reads the echo pin.
  
  If echo is HIGH after 1ms, it means the object is far.
  If echo is LOW after 1ms, it means the object is near.

  This is a simplified version that does NOT measure
  the duration of the echo signal, just its state after a delay.
  
  Connections:
  - trigPin -> Pin 9
  - echoPin -> Pin 10
  - Onboard LED -> Pin 13 (LED lights up if object is far)
*/

const int trigPin = 8;
const int echoPin = 9;
const int ledPin = 13;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Send trigger pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

// Wait 1 millisecond before reading echo
// Changing this value modifies the distance threshold:
// 1 ms ≈ 10 cm (measured, approximate)
// 2 ms ≈ 30 cm (measured, approximate)
delay(1);



  if (digitalRead(echoPin) == HIGH) {
    digitalWrite(ledPin, HIGH); // Object is far
  } else {
    digitalWrite(ledPin, LOW);  // Object is near
  }

  delay(100); // Pause before next trigger
}

