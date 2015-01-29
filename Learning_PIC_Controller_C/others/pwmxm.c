#include "E:\JIJU\pic c\sample\pwmxm.h"


void main()
{
int a;

   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DIV_BY_4,250,1);
   setup_ccp1(CCP_PWM);
   set_pwm1_duty(0);
   
while(1)
{
set_adc_channel(2);
delay_us(10);
a=read_adc();
 set_pwm1_duty(a);
}
}
