/************************************************************************************
  File    : M128_LCD_02.ino
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

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int   lcd_rs = 8,
            lcd_rw = 10,
            lcd_en = 11,
            lcd_d4 = 12,
            lcd_d5 = 13,
            lcd_d6 = 14,
            lcd_d7 = 15;

LiquidCrystal 	lcd(lcd_rs, lcd_rw, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7);

int thisChar = 'a';

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // turn on the cursor:
  lcd.cursor();
}

void loop() {
  // reverse directions at 'm':
  if (thisChar == 'm') {
    // go right for the next letter
    lcd.rightToLeft();
  }
  // reverse again at 's':
  if (thisChar == 's') {
    // go left for the next letter
    lcd.leftToRight();
  }
  // reset at 'z':
  if (thisChar > 'z') {
    // go to (0,0):
    lcd.home();
    // start again at 0
    thisChar = 'a';
  }
  // print the character
  lcd.write(thisChar);
  // wait a second:
  delay(1000);
  // increment the letter:
  thisChar++;
}








