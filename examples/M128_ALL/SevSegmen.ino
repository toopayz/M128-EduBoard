
void InitSegmen() {
  // put your setup code here, to run once:
    pinMode(SEG_A, OUTPUT);
    pinMode(SEG_B, OUTPUT);
    pinMode(SEG_C, OUTPUT);
    pinMode(SEG_D, OUTPUT);
    pinMode(SEG_E, OUTPUT);
    pinMode(SEG_F, OUTPUT);
    pinMode(SEG_G, OUTPUT);
    pinMode(SEG_DT, OUTPUT);
    
    pinMode(DGT_1, OUTPUT);
    pinMode(DGT_2, OUTPUT);
    pinMode(DGT_3, OUTPUT);
    pinMode(DGT_4, OUTPUT);
}

//  Main loop
void TestSegmen2478() {
  //--------------------------  2
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  digitalWrite(DGT_1, HIGH);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  //--------------------------  4
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, HIGH);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  //--------------------------  7
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, HIGH);
  digitalWrite(DGT_4, LOW);
  delay(1000);
  //--------------------------  8
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, LOW);
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, HIGH);
  delay(1000);
}

//------------------------------------
void TestNumber() {
  digitalWrite(DGT_1, HIGH);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  Number();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, HIGH);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  Number();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, HIGH);
  digitalWrite(DGT_4, LOW);
  Number();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, HIGH);
  Number();
}

void Number() {
  //--------------------------  1
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  2
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  3
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  4
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  5
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  6
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  7
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //--------------------------  8
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, LOW);
  delay(500);
  //--------------------------  9
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
}

//------------------------------------
void TestSegmen() {
  digitalWrite(DGT_1, HIGH);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  Segmen();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, HIGH);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, LOW);
  Segmen();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, HIGH);
  digitalWrite(DGT_4, LOW);
  Segmen();
  digitalWrite(DGT_1, LOW);
  digitalWrite(DGT_2, LOW);
  digitalWrite(DGT_3, LOW);
  digitalWrite(DGT_4, HIGH);
  Segmen();
}

void Segmen()
{
  //----------------------------  A
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  B
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  C
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  D
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  E
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  F
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  G
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
  digitalWrite(SEG_DT, HIGH);
  delay(500);
  //----------------------------  DT
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_DT, LOW);
  delay(500);
}