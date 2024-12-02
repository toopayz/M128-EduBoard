/************************************************************************************
  File    : M128_LED_01.ino
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
/* change /* to comment it
//	GPIO PinMap using macro #define for LED
#define mLED_0     		28		//	PC0
#define mLED_1     		29		//	PC1M128_LED_01

#define mLED_1     		29		//	PC1
#define mLED_2     		30		//	PC2
#define mLED_3     		31		//	PC3
#define mLED_4     		32		//	PC4
#define mLED_5     		33		//	PC5
#define mLED_6     		34		//	PC6
#define mLED_7     		35		//	PC7
/*///
const int mLED_0  = 28;		//	PC0
const int mLED_1  = 29;		//	PC1


#define mLED_2     		30		//	PC2
#define mLED_3     		31		//	PC3
#define mLED_4     		32		//	PC4
#define mLED_5     		33		//	PC5
#define mLED_6     		34		//	PC6
#define mLED_7     		35		//	PC7
/*///
const int mLED_0  = 28;		//	PC0
const int mLED_1  = 29;		//	PC1

const int mLED_2  = 30;		//	PC2
const int mLED_3  = 31;		//	PC3
const int mLED_4  = 32;		//	PC4
const int mLED_5  = 33;		//	PC5
const int mLED_6  = 34;		//	PC6
const int mLED_7  = 35;		//	PC7
//*/


//  Setup or Initialize board
void setup() {
  // put your setup code here, to run once:
    pinMode(mLED_0, OUTPUT);
    pinMode(mLED_1, OUTPUT);
    pinMode(mLED_2, OUTPUT);
    pinMode(mLED_3, OUTPUT);
    pinMode(mLED_4, OUTPUT);
    pinMode(mLED_5, OUTPUT);
    pinMode(mLED_6, OUTPUT);
    pinMode(mLED_7, OUTPUT);
}

//  Main loop
void loop() {
  // put your main code here, to run repeatedly:
  //  ALL LED is OFF = LOW
  digitalWrite(mLED_0, LOW);
  digitalWrite(mLED_1, LOW);
  digitalWrite(mLED_2, LOW);
  digitalWrite(mLED_3, LOW);
  digitalWrite(mLED_4, LOW);
  digitalWrite(mLED_5, LOW);
  digitalWrite(mLED_6, LOW);
  digitalWrite(mLED_7, LOW);
  delay(1000);
  //  ALL LED is ON = HIGH
  digitalWrite(mLED_0, HIGH);
  digitalWrite(mLED_1, HIGH);
  digitalWrite(mLED_2, HIGH);
  digitalWrite(mLED_3, HIGH);
  digitalWrite(mLED_4, HIGH);
  digitalWrite(mLED_5, HIGH);
  digitalWrite(mLED_6, HIGH);
  digitalWrite(mLED_7, HIGH);
  delay(1000);
}
