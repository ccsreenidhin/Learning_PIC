#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\serial\main.h"


void main()
{
   char c;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   while(1)
   {
   c=getc();
   putc(c);
   output_b(c);
   }
   // TODO: USER CODE!!

}
