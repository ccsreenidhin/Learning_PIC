#include "E:\JIJU\pic c\sample\lcd.h"
void lcd_data(char );
void lcd_comnd(int v);


void main()
{
int i;
char a[10]={0x0c,0x38,0x06,0x80};
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

  set_tris_b(0x00);
  set_tris_c(0x00);
 //lcd_comnd(0x38);
 //lcd_comnd(0x06);
 //lcd_comnd(0x0c);
 //lcd_comnd(0x80);
 for(i=0;i<=4;i++)
 {
 lcd_comnd a[i];
 }
 
 lcd_data("kollam to");
 lcd_comnd(0xc0);
 lcd_data("kottayam");
 while(1);
}
 void lcd_comnd(int v)
  {
  
  output_low(PIN_c0);
  output_low(PIN_c1);
  output_b(v);
  output_high(PIN_c2);
  delay_ms(2);
  output_low(PIN_c2);
  }
 
 void lcd_data(char x)
  {
  
  output_high(PIN_c0);
  output_low(PIN_c1);
  output_b(x);
  output_high(PIN_c2);
  delay_ms(2);
  output_low(PIN_c2);
  
  }
  
  



