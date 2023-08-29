/*
    https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
 */ 

#include "SR04.h"

// Motor connections
int enA = 9;
int in1 = 4;
int in2 = 5;
int in3 = 6;
int in4 = 7;
int enB = 10;

int blanco = 12;
int rojo = 11;

#define ECHO_PIN 3
#define TRIG_PIN 2
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);


void setup() {
    Serial.begin(9600);

    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT); 
    pinMode(in2, OUTPUT); 

    pinMode(enB, OUTPUT);
    pinMode(in3, OUTPUT); 
    pinMode(in4, OUTPUT);  

    analogWrite(enA, 85); // Send PWM signal to L298N Enable pin 0-255
    analogWrite(enB, 85); // Send PWM signal to L298N Enable pin 0-255

    pinMode(rojo, OUTPUT);
    pinMode(blanco, OUTPUT);
  
    pinMode(LED_BUILTIN, OUTPUT); // 13
    digitalWrite(LED_BUILTIN, HIGH);
}

void delante(void) {
    // motor 0
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    // motor 1
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    // luces
    digitalWrite(blanco, LOW);
    digitalWrite(rojo, HIGH);
}

void detras(void) {
    // motor 0
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    // motor 1
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    // luces
    digitalWrite(blanco, HIGH);
    digitalWrite(rojo, LOW);
}

int mechoco(void) {
    long a = sr04.Distance();
    if (a < 7) {
      Serial.print(a);
      Serial.println("cm");
      return 1;
    } else {
      return 0;
    }
}
void loop() {
    unsigned int cont = 0;
    int r = 0;
    long a = sr04.Distance();
    Serial.print(a);
    Serial.println("cm");
 
    delante();
    
    while(cont < 30) {
        r = mechoco();
        if (r==1) {
            detras();
            digitalWrite(LED_BUILTIN, HIGH);
            delay(300);
            digitalWrite(LED_BUILTIN, HIGH);
            cont = 30;
        }
        delay(100);
        cont++;
    }

    detras();

    delay(3000);

}

