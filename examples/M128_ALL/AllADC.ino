
void InitADC()
{
  pinMode(JOY_SW, INPUT_PULLUP);
}

void TestADC()
{
  bool isSw = digitalRead(JOY_SW);
  int  iXX  = analogRead(JOY_XX);
  int  iYY  = analogRead(JOY_YY);
  int  iPOT = analogRead(POTENSIO);
  int  iLM35 = analogRead(LM35);
  int  iLDR = analogRead(LDR);

  // print the results to the Serial Monitor:
  Serial.print("SW = ");
  Serial.print(isSw);
  Serial.print("\tXX = ");
  Serial.print(iXX);
  Serial.print("\tYY = ");
  Serial.print(iYY);

  Serial.print("\tPot = ");
  Serial.print(iPOT);

  Serial.print("\tLM35 = ");
  Serial.print(iLM35);
  Serial.print("\tLDR = ");
  Serial.println(iLDR);
  
  ALCD.setCursor(0, 0);
  ALCD.print("S:");
  ALCD.print(isSw);
  ALCD.print(" X:");
  ALCD.print(iXX);
  ALCD.print(" Y:");
  ALCD.print(iYY);
  ALCD.print("    ");

  ALCD.setCursor(0, 1);
  ALCD.print("P:");
  ALCD.print(iPOT);
  ALCD.print(" M:");
  ALCD.print(iLM35);
  ALCD.print(" L:");
  ALCD.print(iLDR);
  ALCD.print("    ");

  // wait before the next loop for the analog-to-digital
  delay(250);
}