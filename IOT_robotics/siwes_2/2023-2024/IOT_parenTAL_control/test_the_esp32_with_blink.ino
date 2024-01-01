#if 0

const int ledPin = 2;
bool ledState = LOW;

void blinkLedUsingNot(int pinNo) {
  digitalWrite(pinNo, ledState);
  ledState = !ledState;//CHANGES THE VALUE TO OPPOSITE OF IT'S PREVIOUS
  delay(500);
}

void blinkLed(int pinNo) {
  digitalWrite(pinNo, ledState);
  ledState = HIGH;
  delay(500);
  digitalWrite(pinNo, ledState);
  ledState = LOW;
  delay(500);
}

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkLed(ledPin);
}


#endif