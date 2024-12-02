/************************************************************************************
  File    : M128_LED_03.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ON-OFF & RUNNING LED
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"
//	GPIO PinMap using array for LED
//  array index   ---->    0   1   2   3   4   5   6   7   
unsigned char arLED[8] = {28, 29, 30, 31, 32, 33, 34, 35};


//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
  for (char x=0; x<=7; x++ )   pinMode(arLED[x], OUTPUT);
}

//  Main loop
void loop() {
  // put your main code here, to run repeatedly:
  /*/
  //  LED ON-OFF
  for (char x=0; x<=7; x++ )   digitalWrite(arLED[x], LOW);
  delay(1000);
  for (char x=0; x<=7; x++ )   digitalWrite(arLED[x], HIGH);
  delay(1000);
  /*///
  //  Left to Right
  for (int x=0; x<=7; x++)
  {
    if (x <= 7)     digitalWrite(arLED[x], 1);
    if (x-1 >= 0)   digitalWrite(arLED[x-1], 0);
    delay(100);
  }
  //  Right to Left
  for (int x=7; x>=0; x--)
  {
    if (x <= 7)     digitalWrite(arLED[x], 1);
    if (x+1 <= 7)   digitalWrite(arLED[x+1], 0);
    delay(100);
  }
  //*/
}
