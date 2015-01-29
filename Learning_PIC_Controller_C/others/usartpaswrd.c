#include "E:\JIJU\pic c\sample\usartpaswrd.h"

#include "string.h"
void main()
{
char a[10]={"absc"},b[10];
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

  
  while(1)
  {
  puts( "enter pass " );
  gets(b);
  puts(b);
  if(strcmp(a,b)==0)
  {
  puts("correct");
  break;
  }
else
 puts("wrong");
}
}
