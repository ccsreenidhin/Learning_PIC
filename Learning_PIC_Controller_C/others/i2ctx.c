#include "E:\JIJU\pic c\sample\i2ctx.h"


void main()
{
   unsigned int a,i;

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   i2c_start();
   i2c_write(0xa0);     
   i2c_write(0x00);
   i2c_write(0xf0);
   i2c_stop();
   
   do
   {

      i2c_start();
      a=i2c_write(0xa0);
   }while(a!=0);
   
   i2c_write(0x00);
   i2c_start();
   i2c_write(0xa1);     
   a = i2c_read();
   i2c_stop();
   output_b(a);
   while(1);
}
