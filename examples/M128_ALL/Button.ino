
void InitButton()
{
  pinMode(Inp_BtnA, INPUT_PULLUP);
  pinMode(Inp_BtnB, INPUT_PULLUP);
  pinMode(Inp_BtnC, INPUT_PULLUP);
  pinMode(Inp_BtnD, INPUT_PULLUP);
  
  pinMode(dLED_4, OUTPUT);
  pinMode(dLED_5, OUTPUT);
  pinMode(dLED_6, OUTPUT);
  pinMode(dLED_7, OUTPUT);
}

void TestButton()
{
  bool btnAA = digitalRead(Inp_BtnA);
  bool btnBB = digitalRead(Inp_BtnB);
  bool btnCC = digitalRead(Inp_BtnC);
  bool btnDD = digitalRead(Inp_BtnD);

  digitalWrite(dLED_0, !btnAA);
  digitalWrite(dLED_1, !btnAA);
  digitalWrite(dLED_2, !btnBB);
  digitalWrite(dLED_3, !btnBB);
  digitalWrite(dLED_4, !btnCC);
  digitalWrite(dLED_5, !btnCC);
  digitalWrite(dLED_6, !btnDD);
  digitalWrite(dLED_7, !btnDD);
  
  // print the results to the Serial Monitor:
  Serial.print("BtnA = ");
  Serial.print(btnDD);
  Serial.print("\tBtnB = ");
  Serial.print(btnCC);
  Serial.print("\tBtnC = ");
  Serial.print(btnBB);
  Serial.print("\tBtnD = ");
  Serial.println(btnAA);
}


