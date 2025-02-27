/************************************************************************************
  File    : LED.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : GPIO function for Output to 8 bit LED.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Output LED0 ~ LED7
  Note      : Setup / Initialization Output for LED.
  Docs      : https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
------------------------------------------------------------------------------------*/
void LED_InitOutput(LEDmode useMode)
{
  if (useMode == ledMacro)
  {
    pinMode(mLED_0, OUTPUT);
    pinMode(mLED_1, OUTPUT);
    pinMode(mLED_2, OUTPUT);
    pinMode(mLED_3, OUTPUT);
    pinMode(mLED_4, OUTPUT);
    pinMode(mLED_5, OUTPUT);
    pinMode(mLED_6, OUTPUT);
    pinMode(mLED_7, OUTPUT);
  }
  else if (useMode == ledVarInt)
  {
    pinMode(vLED_0, OUTPUT);
    pinMode(vLED_1, OUTPUT);
    pinMode(vLED_2, OUTPUT);
    pinMode(vLED_3, OUTPUT);
    pinMode(vLED_4, OUTPUT);
    pinMode(vLED_5, OUTPUT);
    pinMode(vLED_6, OUTPUT);
    pinMode(vLED_7, OUTPUT);
  }
  else if (useMode == ledArray)
  {
    for (char x=0; x<8; x++ ) pinMode(arLED[x], OUTPUT);
  }
}

/************************************************************************************
  Hardware  : Output LED0 ~ LED7 data type
  Note      : Function for All ON, All OFF, left to Right, Right to Left, etc
  Docs      : https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
------------------------------------------------------------------------------------*/
void LED_LedAllON()
{
  for (char x=0; x<8; x++ )
    digitalWrite(arLED[x], 1);
}

void LED_LedAllOFF()
{
  for (char x=0; x<8; x++ )
    digitalWrite(arLED[x], 0);
}

void LED_LedLeftToRight(unsigned long wait)
{
  for (int x=0; x<8; x++)
  {
    if (x < 8)    digitalWrite(arLED[x], 1);
    if (x-1 >= 0) digitalWrite(arLED[x-1], 0);
    delay(wait);
  }
}

void LED_LedRightToLeft(unsigned long wait)
{
  for (int x=7; x>=0; x--)
  {
    if (x <= 7)   digitalWrite(arLED[x], 1);
    if (x+1 <= 7)  digitalWrite(arLED[x+1], 0);
    delay(wait);
  }
}

/************************************************************************************
  Hardware  : Output LED0 ~ LED7 BIT/PORT Manipulation
  Note      : Function for All ON, All OFF, left to Right, Right to Left, etc
  Docs      : https://docs.arduino.cc/hacking/software/PortManipulation
------------------------------------------------------------------------------------*/
void LED_InitPORT()
{
  DDRC  = 0b11111111;		//	or B11111111		set as Output
  PORTC = 0b00000000;		//	or B00000000		set all Output LOW
}

void LED_PortAllON()
{
  PORTC = 0b11111111;
}

void LED_PortAllOFF()
{
  PORTC = 0b00000000;
}

void LED_PortLeftToRight(unsigned long wait)
{
  PORTC = 0b00000001;
  for (int x=0; x<7; x++)
  {
	PORTC <<= 1;
	delay(wait);
  }
}

void LED_PortRightToLeft(unsigned long wait)
{
  PORTC = 0b10000000;
  for (int x=0; x<7; x++)
  {
	PORTC >>= 1;
	delay(wait);
  }
}

/************************************************************************************
  Hardware  : Output LED0 ~ LED7 data type and BIT
  Note      : Complete Test for Output LED with all function.
------------------------------------------------------------------------------------*/
void LED_TestLED()
{
  LED_LedAllON();
  delay(1000);
  LED_LedAllOFF();
  delay(1000);
  LED_LedLeftToRight(200);
  LED_LedAllOFF();
  delay(1000);
  LED_LedRightToLeft(200);
  LED_LedAllOFF();
  delay(1000);
}

void LED_TestLEDPort()
{
  LED_PortAllON();
  delay(500);
  LED_PortAllOFF();
  delay(500);
  LED_PortLeftToRight(50);
  LED_PortAllOFF();
  delay(500);
  LED_PortRightToLeft(50);
  LED_PortAllOFF();
  delay(500);
}

//--------------------------------------- END OF LINE ---------------------------------------------