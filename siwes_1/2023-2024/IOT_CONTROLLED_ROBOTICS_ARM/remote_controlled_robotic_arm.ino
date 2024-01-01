#if 1
/* Include the HCPCA9685 library */
#include "HCPCA9685.h"

// #define minPosition 10
#define minConvertedPosition 10
#define maxConvetedPosition 460
// #define maxPosition 500

#define I2CAdd 0x40

//defining the servo pins
#define baseServo 3
#define clampServo 7
#define leftServo 11
#define rightServo 15


//min and mx positon for each servos =======================================================
// baseServo  postion
#define baseServoMin 0
#define baseServoMax 180

int
  baseServoHome = 90,
  currentBaseServoPosition = baseServoHome;


// clampServo postion
#define clampServoMin 0   //opened  in degrees
#define clampServoMax 11  //closed  in degrees
// #define clampServoMax 11 //closed  in degrees

int
  clampServoHome = clampServoMax,
  currentClampServoPosition = clampServoHome;


// leftServo postion
#define leftServoMin 0   // in degrees
#define leftServoMax 85  // extend forward

int
  leftServoHome = leftServoMin,
  currentLeftServoPosition = leftServoHome;


// rightServo postion
#define rightServoMin 110  //
#define rightServoMax 180  //

int
  rightServoHome = rightServoMin,
  currentRightServoPosition = rightServoHome;

// ==============================================================




/* Create an instance of the library */
HCPCA9685 HCPCA9685(I2CAdd);



void setup() {
  /* Initialise the library and set it to 'servo mode' */
  beginTheSerialMonitor();
  HCPCA9685.Init(SERVO_MODE);
  setBTBaudRate();
  /* Wake the device up */
  HCPCA9685.Sleep(false);

  moveServoToHomePosition();
}


void loop() {
  if (btModule.available()) {
    char receivedSignal = btModule.read();
    switch (receivedSignal) {  // r, l, e, f, a, b, h, j
      case 'r':
        incrementBaseServo();
        break;
      case 'l':
        decrementBaseServo();
        break;
      case 'e':
        openClampServo();
        break;
      case 'f':
        closeClampServo();
        break;
      case 'a':
        incrementRightServo();
        break;
      case 'b':
        decrementRightServo();
        break;
      case 'h':
        incrementLeftServo();
        break;
      case 'j':
        decrementLeftServo();
        break;
    }
  }
}


void decrementLeftServo() {
  Serial.println("\ncurrent pos: " + String(currentLeftServoPosition));
  if (currentLeftServoPosition != leftServoMin) {
    currentLeftServoPosition--;
  }
  Serial.println("pos after Validation: " + String(currentLeftServoPosition));

  moveServo(leftServo, currentLeftServoPosition);
  delay(servoDelay);
}

void incrementLeftServo() {
  currentLeftServoPosition++;
  currentLeftServoPosition = (currentLeftServoPosition >= leftServoMax) ? leftServoMax : currentLeftServoPosition;

  moveServo(leftServo, currentLeftServoPosition);
  delay(servoDelay);
}

void decrementRightServo() {
  Serial.println("\ncurrent pos: " + String(currentRightServoPosition));
  if (currentRightServoPosition != rightServoMin) {
    currentRightServoPosition--;
  }
  Serial.println("pos after Validation: " + String(currentRightServoPosition));

  moveServo(rightServo, currentRightServoPosition);
  delay(servoDelay);
}

void incrementRightServo() {
  currentRightServoPosition++;
  currentRightServoPosition = (currentRightServoPosition >= rightServoMax) ? rightServoMax : currentRightServoPosition;

  moveServo(rightServo, currentRightServoPosition);
  delay(servoDelay);
}

void moveServo(int whichServo, int servoAngle) {
  int convertedServoAngle = map(servoAngle, 0, 180, 10, 460);
  if (servoAngle == 0) {
    convertedServoAngle = 10;
  } else if (servoAngle == 180) {
    convertedServoAngle = 460;
  }

  HCPCA9685.Servo(whichServo, convertedServoAngle);
}

void moveServoToHomePosition() {
  moveServo(clampServo, clampServoHome);
  moveServo(baseServo, baseServoHome);
  moveServo(rightServo, rightServoHome);
  moveServo(leftServo, leftServoHome);
}

void decrementBaseServo() {
  Serial.println("\ncurrent pos: " + String(currentBaseServoPosition));
  // currentBaseServoPosition = (currentBaseServoPosition == baseServoMin) ? baseServoMin : currentBaseServoPosition--;
  if (currentBaseServoPosition != baseServoMin) {
    currentBaseServoPosition--;
  }
  Serial.println("pos after Validation: " + String(currentBaseServoPosition));

  moveServo(baseServo, currentBaseServoPosition);
  delay(servoDelay);
}

void incrementBaseServo() {
  currentBaseServoPosition++;
  currentBaseServoPosition = (currentBaseServoPosition >= baseServoMax) ? baseServoMax : currentBaseServoPosition;

  moveServo(baseServo, currentBaseServoPosition);
  delay(servoDelay);
}

void openClampServo() {
  int pos;
  for (pos = currentClampServoPosition; pos <= clampServoMax; pos++) {
    moveServo(clampServo, pos);
    delay(10);
  }
  currentClampServoPosition = pos;
}

void closeClampServo() {
  int pos;
  for (pos = currentClampServoPosition; pos >= clampServoMin; pos--) {
    moveServo(clampServo, pos);
    delay(10);
  }
  currentClampServoPosition = pos;
}

void testClampServo() {
  openClampServo();
  delay(300);
  closeClampServo();
  delay(300);
}

#endif