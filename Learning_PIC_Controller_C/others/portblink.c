#include<includes.h>
void task1()
{
while(1)
	{
	PORTA=~PORTA;
	OSTimeDlyHMSM(0,0,0,500);
	}
}
void task2()
{
while(1)
	{
	PORTB=~PORTB;
	OSTimeDlyHMSM(0,0,0,500);
	}
}
OS_STK s1[512],s2[512];
void main()
{
DDRA=0XFF;
DDRB=0XFF;
TCCR0=0x07;
TIMSK=0X01;
TCNT0=0X00;
OSInit();
OSTaskCreate(task1,0,&s1[511],1);
OSTaskCreate(task2,0,&s2[511],2);
OSStart();
}