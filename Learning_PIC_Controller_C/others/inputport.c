#include "E:\JIJU\pic c\sample\inputport.h"


void main()
{
int a=0x00,c;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   // TODO: USER CODE!!
set_tris_b(0x00);
set_tris_c(0x01);
while(1)
{
c=input_c();
if(c==0x01)
{
while(input_c()==0x01);
a=~a;
output_b(a);
}
}
}
