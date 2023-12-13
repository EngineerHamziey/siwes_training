#if 0 // 1 means run/compile this and 0 means dont

#if 0
we have datatypes in Arduino:
  byte == 8 bit integer (0 - 255)
  int == integer
  float == decimal number types.
  double == decimal number types.//has double precision(of float)

#endif

const int led_1 = 0, led_2 = 2, led_3 = 4, led_4 = 16, led_5 = 17;
String lastName = "Alaka";
String firstName = "Idris";

//returnType functionName() {}
void onLedWithLoop() {// the return type here is "void" because it returns nothing
  for(int count = 1; count <= 10; count++) {
    Serial.println("Full Name = " + lastName + " " + firstName);
    //some codes
    digitalWrite(led_1, HIGH);
    Serial.println("Led ON");
    delay(500);
    digitalWrite(led_1, LOW);
    Serial.println("Led Off");
    delay(500);
  }
  // int led_1 = A1
  // int led_1 = A1
  // return.........
}

void setup() {
  Serial.begin(115200);//initialize the serial monitor by setting it's baud rate 9600, 
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  
  onLedWithLoop();
}

void loop() {
}

#endif