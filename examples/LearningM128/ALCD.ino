/************************************************************************************
  File    : ALCD.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Display using Alphanumeric Liquid Crystal
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Alphanumeric LCD
  Note      : Setup / Initialization for ALCD.
  Docs      : https://reference.arduino.cc/reference/en/libraries/liquidcrystal/
------------------------------------------------------------------------------------*/
void ALCD_Initialize()
{
  LCD_BL_AS_OUTPUT();
  LCD_BL_ON();
  ALCD.begin(16, 2);
  //----------------------------------
  ALCD.setCursor(0, 0);     ALCD.print("-Hello, TooPayZ-");
  ALCD.setCursor(0, 1);     ALCD.print(" M128  Training ");
  delay(2000);
  ALCD.clear();
  ALCD.setCursor(0, 0);     ALCD.print("Texts First  ROW");
  ALCD.setCursor(0, 1);     ALCD.print("Texts Second ROW");
  delay(2000);
}

/************************************************************************************
  Hardware  : Alphanumeric LCD
  Note      : Custom function for simplified.
  Docs      : https://reference.arduino.cc/reference/en/libraries/liquidcrystal/
------------------------------------------------------------------------------------*/
void ALCD_Display(char col, char row, const char *strData)
{
  ALCD.setCursor(col, row);
  ALCD.print(strData);
}

/************************************************************************************
  Hardware  : Alphanumeric LCD
  Note      : Display at Alphanumeric LCD with BackLight Control
  Docs      : https://reference.arduino.cc/reference/en/libraries/liquidcrystal/
------------------------------------------------------------------------------------*/
void ALCD_BackLight()
{
  LCD_BL_ON();
  ALCD.clear();             ALCD.print("Backlight is ON ");
  ALCD.setCursor(0, 1);     ALCD.print(" M128  Training ");
  delay(2000);
  //---------------------------------
  LCD_BL_OFF();
  ALCD.clear();             ALCD.print("Backlight is OFF");
  ALCD.setCursor(0, 1);     ALCD.print(" M128  Training ");
  delay(2000);
  //---------------------------------
  LCD_BL_ON();
  ALCD.clear();
  ALCD_Display(2,0, "Pos X=Column");
  ALCD_Display(5,1, "Pos  Y=Row");
  delay(2000);
  //---------------------------------
  LCD_BL_ON();
  ALCD.clear();
  ALCD_Display(4,0, "Another Text");
  ALCD_Display(4,1, "BL is OFF");
  delay(2000);
}


//--------------------------------------- END OF LINE ---------------------------------------------