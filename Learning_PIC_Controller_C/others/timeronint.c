#include "E:\JIJU\pic c\sample\timeronint.h"
int a=0x00;
#int_RTCC
void  RTCC_isr(void) 
{
a=~a;
output_b(a);
}



void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_4);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_RTCC);
   enable_interrupts(GLOBAL);
   set_tris_b(0x00);
   set_timer0(0x05);
   
while(1);
   // TODO: USER CODE!!

}
