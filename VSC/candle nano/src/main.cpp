#include <Arduino.h>



//--------------//
int candle = 300;
//--------------//
 
void display()
{
  Serial.print(analogRead(A0));
  Serial.print("   ");
  Serial.print(analogRead(A1));
  Serial.print("   ");
  Serial.print(analogRead(A2));
  Serial.print("   ");
  Serial.print(analogRead(A3)); 
  Serial.print("   ");
  Serial.print(analogRead(A4));
  Serial.print("   ");
  Serial.print(analogRead(A5));
  Serial.print("   ");
  Serial.print(analogRead(A6));
  Serial.print("   ");
  Serial.print(analogRead(A7));
  Serial.println();
}

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A6, INPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  if ((analogRead(A0) > candle) or
      (analogRead(A1) > candle) or
      (analogRead(A2) > candle) or
      (analogRead(A3) > candle) or
      (analogRead(A4) > candle) or
      (analogRead(A5) > candle) or
      (analogRead(A6) > candle) or
      (analogRead(A7) > candle))
  {
    digitalWrite(13, LOW);
  }
  else
  {
    digitalWrite(13, HIGH);
  }
  display();
}