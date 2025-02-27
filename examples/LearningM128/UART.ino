/************************************************************************************
  File    : UART.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : UART function and interface with Serial Monitor.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/


/************************************************************************************
  Hardware  : Function Serial Print
  Note      : Repeatly print data / string to serial terminal.
  Docs      : https://www.arduino.cc/reference/en/language/functions/communication/serial/print/
------------------------------------------------------------------------------------*/
void UART_SerialPrint(unsigned long wait)
{
  Serial.println("Hello first Row.");
  Serial.print("Hello Second Row.\r\n");
  Serial.print("Hello Third Row.\x0d\x0a");
  Serial.println("-------------------------");
  delay(wait);
}

/************************************************************************************
  Hardware  : Function Serial Input
  Note      : Do not use any delay() function inside main loop.
  Docs      : https://docs.arduino.cc/built-in-examples/communication/SerialEvent
------------------------------------------------------------------------------------*/
String inputString = "";      // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

void UART_InitSerialInput()
{
  inputString.reserve(200);   // reserve 200 bytes for the inputString:
  Serial.println("Serial Input and ECHO it.\r\n");
}

void UART_SerialInput()
{
  // print the string when a newline arrives:
  if (stringComplete)
  {
    Serial.println(inputString);
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
}

/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent()
{
  while (Serial.available())
  {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') stringComplete = true;
  }
}

//--------------------------------------- END OF LINE ---------------------------------------------