
void setSerialBaudRate() {
  Serial.begin(115200);
}

#if 1
//jdkslwzqylxbp
#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
#endif
#include <WiFiClientSecure.h> //library used for wifi internet connection
#include <UniversalTelegramBot.h>   // Universal Telegram Bot Library used for connecting to the telegram bot
#include <ArduinoJson.h>  //used for API sending messages to the bot

// Replace with your network credentials
const char* ssid = "kamasutra";//ssid is the wifi/hotspot user name meaning "service set identifier"
const char* password = "jdkslwzqylxbp";//wifi password

// Initialize Telegram BOT by entering the bot token given when created your bot
#define BOTtoken "6662498753:AAGf6vIspmJYySvZ7qmZdyIUedM62JuyYBc"  // the Bot Token (Gotten from Botfather)

// Use @myidbot to find out the chat ID of an individual or a group
#define CHAT_ID "1389612925"

#ifdef ESP8266
  X509List cert(TELEGRAM_CERTIFICATE_ROOT);
#endif

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);//connect to telegramBot

// Checks for new messages every 1 second.
int botRequestDelay = 1000;
unsigned long lastTimeBotRan;//

const int 
  ACpin = 2,
  WMpin = 3,
  PSpin = 4,
  TVpin = 5;
  
void setPinMode() {
  for(int pin = 2; pin <= 5; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

int 
  ACstate = false,//all should be off by default
  WMstate = false,//all should be off by default
  PSstate = false,//all should be off by default
  TVstate = false;//all should be off by default
  
  

// Handle what happens when new messages are received by the bot
void handleNewMessages(int numNewMessages) {
  Serial.println("handleNewMessages");
  Serial.println(String(numNewMessages));

  for (int i=0; i<numNewMessages; i++) {
    // confirm the Chat id of the requester
    String chat_id = String(bot.messages[i].chat_id);
    if (chat_id != CHAT_ID){//if the chat ID is not the chat ID initialized
      bot.sendMessage(chat_id, "Excuse me sir/ma, you're unauthorized", "");
      continue;
    }
    
    // Print the received message to the serial
    String text = bot.messages[i].text;
    Serial.println(text);

    String from_name = bot.messages[i].from_name;

    if(text == "/start") {
      String welcome = "Welcome, to HAMZATRONICS TECHNOLOGIES Mr/Mrs " + from_name + ".\n";
      welcome += "Use the following commands to control your outputs.\n\n";
      welcome += "/TV to ON/OFF the Television \n";
      welcome += "/PS to ON/OFF the Game \n";
      welcome += "/AC to ON/OFF Air Conditioner \n";
      welcome += "/WM to turn Washing Machine \n";
      welcome += "/state to know which of the Appliances is on \n";
      bot.sendMessage(chat_id, welcome, "");
    }else if(text == "/TV") {
      digitalWrite(TVpin, !TVstate);
      String reply = (TVstate) ? "The Television is now ON" : "The Television is now OFF";
      bot.sendMessage(chat_id, reply, "");
    }else if(text == "/PS") {
      digitalWrite(PSpin, !PSstate);
      String reply = (PSstate) ? "The playStation is now ON" : "The playStation is now OFF";
      bot.sendMessage(chat_id, reply, "");
    }else if(text == "/AC") {
      digitalWrite(ACpin, !ACstate);
      String reply = (ACstate) ? "The Air Conditioner is now ON" : "The Air Conditioner is now OFF";
      bot.sendMessage(chat_id, reply, "");
    }else if(text == "/WM") {
      digitalWrite(WMpin, !WMstate);
      String reply = (WMstate) ? "The Washing Machine is now ON" : "The Washing Machine is now OFF";
      bot.sendMessage(chat_id, reply, "");
    }else if(text == "/state") {
      String stateMsg = "HERE ARE THE STATE OF THE APPLIANCES: \n";
      stateMsg += (false) ? "Television is ON\n" : "Television is OFF\n";
      stateMsg += (PSstate) ? "The playStation is now ON\n" : "The playStation is now OFF\n";
      stateMsg += (ACstate) ? "The Air Conditioner is now ON\n" : "The Air Conditioner is nowOFF\n";
      stateMsg += (WMstate) ? "Washing Machine is now ON" : "Washing Machine is now OFF";
      bot.sendMessage(chat_id, stateMsg, "");
    }else {
      String welcome = "\"";
      welcome += text;
      welcome += "\"";
      welcome += " is an incorrect command.\n";
      welcome += "Use the following commands to control your outputs.\n\n";
      welcome += "/TV to ON/OFF the Television \n";
      welcome += "/PS to ON/OFF the Game \n";
      welcome += "/AC to ON/OFF Air Conditioner \n";
      welcome += "/WM to turn GPIO OFF \n";
      welcome += "/state to know which of the Appliances is on \n";
      bot.sendMessage(chat_id, welcome, "");
    }
  }
}


void setup() {
  setPinMode();
  setSerialBaudRate();

  #ifdef ESP8266
    configTime(0, 0, "pool.ntp.org");      // get UTC time via NTP
    client.setTrustAnchors(&cert); // Add root certificate for api.telegram.org
  #endif

  
  // Connect to Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  #ifdef ESP32
    client.setCACert(TELEGRAM_CERTIFICATE_ROOT); // Add root certificate for api.telegram.org
  #endif
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  
  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());
}

void loop() {
  if (millis() > lastTimeBotRan + botRequestDelay)  {//if new messages entered
    int numNewMessages = bot.getUpdates(bot.last_message_received + 1);//save the number in variable/index numNewMessages

    //respond to each messages
    while(numNewMessages) {
      Serial.println("got response");//
      handleNewMessages(numNewMessages);
      numNewMessages = bot.getUpdates(bot.last_message_received + 1);//check for new messages again
    }
    lastTimeBotRan = millis();
  }
}

#endif