#include "E:\JIJU\pic c\sample\adctousart.h"


void main()
{
unsigned int a,z=0;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
 set_adc_channel(2);
  while(1)
  {
 puts("\f");
 delay_ms(20);
 a=read_adc();
 if(a!=z)
 {
 printf(" %u ",a);
 delay_ms(100);

  }
  z=a;
}
}
