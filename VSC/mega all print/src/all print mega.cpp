#include <Arduino.h>








#define IRlineFrontValue 200 //... Value for IR sensor Front
#define IRlineBackValue 200  //... Value for IR sensor Back
#define IRlineLeftValue 200  //... Value for IR sensor Left
#define IRlineRightValue 200 //... Value for IR sensor Right

#define candleValue 500  //...Value for candle
#define candleValue2 800 //...Value for candle
#define candleValue3 800 //...Value for candle

#define line <
#define lineN >

#define RGBlineFront 43 //...RGBline PIN
#define RGBlineBack 45  //...RGBline PIN
#define RGBlineRight 47 //...RGBline PIN
#define RGBlineLeft 49  //...RGBline PIN

#define IRlineFrontR A12 //...IRline PIN
#define IRlineFrontL A13 //...IRline PIN
#define IRlineRightF A10 //...IRline PIN
#define IRlineRightB A11 //...IRline PIN
#define IRlineLeftF A9   //...IRline PIN
#define IRlineLeftB A8   //...IRline PIN
#define IRlineBackL A15  //...IRline PIN
#define IRlineBackR A14  //...IRline PIN




void printCandle(){

if(digitalRead(A7) == LOW){//
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
  if(digitalRead(39) == LOW){
    Serial.print(" backup ");
  }


  Serial.println();

}



void printLine(){
   if(digitalRead(RGBlineLeft) == LOW) {
   Serial.print( "  rgb left  " );
 }
 else{
   Serial.print("");
 }

  if(digitalRead(RGBlineRight) == LOW) {
   Serial.print( "  rgb right  " );
 }
 else{
   Serial.print("");
 }

  if(digitalRead(RGBlineFront) == LOW) {
   Serial.print( "  rgb front  " );
 }
 else{
   Serial.print("");
 }

  if(digitalRead(RGBlineBack) == LOW) {
   Serial.print( "  rgb back  " );
 }
 else{
   Serial.print("");
 }

   if(analogRead(IRlineFrontL) line IRlineFrontValue) {
   Serial.print( "  ir fLeft " );
 }
 else{
   Serial.print("");
 }

   if(analogRead(IRlineFrontR) line IRlineFrontValue) {
   Serial.print( "  ir fRight " );
 }
 else{
   Serial.print("");
 }

   if(analogRead(IRlineRightF) line IRlineRightValue) {
   Serial.print( "  ir rFront " );
 }
 else{
   Serial.print("");
 }

   if(analogRead(IRlineRightB) line IRlineRightValue) {
   Serial.print( "  ir rBack " );
 }
 else{
   Serial.print("");
 }

    if(analogRead(IRlineLeftF) line IRlineLeftValue) {
   Serial.print( "  ir lFront " );
 }
 else{
   Serial.print("");
 }

     if(analogRead(IRlineLeftB) line IRlineLeftValue) {
   Serial.print( "  ir lBack " );
 }
 else{
   Serial.print("");
 }

     if(analogRead(IRlineBackR) line IRlineBackValue) {
   Serial.print( "  ir bRight " );
 }
 else{
   Serial.print("");
 }

      if(analogRead(IRlineBackL) line IRlineBackValue) {
   Serial.print( "  ir bLeft " );
 }
 else{
   Serial.print("");
 }
 
 Serial.println();
 
}






void setup() {
  pinMode(IRlineFrontR, INPUT); //...FrontIRLineSensor
  pinMode(IRlineFrontL, INPUT); //...FrontIRLineSensor
  pinMode(IRlineBackL, INPUT);  //...BackIRLineSensor
  pinMode(IRlineBackR, INPUT);  //...BackIRLineSensor
  pinMode(IRlineLeftF, INPUT);  //...LeftIRLineSensor
  pinMode(IRlineLeftB, INPUT);  //...LeftIRLineSensor
  pinMode(IRlineRightF, INPUT); //...RightIRLineSensor
  pinMode(IRlineRightB, INPUT); //...RightIRLineSensor

  pinMode(RGBlineFront, INPUT_PULLUP); //...RGBline PIN
  pinMode(RGBlineBack, INPUT_PULLUP);  //...RGBline PIN
  pinMode(RGBlineRight, INPUT_PULLUP); //...RGBline PIN
  pinMode(RGBlineLeft, INPUT_PULLUP);  //...RGBline PIN

  pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
pinMode(A6,INPUT);  
pinMode(A7,INPUT);


pinMode(A8,INPUT);
pinMode(A9,INPUT);
pinMode(A10,INPUT);
pinMode(A11,INPUT);
pinMode(A12,INPUT);
pinMode(A13,INPUT);  
pinMode(A14,INPUT);
pinMode(A15,INPUT);

pinMode(39,INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(analogRead(A12));
//printCandle();
//printLine();





}