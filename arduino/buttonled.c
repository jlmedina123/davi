
void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    pinMode(5, INPUT_PULLUP);
    pinMode(7, OUTPUT);
}

void loop() {
  int ret;
  ret = digitalRead(5);
  Serial.println(ret);
  if (ret == 1) {
      digitalWrite(7, 0);
      digitalWrite(13, 1);
  } else {
    digitalWrite(7, 1);
    digitalWrite(13, 0);
  }
  delay(100);
}
