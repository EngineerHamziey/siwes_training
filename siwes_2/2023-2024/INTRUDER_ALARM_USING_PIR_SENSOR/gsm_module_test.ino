#if 0

// Include the GSM library
#include <GSM.h>

// tx goes to pin 11
// rx goes to pin 10

#define PINNUMBER ""

// initialize the library instance
GSM gsmAccess;
GSM_SMS sms;

void setup() {
  // initialize serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("SMS Messages Sender");

  // connection state
  boolean notConnected = true;//
  Serial.println("notConnected initialized");

  // Start GSM shield
  // If your SIM has PIN, pass it as a parameter of begin() in quotes
  while (notConnected) {
    Serial.println("checking for pinNumber");
    Serial.println("checking for pinNumber");
    if (gsmAccess.begin(PINNUMBER) == GSM_READY) {
      Serial.println("gsm is ready");
      notConnected = false;
    } else {
      Serial.println("Not connected");
      delay(1000);
    }
    Serial.println("gsm while loop end");
  }

  Serial.println("GSM initialized");
}

void loop() {

  Serial.print("Enter a mobile number: ");
  // char remoteNum[20];  // telephone number to send sms to
  // readSerial(remoteNum);//
  // Serial.println(remoteNum);
  char remoteNum[] = "+2348130152298";

  // sms text
  Serial.print("Now, enter SMS content to send to the entered number: ");
  char txtMsg[200];
  readSerial(txtMsg);
  Serial.println("SENDING");
  Serial.println();
  Serial.println("Message:");
  Serial.println(txtMsg);

  // send the message
  sms.beginSMS(remoteNum);
  sms.print(txtMsg);
  sms.endSMS();
  Serial.println("\nCOMPLETE!\n");
}

/*
  Read input serial
 */
int readSerial(char result[]) {
  int i = 0;
  while (1) {
    while (Serial.available() > 0) {
      char inChar = Serial.read();
      if (inChar == '\n') {
        result[i] = '\0';
        Serial.flush();
        return 0;
      }
      if (inChar != '\r') {
        result[i] = inChar;
        i++;
      }
    }
  }
}


#endif