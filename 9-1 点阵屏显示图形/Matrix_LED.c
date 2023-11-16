#include "Matrix_LED.h"

void _74HC595_WriteByte(unsigned char Byte){
	unsigned char i = 0;
	for(; i < 8; ++i){
		SER = Byte&(0x80>>i);
		SCK = 1;
		SCK = 0;
	}
	RCK = 1;
	RCK = 0;
}

void Matrix_LED_init(){
	RCK = 0;
	SCK = 0;
}

void Matrix_LED_show(unsigned char column, byte){
	_74HC595_WriteByte(byte);
	P0 = ~(0x80>>column);
}