#include "D:\1aques\New ques\qst\pic c\sample\toandfrolcd.h"


void main()
{
int a;
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
set_tris_b(0x00);
while(1)
{
set_adc_channel(1);
delay_us(10);
a=read_adc();
output_b(a);

}

}
#include "string.h"
void lcd_comnd(int ) ;
void lcd_data(char );

void main()
{
int i,s;
char a[10]={0x0c,0x38,0x06,0x87};
char b[10]={"hai"};
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   set_tris_b(0x00);
   set_tris_c(0x00);
   for(i=0;i<=4;i++)
     {
     lcd_comnd(a[i]);
     }
   
   
    
 
while(1)
 {
 
 lcd_comnd(0x01);
 
 for(s=0;s<=strlen(b);s++)
    {
    lcd_data(b[s]);  
    }
 
 
 
   for(s=0;s<=14-(strlen(b)-1);s++)
    {
     lcd_comnd(0x1c);
    }
   for(s=0;s<=14-(strlen(b)-1);s++)
    {

     lcd_comnd(0x18);
    }


lcd_comnd(0x01);
  lcd_comnd(0xcf);
   for(s=0;s<=strlen(b);s++)
    {
    lcd_data(b[s]);
    }

 
   for(s=0;s<=14-(strlen(b)-1);s++)
    {
     lcd_comnd(0x18);
    }
   for(s=0;s<=14-(strlen(b)-1);s++)
    {

     lcd_comnd(0x1c);
    }
}
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
  
  




