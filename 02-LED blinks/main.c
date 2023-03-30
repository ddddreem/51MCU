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

void main(){
	while(1){
		P2 = 0xee;
		_delay(666);
		P2 = 0xff;
		_delay(666);
	}
}