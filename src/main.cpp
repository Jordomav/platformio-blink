#include <Arduino.h>
#include <blink.h>
//int incomingByte;

int pinLed = 13;

void setup () {

    pinMode(pinLed, OUTPUT);
}

void loop () {

    blink();

//    digitalWrite(pinLed, HIGH);
//    delay(1000);
//    digitalWrite(pinLed, LOW);
//    delay(1000);
}