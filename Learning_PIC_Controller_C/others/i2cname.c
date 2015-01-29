#include "E:\JIJU\pic c\sample\i2cname.h"


#define LCD_TYPE 1
#include <lcd.c>
#include <string.h>
void main()
{
int i=0;
int c,h;
char a[10]="qwert" ;
char j[10];
 lcd_init();


   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

 // set_tris_b(0x00);
  i2c_start();
  i2c_write(0xa0);
  i2c_write(0x00);
  for(i=0;i<4;i++)
  i2c_write(a[i]);
  i2c_stop();
  do
  {
   i2c_start();
  h=i2c_write(0xa0);
  }
  while(h!=0);
  i2c_write(0x00);
  i2c_start();
  i2c_write(0xa1);
 // for(i=0;i<4;i++)
 // {
  j[i]=i2c_read();
   putc(j[i]);
//  }
  i2c_stop();
 
  
    lcd_puts(j);
    while(1);

}
