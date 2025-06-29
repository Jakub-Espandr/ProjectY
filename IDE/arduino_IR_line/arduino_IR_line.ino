#define s0 5
#define s1 4
#define s2 3
#define s3 2
 
/*
    {0,0,0,0},  // kanál  0
    {1,0,0,0},  // kanál  1
    {0,1,0,0},  // kanál  2
    {1,1,0,0},  // kanál  3
    {0,0,1,0},  // kanál  4
    {1,0,1,0},  // kanál  5
    {0,1,1,0},  // kanál  6
*/

void setup() {
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);

}

void loop() {
  digitalWrite(s0,LOW);
  digitalWrite(s1,LOW);
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  

}
