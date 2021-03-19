/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "8SP6Th0tyu-MuCdPuqe-dl6Hmy21pFMc";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "bindaktm";
char pass[] = "binda12345";

//int LedPin = 4;
void setup() {
  //pinMode(LedPin, OUTPUT); 
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);// Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  /*digitalWrite(LedPin, LOW);
  Serial.println("Led OFF");
  delay(1000);
  digitalWrite(LedPin, HIGH);
  Serial.println("Led ON");
  delay(1000);*/
  Blynk.run();                    // Wait for two seconds (to demonstrate the active low LED)
}
