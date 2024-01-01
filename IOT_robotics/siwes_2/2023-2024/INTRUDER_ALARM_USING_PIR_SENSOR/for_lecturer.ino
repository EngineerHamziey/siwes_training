#if 0


#include <SoftwareSerial.h>
const int gsmTx = 6, gsmRx = 7;
SoftwareSerial myGsm(gsmRx, gsmTx);

const int sensorPin = 2;
const int buzzerPin = 4;

String assignedNumber = "+2348160497596";//emola

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  myGsm.begin(9600);
  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(sensorPin, LOW);
}

void blinkLed() {
  for(int count = 1; count <= 4; count++) {
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  }
}

void sendSMS() {
  myGsm.println("AT+CMGF=1");
  delay(1000);
  myGsm.println("AT+CMGS=\""+ assignedNumber + "\"\r");
  delay(1000);
  myGsm.println("INTRUDER DETECTED!!!!!");
  delay(100);
  myGsm.println((char)26);
  Serial.println("sms sent");
  delay(1000);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);
  if(sensorValue == HIGH) {
    Serial.println("motion sensed");
    blinkLed();
    sendSMS();
    delay(6000);
  }else {
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(500);
}

#endif