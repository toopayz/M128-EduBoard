
void InitRelayBuzzer()
{
    pinMode(RELAY, OUTPUT);
    pinMode(BUZZER, OUTPUT);
}

void TestRelayBuzzer()
{
  digitalWrite(RELAY, LOW);
  digitalWrite(BUZZER, LOW);
  delay(3000);
  digitalWrite(RELAY, HIGH);
  digitalWrite(BUZZER, HIGH);
  delay(1000);
}