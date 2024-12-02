/************************************************************************************
  File    : M128_BUTTON_01.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November.
  Title   : Basic training input Button.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  Documentation  https://docs.arduino.cc/language-reference/

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"

//*
//  using constant
const int Inp_BtnA = 37;    // Button 1 : PA7
const int Inp_BtnB = 38;    // Button 2 : PA6
const int Inp_BtnC = 39;    // Button 3 : PA5
const int Inp_BtnD = 40;    // Button 4 : PA4
/*///
//  using define
//	GPIO PinMap using macro #define for BUTTON
#define Inp_BtnA     37     //	PA7
#define Inp_BtnB     38     //	PA6
#define Inp_BtnC     39     //	PA5
#define Inp_BtnD     40     //	PA4
//*/

int valPOT = 0;           // global variable to store LM35 value

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  //  setup button mode
  pinMode(Inp_BtnA, INPUT_PULLUP);
  pinMode(Inp_BtnB, INPUT_PULLUP);
  pinMode(Inp_BtnC, INPUT_PULLUP);
  pinMode(Inp_BtnD, INPUT_PULLUP);
}

void loop() {
  // read the analog in value:
  bool btnAA = digitalRead(Inp_BtnA);
  bool btnBB = digitalRead(Inp_BtnB);
  bool btnCC = digitalRead(Inp_BtnC);
  bool btnDD = digitalRead(Inp_BtnD);

  // print the results to the Serial Monitor:
  Serial.print("BtnA = ");
  Serial.print(btnDD);
  Serial.print("\tBtnB = ");
  Serial.print(btnCC);
  Serial.print("\tBtnC = ");
  Serial.print(btnBB);
  Serial.print("\tBtnD = ");
  Serial.println(btnAA);

  // wait before the next loop for the analog-to-digital
  delay(100);
}
