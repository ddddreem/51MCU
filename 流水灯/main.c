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
		P2 = 0xfe;
		_delay(500);
		P2 = 0xfd;
		_delay(500);
		P2 = 0xfb;
		_delay(500);
		P2 = 0xf7;
		_delay(500);
		P2 = 0xef;
		_delay(500);
		P2 = 0xdf;
		_delay(500);
		P2 = 0xbf;
		_delay(500);
		P2 = 0x7f;
		_delay(500);		
	}
}