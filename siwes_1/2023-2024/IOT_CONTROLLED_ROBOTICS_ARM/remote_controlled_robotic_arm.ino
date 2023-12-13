#if 1


void setup() {
  /* Initialise the library and set it to 'servo mode' */
  HCPCA9685.Init(SERVO_MODE);
  setBTBaudRate();
  /* Wake the device up */
  HCPCA9685.Sleep(false);

  moveServoToHomePosition();
  beginTheSerialMonitor();
}


void loop() {
  delay(50);
}


void decrementRightServo() {
  Serial.println("\ncurrent pos: " + String(currentRightServoPosition));
  if (currentRightServoPosition != 0) {
    currentRightServoPosition--;
  }
  Serial.println("pos after Validation: " + String(currentRightServoPosition));

  moveServo(rightServo, currentRightServoPosition);
  delay(servoDelay);
}

void incrementRightServo() {
  currentRightServoPosition++;
  currentRightServoPosition = (currentRightServoPosition >= RightServoMax) ? rightServoMax : currentRightServoPosition;

  moveServo(rightServo, currentRightServoPosition);
  delay(servoDelay);
}


/*

base servo:
   +++ = 'r'
   --- = 'l'

clamp servo:
   open = 'e'
   close = 'f'

right servo:
   +++ = 'a'
   --- = 'b'

left servo:
   +++ = 'h'
   --- = 'j'
*/

void moveServo(int whichServo, int servoAngle) {
  servoAngle = map(servoAngle, 0, 180, 10, 460);
  HCPCA9685.Servo(whichServo, servoAngle);
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
  if (currentBaseServoPosition != 0) {
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



#endif