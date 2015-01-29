#include "E:\JIJU\pic c\sample\spi.h"


void main()
{
int i=0;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_MASTER|SPI_L_TO_H|SPI_CLK_DIV_4);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   while(1)
   {
   output_b(0x00);
   spi_write(i);
   delay_ms(500);
   i++;
   if(i==255)
   {
   i=0;
   }
   }

}
