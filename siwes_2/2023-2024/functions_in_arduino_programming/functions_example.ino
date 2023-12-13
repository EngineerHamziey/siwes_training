//using the serial monitor


#if 1
const int led_1 = 2;//pin for led 1
const int led_2 = 4;
const int led_3 = 16;

/*
int getDistance() {
  //some codes
  
  return distance;
} */

void loopLeds(int ledPin) {//
  for(int count = 1; count <= 5; count++) {//{1, 2, 3, 4, 5}
    digitalWrite(ledPin, HIGH);//turning on the led
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}//kill(man_a)

void initLeds(int ledPin) {
  pinMode(ledPin, OUTPUT);
}

void setup() {
  initLeds(led_1);
  initLeds(led_2);
  initLeds(led_3);
}

void loop() {
  //BLINK THE FIRST LED 5 TIMES
  loopLeds(led_1);
  delay(1500);
  //BLINK THE SECOND LED 5 TIMES
  loopLeds(led_2);
  //BLINK THE THIRD LED 5 TIMES
  loopLeds(led_3);
}

#endif