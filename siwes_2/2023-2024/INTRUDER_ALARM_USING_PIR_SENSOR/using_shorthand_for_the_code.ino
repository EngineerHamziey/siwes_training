#if 0

const int sensorPin = 4;
const int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);
  
  digitalWrite(ledPin, LOW);
  digitalWrite(sensorPin, LOW);//enable pulldown
}

void loop() {
  //if sensor sees signal, turn on led
  int sensorValue = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorValue);
  delay(3000); 
}

#endif