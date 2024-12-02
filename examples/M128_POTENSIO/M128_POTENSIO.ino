/************************************************************************************
  File    : M128_POTENSIO.ino
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2024-November
  Title   : Basic training ADC Potensiometer
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
/*************************************************************************************/

//  Call external header file or....
//#include "[Location path]\M128-LearningBoard\Prog Arduino\M128_PinMap.h"

//  Documentation  https://www.electronicwings.com/arduino/adc-in-arduino

//  define based on Hardware Pinmap
//  see file "....\M128-LearningBoard\MegaCore\MegaCore Pinout.png"M128_POTENSIO

/*
//  using constant
const int POTENSIO = A1;   // Analog input for Potensio
/*///
//  using define
#define POTENSIO		A1		//	PF1 46 -> A1 : Analog 1
//*/

int valPOT = 0;           // global variable to store LM35 value

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  valPOT = analogRead(POTENSIO);

  // map it to the range of the analog out:
  //outputValue = map(sensorValue, 0, 1023, 0, 255);

  // print the results to the Serial Monitor:
  Serial.print("Pontensiometer = ");
  Serial.println(valPOT);

  // wait before the next loop for the analog-to-digital
  delay(250);
}
