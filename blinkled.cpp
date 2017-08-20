/*
###############################################################################
#
# Temboo Arduino library
#
###############################################################################
*/


#include "blinkled.h"
#include "Arduino.h"

Blink::Blink()
{
}

void Blink::init(int ledoutput)
{
  pinMode(ledoutput, OUTPUT);
  digitalWrite(ledoutput, HIGH);
  _ledoutput =ledoutput;
}

void Blink::blinklong(int blinks){
for (int i=1; i <= blinks; i++){
      digitalWrite(_ledoutput, LOW);
      delay(500);
      digitalWrite(_ledoutput, HIGH);
      delay(500);
 }
}

void Blink::blinkshort(int blinks){
for (int i=1; i <= blinks; i++){
      digitalWrite(_ledoutput, LOW);
      delay(50);
      digitalWrite(_ledoutput, HIGH);
      delay(100);
 }
}