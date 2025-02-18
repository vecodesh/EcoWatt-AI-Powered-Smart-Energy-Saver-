#include "WiFi.h"

void setup() {
    Serial.begin(115200);
    Serial.println("Scanning WiFi networks...");
    int numNetworks = WiFi.scanNetworks();
    Serial.println("Networks found:");
    for (int i = 0; i < numNetworks; i++) {
        Serial.println(WiFi.SSID(i));
    }
}

void loop() {
}
