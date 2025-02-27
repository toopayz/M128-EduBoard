#include <RtcDateTime.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>
#include "src\M128_PinMap.h"

/*
extern "C"
  {
    #include "src\M128_PinMap.h"
  };*/


void setup()
{
  //  Comment / UnComment function to DisAble / Enable test.
  Serial.begin(9600);                 //  Init Serial Monitor -> Do Not DELETE this.
  //UART_InitSerialInput();           //  Init Test for serial with input from Serial Monitor.
  //LED_InitOutput(ledArray);         //  Init LED and set as Output.
  //LED_InitPORT();                   //  Init LED and set as Output using PORT Manipulation.
  //BUTTON_InitInput(btnMacro);       //  Init BUTTON as Input.
  ALCD_Initialize();                //  Init and Display Alphanumeric LCD.
  //SEGMEN_Initialize();              //  Init Seven Segmen Display
  //SEGMEN_Initialize_PORT();         //  Init Seven Segmen Display using PORT manipulation.  
  //RTC_Initialize();                 //  Init RTC DS1302
}

void loop()
{  
  //  Comment / UnComment function to DisAble / Enable test.
  //UART_SerialPrint(1000);           //  Print message / string to serial monitor.
  //UART_SerialInput();               //  Type string to Serial Monitor + Press Enter -> Print Message.
  //LED_TestLED();                    //  Test LED as Output.
  //LED_TestLEDPort();                //  Test LED as Output using PORT Manipulation.
  //BUTTON_PressedToSerial();         //  Test BUTTON and send to Serial Monitor.
  //BUTTON_PressedToLED();            //  Test BUTTON and send to Serial Monitor & LED.  
  //BUZZER_Test(300);                 //  Test BUZZER ON-OFF
  //RELAY_Test(1000);                 //  Test RELAY ON-OFF
  //LM35_Test(250);                   //  Test Analog Reading for LM35
  //POTENSIO_Test(250);               //  Test Analog Reading for POTENSIO
  //LDR_Test(250);                    //  Test Analog Reading for LDR (Light Dependent Resistor)
  //JOYSTICK_Test(250);               //  Test Analog Reading for JoyStick
  ALCD_BackLight();                 //  Test for display Alphanumeric LCD
  //SEGMEN_Test_01();                 //  Test SEVEN SEGMEN display Test 01 -> Segmen and Digit Test
  //SEGMEN_Test_02();                 //  Test SEVEN SEGMEN display Test 02 -> Number Display to All digit
  //SEGMEN_Test_03(5);                //  Test SEVEN SEGMEN display Test 03 -> Number Display 1234
  //SEGMEN_Test_01_PORT();
  //SEGMEN_Test_02_PORT();
  //SEGMEN_Test_03_PORT(5);
  //RTC_TestToSerial(1000);           //  Test read DS1302 and send to Serial Monitor
  RTC_TestToSegmen();               //  Test read DS1302 and send to Serial Monitor + Seven Segmen
  //-------------------------------*/
}
















