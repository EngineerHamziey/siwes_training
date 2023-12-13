
  /*  if (btModule.available()) {
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
  }*/







#if 0

void openClampServo() {
  currentClampServoPosition--;
  currentClampServoPosition = (currentClampServoPosition <= clampServoMin) ? clampServoMin : currentClampServoPosition;

  moveServo(clampServo, currentClampServoPosition);
  delay(10);
}

void closeClampServo() {
  currentClampServoPosition++;
  currentClampServoPosition = (currentClampServoPosition >= clampServoMax) ? clampServoMax : currentClampServoPosition;

  moveServo(clampServo, currentClampServoPosition);
  delay(10);
}


#endif