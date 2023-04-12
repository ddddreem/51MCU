#include <REGX52.H>

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

unsigned char light[8] = {0xfe, 0xfd, 0xfb, 0xf7, 0xef, 0xdf, 0xbf, 0x7f};
unsigned char i = 0;
unsigned int delay_time = 800;

void display(){
	P2 = 0xff;
	for(i = 0; i < 8; i++){
		_delay(delay_time-100);
		P2 = light[i];
		_delay(delay_time-100);
		delay_time -= 100;
		
	}
	for(i = 7; i >= 0; i--, delay_time--){
		_delay(delay_time+100);
		P2 = light[i];
		_delay(delay_time+100);
		delay_time += 100;
	}
}

void main(){
	while(1){
		display();
	}
}