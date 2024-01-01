////store switch pin in a variable : byte is 8 bit (0 - 255)
//const byte switchPin = 9;
// 
//void setup() {
//  // put your setup code here, to run once:
//  
//  //let the arduino know that the switch is on pin 9
//  pinMode(switchPin, INPUT);
//  Serial.begin(9600);
//}
//
//
//byte count = 0;
//void loop() {
//  // put your main code here, to run repeatedly:
//  
//  //if switch is pressed, then display: "switch pressed"
//  if (digitalRead(switchPin) == HIGH) {
//    Serial.println(
//        "switch pressed " +
//        String(count++)
//      );
//  }
//  delay(300);
//}
