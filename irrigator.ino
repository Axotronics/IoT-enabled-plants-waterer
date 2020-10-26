#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

#define relay_pin D7
#define Soil_pin D0
#define ssid "myssid"
#define password "mypassword"
String  event = "my_event";
String ifttt_api_key  = "apikey";

void setup() {
Serial.begin(115200);
pinMode(Soil_pin, INPUT);
pinMode(relay_pin, OUTPUT);
WiFi.mode(WIFI_STA);
WiFi.disconnect();

Serial.print("Connecting to");
Serial.print(ssid);
while(WiFi.status() != WL_CONNECTED) {
Serial.print(".");

}
Serial.println("Connected");

}
void loop() {
int moisture;
moisture = digitalRead(Soil_pin);

if (moisture == HIGH) {
digitalWrite(relay_pin, HIGH);
HTTPClient http;
http.begin("http://maker.ifttt.com/trigger/" + event + "/with/key/" + ifttt_api_key  );
http.GET();
http.end();
Serial.println("Done!");


}
else {
digitalWrite(relay_pin, LOW);
}

}
