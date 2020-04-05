#ifndef __BEEP_H_
#define __BEEP_H_
#include<reg51.h>
#ifndef uchar
#define uchar unsigned char
#endif
#ifndef uint 
#define uint unsigned int
#endif
sbit Beep=P1^5; //蜂鸣器接P1.5口
/*蜂鸣器定时器0初始化*/
void BeepInitTimer0(void);//初始化定时器0
/*打开蜂鸣器响功能*/
void BeepOpen();
/*关闭蜂鸣器响的功能*/
void BeepClose();
#endif