#if 0

#define switch_pin13 12
#define switch_pinA0 A0
#define ledPin 13

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switch_pin13, INPUT);
  pinMode(switch_pinA0, INPUT);
  
  //to prevent floating OF THE SWITCH PIN
  digitalWrite(switch_pin13, HIGH);
  digitalWrite(switch_pinA0, HIGH);
}

const bool pressed = false;//Low = false = 0
bool ledState = false;

void loop() {
  if(digitalRead(switch_pin13) == pressed) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
  delay(80);
}

#endif