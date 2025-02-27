/************************************************************************************
  File    : DS1302.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Access RTC (Real Time CLock) IC DS1302
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.

Special Note :
  RTC DS1302 using library by Makuna https://github.com/Makuna/Rtc
------------------------------------------------------------------------------------*/


ThreeWire myWire(RTC_DIO, RTC_SCK, RTC_RST);
RtcDS1302<ThreeWire> DS1302(myWire);

unsigned int RtcCnt500mS = 0;
char RtcTime[6];
bool RtcIsBlink = false;

/************************************************************************************
  Hardware  : DS1302
  Note      : Setup / Initialization for RTC DS1302.
  Docs      : https://electropeak.com/learn/interfacing-ds1302-real-time-clock-rtc-module-with-arduino/
------------------------------------------------------------------------------------*/
void RTC_Initialize() 
{
    Serial.print("Compile at : ");
    Serial.print(__DATE__);
    Serial.print("  ");
    Serial.println(__TIME__);
    DS1302.Begin();
    RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
    RTC_PrintDateTime(compiled);
    Serial.println();
    //------------------------------------------  
    if (!DS1302.IsDateTimeValid()) 
    {
        // Common Causes:
        //    1) first time you ran and the device wasn't running yet
        //    2) the battery on the device is low or even missing
        Serial.println("RTC lost confidence in the DateTime!");
        DS1302.SetDateTime(compiled);
    }
    //------------------------------------------  
    if (DS1302.GetIsWriteProtected())
    {
        Serial.println("RTC was write protected, enabling writing now");
        DS1302.SetIsWriteProtected(false);
    }
    //------------------------------------------  
    if (!DS1302.GetIsRunning())
    {
        Serial.println("RTC was not actively running, starting now");
        DS1302.SetIsRunning(true);
    }
    //------------------------------------------  
    RtcDateTime now = DS1302.GetDateTime();
    if (now < compiled) 
    {
        Serial.println("RTC is older than compile time!  (Updating DateTime)");
        DS1302.SetDateTime(compiled);
    }
    else if (now > compiled) 
    {
        Serial.println("RTC is newer than compile time. (this is expected)");
    }
    else if (now == compiled) 
    {
        Serial.println("RTC is the same as compile time! (not expected but all is fine)");
    }
}

/************************************************************************************
  Hardware  : DS1302
  Note      : RTC DS1302 Display data Date and Time to Serial Monitor
  Docs      : https://electropeak.com/learn/interfacing-ds1302-real-time-clock-rtc-module-with-arduino/
------------------------------------------------------------------------------------*/
void RTC_PrintDateTime(const RtcDateTime& dt)
{
    char datestring[20];
    snprintf_P(datestring, 
            countof(datestring),
            PSTR("%02u/%02u/%04u %02u:%02u:%02u"),
            dt.Month(),
            dt.Day(),
            dt.Year(),
            dt.Hour(),
            dt.Minute(),
            dt.Second() );
    Serial.print(datestring);
}

/************************************************************************************
  Hardware  : DS1302
  Note      : RTC DS1302 test on Serial monitor and Seven Segmen
  Docs      : https://electropeak.com/learn/interfacing-ds1302-real-time-clock-rtc-module-with-arduino/
------------------------------------------------------------------------------------*/
void RTC_TestToSerial(unsigned long wait) 
{
    RtcDateTime now = DS1302.GetDateTime();
    RTC_PrintDateTime(now);
    Serial.println();
    if (!now.IsValid())
    {
        // Common Causes:
        //    1) the battery on the device is low or even missing and the power line was disconnected
        Serial.println("RTC lost confidence in the DateTime!");
    }
    delay(wait);
}

void RTC_TestToSegmen()
{
  if (RtcCnt500mS == 0)
  {
    RtcDateTime now = DS1302.GetDateTime();
    sprintf(RtcTime, "%02d:%02d", now.Hour(),now.Minute());
    Serial.println(RtcTime);
    RtcIsBlink = !RtcIsBlink;
  }
  RtcCnt500mS++;
  if (RtcCnt500mS >= 50)  RtcCnt500mS = 0;   //  500 mS / 20 mS = 25
  SEGMEN_RTC(0, RtcTime[0]);
  SEGMEN_RTC(1, RtcTime[1]);
  SEGMEN_RTC(2, RtcTime[3]);
  SEGMEN_RTC(3, RtcTime[4]);
}

void SEGMEN_RTC(int Digit, int Value)
{
  PORT_DIGIT  = (0x10 << Digit);  //  (0b00010000 << Digit);
  PORT_SEGMEN = setSegmen[Value - 0x30];
  if (RtcIsBlink) PORT_SEGMEN &= ~(1 << 7);
  delay(5);
  DIGIT_ALL_OFF();
}

//--------------------------------------- END OF LINE ---------------------------------------------