#ifndef __BEEP_H_
#define __BEEP_H_
#include<reg51.h>
#ifndef uchar
#define uchar unsigned char
#endif
#ifndef uint 
#define uint unsigned int
#endif
sbit Beep=P1^5; //��������P1.5��
/*��������ʱ��0��ʼ��*/
void BeepInitTimer0(void);//��ʼ����ʱ��0
/*�򿪷������칦��*/
void BeepOpen();
/*�رշ�������Ĺ���*/
void BeepClose();
#endif