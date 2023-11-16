#include <REGX52.H>
#include "MatrixKey.h"
#include "LCD1602.h"
#include "Delay.h"

//void clear(){
//	//count = 0;
//	LCD_ShowString(2, 1, "                ");
//}

//void lcd2Show(unsigned char showNum, unsigned char showPos){
//	LCD_ShowNum(2, showPos, showNum, 1);
//}
unsigned char scanMatrixKey01(){
	unsigned char keyNumber = 0;
	P1 = 0xff;
	P1_3 = 0;
	if(P1_7 == 0){_delay(20); while(P1_7 == 0); _delay(20); keyNumber = 0;}
	if(P1_6 == 0){_delay(20); while(P1_6 == 0); _delay(20); keyNumber = 4;}
	if(P1_5 == 0){_delay(20); while(P1_5 == 0); _delay(20); keyNumber = 8;}
	if(P1_4 == 0){_delay(20); while(P1_4 == 0); _delay(20); keyNumber = 12;}
	
	P1 = 0xff;
	P1_2 = 0;
	if(P1_7 == 0){_delay(20); while(P1_7 == 0); _delay(20); keyNumber = 1;}
	if(P1_6 == 0){_delay(20); while(P1_6 == 0); _delay(20); keyNumber = 5;}
	if(P1_5 == 0){_delay(20); while(P1_5 == 0); _delay(20); keyNumber = 9;}
	if(P1_4 == 0){_delay(20); while(P1_4 == 0); _delay(20); keyNumber = 13;}
	
	P1 = 0xff;
	P1_1 = 0;
	if(P1_7 == 0){_delay(20); while(P1_7 == 0); _delay(20); keyNumber = 2;}
	if(P1_6 == 0){_delay(20); while(P1_6 == 0); _delay(20); keyNumber = 6;}
	if(P1_5 == 0){_delay(20); while(P1_5 == 0); _delay(20); keyNumber = 10;}
	if(P1_4 == 0){_delay(20); while(P1_4 == 0); _delay(20); keyNumber = 14;}
	
	P1 = 0xff;
	P1_0 = 0;
	if(P1_7 == 0){_delay(20); while(P1_7 == 0); _delay(20); keyNumber = 3;}
	if(P1_6 == 0){_delay(20); while(P1_6 == 0); _delay(20); keyNumber = 7;}
	if(P1_5 == 0){_delay(20); while(P1_5 == 0); _delay(20); keyNumber = 11;}
	if(P1_4 == 0){_delay(20); while(P1_4 == 0); _delay(20); keyNumber = 15;}
	return keyNumber;
}

/*
4*4 矩阵按键，参考计算机的计算器，实现加减乘除
12 为 清零
 */
unsigned char scanMatrixKey02(){
	unsigned char keyNumber = 255;
	P1 = 0x0f;
	switch(P1){
		case(0x07): keyNumber = 1; break;
		case(0x0b): keyNumber = 2; break;
		case(0x0d): keyNumber = 3; break;
		case(0x0e): keyNumber = 4; break;
	}
	
	P1 = 0xf0;
	switch(P1){
		case(0x70): keyNumber += 0; break;
		case(0xb0): keyNumber += 4; break;
		case(0xd0): keyNumber += 8; break;
		case(0xe0): keyNumber += 12; break;
	}
	return keyNumber;
}

unsigned char judge(unsigned char target){
	if(target == 14){
		return 1;
	}
	if(target%4 == 0 || target >= 13){
		return 0;
	}
	return 1;
}

unsigned char parseMatrixKey(unsigned char keyNumber){
	unsigned char temp = 255;
	if(keyNumber == 14){
		temp = 0;
	}
	return temp;
}


//unsigned char getMatrixKeyValue(unsigned char* sign, unsigned char count, unsigned char showPos){
//	_delay(20);
//	if(count < 16){
//		sign[count] = scanMatrixKey02();
//		lcd2Show(sign[count], showPos);
//		showPos++;
//	}
//	_delay(20);
//	return sign[count++];
//}
