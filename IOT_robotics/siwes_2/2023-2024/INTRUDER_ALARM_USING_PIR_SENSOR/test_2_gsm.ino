#if 0
#include <SoftwareSerial.h>    //Create software serial object to communicate with SIM800L
SoftwareSerial GSM(11, 10); //SIM800L Tx & Rx is connected to Arduino #8 & #9
// tx to pin 11
// rx to pin 10

char phone_no[] = "+2348130152298"; //change with phone number to sms

#define bt_C  A1 

void setup() { 

  Serial.begin(9600);//Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
  GSM.begin(9600);   //Begin serial communication with Arduino and SIM800L

  // pinMode(bt_C, INPUT_PULLUP); // declare bt_C as input


  Serial.println("Initializing....");
  initModule("AT", "OK", 1000);              //Once the handshake test is successful, it will back to OK
  delay(500);
  callUp(phone_no);
}

void loop() {

}


void callUp(char *number) {
  GSM.print("ATD + "); GSM.print(number); GSM.println(";"); //Call to the specific number, ends with semi-colon,replace X with mobile number
  delay(20000);       // wait for 20 seconds...
  GSM.println("ATH"); //hang up
  delay(100);
}


void initModule(String cmd, char *res, int t) {
  while (1) {
    Serial.println(cmd);
    GSM.println(cmd);
    delay(100);
    while (GSM.available() > 0) {
      if (GSM.find(res)) {
        Serial.print("response = ");
        Serial.println(res);
        delay(t);
        return;
      } else {
        Serial.println("Error");
      }
    }
    delay(t);
  }
}
#endif