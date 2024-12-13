/*
#include <Arduino.h>
int ledPin = 23;

void setup() {
  ledcAttachPin(ledPin, 0);
  ledcSetup(0, 5000, 8);
}

void loop(){
  for (int i = 0; i <= 255; i++) {
    ledcWrite(0, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    ledcWrite(0, i);
    delay(10);
  }
}*/