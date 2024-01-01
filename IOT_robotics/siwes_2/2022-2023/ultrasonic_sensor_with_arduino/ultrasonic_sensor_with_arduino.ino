//const byte triggerPin = 4;//the pin we connect trigger to on arduino
#define triggerPin 3//the #define does not take up memory
#define echoPin 5

int 
  totalTime,
  distanceMeters,
  distanceCentiMeters;

void setup() {
  Serial.begin(9600);//
  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);
}

void loop() {
  //TO PREVENT errors, untrigger the ultrasonic module
  digitalWrite(triggerPin, LOW);
//  delay(1);
  delayMicroseconds(2);
  //Trigger the ultrasonic module by giving it logic
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);//wait for 10...
  digitalWrite(triggerPin, LOW);
  totalTime = pulseIn(echoPin, HIGH);
  distanceMeters = (1.7 * totalTime) / 10000;
  distanceCentiMeters = (0.017 * totalTime);
  Serial.println(
    "distance = " +
    String(distanceMeters) + 
    "m\t" +
    String(distanceCentiMeters) + 
    "cm"
    );
  delay(1000);
}
