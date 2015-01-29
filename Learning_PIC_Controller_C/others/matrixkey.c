#include "E:\JIJU\pic c\sample\matrixkey.h"
#include "lcd.c"

void main()
{

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0xf0);
set_tris_c(0x00);
lcd_init();
while(1)
 {
  output_bit( PIN_B0, 1);
  output_bit( PIN_B1, 0);
  output_bit( PIN_B2, 0);
  output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
   lcd_putc('0');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   lcd_putc('4');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
   lcd_putc('8');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   lcd_putc('c');
   }
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 1);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
   lcd_putc('1');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   lcd_putc('5');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
   lcd_putc('9');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   lcd_putc('d');
   }
  
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 1);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
   lcd_putc('2');
   }
   else if(input(PIN_B5)==1)
   { 
   while(input(pin_b5));
   lcd_putc('6');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
   lcd_putc('a');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   lcd_putc('e');
   }
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 1);
   if(input(PIN_B4)==1)
    {
   while(input(pin_b4));
   lcd_putc('3');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   lcd_putc('7');
   }  
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
   lcd_putc('b');
   }  
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   lcd_putc('f');
   }
  
  
  
  
 }
 }
  
  
  
  
  
  
