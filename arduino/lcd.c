#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // rs, en, d4, d5, d6, d7

void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(12, INPUT_PULLUP);
}

void loop() {
    int b;
    Serial.println("Mirando boton");
    b = digitalRead(12);    
    if (b == LOW) {
        Serial.println("Pulsate el boton!");
        lcd.setCursor(0,0);
        lcd.print("A mi me gusta");
        lcd.setCursor(0, 1);
        lcd.print("hacer arduino");
    } else {
        Serial.println("No pulsaste. Borro pantalla");
        lcd.clear();
    }
    delay(1 * 1000);
}
