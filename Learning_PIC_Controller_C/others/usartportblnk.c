#include "E:\JIJU\pic c\sample\usartportblnk.h"


void main()
{
char a;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

  while(1)
{
a=getc();
if(a=='a')
{output_b(0x00);}
else if(a=='b')
{output_a(0x00);}
else
{output_b(0xff);
output_a(0xff);}
}

}

