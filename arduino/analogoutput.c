void setup() {
    pinMode(3, OUTPUT);
    Serial.begin(9600);
    Serial.println("Enter Volts 0 to 5");
}

void loop() {
     int ret;
     float volts;
      int pwmValue;
     ret = Serial.available();
    if (ret > 0) {
        volts = Serial.parseFloat();
        Serial.println("pin 3 voltios");
        Serial.println(volts);
        pwmValue = volts * 255.0 / 5.0;
        analogWrite(3, pwmValue);
        delay(10000);
    }
}
