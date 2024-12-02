/************************************************************************************
  File    : M128_RELAY_BUZZER.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ON-OFF RELAY and BUZZER
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"

//	GPIO PinMap using macro #define for RELAY and BUZZER
#define OUT_RELAY 26
#define OUT_BUZZER 27


//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
    pinMode(OUT_RELAY, OUTPUT);
    pinMode(OUT_BUZZER, OUTPUT);
}

//  Main loop
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUT_RELAY, LOW);
  digitalWrite(OUT_BUZZER, LOW);
  delay(3000);
  digitalWrite(OUT_RELAY, HIGH);
  digitalWrite(OUT_BUZZER, HIGH);
  delay(1000);
}
