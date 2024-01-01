

//Add software serial library so that you can add custom UART, tx, rx
#include <SoftwareSerial.h>
const int btTx = 2, btRx = 3, servoDelay = 10;

void beginTheSerialMonitor() {
  Serial.begin(115200);
}


SoftwareSerial btModule(btTx, btRx);

void setBTBaudRate() {
  btModule.begin(9600);
}

#if 0
//back tires
const int
  back_rightMotorForward = 10,
  back_rightMotorBackward = 11,
  back_leftMotorForward = 13,
  back_leftMotorBackward = 12;


//front tires
const int
  front_rightMotorForward = 8,
  front_rightMotorBackward = 7,
  front_leftMotorForward = 1,
  front_leftMotorBackward = 0;


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


//Add software serial library so that you can add custom UART, tx, rx
#include <SoftwareSerial.h>
const int btTx = 2, btRx = 3;

SoftwareSerial btModule(btTx, btRx);

void setPinMode() {
  //tell arduino that these pins are OUTPUT
  // for backward motors
  pinMode(back_rightMotorForward, OUTPUT);
  pinMode(back_rightMotorBackward, OUTPUT);
  pinMode(back_leftMotorForward, OUTPUT);
  pinMode(back_leftMotorBackward, OUTPUT);

  //for forward motors
  pinMode(front_rightMotorForward, OUTPUT);
  pinMode(front_rightMotorBackward, OUTPUT);
  pinMode(front_leftMotorForward, OUTPUT);
  pinMode(front_leftMotorBackward, OUTPUT);
}

void goForward() {  //motor right and left
  //right wheel, go forward
  digitalWrite(front_rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(front_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, go forward
  digitalWrite(front_leftMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(front_leftMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0

  
  //right wheel, go forward
  digitalWrite(back_rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(back_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, go forward
  digitalWrite(back_leftMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(back_leftMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
}

void goBackward() {  //motor right and left
  //right wheel, go BACKWARD
  digitalWrite(front_rightMotorForward, LOW);
  digitalWrite(front_rightMotorBackward, HIGH);
  //left wheel, go BACKWARD
  digitalWrite(front_leftMotorForward, LOW);
  digitalWrite(front_leftMotorBackward, HIGH);

  
  //right wheel, go BACKWARD
  digitalWrite(back_rightMotorForward, LOW);
  digitalWrite(back_rightMotorBackward, HIGH);
  //left wheel, go BACKWARD
  digitalWrite(back_leftMotorForward, LOW);
  digitalWrite(back_leftMotorBackward, HIGH);
}

void goLeft() {  //RIGHT == FORWARD, LEFT Stop
  //right wheel, go forward
  digitalWrite(front_rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(front_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(front_leftMotorForward, LOW);
  digitalWrite(front_leftMotorBackward, LOW);

  
  //right wheel, go forward
  digitalWrite(back_rightMotorForward, HIGH);  //GIVE THIS PIN +5V
  digitalWrite(back_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(back_leftMotorForward, LOW);
  digitalWrite(back_leftMotorBackward, LOW);
}

void goRight() {  //RIGHT == stop, LEFT = forward
  //right wheel, go forward
  digitalWrite(front_rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(front_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(front_leftMotorForward, HIGH);
  digitalWrite(front_leftMotorBackward, LOW);

  
  //right wheel, go forward
  digitalWrite(back_rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(back_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(back_leftMotorForward, HIGH);
  digitalWrite(back_leftMotorBackward, LOW);
}

void stopMoving() {  //RIGHT == stop, LEFT = forward
  //right wheel, go forward
  digitalWrite(front_rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(front_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(front_leftMotorForward, LOW);
  digitalWrite(front_leftMotorBackward, LOW);

  
  //right wheel, go forward
  digitalWrite(back_rightMotorForward, LOW);   //GIVE THIS PIN +5V
  digitalWrite(back_rightMotorBackward, LOW);  //GIVE THIS PIN 0(GND) 0
  //left wheel, stay still
  digitalWrite(back_leftMotorForward, LOW);
  digitalWrite(back_leftMotorBackward, LOW);
}



void setup() {
  // INSTructions to execute once
  setPinMode();
  setBTBaudRate();//communication speed between arduino and btModule
  stopMoving();
}

// char remoteValue = 
void loop() {
  if(btModule.available()) {
    char receivedSignal = btModule.read();
    switch(receivedSignal) {
      case 'F':
        goForward();
        break;
      case 'B':
        goBackward();
        break;
      case 'L':
        goLeft();
        break;
      case 'R':
        goRight();
        break;
      default:
        stopMoving();
        break;
    }
  }
}
#endif





