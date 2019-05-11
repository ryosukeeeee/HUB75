/* -*- coding: utf-8 -*- */
#ifndef GPIO
#define GPIO

#define pinA 22
#define pinB 23
#define pinC 24
#define pinD 25
#define pinR1 11
#define pinR2 8
#define pinG1 27
#define pinG2 9
#define pinB1 7
#define pinB2 10
#define pinClock 17
#define pinOE 18
#define pinStrobe 4

#define addressA 0b0001
#define addressB 0b0010
#define addressC 0b0100
#define addressD 0b1000

void setup(void);

void allPinLow(void);

int displayStrings(unsigned char *str, int width);

#endif
