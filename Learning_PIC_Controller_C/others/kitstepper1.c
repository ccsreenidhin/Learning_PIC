#include "E:\JIJU\pic c\sample\kitstepper1.h"


#define LCD_TYPE 2
#include <lcd.c>
void main()
{
   lcd_init();

//int a;

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

 set_tris_b(0x0f);
 while(1)
{
output_b(0x0c);
delay_ms(10);
output_b(0x08);
delay_ms(10);
output_b(0x09);
delay_ms(10);
output_b(0x01);
delay_ms(10);
output_b(0x03);
delay_ms(10);
output_b(0x02);
delay_ms(10);
output_b(0x06);
delay_ms(10);
output_b(0x04);
delay_ms(10);
}
}





