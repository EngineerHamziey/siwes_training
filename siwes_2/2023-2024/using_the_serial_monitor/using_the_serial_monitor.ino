bool isMuideenHere = true;
bool have_i_eaten = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);//baud rate
}

/*
if(condition){
  // code to run when true
}else {
  //code to run when false
}
*/
void loop() {
  if(isMuideenHere == true) {
    Serial.println("Engineer Oga Boda uncle Muideen is here");
  }else {
    Serial.println("Engineer Oga Boda uncle Muideen is  NOT here");
  }
}
