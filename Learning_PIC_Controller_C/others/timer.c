#include "E:\JIJU\pic c\sample\timer.h"


void main()
{
int a=0;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_8);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0x00);
while(1)
{
a=~a;
set_timer0(0);
while(get_timer0()<125);
output_c(a);
}
   // TODO: USER CODE!!

}
