#include "E:\JIJU\pic c\sample\rotate.h"


void main()
{
int a=0x80;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   set_tris_b(0x00);

while(1)
{
output_b(a);
a=a>>1;
delay_ms(1000);
if(a==0)
{
a=0x01;
  do
  {
   a=a<<1;
   output_b(a);
   delay_ms(1000);
   }
   while(a!=0x80);

   // TODO: USER CODE!!

}
}
}
