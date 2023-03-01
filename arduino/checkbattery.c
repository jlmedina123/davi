
#define GREEN 8
#define RED   9

void setup() {
    Serial.begin(9600);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    int r;
    float v;
    r = analogRead(0);
    v = r / 204.6;
    Serial.print("Pin 0 = ");
    Serial.print(r);
    Serial.print(" Volts = ");
    Serial.println(v);
    if (v > 1.4) {
        digitalWrite(GREEN, HIGH);
        digitalWrite(RED, LOW);
    }else{
      digitalWrite(GREEN, LOW);
      digitalWrite(RED, HIGH);
    }



    delay(1000);
}
