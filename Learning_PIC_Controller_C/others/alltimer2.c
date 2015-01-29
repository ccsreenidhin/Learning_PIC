#include "E:\JIJU\pic c\sample\alltimer2.h"
#int_RTCC
void  RTCC_isr(void) 
{
a=~a;
output_a(a);
set_timer0(0x00);
}

#int_TIMER1
void  TIMER1_isr(void) 
{
b=~b;
output_b(b);
set_timer1(0xfc17);
}

#int_TIMER2
void  TIMER2_isr(void) 
{

}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_256);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2(T2_DIV_BY_16,0,1);
   enable_interrupts(INT_RTCC);
   enable_interrupts(INT_TIMER1);
   enable_interrupts(INT_TIMER2);
   enable_interrupts(GLOBAL);

   // TODO: USER CODE!!
set_tris_a(0x00);
set_tris_b(0x00);
set_tris_c(0x00);
set_timer0(0x05);
set_timer1(0xfc17);
while(1);
}
