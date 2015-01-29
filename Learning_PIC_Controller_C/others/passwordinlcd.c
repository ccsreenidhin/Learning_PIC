#include "E:\JIJU\pic c\sample\passwordinlcd.h"

#include "lcd.c"
#include "string.h"
void main()
{
char x='m';int i=0;char d[10];
char a[10]={"abcd"};
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   
   lcd_init();
  l:lcd_putc("enter pass");  
  while(1)
  {
  output_bit( PIN_B0, 1);
  output_bit( PIN_B1, 0);
  output_bit( PIN_B2, 0);
  output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
   x='0';
   lcd_putc('0');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   x='4';
   lcd_putc('4');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='8';
   lcd_putc('8');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='c';
   lcd_putc('c');
   }
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 1);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
    x='1';
   lcd_putc('1');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
    x='5';
   lcd_putc('5');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='9';
   lcd_putc('9');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='d';
   lcd_putc('d');
   }
  
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 1);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
    x='2';
   lcd_putc('2');
   }
   else if(input(PIN_B5)==1)
   { 
   while(input(pin_b5));
    x='6';
   lcd_putc('6');
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='a';
   lcd_putc('a');
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='e';
  
   lcd_putc('e');
   }
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 1);
   if(input(PIN_B4)==1)
    {
   while(input(pin_b4));
    x='3';
   lcd_putc('3');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   x='7';
    lcd_putc('7');
   }  
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='b';
   lcd_putc('b');
   }  
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   x='f'; 
   break;
  
   lcd_putc('f');
   }
   if(x!='m')
   {
  d[i]=x;
  i++;
  x='m';
  }
 }

 

 if(strcmp(a,d))
 {
 lcd_gotoxy(1,1);
 lcd_putc("\f");
 i=0;
 x='m';
 lcd_putc(" denied ");
 delay_ms(100);
 lcd_putc("\f");
 goto l;
 }
 else
 {
 lcd_gotoxy(1,1);
 lcd_putc("\f");
 lcd_putc("granted");
 lcd_putc("\f");
 lcd_putc("enjoy");
 }
 }

 
 
 
   

