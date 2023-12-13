#if 0
// the pins l293d, is connected to and you configure them as OUTPUT
//variable holds a value, but functions holds a set of instructions
const int rightMotorForward = 10;
const int rightMotorBackward = 11;
const int leftMotorForward = 13;
const int leftMotorBackward = 12;

void setPinMode() {
  //tell arduino that these pins are OUTPUT
  pinMode(rightMotorForward, OUTPUT);
  pinMode(rightMotorBackward, OUTPUT);
  pinMode(leftMotorForward, OUTPUT);
  pinMode(leftMotorBackward, OUTPUT);
}

void goForward() { //motor right and left
  //right wheel, go forward  
  digitalWrite(rightMotorForward, HIGH);//GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);//GIVE THIS PIN 0(GND) 0
  
  //left wheel, go forward  
  digitalWrite(leftMotorForward, HIGH);//GIVE THIS PIN +5V
  digitalWrite(leftMotorBackward, LOW);//GIVE THIS PIN 0(GND) 0
}

void goBackward() { //motor right and left
  //right wheel, go BACKWARD  
  digitalWrite(rightMotorForward, LOW);
  digitalWrite(rightMotorBackward, HIGH);
  
  //left wheel, go BACKWARD  
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, HIGH);
}

void goLeft() { //RIGHT == FORWARD, LEFT Stop
  //right wheel, go forward  
  digitalWrite(rightMotorForward, HIGH);//GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);//GIVE THIS PIN 0(GND) 0
  
  //left wheel, stay still 
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, LOW);
}

void goRight() { //RIGHT == stop, LEFT = forward
  //right wheel, go forward  
  digitalWrite(rightMotorForward, LOW);//GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);//GIVE THIS PIN 0(GND) 0
  
  //left wheel, stay still 
  digitalWrite(leftMotorForward, HIGH);
  digitalWrite(leftMotorBackward, LOW);
}

void stopMoving() { //RIGHT == stop, LEFT = forward
  //right wheel, go forward  
  digitalWrite(rightMotorForward, LOW);//GIVE THIS PIN +5V
  digitalWrite(rightMotorBackward, LOW);//GIVE THIS PIN 0(GND) 0
  
  //left wheel, stay still 
  digitalWrite(leftMotorForward, LOW);
  digitalWrite(leftMotorBackward, LOW);
}



void setup() {
  // INSTructions to execute once
  setPinMode();  
  
}

void loop() {
  //GO FORWARD
  goForward();
  delay(3000);//delay has default unit of milliseconds
  //GO BACKWARD
  goBackward();
  delay(3000);
  //TURN RIGHT
  goRight();
  delay(3000);
  //TURN LEFT
  goLeft();
  delay(3000);
  //STOP
  stopMoving();
}

#endif