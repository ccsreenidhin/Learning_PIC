#include "E:\JIJU\pic c\sample\adctolcd.h"

#include "lcd.c"
void main()
{
int a,b;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

 lcd_init();
while(1)
{
set_adc_channel(1);
delay_ms(2);
a=read_adc();
printf(lcd_putc,"%u",a);
lcd_gotoxy(1,1);
b=read_adc();
if(a!=b)
lcd_send_byte(0,0x01);
}
}
