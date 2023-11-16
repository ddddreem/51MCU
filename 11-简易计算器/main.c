#include <REGX52.H>
#include "MatrixKey.h"
#include "LCD1602.h"
#include "Delay.h"

unsigned char keyNumber = 255;
unsigned int num1 = 0;
//bool flag = false;
//unsigned char pos = 1;
//unsigned int num2 = 0;

void main(){
	LCD_Init();
	LCD_ShowString(1, 1, "Mini Calc");
    while(1){
		//getMatrixKeyValue(sign, count);
		if(pos < 16){
			LCD_ShowNum(2, pos, num1, 1);
			pos++;
		}
//		keyNumber = scanMatrixKey02();
//		if(keyNumber != 255){
//			LCD_ShowNum(2, pos++, 1, 1);
//			if(!flag && keyNumber%4 == 0){
//				switch(keyNumber){
//					case 4: LCD_ShowChar(2, pos++, '+'); break;
//					case 8: LCD_ShowChar(2, pos++, '-'); break;
//					case 12: LCD_ShowChar(2, pos++, '*'); break;
//					case 16: LCD_ShowChar(2, pos++, '/'); break;
//				}
//				flag = true;
//			}
			//temp = parseMatrixKey(keyNumber);
//			if(&&!flag){
//				num1 = num1*10+keyNumber;
//			}else{
//				
//			}
//			if(judge(keyNumber)){
//				LCD_ShowNum(2, showPos++, keyNumber, 1);
//			}else{
//				switch(keyNumber){
//					case(0x04):LCD_ShowChar(2, showPos++, '+'); break;
//					case(0x08):LCD_ShowChar(2, showPos++, '-'); break;
//					case(0x0b):LCD_ShowChar(2, showPos++, '*'); break;
//					case(0x0f):LCD_ShowChar(2, showPos++, '/'); break;
//				}
//			}
//			count++;
		}
		
    }
}