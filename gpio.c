/* -*- coding: utf-8 -*- */
#include "gpio.h"
#include <stdio.h>
#include <wiringPi.h>

void setup(void) {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinR1, OUTPUT);
  pinMode(pinR2, OUTPUT);
  pinMode(pinG1, OUTPUT);
  pinMode(pinG2, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinB2, OUTPUT);
  pinMode(pinClock, OUTPUT);
  pinMode(pinOE, OUTPUT);
  pinMode(pinStrobe, OUTPUT);

  printf("setup done\n");
}

void allPinLow(void){
  digitalWrite(pinA, 0);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 0);
  digitalWrite(pinD, 0);
  digitalWrite(pinR1, 0);
  digitalWrite(pinR2, 0);
  digitalWrite(pinG1, 0);
  digitalWrite(pinG2, 0);
  digitalWrite(pinB1, 0);
  digitalWrite(pinB2, 0);
  digitalWrite(pinClock, 0);
  digitalWrite(pinOE, 0);
  digitalWrite(pinStrobe, 0);

  printf("all pin low\n");
}
