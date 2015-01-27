#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\pblink timer interrupt\main.h"
#int_RTCC
int i=0;
void  RTCC_isr(void) 
{
SET_TIMER0(0);
i=~i;
OUTPUT_B(i);
}

void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_RTCC);
   enable_interrupts(GLOBAL);
   set_tris_b(0x00);
   SET_TIMER0(0);
   while(1);

   // TODO: USER CODE!!

}
