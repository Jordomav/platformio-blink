#include <Arduino.h>

int pinLed = 13;
void setup () {

    pinMode(pinLed, OUTPUT);
}

void loop () {

    digitalWrite(pinLed, HIGH);
    delay(1000);
    digitalWrite(pinLed, HIGH);

}