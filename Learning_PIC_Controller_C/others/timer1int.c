#include "E:\JIJU\pic c\sample\timer1int.h"
int a=0x00;
#int_TIMER1
void  TIMER1_isr(void) 
{
a=~a;
output_b(a);
set_timer1(0xfc17);
}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_1);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);

set_tris_b(0X00);
set_timer1(0xfc17);
while(1);
   // TODO: USER CODE!!

}
