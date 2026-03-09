#include <ArduinoJson.h>
#include <WiFi.h>

int value;
const char* ssid = "PLDTHOMEFIBR77a88";
const char* pass = "PLDTWIFIsmmw9";

void startWifi(){

  int counter;

  WiFi.begin(ssid, pass);

  if (WiFi.status() != WL_CONNECTED && counter != 40){

    Serial.println("Connecting...");
    Serial.println("...");

    delay(3000);
    counter++; //Increment counter value everytime connection fails
    
  }

  Serial.println("Connected!");
  Serial.print("Local IP: ");
  Serial.println(WiFi.localIP());


}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  startWifi();

}

void loop() {
  // put your main code here, to run repeatedly:
  
}
