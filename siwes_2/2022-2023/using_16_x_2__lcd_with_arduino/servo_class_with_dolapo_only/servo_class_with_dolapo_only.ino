#include <Servo.h>

Servo ourServo;//create a servo object
int pos = 0;
void setup() {
  // put your setup code here, to run once:
  ourServo.attach(3);//tell where the servo is connected, ensure it's a PWM pin
  Serial.begin(9600);
}

void turnNinety() {
//  pos = Servo.read();
  switch (pos) {
    case 90:
      break;/*servo is already in 90deg get out of the switch case*/
    case 180: 
      //turn back to 90deg
      for (pos = 180; pos >= 90; pos--) {
        ourServo.write(pos);
        Serial.println(pos);
        delay(10);
      }
      break;
    case 0: 
      //turn back to 90deg
      for (pos = 0; pos <= 90; pos++) {
        ourServo.write(pos);
        Serial.println(pos);
        delay(15);
      }
      break;
  }
}

void turnZero() {
//  pos = Servo.read();
  switch (pos) {
    case 0:
      break;/*servo is already in 90deg get out of the switch case*/
    case 180: 
      //turn back to 90deg
      for (pos = 180; pos >= 0; pos--) {
        ourServo.write(pos);
        Serial.println(pos);
        delay(10);
      }
      break;
    case 90: 
      //turn back to 90deg
      for (pos = 90; pos >= 0; pos--) {
        ourServo.write(pos);
        Serial.println(pos);
        delay(15);
      }
      break;
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  turnNinety();
  turnZero();
//  for (int i = 0; i <= 180; i++) {
//    ourServo.write(i);
//    Serial.println(i);
//    delay(15);
//  }
//  delay(500);
//  for (int i = 180; i >= 0; i--) {
//    ourServo.write(i);
//    Serial.println(i);
//    delay(15);
//  }
  delay(500);
}
