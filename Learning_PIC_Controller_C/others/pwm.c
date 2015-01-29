#include "E:\JIJU\pic c\sample\pwm.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DIV_BY_4,250,1);
   setup_ccp1(CCP_PWM);
   set_pwm1_duty(512);

   // TODO: USER CODE!!
while(1);
}
