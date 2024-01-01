#if 1
//add the keypad
#include <Keypad.h>

//tell the dimension
const byte rowLength = 4;
const byte colLength = 4;

char keys[rowLength][colLength] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


byte rowPins[rowLength] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[colLength] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//Create an object of keypad
Keypad myKeypad = Keypad( makeKeymap(keys), rowPins, colPins, rowLength, colLength );

char 
  promptYear = 'Y',
  promptMonth = 'M',
  promptDay = 'D';
  
int getUserInput(char whichInput) {
  int currentKeyValue = myKeypad.getKey();
  
  switch (whichInput) {
    cases promptYear://4 digits
      for(int digit = 1; digit <= 4; digit++) {
        if(currentKeyValue) {
          
        }
      }
      break;
    cases promptMonth:
      break;
    cases promptDay:
      break;
      
  }
}

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  char keyValue = myKeypad.getKey();// Read the keypad and store it in key value
  if(keyValue) { // if keyPad
    Serial.print("keypad value is = ");
    Serial.println(keyValue);
  }
}

#endif