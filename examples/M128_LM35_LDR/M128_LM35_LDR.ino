/************************************************************************************
  File    : M128_LM35_LDR.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ADC LM35 Temperature sensor and LDR light sensor
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  Documentation  https://www.electronicwings.com/arduino/adc-in-arduino

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"

/*
//  using constant
const int adcLM35 = A5;   // Analog input for LM35
const int adcLDR  = A0;   // Analog input for LDR
/*///
//  using define
#define adcLM35   A5      // Analog input for LM35
#define adcLDR    A0      // Analog input for LDR
//*/

int valLM35 = 0;          // global variable to store LM35 value
int valLDR = 0;           // global variable to store LDR value

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  valLM35 = analogRead(adcLM35);
  valLDR = analogRead(adcLDR);

  // map it to the range of the analog out:
  //outputValue = map(sensorValue, 0, 1023, 0, 255);

  // print the results to the Serial Monitor:
  Serial.print("sensor LM35 = ");
  Serial.print(valLM35);
  Serial.print("\t sensor LDR = ");
  Serial.println(valLDR);

  // wait before the next loop for the analog-to-digital
  delay(250);
}
