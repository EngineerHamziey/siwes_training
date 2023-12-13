#if 0

const int sensorPin = 4;
const int ledPin = 2;

#if 0
  for(initialization; condition; increment/decrement) {
    //code to repeat
    //code to repeat
    //code to repeat
  }
#endif

void blinkLed() {
  for(int count = 1; count <= 10; count++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
    // Serial.println()
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); //
  
  digitalWrite(ledPin, LOW);
  digitalWrite(sensorPin, LOW);//enable pulldown
}

void loop() {
  //if sensor sees signal, turn on led
  int sensorValue = digitalRead(sensorPin);
  if(sensorValue == HIGH) {
    blinkLed();
    delay(3000);
  }
  
  // blinkLed();
}

#endif