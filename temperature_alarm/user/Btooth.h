#ifndef __BTOOH_H_
#define __BTOOH_H_
/**********************************
����ͷ�ļ�
**********************************/
#include<reg51.h>
//---�ض���ؼ���---//
#ifndef uchar
#define uchar unsigned char
#endif
#ifndef uint 
#define uint unsigned int
#endif
/**********************************
��������
**********************************/	
/*��������ͨ�ų�ʼ�ӳ���*/
void BtoohInit(); 
/*����һ���ַ�*/
void Send_rt(uchar c);
/*����һ���ַ���*/
void SendStr(uchar *s);
#endif