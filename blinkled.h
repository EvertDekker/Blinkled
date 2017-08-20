/*
###############################################################################
#
# Leb blink library, blinks LEDx for a short or long periode
# Use for the esp8266 for debug purpose. For example short blink is OK, long blink is error
#
# My first Arduino lib. ;-)
# EvertDekker.Com 2017
#
###############################################################################
*/

#ifndef BLINKLED_H_
#define BLINKLED_H_

#include <Arduino.h>
#include "blinkled.h"


class Blink{
  public:
    Blink();
    void init(int ledoutput);
    void blinklong(int blinks);
    void blinkshort(int blinks);

  private:
    int _ledoutput;

};






#endif //BLINKLED_H_
