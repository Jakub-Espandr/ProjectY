#include <Arduino.h>

#define IRlineFrontR A12  //...IRline PIN
#define IRlineFrontL A13  //...IRline PIN
#define IRlineRightF A10  //...IRline PIN
#define IRlineRightB A11  //...IRline PIN
#define IRlineLeftF A9    //...IRline PIN
#define IRlineLeftB A8    //...IRline PIN
#define IRlineBackL A15   //...IRline PIN
#define IRlineBackR A14   //...IRline PIN

void setup() {

  Serial.begin(9600);
  pinMode(IRlineBackL,INPUT);
  pinMode(IRlineBackR,INPUT);
  pinMode(IRlineFrontR,INPUT);
  pinMode(IRlineFrontL,INPUT);
  pinMode(IRlineLeftB,INPUT);
  pinMode(IRlineLeftF,INPUT);
  pinMode(IRlineRightF,INPUT);
  pinMode(IRlineRightB,INPUT);
}

void loop() {
  Serial.print("frontL: ");
  Serial.print(analogRead(IRlineFrontL));
  Serial.print("  frontR: ");
  Serial.print(analogRead(IRlineFrontR));
  Serial.print("  rightF: ");
  Serial.print(analogRead(IRlineRightF));
  Serial.print("  rightB: ");
  Serial.print(analogRead(IRlineRightB));
  Serial.print("  backR: ");
  Serial.print(analogRead(IRlineBackR));
  Serial.print("  backL: ");
  Serial.print(analogRead(IRlineBackL));
  Serial.print("  leftB: ");
  Serial.print(analogRead(IRlineLeftB));
  Serial.print("  leftF: ");
  Serial.print(analogRead(IRlineLeftF));

 
}