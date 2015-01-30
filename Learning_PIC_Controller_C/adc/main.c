#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\adc\main.h"


void main()
{
   unsigned int a,z;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   set_adc_channel(0);
   while(1)
   {
   delay_us(10);
   a=read_adc();
   output_b(a);
   if(a!=z)
   printf("%u",a);
   z=a;
}
   // TODO: USER CODE!!

}
