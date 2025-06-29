
//   @FlyCamCzech - flycamczech.cz - flycamczech@gmail.com

#include <Arduino.h> //.. include arduino

/*

       ```````````````````````                                                                                                                                                                           ```````````````             ``````
       mmmmmmmNNNNNmmmmmmmmmdhs+.`                                                                 `.sMsm`                                                              ```````````                      `smmmmmmmmmNNNNNo           `hNNNh.
      +s:/sssdMMMMM-````-sooNNMMMd+`                                                             `/mN-hMdm-                                                             hdddddddddd.                       .ss-+sssyNMMMMMo         `hMMMy`
      yM+/ssshMMMMM`    -Md.ssmMMMMd-                                                           /dMy+hMMNm:                                                            os:sssdMMMM`                        -mm:/ssssNMMMMMs        yMMN+
      sM+/ssshMMMMN     -Md.ssshMMMMN.                                                        :hmy-:+/:-`                                                              NM.sssdMMMM                          `hN//osssdMMMMMs      yMMm:
      +M+/ooohMMMMN     -Md.ooooNMMMMy   .///////////   .:.so         `:+osyyyso+:`                                  -/osyyyyso/-                  .:+ossssso/:.     //NM.ooodMMMN//////                      oMs/ooooyMMMMMy`  `hMMd.
      /M++yyydMMMMm     -Md-yyyymMMMMN   -yyyyyymMMMM:smNy:Md      :ymMMMNo+++oshNMms:        syyyyyhMMMMy       `+hNMMMMo+/+oymMNy/           `/yNMMMMssssydNMMNdo  MMMM.yyymMMMMMMMMMM                       /Nh:yyyyyMMMMMd``hMMy`
      /M++yyydMMMMd     -Md-yyyyNMMMMN   `md`yyymMMMMNsosdNMd    -hddmMMMm     dd.hmMMm+      ym/+yyyMMMMo      /hddmMMMM`    yh:hMMN+        :hddmMMMN       ./yNM: ``NM.yyymMMMm``````                        .mm-syyydNMMMMmdMMo
      /M++yyydMMMMd     -Md-yyyyMMMMMs    Mm`yyymMMMmsNMNNMMd  `yh/:ydMMMm     mM.syNMMMd.    yM+/yyyMMMM+    .yh:+yhMMMM`    hM:odMMMh`    -hy-oydMMMN          `-    NM.yyydMMMd                               `hN/:yyydMMMMMMM/
      /M+/sssdMMMMd     -Md.sssdMMMMh`    Nm`sssmMMMNo-`  `/o `dMoosshMMMm     mM.ossmMMMm`   oM+/sssMMMM/   `mM/ossyMMMM`    hM:osdMMMy   .NN:ssshMMMN                NM.sssdMMMd                                 yM:+sssdMMMMN-
      /M+/ooohMMMMd     -Mm+oooooo+.      mm`ooodMMMy         +Md-ooohMMMm     mM.ooosMMMMo   +M+:oosMMMM:   sMs/oooyMMMM+////mMsooooooo.  hM+/ooohMMMN                NM.ooodMMMd                                 /M+/ooodMMMMd
      /M+/ssshMMMMNyo//:+MMMMMMNh+`       mm`sssdMMMy         yMo/ssshMMMm     mM.osssMMMMh   /M+/sssMMMM-   hM:+sssyMMMMyyyyyyyyyyyyyyy:  MM.ossshMMMN                NM.sssdMMMm                                 +M+/sssdMMMMd
      +M+/ssshMMMMNoyhhhddhys+:`          mm`sssdMMMy         sMh:ssshMMMm     mM.ossyMMMMs   /M+/sssMMMM-   yMo/sssyMMMM`                 mM:+ssshMMMN                MM.sssdMMMm                                 +M+/sssdMMMMd
      oM+/sssdMMMMN   ````                Nm`sssmMMMh         .NM/osshMMMm     mM.ossmMMMN.   /M+/sssMMMM.   -MN:sssyMMMM`                 /Md-ssshMMMN               `MM.sssdMMMN                                 oM++sssdMMMMN
      sM+/yyydMMMMM`                      Mm`yyymMMMm          :mNs/ydMMMm     mM.syyhhhh-    /M+/yyyMMMM.    +Nm/oyhMMMM`          .oo     oMd:sydMMMN               `MM.yyydMMMM`                                yM++yyydMMMMM
      yM++yyyhmmmmm.                     .Mm`yyydmmmd           .sNms+yhmm     mMdddddy:      /M+/yyyMMMM-     -hNh/+hmNM`      `-+hNMm:     :dNy/odmMN       `-+hm-   dMo:shmMMMM.   .:s                          hM++yyyhmmmmm`
      dMdyyyyyyyyyy-                     :MNsyyyyyyyy.            .+hmmhyo/:::/NMMMNh+.       +M+/yyyMMMM-      `-sdmdyss/://+shmNNmy/.       `/ymmdyss:::/+ohmNMmh:   .yNmysossso/+sdNNd                          mMhyyyyyyyyyy.
      +++++++++++++.                     .+++++++++++.               .-+syhhhhhys+-.          oM+/sssMMMM:         `./oyhhhdhhys+:.`             .-+syhhdddhhyo/-`       ./oyhhhhhhys+:.`                          +++++++++++++.
                                                                                              oM+/sssMMMM/                 `                           ````                    ``
                                                                                              yM+/ssyMMMM/
                                                                                              mM:+ssyMMMM-
                                                                                         ..zyMd.sssydddo
                                                                                        NmmmNMMMdhhhhhs/
                                                                                        :/oyhhdddhys+:



*/

//  rev. 1.3

// REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW
//    REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW

/*......................................................................................................................
   DEFINITONS, VARIABLES, STATICS
   void
   void setup
   void loop
   debugging
  .....................................................................................................................
*/

// UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE  UPDATE
//     NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES   NOTES
/*....................................................................................................................
  13.1 new project
  14.1 definiton, setup
  15.1 definiton, setup
  18.1 motions
  20.1 motions
  22.1 variables, statics, #define
  24.1 pin declaratrion, #define
  25.1 #define, setup
  16.8.rgbLow;rgbHigh 
  .....................................................
*/

// SERVO include libraries and functions
#include <Servo.h>    //...initialize library for ESC
Servo propellerFront; //...create object frontPropeller
Servo propellerRear;  //...create object rearPropeller
int pos = 0;          //...default relative speed

//.....................................................
//...ESC ARMING
void arm()
{
  propellerRear.attach(3);  //Specify here the pin number on which the signal pin of ESC is connected.   //back
  propellerFront.attach(2); //Specify here the pin number on which the signal pin of ESC is connected.
  propellerFront.write(30); //ESC arm command. ESCs won't start unless input speed is less during initialization.
  propellerRear.write(30);  //ESC arm command. ESCs won't start unless input speed is less during initialization.
  delay(4000);
}
//TURN ON FRONT PROPELLER
//.....................................................
//... turn ON front propeller
void propellerFrontON()
{
  for (pos = 0; pos < 170; pos += 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
}

void propellerDebugON()
{
  for (pos = 0; pos < 60; pos += 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
}

//TURN ON REAR PROPELLER
//.....................................................
//... turn ON rear propeller
void propellerRearON()
{
  for (pos = 0; pos < 130; pos += 5)
  {
    propellerRear.write(pos);
    delay(15);
  }
}

//TURN OFF FRONT PROPELLER
//.....................................................
//... turn OFF front propeller
void propellerFrontOFF()
{
  for (pos = 170; pos >= 30; pos -= 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
  delay(100);
  propellerFront.write(35);
}

void propellerDebugOFF()
{
  for (pos = 60; pos >= 30; pos -= 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
  delay(100);
  propellerFront.write(35);
}

//TURN OFF REAR PROPELLER
//.....................................................
//... turn OFF rear propeller
void propellerRearOFF()
{
  for (pos = 140; pos >= 30; pos -= 5)
  {
    propellerRear.write(pos);
    delay(15);
  }
  delay(100);
  propellerRear.write(35);
}

//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//####################################################################################################################################################################################################################################################
//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
#define stepTime 1300   //...time during normal step
#define stepTime2 1600 //...time during slower step
#define stepTime3 1800 //...time during extremly slow step
#define stepTime4 2000 //...time during super slow step

#define ms1 LOW  //...microstepping
#define ms2 LOW  //...microstepping
#define ms3 HIGH //...microstepping

#define IRlineFrontValue 150 //... Value for IR sensor Front
#define IRlineBackValue 150  //... Value for IR sensor Back
#define IRlineLeftValue 150  //... Value for IR sensor Left
#define IRlineRightValue 150 //... Value for IR sensor Right

#define candleValue 500  //...Value for candle
#define candleValue2 800 //...Value for candle
#define candleValue3 800 //...Value for candle

#define line <
#define lineN >

#define rgbHigh HIGH
#define rgbLow LOW

//                           OFF 0,0,0 ;  (1) 0,0,1 ;  (1/2A)  0,1,0  ;  (1/4)  0,1,1  ;   (1/2B)   1,0,0   ;    (1/8)   1,0,1

//####################################################################################################################################################################################################################################################
//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//####################################################################################################################################################################################################################################################

#define fifty 625  //...go 50cm
#define fourty 520 //...go 40cm
#define thirty 315 //...go 30cm
#define twenty 210 //...go 20cm
#define ten 105    //...go 10cm

int state;      //...for preventing misscorection due the multiple sensor obstruction
int randNumber; //...generated random number for degrees
int randState;  //...generated random number for direction
int randState2; //...secondary backup random number
int btt;        //...start button

bool candle; //...if detected candle

int counter; //...method for debugging

bool fccMode; //...FCC method for obsatcle sensing
int fcc;
int rC;
int ripCandle = 0;

int debug;

#define backup 39

#define IRlineFrontR A12 //...IRline PIN
#define IRlineFrontL A13 //...IRline PIN
#define IRlineRightF A10 //...IRline PIN
#define IRlineRightB A11 //...IRline PIN
#define IRlineLeftF A9   //...IRline PIN
#define IRlineLeftB A8   //...IRline PIN
#define IRlineBackL A15  //...IRline PIN
#define IRlineBackR A14  //...IRline PIN


/*
     A15ch0        A15ch1
  A12ch1     /\       A14ch0
            /||\                                                      –>>> scheme for IR line sensor
             ||
  A12ch0     ||       A14ch1
     A13ch1        A13ch0
*/

/*
         2 pinA8
            /\
4 pinA11   /||\   1 pinA9                                             –>>> scheme for RGB(C) line sensor
            ||
            ||
         3 pinA10
*/

#define RGBlineFront 43 //...RGBline PIN
#define RGBlineBack 45  //...RGBline PIN
#define RGBlineRight 47 //...RGBline PIN
#define RGBlineLeft 49  //...RGBline PIN

#define enableA 22 //...enable PIN
#define enableB 30 //...enable PIN
#define enableC 38 //...enable PIN
#define enableD 46 //...enable PIN

#define ms1A 24 //...msA PIN
#define ms2A 28 //...msA PIN
#define ms3A 26 //...msA PIN

#define ms1B 32 //...msB PIN
#define ms2B 36 //...msB PIN
#define ms3B 34 //...msB PIN

#define ms1C 40 //...msC PIN
#define ms2C 42 //...msC PIN
#define ms3C 44 //...msC PIN

#define ms1D 48 //...msD PIN
#define ms2D 50 //...msD PIN
#define ms3D 52 //...msD PIN

#define stepA 25 //...stepA PIN
#define stepB 27 //...stepB PIN
#define stepC 31 //...stepC PIN
#define stepD 37 //...stepD PIN

#define dirA 23 //...dirA PIN
#define dirB 29 //...dirB PIN
#define dirC 33 //...dirC PIN
#define dirD 35 //...dirD PIN

#define candle1 A7 //...candle1 PIN  FRONT
#define candle2 A6 //...candle2 PIN  FRONT RIGHT
#define candle3 A5 //...candle3 PIN  RIGHT
#define candle4 A4 //...candle4 PIN  BACK RIGHT
#define candle5 A3 //...candle5 PIN  BACK
#define candle6 A2 //...candle6 PIN  FRONT LEFT
#define candle7 A1 //...candle7 PIN  LEFT
#define candle8 A0 //...candle8 PIN  BACK LEFT

#define ultrasonicFront 4      //...PIN from "ultrasonic" arduino
#define ultrasonicBack 5       //...PIN from "ultrasonic" arduino
#define ultrasonicLeft 7       //...PIN from "ultrasonic" arduino
#define ultrasonicRight 6      //...PIN from "ultrasonic" arduino
#define ultrasonicFrontRight 8 //...PIN from "ultrasonic" arduino
#define ultrasonicFrontLeft 9  //...PIN from "ultrasonic" arduino
#define ultrasonicBackRight 10 //...PIN from "ultrasonic" arduino
#define ultrasonicBackLeft 11  //...PIN from "ultrasonic" arduino

#define button 12 //...PIN for START & STOP button
#define mode 14   //...PIN for FCC switch

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
// define motor PAUSE
void wait()
{
  delay(400);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!

//...............................................................................................................................................................................................................................................
//... forward

void forward()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowforward2

void slowForward2()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime4); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime4); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowforward

void slowForward()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... back

void back()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowback

void slowBack()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... stop

void stopMotor()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... reach targetPoint

void reach()
{

  //================================
  digitalWrite(enableA, HIGH);
  digitalWrite(enableB, HIGH);
  digitalWrite(enableC, HIGH);
  digitalWrite(enableD, HIGH);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... right

void right()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowRight

void slowRight()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... left

void left()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowLeft

void slowLeft()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... cw

void cw()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowCw

void slowCw()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime4); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime4); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... ccw

void ccw()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowCcw

void slowCcw()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime4); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime4); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... forwardRight

void forwardRight()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowForwardRight

void slowForwardRight()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... forwardLeft

void forwardLeft()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowForwardLeft

void slowForwardLeft()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... backLeft

void backLeft()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowBackLeft

void slowBackLeft()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... backRight

void backRight()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//...............................................................................................................................................................................................................................................
//... slowBackRight

void slowBackRight()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, LOW);
  digitalWrite(dirB, LOW);
  digitalWrite(dirC, LOW);
  digitalWrite(dirD, LOW);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime2); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... CCW around motor C

void ccwC()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... CW around motor D

void cwD()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... circle CCW

void ccwCircle()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);
}

//...............................................................................................................................................................................................................................................
//... circle CW

void cwCircle()
{

  //================================
  digitalWrite(enableA, LOW);
  digitalWrite(enableB, LOW);
  digitalWrite(enableC, LOW);
  digitalWrite(enableD, LOW);

  digitalWrite(dirA, HIGH);
  digitalWrite(dirB, HIGH);
  digitalWrite(dirC, HIGH);
  digitalWrite(dirD, HIGH);
  //================================

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);
}

//...............................................................................................................................................................................................................................................
//... CW 45°
void cw45()
{
  for (int i = 0; i < 118; i++)
  {
    cw();
  }
}

//...............................................................................................................................................................................................................................................
//... CW 90°
void cw90()
{
  for (int i = 0; i < 235; i++)
  {
    cw();
  }
}

//...............................................................................................................................................................................................................................................
//... CW 135°
void cw135()
{
  for (int i = 0; i < 353; i++)
  {
    cw();
  }
}

//...............................................................................................................................................................................................................................................
//... CW 180°
void cw180()
{
  for (int i = 0; i < 470; i++)
  {
    cw();
  }
}

//...............................................................................................................................................................................................................................................

//... CCW CCW CCW CCW CCW CCW CCW CCW CCW CCW CCW

//...............................................................................................................................................................................................................................................
//... CCW 45°
void ccw45()
{
  for (int i = 0; i < 115; i++)
  {
    ccw();
  }
}

//...............................................................................................................................................................................................................................................
//... CCW 90°
void ccw90()
{
  for (int i = 0; i < 230; i++)
  {
    ccw();
  }
}

//...............................................................................................................................................................................................................................................
//... slowCCW 90°
void slowCcw90()
{
  for (int i = 0; i < 230; i++)
  {
    slowCcw();
  }
}

//...............................................................................................................................................................................................................................................
//... slowCCW 80°
void slowCcw80()
{
  for (int i = 0; i < 200; i++)
  {
    slowCcw();
  }
}

//...............................................................................................................................................................................................................................................
//... CCW 135°
void ccw135()
{
  for (int i = 0; i < 347; i++)
  {
    ccw();
  }
}

//...............................................................................................................................................................................................................................................
//... CCW 180°
void ccw180()
{
  for (int i = 0; i < 460; i++)
  {
    ccw();
  }
}

//...............................................................................................................................................................................................................................................
//... randomRotate
void randRotate()
{
  randState = random(1, 20);
  //randState2 = random (1,20);
  //int randSt = randState/randState2;

  if (randState >= 8)
  {
    randNumber = random(80, 260);
    //Serial.println(randState);
    for (int i = 0; i < randNumber; i++)
    {
      cw();
    }
  }

  if (randState <= 7)
  {
    randNumber = random(100, 260);
    //Serial.println(randState);
    for (int i = 0; i < randNumber; i++)
    {
      ccw();
    }
  }
}

//...............................................................................................................................................................................................................................................
//... randomRotateRight
void randRotateRight()
{
  randNumber = random(80, 270);
  //Serial.println(randState);
  for (int i = 0; i < randNumber; i++)
  {
    cw();

    if ((analogRead(IRlineFrontL) line IRlineFrontValue) or
        (analogRead(IRlineLeftF) line IRlineLeftValue))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 90; i++)
      {
        backRight();
      }
      break;
    }
  }
}

//...............................................................................................................................................................................................................................................
//... randomRotateLeft
void randRotateLeft()
{
  randNumber = random(80, 270);
  //Serial.println(randState);
  for (int i = 0; i < randNumber; i++)
  {
    ccw();

    if ((analogRead(IRlineFrontR) line IRlineFrontValue) or
        (analogRead(IRlineRightF) line IRlineRightValue))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 90; i++)
      {
        backLeft();
      }
      break;
    }
  }
}

//    SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//    SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP

void setup()
{

  pinMode(enableA, OUTPUT); //...stepperDriver power switch
  pinMode(enableB, OUTPUT); //...stepperDriver power switch
  pinMode(enableC, OUTPUT); //...stepperDriver power switch
  pinMode(enableD, OUTPUT); //...stepperDriver power switch

  pinMode(ms1A, OUTPUT); //...stepperDriverA ms1
  pinMode(ms2A, OUTPUT); //...stepperDriverA ms2
  pinMode(ms3A, OUTPUT); //...stepperDriverA ms3

  pinMode(ms1B, OUTPUT); //...stepperDriverB ms1
  pinMode(ms2B, OUTPUT); //...stepperDriverB ms2
  pinMode(ms3B, OUTPUT); //...stepperDriverB ms3

  pinMode(ms1C, OUTPUT); //...stepperDriverC ms1
  pinMode(ms2C, OUTPUT); //...stepperDriverC ms2
  pinMode(ms3C, OUTPUT); //...stepperDriverC ms3

  pinMode(ms1D, OUTPUT); //...stepperDriverC ms1
  pinMode(ms2D, OUTPUT); //...stepperDriverC ms2
  pinMode(ms3D, OUTPUT); //...stepperDriverC ms3

  pinMode(stepA, OUTPUT); //...stepperDriverA step
  pinMode(stepB, OUTPUT); //...stepperDriverB step
  pinMode(stepC, OUTPUT); //...stepperDriverC step
  pinMode(stepD, OUTPUT); //...stepperDriverD step

  pinMode(dirA, OUTPUT); //...stepperDriverA dir
  pinMode(dirB, OUTPUT); //...stepperDriverB dir
  pinMode(dirC, OUTPUT); //...stepperDriverC dir
  pinMode(dirD, OUTPUT); //...stepperDriverD dir

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

  pinMode(ultrasonicFront, INPUT_PULLUP);      //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBack, INPUT_PULLUP);       //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicLeft, INPUT_PULLUP);       //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicRight, INPUT_PULLUP);      //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicFrontRight, INPUT_PULLUP); //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicFrontLeft, INPUT_PULLUP);  //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBackRight, INPUT_PULLUP);  //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBackLeft, INPUT_PULLUP);   //...PIN from "ultrasonic" arduino

  pinMode(candle1, INPUT_PULLUP); //...candle PIN
  pinMode(candle2, INPUT_PULLUP); //...candle PIN
  pinMode(candle3, INPUT_PULLUP); //...candle PIN
  pinMode(candle4, INPUT_PULLUP); //...candle PIN
  pinMode(candle5, INPUT_PULLUP); //...candle PIN
  pinMode(candle6, INPUT_PULLUP); //...candle PIN
  pinMode(candle7, INPUT_PULLUP); //...candle PIN
  pinMode(candle8, INPUT_PULLUP); //...candle PIN

  pinMode(button, INPUT_PULLUP); //...start and emergency stop button

  pinMode(13, OUTPUT);         //...start button LED
  pinMode(mode, INPUT_PULLUP); //...FCC mode switch
  pinMode(backup, INPUT_PULLUP);//..backup sensor
  pinMode(16,OUTPUT);           //...LED VCC
  pinMode(15,OUTPUT);           //...LED GND

  digitalWrite(ms1A, ms1); //...setupOutputPIN ms1A
  digitalWrite(ms2A, ms2); //...setupOutputPIN ms2A
  digitalWrite(ms3A, ms3); //...setupOutputPIN ms3A

  digitalWrite(ms1B, ms1); //...setupOutputPIN ms1B
  digitalWrite(ms2B, ms2); //...setupOutputPIN ms2B
  digitalWrite(ms3B, ms3); //...setupOutputPIN ms3B

  digitalWrite(ms1C, ms1); //...setupOutputPIN ms1C
  digitalWrite(ms2C, ms2); //...setupOutputPIN ms2C
  digitalWrite(ms3C, ms3); //...setupOutputPIN ms3C

  digitalWrite(ms1D, ms1); //...setupOutputPIN ms1D
  digitalWrite(ms2D, ms2); //...setupOutputPIN ms2D
  digitalWrite(ms3D, ms3); //...setupOutputPIN ms3D

  digitalWrite(51, LOW);  //...GND for Toshiba drivers
  digitalWrite(53, HIGH); //...VCC for Toshiba drivers
  digitalWrite(15,LOW);   //...LED GND

  arm();     //...arming process for escs
  state = 0; //...define default value for random rotations - R/L
  btt = 0;   //...define default value of button counter

  counter = 0; //...for antiBUG FCC Method
  debug = 0;

  candle = false;

  randomSeed(0); //...define random seed from this pin
  btt = 0;       //...define default value of button counter
  candle = false;
  debug = 0;
  rC = 0;
  //Serial.begin(9600);
}

//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP

void loop()
{

if ((btt < 1) and
((digitalRead(candle1) == LOW) or 
(digitalRead(candle2) == LOW) or
(digitalRead(candle3) == LOW) or
(digitalRead(candle4) == LOW) or
(digitalRead(candle5) == LOW) or
(digitalRead(candle6) == LOW) or
(digitalRead(candle7) == LOW) or
(digitalRead(candle8) == LOW) or
(digitalRead(backup) == LOW)))
  { 
  digitalWrite(16,HIGH);
}
else
{
  digitalWrite(16,LOW);
}


  if (digitalRead(button) == LOW)
  {
    digitalWrite(13, HIGH);
    btt += 5;
    candle = false;
    rC = 0;

    delay(300);
    digitalWrite(13, LOW);
  }

  if (btt >= 2)
  {

    forward();

    //............................................................................................................................
    //... ultrasonic and no candle FCC Mode mode (low) (switch1)!

    if (((digitalRead(ultrasonicFront) == LOW) or
         (digitalRead(ultrasonicFrontLeft) == LOW) or
         (digitalRead(ultrasonicFrontRight) == LOW)) and
        ((digitalRead(candle1) == HIGH) and
         (digitalRead(backup) == HIGH) and
         (digitalRead(mode) == LOW)))
    {

      fcc = 0;
      stopMotor();
      wait();
      wait();
      debug = 0;
      for (int i = 0; i < 315; i++)
      {
        slowForward2();
        if ((analogRead(IRlineFrontL) line IRlineFrontValue) or
            (analogRead(IRlineFrontR) line IRlineFrontValue) or
            (digitalRead(RGBlineFront) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 48; i++)
          {
            slowForward2();
          }

          stopMotor();
          wait();
          break;
        }
      }

      stopMotor();
      wait();

      for (int i = 0; i < 85; i++)
      {
        slowCcw();

        if ((digitalRead(backup) == LOW) and
            ((analogRead(IRlineFrontL) line IRlineFrontValue) or
             (analogRead(IRlineFrontR) line IRlineFrontValue)))
        {
          ripCandle = 5;
          stopMotor();
          wait();
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          wait();
          break;
        }
      }

      stopMotor();
      wait();

      for (int i = 0; i < 170; i++)
      {
        if ((ripCandle) == 5)
        {
          stopMotor();
          wait();
          ripCandle = 0;
          break;
          wait();
          break;
        }
        slowCw();

        if ((digitalRead(backup) == LOW) and
            ((analogRead(IRlineFrontL) line IRlineFrontValue) or
             (analogRead(IRlineFrontR) line IRlineFrontValue)))
        {
          stopMotor();
          wait();
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          wait();
          break;
        }
      }

      wait();
      stopMotor();
      wait();
      for (int i = 0; i < 110; i++)
      {
        slowBack();
      }

      stopMotor();
      wait();
      randRotate();
      wait();
      debug = 0;
      ripCandle = 0;
    }

    //............................................................................................................................
    //... ultrasonic and no candle avoiding ... prototype!!!!!!!
    /*
    if (((digitalRead(ultrasonicFront) == LOW) or
         (digitalRead(ultrasonicFrontLeft) == LOW) or
         (digitalRead(ultrasonicFrontRight) == LOW)) and
        (digitalRead(candle1) == HIGH))
    {
      stopMotor();
      wait();
      for (int i = 0; i < twenty; i++)
      {
        slowBack();

        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (analogRead(IRlineBackR) line IRlineBackValue) or
            (digitalRead(RGBlineBack) == rgbLow) or
            (digitalRead(IRlineLeftB) line IRlineLeftValue) or
            (digitalRead(IRlineRightB) line IRlineRightValue))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 70; i++)
          {
            slowCcw();
          }
        }
      }
      stopMotor();
      wait();
      randRotate();
    }
*/

    //............................................................................................................................
    //... ultrasonic and no candle Normal Mode mode (high) (switch0)!
    if (((digitalRead(ultrasonicFront) == LOW) or
         (digitalRead(ultrasonicFrontLeft) == LOW) or
         (digitalRead(ultrasonicFrontRight) == LOW)) and
        ((digitalRead(candle1) == HIGH) and
         (digitalRead(backup) == HIGH) and
         (digitalRead(mode) == HIGH)))
    {
      debug = 0;
      fcc = 0;
      stopMotor();
      wait();
      wait();
      for (int i = 0; i < 35; i++)
      {
        slowForward();
      }
      stopMotor();
      wait();

      for (int i = 0; i < 214; i++)
      {
        cw();
      }
      wait();
      for (int i = 0; i < 1900; i++)
      {
        ccwCircle();

        if ((analogRead(IRlineLeftF) line IRlineLeftValue) or
            (analogRead(IRlineFrontL) line IRlineFrontValue) or
            (digitalRead(RGBlineLeft) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 90; i++)
          {
            slowBackRight();
          }
          stopMotor();
          wait();
          break;
        }

        if ((analogRead(IRlineFrontR) line IRlineFrontValue) or
            (analogRead(IRlineRightF) line IRlineRightValue) or
            (analogRead(IRlineRightB) line IRlineRightValue) or
            (digitalRead(RGBlineRight) == rgbLow) or
            (digitalRead(RGBlineFront) == rgbLow))
        {
          fcc = 0;
          stopMotor();
          wait();
          for (int i = 0; i < 70; i++)
          {
            slowBackLeft();
          }
          wait();
          break;
          fcc = 4;
        }

        if (digitalRead(candle7) == LOW)
        {
          stopMotor();
          wait();
          for (int i = 0; i < 120; i++)
          {
            ccwCircle();
          }
          stopMotor();
          wait();
          ccw90();
          wait();
          candle = true;
          wait();
          fcc = 4;
          break;
        }

        if (digitalRead(candle8) == LOW)
        {
          stopMotor();
          wait();
          ccw135();
          wait();
          candle = true;
          wait();
          fcc = 4;
          break;
        }
      }
      if (fcc == 0)
      {
        wait();
        randRotateRight();
        wait();
      }
      else
      {
        stopMotor();
        wait();
      }
      debug = 0;
    }

    //............................................................................................................................
    //...front line! and no candle

    if (((analogRead(IRlineFrontL) line IRlineFrontValue) and
         (analogRead(IRlineFrontR) line IRlineFrontValue)) and
        ((candle == false) and
         (digitalRead(candle1) == HIGH)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 150; i++)
      {
        slowBack();

        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (analogRead(IRlineBackR) line IRlineBackValue) or
            (digitalRead(RGBlineBack) == rgbLow) or
            (digitalRead(IRlineLeftB) line IRlineLeftValue) or
            (digitalRead(IRlineRightB) line IRlineRightValue))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            slowCcw();
          }
        }
      }

      for (int i = 0; i < 90; i++)
      {
        slowBack();
      }

      stopMotor();
      wait();
      randRotate();
    }

    //............................................................................................................................
    //...right line and no candle
    if (((analogRead(IRlineFrontR) line IRlineFrontValue) or
         (analogRead(IRlineRightF) line IRlineRightValue) or
         (digitalRead(RGBlineRight) == rgbLow)) and
        ((candle == false) and
         (digitalRead(candle1) == HIGH)))
    {

      debug++;
      stopMotor();
      wait();
      for (int i = 0; i < twenty; i++)
      {
        backLeft();

        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (digitalRead(IRlineLeftB) line IRlineLeftValue) or
            (digitalRead(RGBlineLeft) == rgbLow) or
            (digitalRead(RGBlineBack) == rgbLow))
        {
          //debug++;

          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowForwardRight();
          }
          break;
          wait();
        }

        if ((analogRead(IRlineFrontL) line IRlineFrontValue) or
            (digitalRead(IRlineLeftF) line IRlineLeftValue))
        {
          debug++;
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowBackRight();
          }
          break;
          wait();
        }

        if ((analogRead(IRlineBackR) line IRlineBackValue) or
            (digitalRead(RGBlineRight) == rgbLow) or
            (digitalRead(IRlineRightB) line IRlineRightValue))
        {
          debug++;
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowForwardLeft();
          }
          break;
          wait();
        }

        if (((analogRead(IRlineLeftF) line IRlineLeftValue) or
             (analogRead(IRlineFrontL) line IRlineFrontValue)) and
            ((analogRead(IRlineRightB) line IRlineRightValue) or
             (analogRead(IRlineBackR) line IRlineBackValue)))
        {
          debug++;
          for (int i = 0; i < 40; i++)
          {
            slowBackLeft();
          }
          stopMotor();
          wait();
          break;
        }

        if (((analogRead(IRlineLeftB) line IRlineLeftValue) or
             (analogRead(IRlineBackL) line IRlineBackValue)) and
            ((analogRead(IRlineRightF) line IRlineRightValue) or
             (analogRead(IRlineFrontR) line IRlineFrontValue)))
        {
          debug++;
          for (int i = 0; i < 90; i++)
          {
            slowBackRight();
          }
          stopMotor();
          wait();
          if (debug >= 10)
          {
            stopMotor();
            wait();
            wait();

            //randRotate();
            for (int i = 0; i < 180; i++)
            {
              slowBack();
            }
            wait();
            debug = 0;
          }
          break;
        }
      }

      stopMotor();
      wait();
      randRotateLeft();
    }

    //............................................................................................................................
    //...left line and no candle
    if (((analogRead(IRlineFrontL) line IRlineFrontValue) or
         (analogRead(IRlineLeftF) line IRlineLeftValue) or
         (digitalRead(RGBlineLeft) == rgbLow)) and
        ((candle == false) and
         (digitalRead(candle1) == HIGH)))
    {
      debug++;
      stopMotor();
      wait();
      for (int i = 0; i < twenty; i++)
      {
        backRight();

        if ((analogRead(IRlineBackR) line IRlineBackValue) or
            (digitalRead(RGBlineBack) == rgbLow) or
            (digitalRead(IRlineRightB) line IRlineRightValue) or
            (digitalRead(RGBlineRight) == rgbLow))
        {
          debug++;
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowForwardLeft();
          }
          break;
          wait();
        }

        if ((analogRead(IRlineFrontR) line IRlineFrontValue) or
            (digitalRead(IRlineRightF) line IRlineRightValue))
        {
          debug++;
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowBackLeft();
          }
          break;
          wait();
        }

        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (digitalRead(RGBlineLeft) == rgbLow) or
            (digitalRead(IRlineLeftB) line IRlineLeftValue))
        {
          debug++;
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            if (debug >= 10)
            {
              stopMotor();
              wait();
              wait();

              //randRotate();
              for (int i = 0; i < 180; i++)
              {
                slowBack();
              }
              wait();
              debug = 0;
            }
            slowForwardRight();
          }
          break;
          wait();
        }

        if (((analogRead(IRlineLeftF) line IRlineLeftValue) or
             (analogRead(IRlineFrontL) line IRlineFrontValue)) and
            ((analogRead(IRlineRightB) line IRlineRightValue) or
             (analogRead(IRlineBackR) line IRlineBackValue)))
        {
          debug++;
          for (int i = 0; i < 40; i++)
          {
            slowBackLeft();
          }
          stopMotor();
          wait();
          if (debug >= 10)
          {
            stopMotor();
            wait();
            wait();

            //randRotate();
            for (int i = 0; i < 180; i++)
            {
              slowBack();
            }
            wait();
            debug = 0;
          }
          break;
        }

        if (((analogRead(IRlineLeftB) line IRlineLeftValue) or
             (analogRead(IRlineBackL) line IRlineBackValue)) and
            ((analogRead(IRlineRightF) line IRlineRightValue) or
             (analogRead(IRlineFrontR) line IRlineFrontValue)))
        {
          debug++;
          for (int i = 0; i < 40; i++)
          {
            slowBackRight();
          }
          stopMotor();
          wait();
          break;
        }
      }

      if (debug >= 10)
      {
        stopMotor();
        wait();
        wait();

        //randRotate();
        for (int i = 0; i < 180; i++)
        {
          slowBack();
        }
        wait();
        debug = 0;
      }
      stopMotor();
      wait();
      randRotateRight();
    }

    //............................................................................................................................
    //............................................................................................................................
    //............................................................................................................................
    //...debug in circle

    if (debug >= 10)
    {
      stopMotor();
      wait();
      wait();

      //randRotate();
      for (int i = 0; i < 180; i++)
      {
        slowBack();
      }
      wait();
      debug = 0;
    }
    //............................................................................................................................
    //............................................................................................................................
    //............................................................................................................................
    //...front line! and no candle now -  last candle true

    if (((analogRead(IRlineFrontL) line IRlineFrontValue) or
         (analogRead(IRlineFrontR) line IRlineFrontValue) or
         (analogRead(IRlineLeftF) line IRlineLeftValue) or
         (analogRead(IRlineRightF) line IRlineRightValue)) and
        (candle == true) and
        ((digitalRead(candle1) == HIGH) or (digitalRead(candle1) == LOW)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 80; i++)
      {
        slowCcw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            slowForward();
          }

          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          debug = 0;
          propellerFrontOFF();
          candle = false;
          wait();

          for (int i = 0; i < 50; i++)
          {
            slowBack();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 165; i++)
      {
        slowCw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          for (int i = 0; i < 40; i++)
          {
            slowForward();
          }
          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          debug = 0;
          propellerFrontOFF();
          candle = false;
          wait();
          for (int i = 0; i < 50; i++)
          {
            slowBack();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 20; i++)
      {
        slowBack();
      }
      candle = false;
      stopMotor();
      wait();
      candle = false;
    }

    /*    
    //... not debugged!!!!
    //............................................................................................................................
    //...right line and no candle now - last candle  true
    if (((analogRead(IRlineFrontR) line IRlineFrontValue) or
          (analogRead(IRlineRightF) line IRlineRightValue) or
         (digitalRead(RGBlineLeft))) and
        ((candle == true) and
         (digitalRead(candle1) == HIGH)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 80; i++)
      {
        slowCcw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          candle = false;
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 165; i++)
      {
        slowCw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          candle = false;
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 18; i++)
      {
        slowBack();
      }
      candle = false;
      stopMotor();
      wait();
      candle = false;
    }

    //... not debugged!!!!
    //............................................................................................................................
    //...left line and no candle now - last candle  true
    if (((analogRead(IRlineFrontL) line IRlineFrontValue) or
          (analogRead(IRlineLeftF) line IRlineLeftValue) or
         (digitalRead(RGBlineLeft) == rgbLow)) and
        ((candle == true) and
         (digitalRead(candle1) == HIGH)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 80; i++)
      {
        slowCcw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          candle = false;
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 165; i++)
      {
        slowCw();

        if ((digitalRead(candle1) == LOW) or (digitalRead(backup) == LOW))
        {
          stopMotor();
          wait();
          debug = 0;
          propellerFrontON();
          delay(900);
          propellerFrontOFF();
          candle = false;
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      for (int i = 0; i < 18; i++)
      {
        slowBack();
      }
      candle = false;
      stopMotor();
      wait();
      candle = false;
    }


    */
    //............................................................................................................................
    //............................................................................................................................

    //...front line and candle
    if (((digitalRead(candle1) == LOW) or
         (digitalRead(backup) == LOW)) and
        ((digitalRead(RGBlineFront) == rgbLow) or
         (analogRead(IRlineFrontL) line IRlineFrontValue) or
         (analogRead(IRlineFrontR) line IRlineFrontValue))) // or
    //   (analogRead(IRlineRightF) line IRlineRightValue) or
    //  (analogRead(IRlineLeftF) line IRlineLeftValue)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 10; i++)
      {
        slowBack();
      }
      stopMotor();
      wait();
      debug = 0;
      propellerFrontON();
      delay(900);
      debug = 0;
      propellerFrontOFF();

      for (int i = 0; i < 50; i++)
      {
        back();
      }
      stopMotor();
      candle = false;
      wait();
      candle = false;
      randRotate();
    }

    //............................................................................................................................
    //...rightCandle
    if (digitalRead(candle3) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowRight();
        rC++;
        if ((analogRead(IRlineRightB) line IRlineRightValue) or
            (analogRead(IRlineRightF) line IRlineRightValue) or
            (digitalRead(RGBlineRight) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowLeft();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        cw90();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...leftCandle
    if (digitalRead(candle7) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowLeft();
        rC++;
        if ((analogRead(IRlineLeftB) line IRlineLeftValue) or
            (analogRead(IRlineLeftF) line IRlineLeftValue) or
            (digitalRead(RGBlineLeft) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowRight();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        ccw90();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...frontRightCandle
    if (digitalRead(candle2) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowForwardRight();
        rC++;
        if ((analogRead(IRlineFrontR) line IRlineFrontValue) or
            (analogRead(IRlineRightF) line IRlineRightValue) or
            (digitalRead(RGBlineRight) == rgbLow) or
            (digitalRead(RGBlineFront) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowBackLeft();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        cw45();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...frontLeftCandle
    if (digitalRead(candle6) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowForwardLeft();
        rC++;
        if ((analogRead(IRlineFrontL) line IRlineFrontValue) or
            (analogRead(IRlineLeftF) line IRlineLeftValue) or
            (digitalRead(RGBlineLeft) == rgbLow) or
            (digitalRead(RGBlineFront) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowBackRight();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        ccw45();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...backLeftCandle
    if (digitalRead(candle8) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowBackLeft();
        rC++;
        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (analogRead(IRlineLeftB) line IRlineLeftValue) or
            (digitalRead(RGBlineLeft) == rgbLow) or
            (digitalRead(RGBlineBack) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowForwardRight();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        ccw135();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...backRightCandle
    if (digitalRead(candle4) == LOW)
    {
      debug = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowBackRight();
        rC++;
        if ((analogRead(IRlineBackR) line IRlineBackValue) or
            (analogRead(IRlineRightB) line IRlineRightValue) or
            (digitalRead(RGBlineRight) == rgbLow) or
            (digitalRead(RGBlineBack) == rgbLow))
        {
          stopMotor();
          wait();
          for (int i = 0; i < ten; i++)
          {
            slowForwardLeft();
          }
          stopMotor();
          wait();
          break;
        }
      }
      stopMotor();
      wait();
      if ((rC) >= 9)
      {
        cw135();
      }
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...backCandle
    if (digitalRead(candle5) == LOW)
    {
      debug = 0;
      rC = 0;
      rC = 0;
      stopMotor();
      wait();
      for (int i = 0; i < fourty; i++)
      {
        slowBack();
        rC++;
        if ((analogRead(IRlineBackL) line IRlineBackValue) or
            (analogRead(IRlineBackR) line IRlineBackValue) or
            (digitalRead(RGBlineBack) == rgbLow) or
            (analogRead(IRlineLeftB) line IRlineLeftValue) or
            (analogRead(IRlineRightB) line IRlineRightValue))

        {
          stopMotor();
          wait();
          for (int i = 0; i < 30; i++)
          {
            slowForward();
          }
        

        for (int i = 0; i < 85; i++)
        {
          slowCcw();

          if (digitalRead(candle5) == LOW)
          {

            stopMotor();
            wait();
            propellerRearON();
            delay(900);
            propellerRearOFF();
            wait();
            break;
          }
        }

        stopMotor();
        wait();

        for (int i = 0; i < 170; i++)
        {
          slowCw();

          if (digitalRead(candle5) == LOW)
          {
            stopMotor();
            wait();
            propellerRearON();
            delay(900);
            propellerRearOFF();
            wait();
            break;
          }
        }
      }
      }

      stopMotor();
      wait();
      if ((rC) >= 330)
      {
        cw180();
      }
      stopMotor();
      wait();
      rC = 0;
      candle = true;
      wait();
      rC = 0;
      candle = true;
    }

    //............................................................................................................................
    //...Debugging
    if (((digitalRead(ultrasonicFront) == LOW) or
         (digitalRead(ultrasonicFrontLeft) == LOW) or
         (digitalRead(ultrasonicFrontRight) == LOW)) and
        ((analogRead(IRlineFrontL) line IRlineFrontValue) or
         (analogRead(IRlineFrontR) line IRlineFrontValue)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < 20; i++)
      {
        slowBackRight();
      }
      stopMotor();
      wait();
    }

    //............................................................................................................................
    //...stopButton
    if (digitalRead(button) == LOW)
    {
      stopMotor();
      delay(1000);
      btt = 0;
    }

  } //...btt loop
} //... void loop
