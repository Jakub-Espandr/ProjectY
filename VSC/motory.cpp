#include <Arduino.h>


/*

       ```````````````````````                                                                                                                                                                           ```````````````             ``````
       mmmmmmmNNNNNmmmmmmmmmdhs+.`                                                                 `.sMsm`                                                              ```````````                      `smmmmmmmmmNNNNNo           `hNNNh.
      +s:/sssdMMMMM-````-sooNNMMMd+`                                                             `/mN-hMdm-                                                             hdddddddddd.                       .ss-+sssyNMMMMMo         `hMMMy`
      yM+/ssshMMMMM`    -Md.ssmMMMMd-                                                           /dMy+hMMNm:                                                            os:sssdMMMM`                        -mm:/ssssNMMMMMs        yMMN+
      sM+/ssshMMMMN     -Md.ssshMMMMN.                                                        :hmy-:+/:-`                                                              NM.sssdMMMM                          `hN//osssdMMMMMs      yMMm:
      +M+/ooohMMMMN     -Md.ooooNMMMMy   .///////////`  .:.so         `:+osyyyso+:`                                  -/osyyyyso/-                  .:+ossssso/:.     //NM.ooodMMMN//////                      oMs/ooooyMMMMMy`  `hMMd.
      /M++yyydMMMMm     -Md-yyyymMMMMN   -yyyyyymMMMM:smNy:Md      :ymMMMNo+++oshNMms:        syyyyyhMMMMy       `+hNMMMMo+/+oymMNy/           `/yNMMMMssssydNMMNdo sMMMM.yyymMMMMMMMMMM                       /Nh:yyyyyMMMMMd``hMMy`
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
  88 - 150 DEFINITONS, VARIABLES, STATIC
  155 - 726 void
  732 - 774 void setup
  782 - 1374 void loop
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







//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//###################################################################################################################################################################################################################################################### |
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– # |
#define stepTime 1100                                                                                                                                                                                                                            //  | # |
#define stepTime2 1200                                                                                                                                                                                                                           //  | # |
#define stepTime3 2000      //VALUES VALUE VALUES VALUES VALUES VALUES VALUES VALUES VALUES VALUE VALUES VALUES VALUES VALUES VALUES VALUES VALUES VALUE VALUES VALUES VALUES VALUES VALUES VALUES VALUES VALUE VALUES VALUES VALUES             //  | # |
//                                                                                                                                                                                                                                               //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define ms1 LOW                                                                                                                                                                                                                                  //  | # |
#define ms2 LOW                                                                                                                                                                                                                                   //  | # |
#define ms3 HIGH                                                                                                                                                                                                                                //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define IRlineFrontValue 200        //... Value for IR sensor Front                                                                                                                                                                              //  | # |
#define IRlineBackValue 200         //... Value for IR sensor Back                                                                                                                                                                               //  | # |
#define IRlineLeftValue 200         //... Value for IR sensor Left                                                                                                                                                                               //  | # |
#define IRlineRightValue 200        //... Value for IR sensor Right                                                                                                                                                                              //  | # |
//                                                                                                                                                                                                                                               //  | # |
#define candleValue 300                                                                                                                                                                                                                          //  | # |
#define candleValue2 300                                                                                                                                                                                                                         //  | # |
#define candleValue3 300                                                                                                                                                                                                                         //  | # |
//                                                                                                                                                                                                                                               //  | # |
//                                                          OFF 0,0,0 ;  (1) 0,0,1 ;  (1/2A)  0,1,0  ;  (1/4)  0,1,1  ;   (1/2B)   1,0,0   ;    (1/8)   1,0,1                                                                                    //  | # |                                                                                                                                        //  | # |
//                                                                                                                                                                                                                                               //  | # |
//###################################################################################################################################################################################################################################################### |
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
//########################################################################################################################################################################################################################################################

#define padesat 525         //...go 50cm 
#define ctyricet 420        //...go 40cm
#define tricet 315          //...go 30cm
#define dvacet 210          //...go 20cm
#define deset 105           //...go 10cm




#define IRlineFront A15     //...IRline PIN
#define IRlineRight A14     //...IRline PIN
#define IRlineLeft A12      //...IRline PIN
#define IRlineBack A13      //...IRline PIN

/*
     A15ch0        A15ch1
  A12ch1     /\       A14ch0
            /||\
             ||
  A12ch0     ||       A14ch1
     A13ch1        A13ch0
*/

#define RGBlineFront A11     //...RGBline PIN
#define RGBlineBack A10      //...RGBline PIN
#define RGBlineRight A9      //...RGBline PIN
#define RGBlineLeft A8       //...RGBline PIN


#define enableA 22     //...enable PIN
#define enableB 30     //...enable PIN
#define enableC 38     //...enable PIN
#define enableD 46     //...enable PIN

#define ms1A 24        //...msA PIN
#define ms2A 28        //...msA PIN
#define ms3A 26        //...msA PIN

#define ms1B 32        //...msB PIN
#define ms2B 36        //...msB PIN
#define ms3B 34        //...msB PIN

#define ms1C 40        //...msC PIN
#define ms2C 42        //...msC PIN
#define ms3C 44        //...msC PIN

#define ms1D 48        //...msD PIN
#define ms2D 50        //...msD PIN
#define ms3D 52        //...msD PIN

#define stepA 25       //...stepA PIN
#define stepB 27       //...stepB PIN
#define stepC 31       //...stepC PIN
#define stepD 37       //...stepD PIN

#define dirA 23        //...dirA PIN
#define dirB 29        //...dirB PIN
#define dirC 33        //...dirC PIN
#define dirD 35        //...dirD PIN

#define candle1 A0     //...candle1 PIN           
#define candle2 A1     //...candle2 PIN
#define candle3 A2     //...candle3 PIN
#define candle4 A3     //...candle4 PIN
#define candle5 A4     //...candle5 PIN
#define candle6 A5     //...candle6 PIN
#define candle7 A6     //...candle7 PIN
#define candle8 A7     //...candle8 PIN


#define ultrasonicFront 4       //...PIN from "ultrasonic" arduino
#define ultrasonicBack 5        //...PIN from "ultrasonic" arduino
#define ultrasonicLeft 7        //...PIN from "ultrasonic" arduino
#define ultrasonicRight 6       //...PIN from "ultrasonic" arduino
#define ultrasonicFrontRight 8  //...PIN from "ultrasonic" arduino
#define ultrasonicFrontLeft 9   //...PIN from "ultrasonic" arduino
#define ultrasonicBackRight 10  //...PIN from "ultrasonic" arduino
#define ultrasonicBackLeft 11   //...PIN from "ultrasonic" arduino




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


//...............................................................................................................................................................................................................................................
//... vetrakPredni




//...............................................................................................................................................................................................................................................
//... vetrakZadni



//...............................................................................................................................................................................................................................................
//... dopredu

void dopredu() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... dozadu

void dozadu() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... stop

void stopMotor() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... dojezd

void dojezd() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... doprava

void doprava() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... doleva

void doleva() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... cw

void cw() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... ccw

void ccw() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... dopreduDoprava

void dopreduDoprava() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... dopreduDoleva

void dopreduDoleva() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime);   //delay for motor relation

}

//...............................................................................................................................................................................................................................................
//... dozaduDoleva

void dozaduDoleva() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation


}

//...............................................................................................................................................................................................................................................
//... dozaduDoprava

void dozaduDoprava() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... CCW dle C motoru

void ccwC() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime3);   //delay for motor relation
}


//...............................................................................................................................................................................................................................................
//... CW dle D motoru

void cwD() {

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

  delayMicroseconds(stepTime3);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime3);   //delay for motor relation
}

//...............................................................................................................................................................................................................................................
//... circle CCW

void ccwCircle() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, LOW);

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);
}

//...............................................................................................................................................................................................................................................
//... circle CW

void cwCircle() {

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

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, HIGH);
  digitalWrite(stepB, HIGH);
  digitalWrite(stepC, HIGH);
  digitalWrite(stepD, HIGH);

  delayMicroseconds(stepTime);   //delay for motor relation

  digitalWrite(stepA, LOW);
  digitalWrite(stepB, LOW);
  digitalWrite(stepC, LOW);
  digitalWrite(stepD, LOW);
}

//    SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//    SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP SETUP

void setup() {
  pinMode(enableA, OUTPUT);  //...stepperDriver power switch
  pinMode(enableB, OUTPUT);  //...stepperDriver power switch
  pinMode(enableC, OUTPUT);  //...stepperDriver power switch
  pinMode(enableD, OUTPUT);  //...stepperDriver power switch

  pinMode(ms1A, OUTPUT);     //...stepperDriverA ms1
  pinMode(ms2A, OUTPUT);     //...stepperDriverA ms2
  pinMode(ms3A, OUTPUT);     //...stepperDriverA ms3

  pinMode(ms1B, OUTPUT);     //...stepperDriverB ms1
  pinMode(ms2B, OUTPUT);     //...stepperDriverB ms2
  pinMode(ms3B, OUTPUT);     //...stepperDriverB ms3

  pinMode(ms1C, OUTPUT);     //...stepperDriverC ms1
  pinMode(ms2C, OUTPUT);     //...stepperDriverC ms2
  pinMode(ms3C, OUTPUT);     //...stepperDriverC ms3

  pinMode(ms1D, OUTPUT);     //...stepperDriverC ms1
  pinMode(ms2D, OUTPUT);     //...stepperDriverC ms2
  pinMode(ms3D, OUTPUT);     //...stepperDriverC ms3


  pinMode(stepA, OUTPUT);    //...stepperDriverA step
  pinMode(stepB, OUTPUT);    //...stepperDriverB step
  pinMode(stepC, OUTPUT);    //...stepperDriverC step
  pinMode(stepD, OUTPUT);    //...stepperDriverD step

  pinMode(dirA, OUTPUT);     //...stepperDriverA dir
  pinMode(dirB, OUTPUT);     //...stepperDriverB dir
  pinMode(dirC, OUTPUT);     //...stepperDriverC dir
  pinMode(dirD, OUTPUT);     //...stepperDriverD dir


  pinMode(IRlineFront, INPUT);   //...FrontIRLineSensor
  pinMode(IRlineBack, INPUT);    //...BackIRLineSensor
  pinMode(IRlineLeft, INPUT);    //...LeftIRLineSensor
  pinMode(IRlineRight, INPUT);   //...RightIRLineSensor

  pinMode(RGBlineFront, INPUT);    //...RGBline PIN
  pinMode(RGBlineBack, INPUT);     //...RGBline PIN
  pinMode(RGBlineRight, INPUT);    //...RGBline PIN
  pinMode(RGBlineLeft, INPUT);     //...RGBline PIN

  pinMode(ultrasonicFront, INPUT_PULLUP);      //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBack, INPUT_PULLUP);       //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicLeft, INPUT_PULLUP);       //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicRight, INPUT_PULLUP);      //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicFrontRight, INPUT_PULLUP); //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicFrontLeft, INPUT_PULLUP);  //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBackRight, INPUT_PULLUP);  //...PIN from "ultrasonic" arduino
  pinMode(ultrasonicBackLeft, INPUT_PULLUP);   //...PIN from "ultrasonic" arduino

  pinMode(candle1, INPUT);   //...candle PIN
  pinMode(candle2, INPUT);   //...candle PIN
  pinMode(candle3, INPUT);   //...candle PIN
  pinMode(candle4, INPUT);   //...candle PIN
  pinMode(candle5, INPUT);   //...candle PIN
  pinMode(candle6, INPUT);   //...candle PIN
  pinMode(candle7, INPUT);   //...candle PIN
  pinMode(candle8, INPUT);   //...candle PIN


  digitalWrite(ms1A, ms1);   //...setupOutputPIN ms1A
  digitalWrite(ms2A, ms2);   //...setupOutputPIN ms2A
  digitalWrite(ms3A, ms3);   //...setupOutputPIN ms3A

  digitalWrite(ms1B, ms1);   //...setupOutputPIN ms1B
  digitalWrite(ms2B, ms2);   //...setupOutputPIN ms2B
  digitalWrite(ms3B, ms3);   //...setupOutputPIN ms3B

  digitalWrite(ms1C, ms1);   //...setupOutputPIN ms1C
  digitalWrite(ms2C, ms2);   //...setupOutputPIN ms2C
  digitalWrite(ms3C, ms3);   //...setupOutputPIN ms3C

  digitalWrite(ms1D, ms1);   //...setupOutputPIN ms1D
  digitalWrite(ms2D, ms2);   //...setupOutputPIN ms2D
  digitalWrite(ms3D, ms3);   //...setupOutputPIN ms3D


  digitalWrite(51, LOW);    //... GND for Toshiba drivers
  digitalWrite(53, HIGH);   //... VCC for Toshiba drivers



}




//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

//    LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP LOOP  LOOP LOOP LOOP LOOP LOOP LOOP LOOP



void loop() {
  /*
delay(1000);
  for (int i = 0 ; i < padesat ;i++ ){
    dopreduDoprava();
  }
  stopMotor();
  delay(550);
  for (int i = 0 ; i < padesat ;i++ ){
    dozaduDoprava();
  }
  stopMotor();
  delay(550);

  for (int i = 0 ; i < padesat ;i++ ){
    dopreduDoleva();
  }
  stopMotor();
  delay(550);

  for (int i = 0 ; i < padesat ;i++ ){
    dozaduDoleva();
  }
  stopMotor();
  delay(600);

    for (int i = 0 ; i < 800 ;i++ ){
    ccwCircle();
  }
  stopMotor();
  delay(6000);

 
*/
}
