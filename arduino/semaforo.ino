#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
#define GREEN_PIN 10
#define RED_PIN 9
#define YELLOW_PIN 8
SR04 mysr04 = SR04(ECHO_PIN,TRIG_PIN);

void setup() {
  // set up pins for LEDs
  pinMode(GREEN_PIN , OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  // initial LEDs
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, LOW);
}

void loop() {
  long dist;
  // check if person detected
  dist = mysr04.Distance();
  if (dist <= 5) {
    // turn on yellow
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(RED_PIN, LOW);
    digitalWrite(YELLOW_PIN, HIGH);
    delay(3000);
    // turn on red
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(YELLOW_PIN, LOW);
    delay(10000);
    // turn on green
    digitalWrite(RED_PIN, LOW);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(GREEN_PIN, HIGH);
  }
  delay(1000);
}

