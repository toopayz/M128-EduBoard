/************************************************************************************
  File    : MISC.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Miscellaneous / Another device at M128 Learning Board
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : BUZZER
  Note      : Simple test for Output BUZZER
------------------------------------------------------------------------------------*/
void BUZZER_Test(unsigned long wait)
{
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, HIGH);
  delay(wait);
  digitalWrite(BUZZER, LOW);
  delay(wait);
}

/************************************************************************************
  Hardware  : RELAY
  Note      : Simple test for Output RELAY
------------------------------------------------------------------------------------*/
void RELAY_Test(unsigned long wait)
{
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, HIGH);
  delay(wait);
  digitalWrite(RELAY, LOW);
  delay(wait);
}

//--------------------------------------- END OF LINE ---------------------------------------------