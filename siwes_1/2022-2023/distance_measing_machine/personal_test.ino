#if 1
//============CONTACTLESS DISTANCE MEASURING MACHINE===========//

//include the lcd library
#include <LiquidCrystal.h>

//create lcd object
LiquidCrystal myLcd(2, 3, 4, 5, 6, 7);  //RS, E, D4, D5, D6, D7

#define echoPin 8
#define triggerPin 9

void setup() {
  myLcd.begin(16, 2);  //tell the size of the lcd

  Serial.begin(115200);
  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);

  digitalWrite(triggerPin, LOW);  //TURN OFF THE SPEAKER INCASE IT'S ON, JUST AS A PRECAUTION
  myLcd.print("DISTANCE ");
  myLcd.setCursor(0, 1);
  myLcd.print("MEASURING MACHINE");
  delay(6000);
  myLcd.clear();
}

void loop() {
  digitalWrite(triggerPin, HIGH);  //TURN ON THE SPEAKER
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);          //TURN OFF THE SPEAKER
  int echoTime = pulseIn(echoPin, HIGH);  //time is returned in micro-seconds
  float totalDistance = (0.017) * echoTime;
  Serial.println(
    "The total Distance is =" + String(totalDistance) + "cm");
  myLcd.clear();
  myLcd.println("Distance is =    ");
  myLcd.setCursor(0, 1);
  // myLcd.print(String(totalDistance) + "cm");
  myLcd.print("10.50cm");

  delay(10000);
}




#endif