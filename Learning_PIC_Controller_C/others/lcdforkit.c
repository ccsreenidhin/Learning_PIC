#include "E:\JIJU\pic c\sample\lcdforkit.h"


#define LCD_TYPE 1
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

  lcd_putc("pravi");
  while(1);

}
