#include "E:\JIJU\pic c\sample\interupt.h"
int a=0;
#int_EXT

void  EXT_isr(void) 
{
a=~a;
output_c(a);
}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
set_tris_c(0x00);
set_tris_b(0x01);
while(1);

}
