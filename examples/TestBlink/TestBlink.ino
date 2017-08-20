#include <blinkled.h>

Blink Ledred;
Blink Ledgreen;

#define LED1PIN 13 // Led pin
#define LED2PIN 12 // Led pin

void setup() {
  // put your setup code here, to run once:

Ledred.init(LED1PIN);
Ledgreen.init(LED2PIN);

}

void loop() {
  // put your main code here, to run repeatedly:

Ledred.blinklong(1);
delay(1000);
Ledgreen.blinkshort(3);
delay(1000);
Ledgreen.blinklong(2);
delay(1000);
}
