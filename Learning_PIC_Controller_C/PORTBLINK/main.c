#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\PORTBLINK\main.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   while(1)
   {
   output_a(0xff);
   output_b(0xff);
   output_c(0xff);
   delay_ms(500);
   output_a(0x00);
   output_b(0x00);
   output_c(0x00);
   delay_ms(500);
   
   }
   // TODO: USER CODE!!

}
