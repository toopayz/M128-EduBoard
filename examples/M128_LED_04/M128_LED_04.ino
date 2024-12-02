/************************************************************************************
  File    : M128_LED_04.ino
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
//	GPIO PinMap using DDRC and PORTC directly
#define PORT_LED    PORTC
#define DDR_LED     DDRC

unsigned char iShift = 0b00000001;

//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
  DDR_LED = 0b11111111;  //  or  DDR_LED = 0xFF;
}

//  Main loop
void loop() {
  /*
  PORT_LED = 0b11111111;
  delay(1000);
  PORT_LED = 0b00000000;
  delay(1000);
  /*///
  while (iShift!=0b10000000) {
    PORT_LED = iShift;
    iShift <<= 1;
    delay(100);
  }

  while (iShift!=0b00000001) {
    PORT_LED = iShift;
    iShift >>= 1;
    delay(100);
  }
  //*/
}
