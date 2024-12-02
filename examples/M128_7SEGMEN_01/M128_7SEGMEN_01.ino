/************************************************************************************
  File    : M128_7SEGMEN_01.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November.
  Title   : Basic training Seven Segmen.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"

//	GPIO PinMap using variable for LED
const int vSEG_A = 28;
const int vSEG_B = 29;
const int vSEG_C = 30;
const int vSEG_D = 31;
const int vSEG_E = 32;
const int vSEG_F = 33;
const int vSEG_G = 34;
const int vSEG_DT = 35;

const int DGT_1  = 22;
const int DGT_2  = 23;
const int DGT_3  = 24;

const int DGT_4  = 25;

//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
    pinMode(vSEG_A, OUTPUT);
    pinMode(vSEG_B, OUTPUT);
    pinMode(vSEG_C, OUTPUT);
    pinMode(vSEG_D, OUTPUT);
    pinMode(vSEG_E, OUTPUT);
    pinMode(vSEG_F, OUTPUT);
    pinMode(vSEG_G, OUTPUT);
    pinMode(vSEG_DT, OUTPUT);
    
    pinMode(DGT_1, OUTPUT);
    pinMode(DGT_2, OUTPUT);
    pinMode(DGT_3, OUTPUT);
    pinMode(DGT_4, OUTPUT);
    
    digitalWrite(vSEG_A, LOW);
    digitalWrite(vSEG_B, LOW);
    digitalWrite(vSEG_C, LOW);
    digitalWrite(vSEG_D, LOW);
    digitalWrite(vSEG_E, LOW);
    digitalWrite(vSEG_F, LOW);
    digitalWrite(vSEG_G, LOW);
    digitalWrite(vSEG_DT, LOW);
}

//  Main loop
void loop() {
  digitalWrite(DGT_1, HIGH);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, HIGH);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, HIGH);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, HIGH);
  delay(1000);
}
