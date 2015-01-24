#include "C:\Users\ccsn\Desktop\iv\pic\PROGRAMS\new\new.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   set_tris_a(0x00);
   while(1)
   {
   output_a(0xff);
   delay_ms(50);
   output_a(0x00);
   delay_ms(50);
   }
   // TODO: USER CODE!!

}
