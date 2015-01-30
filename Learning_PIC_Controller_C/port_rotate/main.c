#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\port rotate\main.h"


void main()
{
   int i=1;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   set_tris_b(0x00);

   while(1)
   {
   while(i!=128)
   {
   OUTPUT_B(i);
   DELAY_MS(10);
   i=i<<1;

   }
   while(i!=1)
   {
   OUTPUT_B(i);
   DELAY_MS(10);
   i=i>>1;
   }
   }
   // TODO: USER CODE!!

}
