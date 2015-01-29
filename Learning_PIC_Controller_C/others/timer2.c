#include "E:\JIJU\pic c\sample\timer2.h"


void main()
{
int a=0x00;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DIV_BY_4,255,1);

  set_tris_b(0x00);
  while(1)
  {
  set_timer2(0x00);
  while(get_timer2()<250);
  a=~a;
  output_b(a);
}
}
