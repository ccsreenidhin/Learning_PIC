#include "E:\JIJU\pic c\sample\counter.h"


void main()
{
int a;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_EXT_L_TO_H|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0x00);
set_tris_a(0xff);
while(1)
{
a=get_timer0();
output_b(a);

}
   // TODO: USER CODE!!

}
