////store switch pin in a variable : byte is 8 bit (0 - 255)
//const byte 
//  switchPin = 9,
//  ledPin = 7;
//
//bool ledState = 0;//led should be off when the arduino is powered on
//void setup() {
//  //let the arduino know that the switch is on pin 9
//  pinMode(switchPin, INPUT);
//  pinMode(ledPin, OUTPUT);
//  Serial.begin(9600);
//}
//
//void loop() {
//  //if switch is pressed, then change the state of the led
//  if (digitalRead(switchPin) == HIGH) {
//    //! means opposite, invert...i.e on it, if it is off and off it if it is on
//    ledState = !ledState;
//    digitalWrite(ledPin, ledState);
//
//    //wait before checking next press
//    delay(200);
//  } 
//}
//
//
//
////
