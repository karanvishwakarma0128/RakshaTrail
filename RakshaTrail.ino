#include <WiFi.h>

#define LED_PIN 2
#define BUZZER_PIN 15

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.println("RakshaTrail System Initializing...");
}

void loop() {

  // Future Integration:
  // GPS Module
  // GSM Module
  // Camera Module
  // Obstacle Detection
  // AI Processing

  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}