#ifndef __BTOOH_H_
#define __BTOOH_H_
/**********************************
包含头文件
**********************************/
#include<reg51.h>
//---重定义关键词---//
#ifndef uchar
#define uchar unsigned char
#endif
#ifndef uint 
#define uint unsigned int
#endif
/**********************************
函数声明
**********************************/	
/*蓝牙串口通信初始子程序*/
void BtoohInit(); 
/*发送一个字符*/
void Send_rt(uchar c);
/*发送一个字符串*/
void SendStr(uchar *s);
#endif