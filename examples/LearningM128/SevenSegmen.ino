/************************************************************************************
  File    : SevenSegmen.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Using GPIO for Seven Segmen Display
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Setup / Initialization for Seven Segmen.
  Docs      : https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
------------------------------------------------------------------------------------*/
void SEGMEN_Initialize()
{
  for (char x=0; x<8; x++ ) pinMode(arSEGMEN[x], OUTPUT);
  for (char x=0; x<4; x++ ) pinMode(arDIGIT[x], OUTPUT);
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Function Seven Segmen to set Digit is OFF or ON
------------------------------------------------------------------------------------*/
void SEGMEN_DigitALLOFF()
{
  digitalWrite(arDIGIT[0], LOW);
  digitalWrite(arDIGIT[1], LOW);
  digitalWrite(arDIGIT[2], LOW);
  digitalWrite(arDIGIT[3], LOW);
}

void SEGMEN_DigitALLON()
{
  digitalWrite(arDIGIT[0], HIGH);
  digitalWrite(arDIGIT[1], HIGH);
  digitalWrite(arDIGIT[2], HIGH);
  digitalWrite(arDIGIT[3], HIGH);
}

void SEGMEN_DigitOnlyON(int ke)
{
  SEGMEN_DigitALLOFF();
  digitalWrite(arDIGIT[ke], HIGH);
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Segmen at Seven segmen is ON-OFF based on set true / false.
------------------------------------------------------------------------------------*/
void SEGMEN_SetToDisplay(bool DT, bool G, bool F, bool E, bool D, bool C, bool B, bool A)
{
  if (A)  digitalWrite(arSEGMEN[0], LOW); else digitalWrite(arSEGMEN[0], HIGH);
  if (B)  digitalWrite(arSEGMEN[1], LOW); else digitalWrite(arSEGMEN[1], HIGH);
  if (C)  digitalWrite(arSEGMEN[2], LOW); else digitalWrite(arSEGMEN[2], HIGH);
  if (D)  digitalWrite(arSEGMEN[3], LOW); else digitalWrite(arSEGMEN[3], HIGH);
  if (E)  digitalWrite(arSEGMEN[4], LOW); else digitalWrite(arSEGMEN[4], HIGH);
  if (F)  digitalWrite(arSEGMEN[5], LOW); else digitalWrite(arSEGMEN[5], HIGH);
  if (G)  digitalWrite(arSEGMEN[6], LOW); else digitalWrite(arSEGMEN[6], HIGH);
  if (DT) digitalWrite(arSEGMEN[7], LOW); else digitalWrite(arSEGMEN[7], HIGH);
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Segmen at Seven segmen is ON-OFF based on Value.
------------------------------------------------------------------------------------*/
void SEGMEN_DisplayON(int Digit, int Value)
{
  if (Digit >=0 && Digit<=3) digitalWrite(arDIGIT[Digit], HIGH);
  //--------------  Seven Segmen Display : DT,G,F,E,D,C,B,A
       if (Value == 0) SEGMEN_SetToDisplay(0, 0,1,1,1,1,1,1);
  else if (Value == 1) SEGMEN_SetToDisplay(0, 0,0,0,0,1,1,0);
  else if (Value == 2) SEGMEN_SetToDisplay(0, 1,0,1,1,0,1,1);
  else if (Value == 3) SEGMEN_SetToDisplay(0, 1,0,0,1,1,1,1);
  else if (Value == 4) SEGMEN_SetToDisplay(0, 1,1,0,0,1,1,0);
  else if (Value == 5) SEGMEN_SetToDisplay(0, 1,1,0,1,1,0,1);
  else if (Value == 6) SEGMEN_SetToDisplay(0, 1,1,1,1,1,0,1);
  else if (Value == 7) SEGMEN_SetToDisplay(0, 0,0,0,0,1,1,1);
  else if (Value == 8) SEGMEN_SetToDisplay(0, 1,1,1,1,1,1,1);
  else if (Value == 9) SEGMEN_SetToDisplay(0, 1,1,0,1,1,1,1);
}

/************************************************************************************
  Hardware  : Seven Segmen
  Note      : Function to do Test Seven Segmen Display
------------------------------------------------------------------------------------*/
void SEGMEN_ShowSegmen()
{
  SEGMEN_SetToDisplay(0,0,0,0,0,0,0,1);    delay(200);
  SEGMEN_SetToDisplay(0,0,0,0,0,0,1,0);    delay(200);
  SEGMEN_SetToDisplay(0,0,0,0,0,1,0,0);    delay(200);
  SEGMEN_SetToDisplay(0,0,0,0,1,0,0,0);    delay(200);
  SEGMEN_SetToDisplay(0,0,0,1,0,0,0,0);    delay(200);
  SEGMEN_SetToDisplay(0,0,1,0,0,0,0,0);    delay(200);
  SEGMEN_SetToDisplay(0,1,0,0,0,0,0,0);    delay(200);
  SEGMEN_SetToDisplay(1,0,0,0,0,0,0,0);    delay(200);
}

void SEGMEN_Test_01()
{
  SEGMEN_DigitALLON();      SEGMEN_ShowSegmen();
  SEGMEN_DigitOnlyON(0);    SEGMEN_ShowSegmen();
  SEGMEN_DigitOnlyON(1);    SEGMEN_ShowSegmen();
  SEGMEN_DigitOnlyON(2);    SEGMEN_ShowSegmen();
  SEGMEN_DigitOnlyON(3);    SEGMEN_ShowSegmen();
}

void SEGMEN_Test_02()
{
  SEGMEN_DigitALLON();
  SEGMEN_DisplayON(-1, 0);    delay(500);
  SEGMEN_DisplayON(-1, 1);    delay(500);
  SEGMEN_DisplayON(-1, 2);    delay(500);
  SEGMEN_DisplayON(-1, 3);    delay(500);
  SEGMEN_DisplayON(-1, 4);    delay(500);
  SEGMEN_DisplayON(-1, 5);    delay(500);
  SEGMEN_DisplayON(-1, 6);    delay(500);
  SEGMEN_DisplayON(-1, 7);    delay(500);
  SEGMEN_DisplayON(-1, 8);    delay(500);
  SEGMEN_DisplayON(-1, 9);    delay(500);
}

void SEGMEN_Test_03(unsigned long wait)
{
  SEGMEN_DisplayON(0, 1);   delay(wait);   SEGMEN_DigitALLOFF();
  SEGMEN_DisplayON(1, 2);   delay(wait);   SEGMEN_DigitALLOFF();
  SEGMEN_DisplayON(2, 3);   delay(wait);   SEGMEN_DigitALLOFF();
  SEGMEN_DisplayON(3, 4);   delay(wait);   SEGMEN_DigitALLOFF();
}

//--------------------------------------- END OF LINE ---------------------------------------------