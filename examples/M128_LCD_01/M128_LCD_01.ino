/************************************************************************************
  File    : M128_LCD_01.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ALCD (Alphanumeric Liquid Crystal Display)
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  include the library code:
//  documentation : https://docs.arduino.cc/libraries/liquidcrystal/
#include <LiquidCrystal.h>

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"
//	GPIO PinMap using constant variable for Alphanumeric LCD
const int   lcd_rs = 8,
            lcd_rw = 10,
            lcd_en = 11,
            lcd_d4 = 12,
            lcd_d5 = 13,
            lcd_d6 = 14,
            lcd_d7 = 15;

//	Construct for Alphanumeric LCD
LiquidCrystal 	ALCD(lcd_rs, lcd_rw, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7);


//  Setup or Initialize board
void setup() {
  // set up the LCD's number of columns and rows:
  ALCD.begin(16, 2);
  // Print a message to the LCD.
  ALCD.print("hello, world!");
}

//  Main loop
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  ALCD.setCursor(0, 1);
  // print the number of seconds since reset:
  ALCD.print(millis() / 1000);
}
