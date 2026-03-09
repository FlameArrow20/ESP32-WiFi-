#include <WiFi.h>

const char* ssid = "your_ssid"; //Change this according to your own ssid
const char* pass = "your_password"; //Change this according to your own password

void startWifi(){

  int counter = 0;

  WiFi.begin(ssid, pass);

  if (WiFi.status() != WL_CONNECTED && counter != 20){

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
