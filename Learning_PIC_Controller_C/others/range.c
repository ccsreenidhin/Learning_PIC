#include "E:\JIJU\pic c\sample\range.h"


void main()
{
int a;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

 set_tris_b(0x00);
 while(1)
 {
 set_adc_channel(1);
 delay_ms(10);
 a=read_adc();
 if(a<=50)
 {
 output_b(1);
 }
 else if(a<=100)
 {
 output_b(2);
 }
 else if(a<=250)
 {
 output_b(4);
 }
 }

}
