#if 0
//include the lcd library
#include <LiquidCrystal.h>

//create lcd object
LiquidCrystal myLcd(2, 3, 4, 5, 6, 7);//RS, E, D4, D5, D6, D7

void setup() {
  myLcd.begin(16, 2);//tell the size of the lcd
  Serial.begin(115200);
  myLcd.print("HELLO WORLD!");
  // myLcd.setCursor(X-POS, Y-POS);
  myLcd.setCursor(0, 1);//SET CURSOR TO THE NEXT LINE
  myLcd.print("this is line 2");
  Serial.print("HELLO WORLD!\n");
  Serial.print("this is line 2\n");
}

void loop(){
  
}

#endif