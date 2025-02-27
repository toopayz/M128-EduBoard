/************************************************************************************
  File    : SevenSegmenPORT.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Using GPIO for Seven Segmen Display with method PORT Manipulation
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Setup / Initialization for Seven Segmen.
  Docs      : https://docs.arduino.cc/hacking/software/PortManipulation
------------------------------------------------------------------------------------*/
void SEGMEN_Initialize_PORT()
{
  DDR_SEGMEN  = 0b11111111;   //  Set as Output
  PORT_SEGMEN = 0b00000000;   //  default Logic All Segmen is OFF
  DIGIT_AS_OUTPUT();          //  Set as Output
  DIGIT_ALL_OFF();            //  default Logic All Digit is OFF
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Function Seven Segmen to set Digit is OFF or ON
------------------------------------------------------------------------------------*/
void SEGMEN_DigitOnlyON_PORT(int Digit)
{
  DIGIT_ALL_OFF();
  PORT_DIGIT  = (0x10 << Digit);  //  (0b00010000 << Digit);
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Segmen at Seven segmen is ON-OFF based on Value.
------------------------------------------------------------------------------------*/
void SEGMEN_DisplayON_PORT(int Digit, int Value)
{
  PORT_DIGIT  = (0x10 << Digit);  //  (0b00010000 << Digit);
  PORT_SEGMEN = setSegmen[Value];
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Function to do Test Seven Segmen Display
------------------------------------------------------------------------------------*/
void SEGMEN_ShowSegmen_PORT()
{
  for (char Segke=0; Segke<=7; Segke++)
  {
    PORT_SEGMEN = ~(0x01 << Segke);  //  ~(0b00000001 << Segke);
    delay(200);
  }
}

void SEGMEN_Test_01_PORT()
{
  DIGIT_ALL_ON();               SEGMEN_ShowSegmen_PORT();
  SEGMEN_DigitOnlyON_PORT(0);   SEGMEN_ShowSegmen_PORT();
  SEGMEN_DigitOnlyON_PORT(1);   SEGMEN_ShowSegmen_PORT();
  SEGMEN_DigitOnlyON_PORT(2);   SEGMEN_ShowSegmen_PORT();
  SEGMEN_DigitOnlyON_PORT(3);   SEGMEN_ShowSegmen_PORT();
}

void SEGMEN_Test_02_PORT()
{
  DIGIT_ALL_ON();
  PORT_SEGMEN = setSegmen[0];   delay(500);
  PORT_SEGMEN = setSegmen[1];   delay(500);
  PORT_SEGMEN = setSegmen[2];   delay(500);
  PORT_SEGMEN = setSegmen[3];   delay(500);
  PORT_SEGMEN = setSegmen[4];   delay(500);
  PORT_SEGMEN = setSegmen[5];   delay(500);
  PORT_SEGMEN = setSegmen[6];   delay(500);
  PORT_SEGMEN = setSegmen[7];   delay(500);
  PORT_SEGMEN = setSegmen[8];   delay(500);
  PORT_SEGMEN = setSegmen[9];   delay(500);
}

void SEGMEN_Test_03_PORT(unsigned long wait)
{
  SEGMEN_DisplayON_PORT(0, 4);   delay(wait);   DIGIT_ALL_OFF();
  SEGMEN_DisplayON_PORT(1, 5);   delay(wait);   DIGIT_ALL_OFF();
  SEGMEN_DisplayON_PORT(2, 6);   delay(wait);   DIGIT_ALL_OFF();
  SEGMEN_DisplayON_PORT(3, 7);   delay(wait);   DIGIT_ALL_OFF();
}

//--------------------------------------- END OF LINE ---------------------------------------------