
void InitLED()
{
    pinMode(dLED_0, OUTPUT);
    pinMode(dLED_1, OUTPUT);
    pinMode(dLED_2, OUTPUT);
    pinMode(dLED_3, OUTPUT);
    pinMode(dLED_4, OUTPUT);
    pinMode(dLED_5, OUTPUT);
    pinMode(dLED_6, OUTPUT);
    pinMode(dLED_7, OUTPUT);
}

void TestLED()
{
  //  ALL LED is ON = HIGH
  digitalWrite(dLED_0, HIGH);
  digitalWrite(dLED_1, HIGH);
  digitalWrite(dLED_2, HIGH);
  digitalWrite(dLED_3, HIGH);
  digitalWrite(dLED_4, HIGH);
  digitalWrite(dLED_5, HIGH);
  digitalWrite(dLED_6, HIGH);
  digitalWrite(dLED_7, HIGH);
  delay(1000);
  //  ALL LED is OFF = LOW
  digitalWrite(dLED_0, LOW);
  digitalWrite(dLED_1, LOW);
  digitalWrite(dLED_2, LOW);
  digitalWrite(dLED_3, LOW);
  digitalWrite(dLED_4, LOW);
  digitalWrite(dLED_5, LOW);
  digitalWrite(dLED_6, LOW);
  digitalWrite(dLED_7, LOW);
  delay(1000);
  //  Left to Right
  for (int x=0; x<=7; x++)
  {
    if (x <= 7)     digitalWrite(arLED[x], 1);
    if (x-1 >= 0)   digitalWrite(arLED[x-1], 0);
    delay(100);
  }
  //  Right to Left
  for (int x=7; x>=0; x--)
  {
    if (x <= 7)     digitalWrite(arLED[x], 1);
    if (x+1 <= 7)   digitalWrite(arLED[x+1], 0);
    delay(100);
  } 
}