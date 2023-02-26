void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    Serial.println("enter 1 or 0");
}

void loop() {
  char ch;
  int ret;
  ret = Serial.available();
  if (ret > 1) {
      ch = Serial.read();
      if (ch == '1') {
        Serial.println("Voy a encender");
        digitalWrite(13, HIGH);
      }
      else if (ch == '0') {
        Serial.println("Voy a apagar");
        digitalWrite(13, LOW);
      }
  }
}
