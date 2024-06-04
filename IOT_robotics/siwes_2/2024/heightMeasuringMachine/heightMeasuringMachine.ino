#if 1


#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C myLcd(0x27,16,4);

//#define is used for defining constant
#define echoPin 8
const byte triggerPin = 9;// byte has 8 bits range
//const int is also used for defining constant integers with 16 bits range

double heightInCM = 0, soundSpeed = 340;


void setup() {
  Wire.begin();
  myLcd.init();
  myLcd.backlight();
  myLcd.setCursor(0, 0);
  myLcd.clear();

  myLcd.print("HEIGHT MEASURING");
  myLcd.setCursor(6, 2);
  myLcd.print("MACHINE");
  
  //since our 2 pins requires digital signals, we define their pinModes
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);// this is the baudrate commonly 9600 and 115200
}

void loop() {
  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  long echoReturnTime = pulseIn(echoPin, HIGH);// long is 32 bits integer
  Serial.println("echo return time is " + String(echoReturnTime));
  heightInCM = echoReturnTime * 0.034 / 2;
  Serial.println("Height in cm is " + String(heightInCM));
  
  myLcd.setCursor(2, 3);
  myLcd.print("HEIGHT = " + String(heightInCM));
  delay(400);
}

#endif
