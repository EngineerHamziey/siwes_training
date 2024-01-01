#if 0
/* Include the HCPCA9685 library */
#include "HCPCA9685.h"

// #define minPosition 10
#define minPosition 10
#define maxPosition 460
// #define maxPosition 500

#define  I2CAdd 0x40

//defining the servo pins
#define baseServo 3
#define clampServo 7
#define leftServo 11
#define rightServo 15


//min and mx positon for each servos =======================================================
// baseServo  postion
#define baseServoMin 0
#define baseServoMax 180
#define baseServoHome 90


// clampServo postion
#define clampServoMin 0  //opened  in degrees
#define clampServoMax 12 //closed  in degrees
#define clampServoHome 0 


// leftServo postion
#define leftServoMin 0// in degrees
#define leftServoMax 85// extend forward
#define leftServoHome 0


// rightServo postion
#define rightServoMin 120
#define rightServoMax 180
#define rightServoHome 120

// ==============================================================




/* Create an instance of the library */
HCPCA9685 HCPCA9685(I2CAdd);


void setup() {
  /* Initialise the library and set it to 'servo mode' */ 
  HCPCA9685.Init(SERVO_MODE);

  /* Wake the device up */
  HCPCA9685.Sleep(false);
}


void loop() {
  
  int 
    minn = 120,
    maxx = 180;

  for(int pos = minn; pos <= maxx; pos++) {
    // moveServo(rightServo, pos);
    moveServo(rightServo, 120);
    delay(15); 
  }

  for(int pos = maxx; pos >= minn; pos--) {
    // moveServo(rightServo, pos);
    delay(15);
  }


}

//  // Map the sensor value from the range 0-1023 to the range 0-255
//   int mappedValue = map(sensorValue, 0, 1023, 0, 255);

void moveServo(int whichServo, int servoAngle) {
  // convert value servoAngle from 0 - 180, 10 - 460
  // age = 17;
  // age = age + 1;
  // age += 1;
  // age++;
  servoAngle = map(servoAngle, 0, 180, 10, 460);
  HCPCA9685.Servo(whichServo, servoAngle);
}

#endif


