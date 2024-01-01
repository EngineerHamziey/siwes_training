const int  myDelay = 600;
void setup() {
  for (byte pin = 2; pin <= 7; pin++ ) {//2,3,4,5,6,7
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  byte 
    count = 2,
    ledPin = 2;
//  for(byte count = 2; count <= 7; count++) {
  do{
//    for(byte ledPin = 2; ledPin <= count; ledPin++) {
    do {
      digitalWrite(ledPin, HIGH);
      delay(myDelay);
      ledPin++;
    }while(ledPin <= count);
    
    for(byte ledPin = 2; ledPin <= count; ledPin++) {
      digitalWrite(ledPin, LOW);
    }
    delay(myDelay);

    count++;
  }while(count <= 7);
}
