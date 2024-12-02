/************************************************************************************
  File    : M128_PinMap.h
  Board   : ATmega128 Learning Board.
  Author  : TooPayZ.
  Date    : 2023-March
  Title   : Header file for mapping Pin and other Board information.
  Please see hardware datasheet or TooPayZ software application to understand this code.

  All tutorial Here based on Arduino Example with minor modification.
  Feel free for modification and use the function for any purposes.
------------------------------------------------------------------------------------*/

#ifndef M128_PIN_MAP_H
#define M128_PIN_MAP_H


#include <stdlib.h>
#include <Arduino.h>
#include <LiquidCrystal.h>

//----------------------------------------------------------	Output LED
//	Create and define enum for LED Mode
typedef enum {ledMacro, ledVarInt, ledArray}LEDmode;

//	GPIO PinMap using macro #define for LED
#define dLED_0     		28		//	PC0
#define dLED_1     		29		//	PC1
#define dLED_2     		30		//	PC2
#define dLED_3     		31		//	PC3
#define dLED_4     		32		//	PC4
#define dLED_5     		33		//	PC5
#define dLED_6     		34		//	PC6
#define dLED_7     		35		//	PC7

//	GPIO PinMap using constant for LED
const int csLED_0 = 28;
const int csLED_1 = 29;
const int csLED_2 = 30;
const int csLED_3 = 31;
const int csLED_4 = 32;
const int csLED_5 = 33;
const int csLED_6 = 34;
const int csLED_7 = 35;

//	GPIO PinMap using variable for LED
int iLED_0 = 28;
int iLED_1 = 29;
int iLED_2 = 30;
int iLED_3 = 31;
int iLED_4 = 32;
int iLED_5 = 33;
int iLED_6 = 34;
int iLED_7 = 35;

//	GPIO PinMap using array for LED
unsigned char arLED[8] = {28, 29, 30, 31, 32, 33, 34, 35};

//----------------------------------------------------------	Input BUTTON
//	Create and define enum for BUTTON Mode
typedef enum {btnMacro, btnVarInt, btnArray}BTNmode;

//	GPIO PinMap using macro #define for BUTTON
#define Inp_BtnA   		37		//	PA7
#define Inp_BtnB   		38		//	PA6
#define Inp_BtnC   		39		//	PA5
#define Inp_BtnD   		40		//	PA4


//	GPIO PinMap using constant for BUTTON
const int csBTN_A = 37;
const int csBTN_B = 38;
const int csBTN_C = 39;
const int csBTN_D = 40;

//	GPIO PinMap using variable for BUTTON
int iBTN_A = 37;
int iBTN_B = 38;
int iBTN_C = 39;
int iBTN_D = 40;

//	GPIO PinMap using array for BUTTON
unsigned char arBUTTON[4] = {37, 38, 39, 40};

//----------------------------------------------------------	SEVEN SEGMEN
//	GPIO PinMap using macro #define for SEVEN SEGMEN
#define SEG_A      		28		//	PC0
#define SEG_B      		29		//	PC1
#define SEG_C      		30		//	PC2
#define SEG_D      		31		//	PC3
#define SEG_E      		32		//	PC4
#define SEG_F      		33		//	PC5
#define SEG_G      		34		//	PC6
#define SEG_DT     		35		//	PC7

#define PORT_SEGMEN		PORTC
#define DDR_SEGMEN		DDRC

#define PORT_DIGIT		PORTD
#define DDR_DIGIT		DDRD
#define DGT_1   		22		//	PD4
#define DGT_2	  		23		//	PD5
#define DGT_3   		24		//	PD6
#define DGT_4   		25		//	PD7

//	Seven Segmen binary display for Common ANODE
//-- Segmen 	-> 		 DtGFEDCBA
#define _0    			0b11000000
#define _1    			0b11111001
#define _2    			0b10100100
#define _3    			0b10110000
#define _4    			0b10011001
#define _5    			0b10010010
#define _6    			0b10000010
#define _7    			0b11111000
#define _8    			0b10000000
#define _9    			0b10010000

//	GPIO PORT Manipulation macro #define for SEVEN SEGMEN
#define DIGIT_AS_OUTPUT() DDR_DIGIT  |= (1 << DIGIT_1) | (1 << DIGIT_2) | (1 << DIGIT_3) | (1 << DIGIT_4)
#define DIGIT_ALL_OFF()   PORT_DIGIT &= ~((1 << DIGIT_1) | (1 << DIGIT_2) | (1 << DIGIT_3) | (1 << DIGIT_4))
#define DIGIT_ALL_ON()    PORT_DIGIT |=   (1 << DIGIT_1) | (1 << DIGIT_2) | (1 << DIGIT_3) | (1 << DIGIT_4)

//	GPIO PinMap using array for SEVEN SEGMEN
unsigned char arSEGMEN[8] 	= {28, 29, 30, 31, 32, 33, 34, 35};
unsigned char arDIGIT[4]  	= {22, 23, 24, 25};
unsigned char setSegmen[10] = {_0, _1, _2, _3, _4, _5,_6, _7, _8, _9};

//----------------------------------------------------------	Display ALCD 16x2
//	GPIO PinMap using macro #define for Alphanumeric LCD
#define LCD_RS     		8		//	PB0
#define LCD_RW     		10		//	PB2
#define LCD_EN     		11		//	PB3
#define LCD_D4     		12		//	PB4
#define LCD_D5     		13		//	PB5
#define LCD_D6     		14		//	PB6
#define LCD_D7     		15		//	PB7
#define LCD_BL     		5		//	PE5

#define LCD_BL_AS_OUTPUT()	DDRE  |=  (1 << LCD_BL)
#define LCD_BL_ON()			PORTE |=  (1 << LCD_BL)
#define LCD_BL_OFF()		PORTE &= ~(1 << LCD_BL)

//	GPIO PinMap using constant variable for Alphanumeric LCD
const int 	lcd_rs = 8,
			lcd_rw = 10,
			lcd_en = 11,
			lcd_d4 = 12,
			lcd_d5 = 13,
			lcd_d6 = 14,
			lcd_d7 = 15;

//	Construct for Alphanumeric LCD
LiquidCrystal 	ALCD(lcd_rs, lcd_rw, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7);

//----------------------------------------------------------	Another or MISCELLANEOUS part
//	GPIO PinMap using macro #define for another peripheral
#define RELAY   		26		//	PG0
#define BUZZER   		27		//	PG1
#define LM35   			A0		//	PF0 45 -> A0 : Analog 0
#define POTENSIO		A1		//	PF1 46 -> A1 : Analog 1
#define JOY_YY 			A2		//	PF2 47 -> A2 : Analog 2
#define JOY_XX 			A3		//	PF3 48 -> A3 : Analog 3
#define JOY_SW 			A4		//	PF3 49 -> A4 : Analog 4
#define LDR 			A5		//	PF3 50 -> A5 : Analog 5


//----------------------------------------------------------	RTC DS1302
//	GPIO PinMap using macro #define for RTC DS1302
#define RTC_RST			17		//	PG4
#define RTC_SCK			18		//	PD0
#define RTC_DIO			19		//	PD1
#define countof(a) 		(sizeof(a) / sizeof(a[0]))
				
//ThreeWire myWire(RTC_DIO, RTC_SCK, RTC_RST);
//RtcDS1302<ThreeWire> Rtc(myWire);

#endif
//--------------------------------------- END OF LINE ---------------------------------------------