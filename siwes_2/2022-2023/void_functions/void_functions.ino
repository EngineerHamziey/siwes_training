//blinking leds using function
/*
 * connect one led to pin 2 and 3 
 of the arduino board using a 200 - 700 ohms
 */
const byte 
  led1pin = 2,
  led2pin = 3;
  
void setup() {
  pinMode(led1pin, OUTPUT);
  pinMode(led2pin, OUTPUT);
  for(byte count = 1; count <= 10; count++) {
    //NOW CALL THE BLINKLED FUNCTION
    blinkLed();
  }
}

//THE function must be declared before call/use
void blinkLed() {//the void here means it returns no value and it's only doing something for us
  digitalWrite(led1pin, HIGH);
  delay(200);
  digitalWrite(led1pin, LOW);
  delay(200);
  digitalWrite(led2pin, HIGH);
  delay(200);
  digitalWrite(led2pin, LOW);
  delay(200);
}

void loop() {
  //NOW CALL THE BLINKLED FUNCTION
//  blinkLed();
}
