#if 1

//add the software serial library to be able to create another (UART) tx, rx to two selected pins of your choice
#include <SoftwareSerial.h>
const int gsmTx = 6, gsmRx = 7;
SoftwareSerial myGsm(gsmRx, gsmTx);//initializing new additional uart:  gsmTx and gsmRx 

const int sensorPin = 12;
const int buzzerPin = 4;

// char phone_no[] = "+2348160497596"; //change with phone number to sms
String assignedNumber = "+2348160497596";
// 09032286148
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, INPUT_PULLUP);//digital signals
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  myGsm.begin(9600);

  digitalWrite(buzzerPin, LOW);
  digitalWrite(sensorPin, LOW);//enable pulldown
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
  // AT commands are used for controlling GSM module
  myGsm.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  myGsm.println("AT+CMGS=\""+ assignedNumber + "\"\r"); // the assignedNumber is the 
  delay(1000);
  // myGsm.println("ole! ole!\nCatch him!");// The SMS text you want to send
  myGsm.println("INTRUDER DETECTED!!!!!");// The SMS text you want to send
  delay(100);
  myGsm.println((char)26);// ASCII code of CTRL+Z
  Serial.println("sms sent");
  delay(1000);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);//if sensor sees signal, turn on led
  if(sensorValue == LOW) {//LOW, since not gate has been added
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