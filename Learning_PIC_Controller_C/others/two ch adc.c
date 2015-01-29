#include "E:\JIJU\pic c\sample\two ch adc.h"


void main()
{
int a;int b;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0x00);
set_tris_c(0x00);
while(1)
{
set_adc_channel(0);
delay_ms(10);
a=read_adc();
output_b(a);

set_adc_channel(1);
delay_ms(10);
b=read_adc();
output_c(b);
}

}
