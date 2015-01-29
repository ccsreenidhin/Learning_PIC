#include "E:\JIJU\pic c\sample\switchpgmall.h"


void main()
{
int a;
int d=0x01;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

  
set_tris_b(0x00);
set_tris_c(0x03);
while(1)
{

a=input_c();
switch(a)
{
  case 0xff:output_b(0x00);break;
  case 0xfe:{output_b(d);rotate_left(&d,1);delay_ms(100); break;}
  case 0xfd:{output_b(d);rotate_right(&d,1);delay_ms(100); break;}
  case 0xfc:{output_b(0xff);break;}
}


}
   // TODO: USER CODE!!

}


