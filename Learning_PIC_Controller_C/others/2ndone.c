#include "E:\JIJU\pic c\sample\2ndone.h"

char get_key();
#include"lcd.c"
void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2(T2_DISABLED,0,1);

  set_tris_a(0x00);
  while(1)
  {
  a=get_key();
  )
  }

}
