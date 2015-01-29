#include "E:\JIJU\pic c\sample\changeonint.h"
int a=0;
#int_RB
void  RB_isr(void) 
{
a=input_b()&0xf0;
output_c(a);
//delay_ms(100);
}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_RB);
   enable_interrupts(GLOBAL);
set_tris_c(0x00);
set_tris_b(0xf0);
while(1);
   // TODO: USER CODE!!

}
