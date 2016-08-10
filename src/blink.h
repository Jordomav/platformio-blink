extern int pinLed;

void blink () {
    digitalWrite(pinLed, HIGH);
    delay(1000);
    digitalWrite(pinLed, LOW);
    delay(1000);
}