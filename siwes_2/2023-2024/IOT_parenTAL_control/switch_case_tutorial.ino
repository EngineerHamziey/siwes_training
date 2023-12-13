#if 0

void setup() {
  setSerialBaudRate();
  
  for(int ourNumber = 1; ourNumber <= 5; ourNumber++) {
    /*
    // using if statement
    if(ourNumber == 1) {
      // do this
      Serial.println("a");
    }else if(ourNumber == 2) {
      // do that
      Serial.println("b");
    }else if(ourNumber == 3) {
      // do that stinky leg
      Serial.println("c");
    }else {
      Serial.println("ourMumber is neither 1, 2, nor 3");
    }
    */
    
    // using switch case
    switch(ourNumber) {
      case 1:
        // do this
        Serial.println("a");
        break;
      case 2:
        // do that
        Serial.println("b");
        break;
      case 3:
        // do that stinky leg
        Serial.println("c");
        break;
      default: 
        Serial.println("ourMumber is neither 1, 2, nor 3");
        break;
    }
    //next line of code
  }
}

void loop() {
  
}

#endif