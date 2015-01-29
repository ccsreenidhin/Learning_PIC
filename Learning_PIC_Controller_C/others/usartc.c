#include "E:\JIJU\pic c\sample\usartc.h"


void main()
{
int a;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

  set_tris_b(0x00);
  while(1)
  {
 a=getc();
 output_b(a);
  putc(a);
  }

}
