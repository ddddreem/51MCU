#ifndef __MATRIXKEY_H__
#define __MATRIXKEY_H__

//void clear();
//void lcd2Show();
unsigned char scanMatrixKey01();
unsigned char scanMatrixKey02();
unsigned char judge(unsigned char target);
unsigned char parseMatrixKey(unsigned char keyNumber);
//unsigned char getMatrixKeyValue(unsigned char* sign, unsigned char count, unsigned char showPos);

#endif