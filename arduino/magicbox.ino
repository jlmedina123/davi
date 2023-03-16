

#include <Servo.h>
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11

SR04 mysr04 = SR04(ECHO_PIN,TRIG_PIN);

Servo myservo; 
int pos = 0;

void openbox() {
  for (pos = 0; pos <= 90; pos++) { 
    myservo.write(pos);              
    delay(50);                       
  }
}

void closebox() {
  for (pos = 90; pos >= 0; pos--) { 
    myservo.write(pos);              
    delay(50);                       
  }
}

void setup() {
   Serial.begin(9600);
   delay(1000);
   myservo.attach(10);
   pinMode(8, INPUT_PULLUP);    
}

void loop() {
  long dist;
  int button;
  
  dist = mysr04.Distance();
  Serial.print(dist);
  Serial.println("cm");

  button = digitalRead(8);

  if (dist <= 5 || button == LOW) {
    Serial.println("opening box!");
    openbox();
    delay(10000);
    Serial.println("closing box");
    closebox();
  }
    delay(1000);
}

