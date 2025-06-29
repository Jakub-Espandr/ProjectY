#include <Servo.h> 
 
Servo myservo;  
 
 int pos = 0;
 
void setup() 
{ 
  myservo.attach(41);  // attaches the servo on pin 9 to the servo object 
myservo.write(50); 
delay(1000);
myservo.write(60); 
delay(1000);
myservo.write(70); 
delay(1000);
myservo.write(80); 
delay(1000);
myservo.write(90); 
delay(1000);
myservo.write(100); 
delay(1000);

} 
 
void loop() 
{

for(pos = 0; pos < 120; pos += 5)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  delay(2000);
  for(pos = 120; pos>=1; pos-=5)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  delay(4000);
  myservo.write(0);
} 
