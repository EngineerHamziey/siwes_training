#if 1 // 1 means run/compile this and 0 means dont
// TYPE variableName 
const int led_1 = 0, led_2 = 2, led_3 = 4, led_4 = 16, led_5 = 17;
int d_delay = 200;
//case sensitivity: eg all the following are not the same: void, Void, VOid, VOId,VOID, voID
// ch340 driver download for windows
void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  //increment
  for(int pinNumberr = 0; pinNumberr <= 17; pinNumberr++) {
    digitalWrite(pinNumberr, HIGH);
    delay(d_delay);
    digitalWrite(pinNumberr, LOW);
    delay(d_delay);
  }
  
  //decrement
  for(int pinNumberr = 17; pinNumberr <= 0; pinNumberr--) {
    digitalWrite(pinNumberr, HIGH);
    delay(d_delay);
    digitalWrite(pinNumberr, LOW);
    delay(d_delay);
  }
}

void loop() {}

#endif