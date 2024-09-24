// section 1: initialization of global constructs

void setup() {
  // section 2 : some other types of initializations(things that runs once)
  // we need to set the pinMode of a digital component, before we can use it
  // formula pinMode(pinNumber, signalType); i.e OUTPUT OR INPUT
  pinMode(13, OUTPUT);
  // WE USE digitalWrite to control it
  digitalWrite(13, HIGH); //lawalHamzat camelCase
  delay(2000);// the default unit of delay is milliseconds
  digitalWrite(13, LOW);
  delay(3000);
}

void loop() {
  // section 3: your main app(i.e things you want to run CONTINUOUSLY)
  digitalWrite(13, HIGH);//TURN ON THE LED
  delay(500);//wait 0.5 seconds for us to see it on
  digitalWrite(13, LOW); // turn it off
  delay(500);
}

