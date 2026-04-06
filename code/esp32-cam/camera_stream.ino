#include "esp_camera.h"
#include <WiFi.h>

const char* ssid = "ESP32CAM_ROBOT";
const char* password = "12345678";

WiFiServer server(80);

void startCameraServer();

void setup() {
  Serial.begin(115200);

  WiFi.softAP(ssid, password);
  Serial.println("WiFi Started");

  server.begin();
  startCameraServer();
}

void loop() {
}
