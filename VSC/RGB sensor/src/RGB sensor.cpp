#include <Arduino.h>

#define S0 12
#define S1 10
#define S2 11
#define S3 9

#define sensorOut1 2
#define sensorOut2 3
#define sensorOut3 4
#define sensorOut4 5

#define front 15  //A1
#define back 16   //A2
#define left 17   //A3
#define right 18  //A4

#define bigger <
#define smaller >



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//–––––––––––––––––––––––––––––––––––––
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//–––––––––––––––––––––––––––––––––––––
int clearValue1 = 160;            //|||
int clearValue2 = 160;            //|||
int clearValue3 = 160;            //|||
int clearValue4 = 160;            //|||
                                  //|||
int redValue1 = 100;              //|||
int redValue2 = 100;              //|||
int redValue3 = 100;              //|||
int redValue4 = 100;              //|||
                                  //|||
int greenValue1 = 100;            //|||
int greenValue2 = 100;            //|||
int greenValue3 = 100;            //|||
int greenValue4 = 100;            //|||
                                  //|||
int blueValue1 = 100;             //|||
int blueValue2 = 100;             //|||
int blueValue3 = 100;             //|||
int blueValue4 = 100;             //|||
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//–––––––––––––––––––––––––––––––––––––
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//–––––––––––––––––––––––––––––––––––––


// Stores frequency read by the photodiodes
int redFrequency1 = 0;
int greenFrequency1 = 0;
int blueFrequency1 = 0;
int clearFrequency1 = 0;

int redFrequency2 = 0;
int greenFrequency2 = 0;
int blueFrequency2 = 0;
int clearFrequency2 = 0;

int redFrequency3 = 0;
int greenFrequency3 = 0;
int blueFrequency3 = 0;
int clearFrequency3 = 0;

int redFrequency4 = 0;
int greenFrequency4 = 0;
int blueFrequency4 = 0;
int clearFrequency4 = 0;


void print(){
  Serial.print(" R = ");
  Serial.print(redFrequency1);
  Serial.print("   ");
  Serial.print(redFrequency2);
  Serial.print("   ");
  Serial.print(redFrequency3);
  Serial.print("   ");
  Serial.print(redFrequency4);
  Serial.print("  ;  ");


  Serial.print(" G = ");
  Serial.print(greenFrequency1);
  Serial.print("   ");
  Serial.print(greenFrequency2);
  Serial.print("   ");
  Serial.print(greenFrequency3);
  Serial.print("   ");
  Serial.print(greenFrequency4);
  Serial.print("  ;  ");


  Serial.print(" B = ");
  Serial.print(blueFrequency1);
  Serial.print("   ");
  Serial.print(blueFrequency2);
  Serial.print("   ");
  Serial.print(blueFrequency3);
  Serial.print("   ");
  Serial.print(blueFrequency4);
  Serial.print("  ;  ");


  Serial.print(" C = ");
  Serial.print(clearFrequency1);
  Serial.print("   ");
  Serial.print(clearFrequency2);
  Serial.print("   ");
  Serial.print(clearFrequency3);
  Serial.print("   ");
  Serial.print(clearFrequency4);
  Serial.println();
}

void setup() {
  // Setting the outputs
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);

  pinMode(front,OUTPUT);
  pinMode(back,OUTPUT);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);


  // Setting the sensorOut as an input
  pinMode(sensorOut1, INPUT);
  pinMode(sensorOut2, INPUT);
  pinMode(sensorOut3, INPUT);
  pinMode(sensorOut4, INPUT);

  // Setting frequency scaling to 2%
  digitalWrite(S0, LOW);               //... LL off , LH 2% ,  HL 20% , HH 100%
  digitalWrite(S1, HIGH);

  // Begins serial communication
  //Serial.begin(9600);
}


void loop() {
  // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  // Reading the output frequency
  redFrequency1 = pulseIn(sensorOut1, LOW);
  redFrequency2 = pulseIn(sensorOut2, LOW);
  redFrequency3 = pulseIn(sensorOut3, LOW);
  redFrequency4 = pulseIn(sensorOut4, LOW);

  //-------------------------------------------------------
  //-------------------------------------------------------
  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  // Reading the output frequency
  greenFrequency1 = pulseIn(sensorOut1, LOW);
  greenFrequency2 = pulseIn(sensorOut1, LOW);
  greenFrequency3 = pulseIn(sensorOut1, LOW);
  greenFrequency4 = pulseIn(sensorOut1, LOW);

  //-------------------------------------------------------
  //-------------------------------------------------------
  // Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  // Reading the output frequency
  blueFrequency1 = pulseIn(sensorOut1, LOW);
  blueFrequency2 = pulseIn(sensorOut2, LOW);
  blueFrequency3 = pulseIn(sensorOut3, LOW);
  blueFrequency4 = pulseIn(sensorOut4, LOW);
 
  //-------------------------------------------------------
  //-------------------------------------------------------
  // Setting Clear (C) filtered photodiodes to be read
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);

  // Reading the output frequency
  clearFrequency1 = pulseIn(sensorOut1, LOW);
  clearFrequency2 = pulseIn(sensorOut2, LOW);
  clearFrequency3 = pulseIn(sensorOut3, LOW);
  clearFrequency4 = pulseIn(sensorOut4, LOW);


//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//---------------------------------------------------------------------
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

//... right RGB
if (((clearFrequency1) bigger clearValue1)) {
  digitalWrite(right,LOW);
}
else {
  (digitalWrite(right,HIGH));
}

//-------------------------------------------------------
//...front RGB
if (((clearFrequency2) bigger clearValue2)) {
  digitalWrite(front,LOW);
}
else {
  (digitalWrite(front,HIGH));
}

//-------------------------------------------------------
//...back RGB
if (((clearFrequency3) bigger clearValue3)) {
  digitalWrite(back,LOW);
}
else {
  (digitalWrite(back,HIGH));
}

//-------------------------------------------------------
//...left RGB
if (((clearFrequency4) bigger clearValue4)) {
  digitalWrite(left,LOW);
}
else {
  (digitalWrite(left,HIGH));
}

/*
  Serial.print(" right ");
  Serial.print(clearFrequency1);
  Serial.print("   front  ");
  Serial.print(clearFrequency2);
  Serial.print("   back  ");
  Serial.print(clearFrequency3);
  Serial.print("   left  ");
  Serial.print(clearFrequency4);
  Serial.println();

*/

}