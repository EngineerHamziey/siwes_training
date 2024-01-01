#if 0 // 1 means run/compile this and 0 means dont

//we do some settings
// TYPE variableName 
int led_1 = 0;
int led_2 = 2;
int led_3 = 4;
int led_4 = 16;
int led_5 = 17;

void setup() {
  // put your setup code here, to run once:
  // pinMode(pinNumber, input/output);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //TURN IT ON
  digitalWrite(yellowLed, HIGH);//pin yellowLed on your board
  digitalWrite(blueLed, HIGH);//pin 3 on your board
  
  delay(500);//the default unit milliseconds
  
  //TURN IT OFF
  digitalWrite(yellowLed, LOW);//pin 2 on your board
  digitalWrite(blueLed, LOW);//pin 3 on your board
  
  delay(500);//the default unit milliseconds  
}

#endif
