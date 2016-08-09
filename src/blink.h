int pinLed = 13;

void blink () {
    digitalWrite(pinLed, HIGH);
    delay(1000);
    digitalWrite(pinLed, HIGH);
    delay(1000);
}