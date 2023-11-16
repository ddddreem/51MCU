#include <REGX52.H>
#include "Delay.h"
#include "Key.h"
#include <INTRINS.h>

void Timer0_Init(void)		//1毫秒@12.000MHz
{
	TMOD &= 0xF0;			//设置定时器模式
	TMOD |= 0x01;			//设置定时器模式
	TL0 = 0x18;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	TF0 = 0;				//清除TF0标志
	TR0 = 1;				//定时器0开始计时
	ET0 = 1;
	EA = 1;
	PT0 = 1;
}

//unsigned char (*func)(unsigned char, unsigned char);
unsigned char keyNum;
unsigned char LEDMode;

void main(){
	Timer0_Init();
	P2 = 0xfe;
    while(1){
		keyNum = Key();
		if(keyNum){
			if(keyNum==1){
				LEDMode++;
				if(LEDMode >= 2) LEDMode = 0;
			}
		}
    }
}

unsigned int cnt;
void Timer0_Runtine() interrupt 1{
	TL0 = 0x18;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	cnt++;
	if(cnt >= 1000){
		cnt = 0;
		if(LEDMode){
			P2 = _crol_(P2, 1);
		}else{
			P2 = _cror_(P2, 1);
		}
		
	}
}