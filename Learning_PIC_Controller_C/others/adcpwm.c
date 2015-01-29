#include "E:\JIJU\pic c\sample\adcpwm.h"


void main()
{
int c;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DIV_BY_4,255,1);
   setup_ccp1(CCP_PWM);
   set_pwm1_duty(0);
set_tris_b(0x00);

   while(1)
   {
  set_adc_channel(1);
  delay_ms(10);
  c=read_adc();
   set_pwm1_duty(c);
   }

}
