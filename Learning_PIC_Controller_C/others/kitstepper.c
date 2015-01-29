#include "E:\JIJU\pic c\sample\kitstepper.h"


#define LCD_TYPE 2
#include <lcd.c>
void main()
{
   lcd_init();



   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   
   set_tris_b(0x0f);
   while(1)
   {
   output_b(0x01);
//   output_high(PIN_b0);
   delay_ms(100);
   output_b(0x02);
   //output_high(PIN_b1);
   delay_ms(100);
   output_b(0x04);
   //output_high(PIN_b2);
   delay_ms(100);
   output_b(0x08);
   //output_high(PIN_b3);
   delay_ms(100);
   }
   
   }


