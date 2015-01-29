#include "E:\JIJU\pic c\sample\TIMER1.h"


void main()
{
int a=0x00;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_1);
   setup_timer_2(T2_DISABLED,0,1);

 set_tris_b(0x00);
 while(1)
 {

 set_timer1(0xfc17);
 while(get_timer1()<65515);
  a=~a;
 output_b(a);
 }

}
