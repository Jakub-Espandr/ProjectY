#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
pinMode(A6,INPUT);
pinMode(A7,INPUT);
}

void loop() {

  if(digitalRead(A7) == LOW){
    Serial.print(" front ");
  }

  if(digitalRead(A6) == LOW){
    Serial.print(" frontRight ");
  }

  if(digitalRead(A5) == LOW){
    Serial.print(" right ");
  }

  if(digitalRead(A4) == LOW){
    Serial.print(" backRight ");
  }

  if(digitalRead(A3) == LOW){
    Serial.print(" back ");
  }

  if(digitalRead(A0) == LOW){
    Serial.print(" backLeft ");
  }

  if(digitalRead(A1) == LOW){
    Serial.print(" left ");
  }

  if(digitalRead(A2) == LOW){
    Serial.print(" frontLeft ");
  }
  Serial.println();



  /*
   Serial.print("front: ");
   Serial.print(digitalRead(A7));
   Serial.print(" frontRight:  ");
   Serial.print(digitalRead(A6));
   Serial.print(" Right:  ");
   Serial.print(digitalRead(A5));
   Serial.print(" backRight:  ");
   Serial.print(digitalRead(A4));
   Serial.print(" back:  ");
   Serial.print(digitalRead(A3));
   Serial.print(" backLeft:  ");
   Serial.print(digitalRead(A0));
   Serial.print(" left:  ");
   Serial.print(digitalRead(A1));
   Serial.print(" frontLeft:  ");
   Serial.print(digitalRead(A2));
   Serial.println();
 */

}