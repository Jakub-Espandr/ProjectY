#include "candle_1_nano.h"
#include <Arduino.h>

int candle = 850;

void setup() { 

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);


  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);



}

void loop() {

  if ((analogRead(A0) > candle))
  {
    digitalWrite(9, LOW);
  }
  else
  {
    digitalWrite(9, HIGH);
  }





  if ((analogRead(A1) > candle))
  {
    digitalWrite(8, LOW);
  }
  else
  {
    digitalWrite(8, HIGH);
  }





  if ((analogRead(A2) > candle))
  {
    digitalWrite(7, LOW);
  }
  else
  {
    digitalWrite(7, HIGH);
  }




  if ((analogRead(A3) > candle))
  {
    digitalWrite(6, LOW);
  }
  else
  {
    digitalWrite(6, HIGH);
  }




  if ((analogRead(A4) > candle))
  {
    digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(5, HIGH);
  }




  if ((analogRead(A5) > candle))
  {
    digitalWrite(4, LOW);
  }
  else
  {
    digitalWrite(4, HIGH);
  }




  if ((analogRead(A6) > candle))
  {
    digitalWrite(3, LOW);
  }
  else
  {
    digitalWrite(3, HIGH);
  }




  if ((analogRead(A7) > candle))
  {
    digitalWrite(2, LOW);
  }
  else
  {
    digitalWrite(2, HIGH);
  }


}
