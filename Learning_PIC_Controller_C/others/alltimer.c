#include "E:\JIJU\pic c\sample\alltimer.h"
int a=0;int b=0;int c=0;
int h,j,k;
#int_RTCC
void  RTCC_isr(void) 
{
if(h==100)
{
a=~a;
output_a(a);
h=0;
}
set_timer0(0x00);
h++;
}


#int_TIMER1
void  TIMER1_isr(void) 
{
if(j==100)
{

b=~b;
output_b(b);

j=0;
}
set_timer1(0xfc17);
j++;
}
#int_TIMER2
void  TIMER2_isr(void) 
{
if(k==200)
{
c=~c;
output_c(c);
k=0;
}
k++;
}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_4);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_2);
   setup_timer_2(T2_DIV_BY_16,255,1);
   enable_interrupts(INT_RTCC);
   enable_interrupts(INT_TIMER1);
   enable_interrupts(INT_TIMER2);
   enable_interrupts(GLOBAL);
set_tris_a(0x00);
set_tris_b(0x00);
set_tris_c(0x00);
set_timer0(0x05);
set_timer1(0xfc17);
while(1);
   // TODO: USER CODE!!

}
