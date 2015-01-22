#include "C:\Users\ccsn\Desktop\pic\PROGRAMS\switch\main.h"


void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   // TODO: USER COD{
   while(1)
   {
   if(INPUT(PIN_C0)==1)
   {
   OUTPUT_B(255);
   OUTPUT_A(0);
   }
   Else
   {
   OUTPUT_B(0);
   OUTPUT_A(255);
   }
}

}
