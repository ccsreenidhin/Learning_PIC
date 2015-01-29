#include "E:\JIJU\pic c\sample\adcusngint.h"
int a;
#int_AD
void  AD_isr(void) 
{
set_adc_channel(1);
a=read_adc();
output_b(a);
}



void main()
{

   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_AD);
   enable_interrupts(GLOBAL);
   set_tris_b(0x00);
   while(1);  

}
