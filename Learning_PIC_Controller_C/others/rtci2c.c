#include "E:\JIJU\pic c\sample\rtci2c.h"

#include "lcd.c"
void main()
{
unsigned  a[10];
int d,i;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   lcd_init();
i2c_start();
i2c_write(0xd0);
i2c_write(0x00);
i2c_write(0x50);
i2c_write(0x59);
i2c_write(0x11|0x40);
i2c_write(0x00);
i2c_write(0x12);
i2c_write(0x03);
i2c_write(0x014);
i2c_stop();
while(1)
{
 lcd_putc("\f");
do
   {

      i2c_start();
      d=i2c_write(0xd0);
   }while(d!=0);
   
   i2c_write(0x00);
   i2c_start();
   i2c_write(0xd1);
   for(i=0;i<=10;i++)
   {
   a[i] = i2c_read();
  }
   i2c_stop();
   
   
   if ((a[2]&0X20)==0X20)
   {
   printf(lcd_putc,"%x:%x:%x pm",(a[2]&0x9f),a[1],a[0]);
   }
   
   else
   
   printf(lcd_putc,"%x:%x:%x am",(a[2]&0x9f),a[1],a[0]);
   
  lcd_gotoxy(1,0);
    printf(lcd_putc,"%x/%x/%x ",a[4],a[5],a[6]);
  
   delay_ms(1000);
 
   }

}

