#ifndef __MATRIX_LED_H__
#define __MATRIX_LED_H__

#include <REGX52.H>

sbit RCK = P3^5;	// RCLK
sbit SCK = P3^6;	// SRCLK
sbit SER = P3^4;	// SER

void _74HC595_WriteByte(unsigned char Byte); // 控制74HC595芯片控制行选

void Matrix_LED_init(); // 点阵屏初始化，寄存器时钟给低电平

void Matrix_LED_show(unsigned char column, byte); // 点阵屏显示数据

#endif