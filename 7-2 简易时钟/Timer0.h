#ifndef __TIMER0_H__
#define __TIMER0_H__

static unsigned int cnt;

void timer0_init(void);

//void timer0_runtine() interrupt 1{
//	TL0 = 0x18;				//设置定时初始值
//	TH0 = 0xFC;				//设置定时初始值
//	sec++;
//	if(sec >= 1000){
//		sec = 0;
//		P2_0 = ~P2_0;
//	}
//}
#endif