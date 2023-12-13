#if 0 // 1 means run/compile this and 0 means dont
// TYPE variableName 

// #define led_1 0
// #define led_2 2
// #define led_3 4

const int led_1 = 0, led_2 = 2, led_3 = 4, led_4 = 16, led_5 = 17;


void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  
  //FOR LOOPS
  //for (initialization; condition; increment/decrement)
  for(int count = 1; count <= 5; count++) {
    //some codes
    digitalWrite(led_1, HIGH);
    delay(500);
    digitalWrite(led_1, LOW);
    delay(500);
  }
}

void loop() {
  
}

#endif