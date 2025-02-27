/************************************************************************************
  File    : Button.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : GPIO function for Input from Button tactile switch.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Input Button A ~ Button D
  Note      : Setup / Initialization Input for BUTTON
  Docs      : https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
			        https://docs.arduino.cc/learn/microcontrollers/digital-pins
------------------------------------------------------------------------------------*/
void BUTTON_InitInput(BTNmode useMode)
{
  if (useMode == btnMacro)
  {
    pinMode(Inp_BtnA, INPUT_PULLUP);
    pinMode(Inp_BtnB, INPUT_PULLUP);
    pinMode(Inp_BtnC, INPUT_PULLUP);
    pinMode(Inp_BtnD, INPUT_PULLUP);
  }
  else if (useMode == btnVarInt)
  {
    pinMode(vBTN_A, INPUT_PULLUP);
    pinMode(vBTN_B, INPUT_PULLUP);
    pinMode(vBTN_C, INPUT_PULLUP);
    pinMode(vBTN_D, INPUT_PULLUP);
  }
  else if (useMode == btnArray)
  {
    for (char x=0; x<4; x++ ) pinMode(arBUTTON[x], INPUT_PULLUP);
  }
}

/************************************************************************************
  Hardware  : Input Button A ~ Button D
  Note      : Read button press and shown at serial and or to LED
  Docs      : https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
------------------------------------------------------------------------------------*/
void BUTTON_PressedToSerial()
{
	if (!digitalRead(Inp_BtnA))	Serial.println("Button A");
	if (!digitalRead(Inp_BtnB))	Serial.println("Button B");
	if (!digitalRead(Inp_BtnC))	Serial.println("Button C");
	if (!digitalRead(Inp_BtnD))	Serial.println("Button D");
}

void BUTTON_PressedToLED()
{
	if (!digitalRead(Inp_BtnA))	{Serial.println("Button A");  digitalWrite(vLED_0, HIGH);} else {digitalWrite(vLED_0, LOW);}
	if (!digitalRead(Inp_BtnB))	{Serial.println("Button B");  digitalWrite(vLED_1, HIGH);} else {digitalWrite(vLED_1, LOW);}
	if (!digitalRead(Inp_BtnC))	{Serial.println("Button C");  digitalWrite(vLED_2, HIGH);} else {digitalWrite(vLED_2, LOW);}
	if (!digitalRead(Inp_BtnD))	{Serial.println("Button D");  digitalWrite(vLED_3, HIGH);} else {digitalWrite(vLED_3, LOW);}
}

//--------------------------------------- END OF LINE ---------------------------------------------