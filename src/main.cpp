#include <Arduino.h>
#include <blink.h>

// int pinLed = 13

void setup () {

    pinMode(pinLed, OUTPUT);
}

void loop () {
    blink();
}