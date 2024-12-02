/************************************************************************************
  File    : M128_LED_02.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ON-OFF LED
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"
//* change /* to comment it
//	GPIO PinMap using variable for LED
int vLED_0 = 28;
int vLED_1 = 29;
int vLED_2 = 30;
int vLED_3 = 31;
int vLED_4 = 32;
int vLED_5 = 33;
int vLED_6 = 34;
int vLED_7 = 35;
//*/

//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
  /*
    pinMode(vLED_0, OUTPUT);
    pinMode(vLED_1, OUTPUT);
    pinMode(vLED_2, OUTPUT);
    pinMode(vLED_3, OUTPUT);
    pinMode(vLED_4, OUTPUT);
    pinMode(vLED_5, OUTPUT);
    pinMode(vLED_6, OUTPUT);
    pinMode(vLED_7, OUTPUT);
  /*///
  //  or setup like this
  for (char x=vLED_0; x<vLED_7; x++ )   pinMode(x, OUTPUT);
  //*/
}

//  Main loop
void loop() {
  // put your main code here, to run repeatedly:
  /*
  //  ALL LED is OFF = LOW
  digitalWrite(vLED_0, LOW);
  digitalWrite(vLED_1, LOW);
  digitalWrite(vLED_2, LOW);
  digitalWrite(vLED_3, LOW);
  digitalWrite(vLED_4, LOW);
  digitalWrite(vLED_5, LOW);
  digitalWrite(vLED_6, LOW);
  digitalWrite(vLED_7, LOW);
  delay(1000);
  //  ALL LED is ON = HIGH
  digitalWrite(vLED_0, HIGH);
  digitalWrite(vLED_1, HIGH);
  digitalWrite(vLED_2, HIGH);
  digitalWrite(vLED_3, HIGH);
  digitalWrite(vLED_4, HIGH);
  digitalWrite(vLED_5, HIGH);
  digitalWrite(vLED_6, HIGH);
  digitalWrite(vLED_7, HIGH);
  delay(1000);  
  /*///
  //  or setup like this
  for (char x=vLED_0; x<vLED_7; x++ )   digitalWrite(x, LOW);
  delay(1000);  
  for (char x=vLED_0; x<vLED_7; x++ )   digitalWrite(x, HIGH);
  delay(1000);  
  //*/
}
