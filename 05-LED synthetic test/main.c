#include <REGX52.H>

unsigned char target[] = {0x01, 0x80};

void _delay(unsigned int xms){
	unsigned char i, j;
	while(xms--){
		i = 2;
		j = 239;
		do{
			while (--j);
		} while (--i);
	}
}

void main(){
	unsigned char temp = 0x01;
	unsigned char LEDNum = 0;
	P2 = ~temp;
	while(1){
		if(P3_1 == 0){
			_delay(20);
			while(P3_1 == 0);
			_delay(20);
			LEDNum++;
			if(LEDNum > 8){
				LEDNum = 0;
			}
			P2 = ~(temp << LEDNum);
		}
		if(P3_0 == 0){
			_delay(20);
			while(P3_0 == 0);
			_delay(20);
			LEDNum--;
			if(LEDNum < 0){
				LEDNum = 8;
			}
			P2 = ~(temp << LEDNum);
		}
	}
}