#include <Arduino.h>

#define IRlineFront A15 //...IRline PIN
#define IRlineRight A14 //...IRline PIN
#define IRlineLeft A12  //...IRline PIN
#define IRlineBack A13  //...IRline PIN



void setup() {
  Serial.begin(9600);   // put your setup code here, to run once:
}

void loop() {
 Serial.println(analogRead(A12));
}