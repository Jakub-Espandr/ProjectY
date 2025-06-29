#include <Arduino.h>

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

//  rev. 1.1

// REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW
//    REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW  REVIEW

/*......................................................................................................................
   DEFINITONS, VARIABLES, STATIC
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
  propellerFront.write(50);
  propellerRear.write(50);

  delay(1000);

  propellerFront.write(60);
  propellerRear.write(60);

  delay(1000);

  propellerFront.write(70);
  propellerRear.write(70);

  delay(1000);

  propellerFront.write(80);
  propellerRear.write(80);

  delay(1000);

  propellerFront.write(90);
  propellerRear.write(90);

  delay(1000);

  propellerFront.write(100);
  propellerRear.write(100);

  delay(1000);
}

//.....................................................
//... turn ON front propeller
void propellerFrontON()
{
  for (pos = 0; pos < 140; pos += 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
}
//.....................................................
//... turn ON rear propeller
void propellerRearON()
{
  for (pos = 0; pos < 140; pos += 5)
  {
    propellerRear.write(pos);
    delay(15);
  }
}

//.....................................................
//.....................................................
//.....................................................

//... turn OFF front propeller
void propellerFrontOFF()
{
  for (pos = 140; pos >= 1; pos -= 5)
  {
    propellerFront.write(pos);
    delay(15);
  }
  delay(1000);
  propellerFront.write(0);
}

//.....................................................
//... turn OFF rear propeller
void propellerRearOFF()
{
  for (pos = 140; pos >= 1; pos -= 5)
  {
    propellerRear.write(pos);
    delay(15);
  }
  delay(1000);
  propellerRear.write(0);
}

//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//###################################################################################################################################################################################################################################################### |
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– # |
#define stepTime 1300  //...time during normal step                                                                                                                                                                                             //  | # |
#define stepTime2 1500 //...time during slower step                                                                                                                                                                                             //  | # |
#define stepTime3 1700 //...time during extremly slow step                                                                                                                                                                                      //  | # |
//                                                                                                                                                                                                                                               //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define ms1 LOW  //...microstepping                                                                                                                                                                                                       //  | # |
#define ms2 LOW  //...microstepping                                                                                                                                                                                                       //  | # |
#define ms3 HIGH //...microstepping                                                                                                                                                                                                       //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define IRlineFrontValue 200 //... Value for IR sensor Front                                                                                                                                                                                     //  | # |
#define IRlineBackValue 200  //... Value for IR sensor Back                                                                                                                                                                                      //  | # |
#define IRlineLeftValue 200  //... Value for IR sensor Left                                                                                                                                                                                      //  | # |
#define IRlineRightValue 200 //... Value for IR sensor Right                                                                                                                                                                                     //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define candleValue 300  //  | # |
#define candleValue2 300 //  | # |
#define candleValue3 300 //  | # |
//                                                                                                                                                                                                                                               //  | # |
//                                                          OFF 0,0,0 ;  (1) 0,0,1 ;  (1/2A)  0,1,0  ;  (1/4)  0,1,1  ;   (1/2B)   1,0,0   ;    (1/8)   1,0,1                                                                                    //  | # |                                                                                                                                        //  | # |
//                                                                                                                                                                                                                                               //  | # |
//###################################################################################################################################################################################################################################################### |
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//########################################################################################################################################################################################################################################################

#define padesat 525  //...go 50cm
#define ctyricet 420 //...go 40cm
#define tricet 315   //...go 30cm
#define dvacet 210   //...go 20cm
#define deset 105    //...go 10cm

int state;      //...for preventing misscorection due the multiple sensor obstruction
int btt;        //...for button counter
int randNumber; //...generated random number for degrees
int randState;  //...generated random number for direction
int randState2; //...secondary backup random number

#define IRlineFront A15 //...IRline PIN
#define IRlineRight A14 //...IRline PIN
#define IRlineLeft A12  //...IRline PIN
#define IRlineBack A13  //...IRline PIN

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

#define RGBlineFront A8 //...RGBline PIN
#define RGBlineBack A10 //...RGBline PIN
#define RGBlineRight A9 //...RGBline PIN
#define RGBlineLeft A11 //...RGBline PIN

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

#define button 13 //...PIN for START & STOP button

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//!!!!!!!!!!!!!!!!!!!!!!!!!!!
// define motor PAUSE
void wait()
{
  delay(250);
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!

//...............................................................................................................................................................................................................................................
//... dopredu

void dopredu()
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
//... dozadu

void dozadu()
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

  delayMicroseconds(stepTime3); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3); //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... dojezd

void dojezd()
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
//... doprava

void doprava()
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
//... doleva

void doleva()
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
//... dopreduDoprava

void dopreduDoprava()
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
//... dopreduDoleva

void dopreduDoleva()
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
//... dozaduDoleva

void dozaduDoleva()
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
//... dozaduDoprava

void dozaduDoprava()
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
//... CCW dle C motoru

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
//... CW dle D motoru

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

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

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

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime); //delay for motor relation

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
    randNumber = random(100, 180);
    //Serial.println(randState);
    for (int i = 0; i < randNumber; i++)
    {
      cw();
    }
  }

  if (randState <= 7)
  {
    randNumber = random(100, 180);
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
  randNumber = random(100, 180);
  //Serial.println(randState);
  for (int i = 0; i < randNumber; i++)
  {
    cw();
  }
}

//...............................................................................................................................................................................................................................................
//... randomRotateLeft
void randRotateLeft()
{
  randNumber = random(100, 180);
  //Serial.println(randState);
  for (int i = 0; i < randNumber; i++)
  {
    ccw();
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

  pinMode(IRlineFront, INPUT); //...FrontIRLineSensor
  pinMode(IRlineBack, INPUT);  //...BackIRLineSensor
  pinMode(IRlineLeft, INPUT);  //...LeftIRLineSensor
  pinMode(IRlineRight, INPUT); //...RightIRLineSensor

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

  pinMode(candle1, INPUT); //...candle PIN
  pinMode(candle2, INPUT); //...candle PIN
  pinMode(candle3, INPUT); //...candle PIN
  pinMode(candle4, INPUT); //...candle PIN
  pinMode(candle5, INPUT); //...candle PIN
  pinMode(candle6, INPUT); //...candle PIN
  pinMode(candle7, INPUT); //...candle PIN
  pinMode(candle8, INPUT); //...candle PIN

  pinMode(button, INPUT_PULLUP); //...start and emergency stop button

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

  digitalWrite(51, LOW);  //... GND for Toshiba drivers
  digitalWrite(53, HIGH); //... VCC for Toshiba drivers

  arm();
  state = 0;
  btt = 0;
  randomSeed(13);
  Serial.begin(9600);
}

//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP

void loop()
{
  //...start button
  if (digitalRead(button) == LOW)
  {
    btt++;
    delay(400);
  }

  if (btt >= 1)
  {
    dopredu();

    //...ultrasonic Front     AND NO CANDLE!!
    if ((digitalRead(ultrasonicFront) == LOW) &&
        ((analogRead(candle1) < candleValue)) &&
        ((analogRead(candle2) < candleValue)) &&
        ((analogRead(candle3) < candleValue)) &&
        ((analogRead(candle4) < candleValue)) &&
        ((analogRead(candle5) < candleValue)) &&
        ((analogRead(candle6) < candleValue)) &&
        ((analogRead(candle7) < candleValue)) &&
        ((analogRead(candle8) < candleValue)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotate();
      wait();
    }

    //........................................................................................................................................
    //...front RGB line OR IR line     AND NO CANDLE!!
    if (((digitalRead(RGBlineFront) == LOW) || (analogRead(IRlineFront) < IRlineFrontValue)) &&
        (((analogRead(candle1) < candleValue)) &&
         ((analogRead(candle2) < candleValue)) &&
         ((analogRead(candle3) < candleValue)) &&
         ((analogRead(candle4) < candleValue)) &&
         ((analogRead(candle5) < candleValue)) &&
         ((analogRead(candle6) < candleValue)) &&
         ((analogRead(candle7) < candleValue)) &&
         ((analogRead(candle8) < candleValue))))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotate();
      wait();
    }

    //........................................................................................................................................
    //...front right IR line  IR line     AND NO CANDLE!!
    if (((digitalRead(RGBlineFront) == LOW) || ((analogRead(IRlineFront) < IRlineFrontValue) && (analogRead(IRlineRight) < IRlineRightValue))) &&
        (((analogRead(candle1) < candleValue)) &&
         ((analogRead(candle2) < candleValue)) &&
         ((analogRead(candle3) < candleValue)) &&
         ((analogRead(candle4) < candleValue)) &&
         ((analogRead(candle5) < candleValue)) &&
         ((analogRead(candle6) < candleValue)) &&
         ((analogRead(candle7) < candleValue)) &&
         ((analogRead(candle8) < candleValue))))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotateLeft();
      wait();
    }

    //........................................................................................................................................
    //...front left IR line  IR line    AND NO CANDLE!!
    if (((digitalRead(RGBlineFront) == LOW) || ((analogRead(IRlineFront) < IRlineFrontValue) && (analogRead(IRlineLeft) < IRlineLeftValue))) &&
        (((analogRead(candle1) < candleValue)) &&
         ((analogRead(candle2) < candleValue)) &&
         ((analogRead(candle3) < candleValue)) &&
         ((analogRead(candle4) < candleValue)) &&
         ((analogRead(candle5) < candleValue)) &&
         ((analogRead(candle6) < candleValue)) &&
         ((analogRead(candle7) < candleValue)) &&
         ((analogRead(candle8) < candleValue))))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotateRight();
      wait();
    }

    //........................................................................................................................................
    //...frontRight ultrasonic       AND NO CANDLE!!
    if ((digitalRead(ultrasonicFrontRight) == LOW) &&
        ((analogRead(candle1) < candleValue)) &&
        ((analogRead(candle2) < candleValue)) &&
        ((analogRead(candle3) < candleValue)) &&
        ((analogRead(candle4) < candleValue)) &&
        ((analogRead(candle5) < candleValue)) &&
        ((analogRead(candle6) < candleValue)) &&
        ((analogRead(candle7) < candleValue)) &&
        ((analogRead(candle8) < candleValue)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotateLeft();
      wait();
    }

    //........................................................................................................................................
    //...frontLeft ultrasonic        AND NO CANDLE!!
    if ((digitalRead(ultrasonicFrontLeft) == LOW) &&
        ((analogRead(candle1) < candleValue)) &&
        ((analogRead(candle2) < candleValue)) &&
        ((analogRead(candle3) < candleValue)) &&
        ((analogRead(candle4) < candleValue)) &&
        ((analogRead(candle5) < candleValue)) &&
        ((analogRead(candle6) < candleValue)) &&
        ((analogRead(candle7) < candleValue)) &&
        ((analogRead(candle8) < candleValue)))
    {
      stopMotor();
      wait();
      for (int i = 0; i < dvacet; i++)
      {
        dozadu();
      }
      wait();
      randRotateRight();
      wait();
    }

/*
    //........................................................................................................................................
    //...right candle   AND NO LINE and OBSTACLE!!
    if ((analogRead(candle3) > candleValue) and (analogRead(candle1) < candleValue))
    {
      stopMotor();
      wait();
      for (int i = 0; i < padesat; i++)
      {
        
      }
      
    }
*/

  } //...dopredu 4loop

  //...STOP button
  if (digitalRead(button) == LOW)
  {
    stopMotor();
    btt = 0;
    delay(1000);
  } //...btt END curly bracket
}
