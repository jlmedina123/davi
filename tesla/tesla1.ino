/*
    https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
 */ 

// Motor connections
int enA = 9;
int in1 = 4;
int in2 = 5;
int in3 = 6;
int in4 = 7;
int enB = 10;

int blanco = 12;
int rojo = 11;

void setup() {
    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT); 
    pinMode(in2, OUTPUT); 

    pinMode(enB, OUTPUT);
    pinMode(in3, OUTPUT); 
    pinMode(in4, OUTPUT);  

    analogWrite(enA, 100); // Send PWM signal to L298N Enable pin 0-255
    analogWrite(enB, 100); // Send PWM signal to L298N Enable pin 0-255

    pinMode(rojo, OUTPUT);
    pinMode(blanco, OUTPUT);
  
    pinMode(LED_BUILTIN, OUTPUT); // 13
    digitalWrite(LED_BUILTIN, HIGH);
}

void delante(int motor) {
    if (motor == 0) {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
    } else {
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    digitalWrite(blanco, LOW);
    digitalWrite(rojo, HIGH);
}

void detras(int motor) {
    if (motor == 0) {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
    } else {
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
    digitalWrite(blanco, HIGH);
    digitalWrite(rojo, LOW);
}


void loop() {
    
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH); 
    delante(0);
    delante(1);

    delay(3000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH); 
    detras(0);
    detras(1);

    delay(3000);

}

