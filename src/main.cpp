#include <Arduino.h>
#include <blink.h>

// int pinLed = 13
int incomingByte;

void setup () {

    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
    Serial.println('Logging to Serial');
}

void loop () {
    
    blink();

    if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("! ");
    Serial.write(incomingByte);
  }
}