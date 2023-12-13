#include <LiquidCrystal.h> //include the lcd library

//create an lcd object and tell the pins its connected to:
LiquidCrystal HamzieyLcd(4, 5, 6, 7, 8, 9);  //RS, E, DB4, DB5, DB6, DB7

void setup() {
  // put your setup code here, to run once:
  HamzieyLcd.begin(16, 2);// lcd.begin
}

void loop() {
  // put your main code here, to run repeatedly:

}
