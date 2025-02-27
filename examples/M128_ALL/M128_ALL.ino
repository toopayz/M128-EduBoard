/************************************************************************************
  File    : M128_ALL.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training FULL Board
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
#include "E:\#_MyGithub\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

int valPOT;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  InitSegmen();   //  Initialize for 7 Segmen
  InitLED();      //  Initialize for LED 8 bit
  InitLCD16x2();
  InitButton();
  InitRelayBuzzer();
  InitADC();  
  ALCD.clear();
}

void loop() {
      //TestLCD();
  //TestSegmen2478();
  //TestNumber();
  //TestSegmen();
  //TestLED();
  //TestRelayBuzzer();
  //TestButton();
  TestADC();
}
