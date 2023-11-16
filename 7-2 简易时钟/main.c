#include <REGX52.H>
#include "Timer0.h"
#include "LCD1602.h"

unsigned int days;
unsigned char hours = 23;
unsigned char mins = 59;
unsigned char secs = 55;

void main(){
	timer0_init();
	LCD_Init();
	LCD_ShowString(1, 1, "Start:");
	LCD_ShowString(1, 14, "dys");
	LCD_ShowString(2, 9, "  :  :  ");
    while(1){
		LCD_ShowNum(1, 8, days, 6);
		LCD_ShowNum(2, 9, hours, 2);
		LCD_ShowNum(2, 12, mins, 2);
		LCD_ShowNum(2, 15, secs, 2);
    }
}

void timer0_runtine() interrupt 1{
	TL0 = 0x18;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	cnt++;
	if(cnt >= 1000){
		cnt = 0;
		if(60 == ++secs){
			secs = 0;
			if(60 == ++mins){
				mins = 0;
				if(24 == ++hours){
					hours = 0;
					++days;
				}
			}
		}
	}
}