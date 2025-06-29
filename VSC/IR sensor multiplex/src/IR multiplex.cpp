#include <Arduino.h>

/*
  ch0 0000
  ch1 1000
  ch2 0100
  ch3 1100
  ch4 0010
  ch5 1010
  ch6 0110
*/

#define s0 1
#define s1 0
#define s2 3
#define s3 2

void select0() {
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
}

void select1() {
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
}


void setup() {
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
}

void loop() { 
  select0();
  delayMicroseconds(10);
  select1();
  delayMicroseconds(10);
}