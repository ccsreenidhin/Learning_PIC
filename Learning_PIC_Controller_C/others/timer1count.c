#include "E:\JIJU\pic c\sample\timer1count.h"


void main()
{
int a;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_EXTERNAL|T1_DIV_BY_1);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0x00);
set_tris_c(0x01);
//a=get_timer1();
//output_b(a+1);
while(1)
{
a=get_timer1();
output_b(a);
   // TODO: USER CODE!!
}
}
