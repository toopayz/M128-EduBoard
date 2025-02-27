/************************************************************************************
  File    : Analog.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Access analog device LM35, Potentiometer, LDR, and Joystick.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : LM35
  Note      : Simple test for LM35 Temperature Sensor
  Docs      : https://docs.arduino.cc/built-in-examples/basics/ReadAnalogVoltage
------------------------------------------------------------------------------------*/
void LM35_Test(unsigned long wait)
{
  int sensorValue = analogRead(LM35);
  float voltage   = sensorValue * (5.0 / 1023.0);
  Serial.print("LM35  : ");
  Serial.println(voltage);
  delay(wait);
}

/************************************************************************************
  Hardware  : POTENSIO
  Note      : Simple test for POTENSIO.
  Docs      : https://docs.arduino.cc/built-in-examples/basics/ReadAnalogVoltage
------------------------------------------------------------------------------------*/
void POTENSIO_Test(unsigned long wait)
{
  int sensorValue = analogRead(POTENSIO);
  float voltage   = sensorValue * (5.0 / 1023.0);
  Serial.print("VRes  : ");
  Serial.println(voltage);
  delay(wait);
}

/************************************************************************************
  Hardware  : LDR
  Note      : Simple test for POTENSIO.
  Docs      : https://docs.arduino.cc/built-in-examples/basics/ReadAnalogVoltage
------------------------------------------------------------------------------------*/
void LDR_Test(unsigned long wait)
{
  int sensorValue = analogRead(LDR);
  float voltage   = sensorValue * (5.0 / 1023.0);
  Serial.print("VLDR  : ");
  Serial.println(voltage);
  delay(wait);
}

/************************************************************************************
  Hardware  : JOYSTICK
  Note      : Simple test for POTENSIO.
  Docs      : https://docs.arduino.cc/built-in-examples/basics/ReadAnalogVoltage
------------------------------------------------------------------------------------*/
void JOYSTICK_Test(unsigned long wait)
{
  int joyXX       = analogRead(JOY_XX);
  int joyYY       = analogRead(JOY_YY);
  float voltXX    = joyXX * (5.0 / 1023.0);
  float voltYY    = joyYY * (5.0 / 1023.0);
  Serial.print("JOY X : ");
  Serial.println(voltXX);
  Serial.print("JOY Y : ");
  Serial.println(voltYY);
  delay(wait);
}

//--------------------------------------- END OF LINE ---------------------------------------------