const int
  delayRed = 3000,
  delayYellow = 3000,
  delayGreen = 10000;

// led pin number for first lane 
const byte
  greenLed_1 = 2,
  yellowLed_1 = 3,
  redLed_1 = 4;
  
// led pin number for 2nd lane 
const byte 
  greenLed_2 = 5,
  yellowLed_2 = 6,
  redLed_2 = 7;
  
// led pin number for 3rd lane 
const byte 
  greenLed_3 = 8,
  yellowLed_3 = 9,
  redLed_3 = 10;
  
// led pin number for 4th lane 
const byte 
  greenLed_4 = 11,
  yellowLed_4 = 12,
  redLed_4 = 13;

//int firstLane = [2, 3, 4];//array
void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  for (byte pin = 2; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }
  
  // turn on all reds
  digitalWrite(redLed_1, HIGH);
  digitalWrite(redLed_2, HIGH);
  digitalWrite(redLed_3, HIGH);
  digitalWrite(redLed_4, HIGH);
  delay(delayRed);
  //GET out of the void setup()
}

void loop() {
  //DO THE FIRST LANE
  digitalWrite(redLed_1, LOW);
  digitalWrite(yellowLed_1, HIGH);
  delay(delayYellow);
  digitalWrite(yellowLed_1, LOW);
  digitalWrite(greenLed_1, HIGH);
  delay(delayGreen);
  digitalWrite(greenLed_1, LOW);
  digitalWrite(redLed_1, HIGH);
  //first lane ends

  //DO THE 2nd LANE
  digitalWrite(redLed_2, LOW);
  digitalWrite(yellowLed_2, HIGH);
  delay(delayYellow);
  digitalWrite(yellowLed_2, LOW);
  digitalWrite(greenLed_2, HIGH);
  delay(delayGreen);
  digitalWrite(greenLed_2, LOW);
  digitalWrite(redLed_2, HIGH);
  //2nd lane ends

  //DO THE 3rd LANE
  digitalWrite(redLed_3, LOW);
  digitalWrite(yellowLed_3, HIGH);
  delay(delayYellow);
  digitalWrite(yellowLed_3, LOW);
  digitalWrite(greenLed_3, HIGH);
  delay(delayGreen);
  digitalWrite(greenLed_3, LOW);
  digitalWrite(redLed_3, HIGH);
  //3rd lane ends

  //DO THE 4th LANE
  digitalWrite(redLed_4, LOW);
  digitalWrite(yellowLed_4, HIGH);
  delay(delayYellow);
  digitalWrite(yellowLed_4, LOW);
  digitalWrite(greenLed_4, HIGH);
  delay(delayGreen);
  digitalWrite(greenLed_4, LOW);
  digitalWrite(redLed_4, HIGH);
  //4th lane ends
}

//
