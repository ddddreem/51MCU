#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"

void main(){
	LCD_Init();
	LCD_ShowChar(1, 1, 'A');
	LCD_ShowString(1, 3, "Hello World!");
	while(1){
		LCD_ShowString(1, 16, "-");
		_delay(500);
		LCD_ShowString(1, 16, "+");
		_delay(500);
	}
}
