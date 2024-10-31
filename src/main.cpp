#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world!");
  delay(1000);
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
}

// put function definitions here:
