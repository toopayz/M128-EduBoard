/************************************************************************************
  File    : M128_JOYSTICK.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training JOYSTICK component
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"

//	GPIO PinMap using constant
const int JOY_YY  = A2;     //	PF2 47 -> A2 : Analog 2
const int JOY_XX  = A3;     //	PF3 48 -> A3 : Analog 3
const int JOY_SW  = 49;     //	PF3 49 -> A4 : Analog 4

//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
  pinMode(JOY_SW, INPUT_PULLUP);
  Serial.begin(9600);
}

//  Main loop
void loop() {
  // read the analog in value:
  bool isSw = digitalRead(JOY_SW);
  int  iXX  = analogRead(JOY_XX);
  int  iYY  = analogRead(JOY_YY);

  // map it to the range of the analog out:
  //outputValue = map(sensorValue, 0, 1023, 0, 255);

  // print the results to the Serial Monitor:
  Serial.print("joy SW = ");
  Serial.print(isSw);
  Serial.print("\t joy XX = ");
  Serial.print(iXX);
  Serial.print("\t joy YY = ");
  Serial.println(iYY);

  // wait before the next loop for the analog-to-digital
  delay(250);
}
