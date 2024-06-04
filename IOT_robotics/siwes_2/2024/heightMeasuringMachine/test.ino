#if 0

#define TRIG_PIN 9  // Pin connected to the TRIG pin of HC-SR04
#define ECHO_PIN 8 // Pin connected to the ECHO pin of HC-SR04

void setup() {
  Serial.begin(115200); // Start the serial communication at 9600 baud rate
  pinMode(TRIG_PIN, OUTPUT); // Set the TRIG pin as an OUTPUT
  pinMode(ECHO_PIN, INPUT);  // Set the ECHO pin as an INPUT
}

void loop() {
  long duration;
  int distance;

  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the duration of the echo pulse
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Wait for a second before taking another measurement
}


#endif
