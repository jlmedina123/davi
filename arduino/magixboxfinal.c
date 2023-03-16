

#include <Servo.h>
#include "SR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 11
#define SERVO_PIN 10
#define RED_PIN 9
#define GREEN_PIN 7
#define BUTTON_PIN 8


SR04 mysr04 = SR04(ECHO_PIN,TRIG_PIN);

Servo myservo; 
int pos = 0;

void openbox() {
  for (pos = 0; pos <= 90; pos++) { 
    myservo.write(pos);             
    delay(100);                       
  }
}

void closebox() {
  for (pos = 90; pos >= 0; pos--) { 
    myservo.write(pos);              
    delay(100);                       
  }
}

void setup() {
   Serial.begin(9600);
   myservo.attach(SERVO_PIN);
   pinMode(BUTTON_PIN, INPUT_PULLUP); 
   pinMode(GREEN_PIN, OUTPUT);  
   pinMode(RED_PIN, OUTPUT); 

   digitalWrite(RED_PIN, HIGH);
   digitalWrite(GREEN_PIN, HIGH);
   delay(2000);
   digitalWrite(GREEN_PIN, LOW);
}

void loop() {
  long dist;
  int button;
  
  dist = mysr04.Distance();
  Serial.print(dist);
  Serial.println("cm");

  button = digitalRead(BUTTON_PIN);

  if (dist <= 5 || button == LOW) {
    digitalWrite(GREEN_PIN, HIGH);
    digitalWrite(RED_PIN, LOW);
    Serial.println("opening box!");
    openbox();
    delay(10000);
    
    Serial.println("closing box");
    closebox();
  }
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(1000);
}

