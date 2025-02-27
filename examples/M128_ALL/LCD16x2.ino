
void InitLCD16x2()
{
  // set up the LCD's number of columns and rows:
  ALCD.begin(16, 2);
  ALCD.print("Hello, Test LCD!");
  ALCD.setCursor(0, 1);
  ALCD.print("LCD is Working..");
}

void TestLCD()
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  ALCD.setCursor(0, 1);
  // print the number of seconds since reset:
  ALCD.print(millis() / 1000);
}