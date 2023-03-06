#include <Arduino.h>

#define DIR_PIN 5
#define STEP_PIN 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(8, OUTPUT);

    digitalWrite(DIR_PIN, HIGH);
  digitalWrite(0, LOW);
  digitalWrite(8, LOW);
  Serial.println("Init complete.");
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("loop");
  for (int i = 0; i < 3200; i++) {
    // These four lines result in 1 step:
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(50);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(50);
  }

  delay(1000);
}