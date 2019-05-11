/* -*- coding: utf-8 -*- */
#include <wiringPi.h>
#include <stdio.h>
#include "gpio.h"

#define DISPLAY_WIDTH 64
#define LOOPSIZE 10000000

int main(void) {
  int i, j, address;

  if(wiringPiSetupGpio() == -1) return 1;
  setup();
  allPinLow();

  for (j = 0; j < LOOPSIZE; j++) {
    address = j % 16;

    for (i = 0; i < DISPLAY_WIDTH; i++) {
      digitalWrite(pinR1, 1);
      digitalWrite(pinG1, 1);
      digitalWrite(pinB1, 1);
      digitalWrite(pinR2, 1);
      digitalWrite(pinG2, 1);
      digitalWrite(pinB2, 1);

      // Clock High
      digitalWrite(pinClock, 1);
      // Clock Low
      digitalWrite(pinClock, 0);
    }
    digitalWrite(pinOE, 1);
    
    // address
    digitalWrite(pinA, address & addressA);
    digitalWrite(pinB, address & addressB);
    digitalWrite(pinC, address & addressC);
    digitalWrite(pinD, address & addressD);

    // Strobe High
    digitalWrite(pinStrobe, 1);

    // Strobe Low
    digitalWrite(pinStrobe, 0);

    // OE Low
    digitalWrite(pinOE, 0);
  }

  allPinLow();
  return 0;
}
