// section 1: initialization of global constructs

// variables are containers for values or data
// we have int, float, double, long, short, byte, String, char, etc

// byte is a 7 bit positive integer data type,  2^7 = 256 ==> range of 0 - 255
// byte ledPin = 13;
// byte led_pin = 13;
// since our ledPin is a constant
const byte ledPin = 13, firstDelay = 200;


void setup() {
  // section 2 : some other types of initializations(things that runs once)
  // we need to set the pinMode of a digital component, before we can use it
  // formula pinMode(pinNumber, signalType); i.e OUTPUT OR INPUT
  pinMode(ledPin, OUTPUT);
  // WE USE digitalWrite to control it
  digitalWrite(ledPin, HIGH); //lawalHamzat camelCase
  delay(3000);// the default unit of delay is milliseconds
  digitalWrite(ledPin, LOW);
  delay(firstDelay);
}

void loop() {
  const byte blinkDelay = 250;
  // section 3: your main app(i.e things you want to run CONTINUOUSLY)
  digitalWrite(ledPin, HIGH);//TURN ON THE LED
  delay(blinkDelay);//wait 0.5 seconds for us to see it on
  digitalWrite(ledPin, LOW); // turn it off
  delay(blinkDelay);
}

