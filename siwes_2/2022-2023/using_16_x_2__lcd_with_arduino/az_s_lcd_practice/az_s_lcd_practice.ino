#include <LiquidCrystal.h>
//const int rs = 4,
//          en =5,
//          d4 = 6,
//          d5 = 7,
//          d6 = 8,
//          d7 = 9;
int myArray [] = {4,5,6,7,8,9};
 int rs = myArray [0],
     en = myArray [1],
     d4 = myArray [2],
     d5 = myArray [3],
     d6 = myArray [4],
     d7 = myArray [5];
      
 LiquidCrystal Mylcd(rs, en, d4, d5, d6, d7);
void setup() {
 
 Mylcd.begin(16, 2);
 Mylcd.clear();
  Mylcd.print("Hellow");
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
// Mylcd.clear();
// Mylcd.print("I am Abdulazeez");
// delay(1000);
// Mylcd.clear();
// Mylcd.setCursor(0,1);
// Mylcd.print("I love you");
// delay(1000);
}
