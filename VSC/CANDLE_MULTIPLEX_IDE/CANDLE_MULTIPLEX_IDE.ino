
#define s0 3
#define s1 2
#define s2 1
#define s3 0

/*
  ch0 0000
  ch1 1000
  ch2 0100
  ch3 1100
  ch4 0010        sh - s3  h - s2 m - s0 sm - s1
  ch5 1010
  ch6 0110
  ch7 1110
  ch8 0001
  ch9 1001
  ch10 0101
  ch11 1101
  ch12 0011
  ch13 1011
  ch14 0111
  ch15 1111
*/

void candle1(){
digitalWrite(s0,LOW);
digitalWrite(s1,HIGH);
digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
}

void candle2(){
digitalWrite(s0,HIGH);
digitalWrite(s1,HIGH);
digitalWrite(s2,LOW);
digitalWrite(s3,LOW);  
}

void candle3(){
digitalWrite(s0,LOW);
digitalWrite(s1,LOW);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);  
}

void candle4(){
digitalWrite(s0,HIGH);
digitalWrite(s1,LOW);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);  
}

void candle5(){
digitalWrite(s0,LOW);
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);  
}

void candle6(){
digitalWrite(s0,HIGH);
digitalWrite(s1,HIGH);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);  
}

void candle7(){
digitalWrite(s0,LOW);
digitalWrite(s1,LOW);
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);  
}

void candle8(){
digitalWrite(s0,HIGH);
digitalWrite(s1,LOW);
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);  
}


void setup() {
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
}

void loop() {
  candle1();
  delayMicroseconds(10);
  candle2();
  delayMicroseconds(10);
  candle3();
  delayMicroseconds(10);
  candle4();
  delayMicroseconds(10);
  candle5();
  delayMicroseconds(10);
  candle6();
  delayMicroseconds(10);
  candle7();
  delayMicroseconds(10);
  candle8();
  delayMicroseconds(10);
  
}
