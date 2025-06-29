#include <Arduino.h>


//-----------------
//<<<<<<<<<<<<<<<<<
#define baud 9600

int hodnota1 = 20;              //... predni zadni levy pravy
int hodnota2 = 10;               //... cross
int hodnota3 = 8;              //... special
//<<<<<<<<<<<<<<<<<
//-----------------


#define pTrig1 52
#define pEcho1 53

#define pTrig2 44
#define pEcho2 45

#define pTrig3 34
#define pEcho3 35

#define pTrig4 26
#define pEcho4 27

#define pTrig5 36
#define pEcho5 37

#define pTrig6 42
#define pEcho6 43

#define pTrig7 38
#define pEcho7 39

#define pTrig8 22
#define pEcho8 23

#define pTrig9 28
#define pEcho9 29

#define pTrig10 40
#define pEcho10 41

#define pTrig11 32
#define pEcho11 33

#define pTrig12 30
#define pEcho12 31

#define pTrig13 24
#define pEcho13 25

#define pTrig14 48
#define pEcho14 49

#define pTrig15 46
#define pEcho15 47

#define pTrig16 50
#define pEcho16 51

//... OUTPUT signal ...
#define front 4
#define back 5
#define right 7
#define left 6

#define frontRight 8
#define frontLeft 9
#define backRight 10
#define backLeft 11

//... LONG LONG LONG LONG LONG LONG LONG

long odezva1, vzdalenost1;
long odezva2, vzdalenost2;
long odezva3, vzdalenost3;
long odezva4, vzdalenost4;
long odezva5, vzdalenost5;
long odezva6, vzdalenost6;
long odezva7, vzdalenost7;
long odezva8, vzdalenost8;
long odezva9, vzdalenost9;
long odezva10, vzdalenost10;
long odezva11, vzdalenost11;
long odezva12, vzdalenost12;
long odezva13, vzdalenost13;
long odezva14, vzdalenost14;
long odezva15, vzdalenost15;
long odezva16, vzdalenost16;

void print(){
  //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  // PRINT PRINT PRINT PRINT PRINT PRINT PRINT PRINT
  //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

  Serial.print(vzdalenost1);
  Serial.print("  ");
  Serial.print(vzdalenost2);
  Serial.print("  ");
  Serial.print(vzdalenost3);
  Serial.print("  ");
  Serial.print(vzdalenost4);
  Serial.print("  ");
  Serial.print(vzdalenost5);
  Serial.print("  ");
  Serial.print(vzdalenost6);
  Serial.print("  ");
  Serial.print(vzdalenost7);
  Serial.print("  ");
  Serial.print(vzdalenost8);
  Serial.print("  ");
  Serial.print(vzdalenost9);
  Serial.print("  ");
  Serial.print(vzdalenost10);
  Serial.print("  ");
  Serial.print(vzdalenost11);
  Serial.print("  ");
  Serial.print(vzdalenost12);
  Serial.print("  ");
  Serial.print(vzdalenost13);
  Serial.print("  ");
  Serial.print(vzdalenost14);
  Serial.print("  ");
  Serial.print(vzdalenost15);
  Serial.print("  ");
  Serial.print(vzdalenost16);
  Serial.println("");
}


//..........................................
// SETUP SETUP SETUP SETUP SETUP SETUP SETUP
//..........................................

void setup() {
  pinMode(pTrig1, OUTPUT);
  pinMode(pEcho1, INPUT);

  pinMode(pTrig2, OUTPUT);
  pinMode(pEcho2, INPUT);

  pinMode(pTrig3, OUTPUT);
  pinMode(pEcho3, INPUT);

  pinMode(pTrig4, OUTPUT);
  pinMode(pEcho4, INPUT);

  pinMode(pTrig5, OUTPUT);
  pinMode(pEcho5, INPUT);

  pinMode(pTrig6, OUTPUT);
  pinMode(pEcho6, INPUT);

  pinMode(pTrig7, OUTPUT);
  pinMode(pEcho7, INPUT);

  pinMode(pTrig8, OUTPUT);
  pinMode(pEcho8, INPUT);

  pinMode(pTrig9, OUTPUT);
  pinMode(pEcho9, INPUT);

  pinMode(pTrig10, OUTPUT);
  pinMode(pEcho10, INPUT);

  pinMode(pTrig11, OUTPUT);
  pinMode(pEcho11, INPUT);

  pinMode(pTrig12, OUTPUT);
  pinMode(pEcho12, INPUT);

  pinMode(pTrig13, OUTPUT);
  pinMode(pEcho13, INPUT);

  pinMode(pTrig14, OUTPUT);
  pinMode(pEcho14, INPUT);

  pinMode(pTrig15, OUTPUT);
  pinMode(pEcho15, INPUT);

  pinMode(pTrig16, OUTPUT);
  pinMode(pEcho16, INPUT);



  pinMode(front, OUTPUT);
  pinMode(back, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);

  pinMode(frontRight, OUTPUT);
  pinMode(frontLeft, OUTPUT);
  pinMode(backRight, OUTPUT);
  pinMode(backLeft, OUTPUT);

  //Serial.begin(baud);
}

//........................................
// LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP
//........................................

void loop()
{
  digitalWrite(pTrig1, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig1, HIGH);
  delayMicroseconds(5); 
  digitalWrite(pTrig1, LOW);
  odezva1 = pulseIn(pEcho1, HIGH);
  vzdalenost1 = odezva1 / 58.31;

  digitalWrite(pTrig2, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig2, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig2, LOW);
  odezva2 = pulseIn(pEcho2, HIGH);
  vzdalenost2 = odezva2 / 58.01;

  digitalWrite(pTrig3, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig3, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig3, LOW);
  odezva3 = pulseIn(pEcho3, HIGH);
  vzdalenost3 = odezva3 / 58.31;

  digitalWrite(pTrig4, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig4, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig4, LOW);
  odezva4 = pulseIn(pEcho4, HIGH);
  vzdalenost4 = odezva4 / 58.31;

  digitalWrite(pTrig5, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig5, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig5, LOW);
  odezva5 = pulseIn(pEcho5, HIGH);
  vzdalenost5 = odezva5 / 58.31;

  digitalWrite(pTrig6, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig6, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig6, LOW);
  odezva6 = pulseIn(pEcho6, HIGH);
  vzdalenost6 = odezva6 / 58.31;

  digitalWrite(pTrig7, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig7, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig7, LOW);
  odezva7 = pulseIn(pEcho7, HIGH);
  vzdalenost7 = odezva7 / 58.31;

  digitalWrite(pTrig8, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig8, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig8, LOW);
  odezva8 = pulseIn(pEcho8, HIGH);
  vzdalenost8 = odezva8 / 58.31;

  digitalWrite(pTrig9, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig9, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig9, LOW);
  odezva9 = pulseIn(pEcho9, HIGH);
  vzdalenost9 = odezva9 / 48.31;

  digitalWrite(pTrig10, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig10, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig10, LOW);
  odezva10 = pulseIn(pEcho10, HIGH);
  vzdalenost10 = odezva10 / 58.31;

  digitalWrite(pTrig11, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig11, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig11, LOW);
  odezva11 = pulseIn(pEcho11, HIGH);
  vzdalenost11 = odezva11 / 58.31;

  digitalWrite(pTrig12, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig12, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig12, LOW);
  odezva12 = pulseIn(pEcho12, HIGH);
  vzdalenost12 = odezva12 / 58.31;

  digitalWrite(pTrig13, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig13, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig13, LOW);
  odezva13 = pulseIn(pEcho13, HIGH);
  vzdalenost13 = odezva13 / 58.31;

  digitalWrite(pTrig14, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig14, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig14, LOW);
  odezva14 = pulseIn(pEcho14, HIGH);
  vzdalenost14 = odezva14 / 58.31;

  digitalWrite(pTrig15, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig15, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig15, LOW);
  odezva15 = pulseIn(pEcho15, HIGH);
  vzdalenost15 = odezva15 / 58.31;

  digitalWrite(pTrig16, LOW);
  delayMicroseconds(2);
  digitalWrite(pTrig16, HIGH);
  delayMicroseconds(5);
  digitalWrite(pTrig16, LOW);
  odezva16 = pulseIn(pEcho16, HIGH);
  vzdalenost16 = odezva16 / 58.31;



  // CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS
  //      CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS
  // CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS CONDITIONS

  if ((vzdalenost16 < hodnota1) or (vzdalenost1 < hodnota1) or (vzdalenost2 < hodnota1)) {
    digitalWrite(front, LOW);
  }
  else {
    digitalWrite(front, HIGH);
  }

  //............................................................................................
  if ((vzdalenost4 < hodnota1) or (vzdalenost5 < hodnota1) or (vzdalenost6 < hodnota1)) {
    digitalWrite(right, LOW);
  }
  else {
    digitalWrite(right, HIGH);
  }

  //............................................................................................
  if ((vzdalenost8 < hodnota1) or (vzdalenost9 < hodnota1) or (vzdalenost10 < hodnota1)) {
    digitalWrite(back, LOW);
  }
  else {
    digitalWrite(back, HIGH);
  }

  //............................................................................................
  if ((vzdalenost12 < hodnota1) or (vzdalenost13 < hodnota1) or (vzdalenost14 < hodnota1)) {
    digitalWrite(left, LOW);
  }
  else {
    digitalWrite(left, HIGH);
  }


  //............................................................................................
  //............................................................................................
  if (vzdalenost3 < hodnota2) {
    digitalWrite(frontRight, LOW);
  }
  else {
    digitalWrite(frontRight, HIGH);
  }

  //............................................................................................
  if (vzdalenost7 < hodnota2) {
    digitalWrite(backRight, LOW);
  }
  else {
    digitalWrite(backRight, HIGH);
  }

  //............................................................................................
  if (vzdalenost11 < hodnota2) {
    digitalWrite(backLeft, LOW);
  }
  else {
    digitalWrite(backLeft, HIGH);
  }

  //............................................................................................
  if (vzdalenost15 < hodnota2) {
    digitalWrite(frontLeft, LOW);
  }
  else {
    digitalWrite(frontLeft, HIGH);
  }

  //print();  //...print
  
}