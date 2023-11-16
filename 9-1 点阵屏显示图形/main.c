#include <REGX52.H>
#include "Matrix_LED.h"

void main(){
	Matrix_LED_init();
	while(1){
		Matrix_LED_show(0, 0xaa);
	}
}