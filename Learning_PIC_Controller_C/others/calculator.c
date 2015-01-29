#include "E:\JIJU\pic c\sample\calculator.h"
#include<stdlib.h>
#include "lcd.c"
char get_key();
char q[10];
char z[10];
void main()
{
int32 w[10],r,i,x,y,z,k=1000000000;
char a;
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);

   lcd_init();
   while(1)
    {
    lcd_putc("\f");
    lcd_putc("yo yo calculator");
    delay_ms(50);
    lcd_putc("\f");
   a=get_key();
   
switch(a) 
  {
  case '+':
           x=atoi32(q);
           a=get_key();
           y=atoi32(q);
          
           r=x+y;
          
           //z=itoa(r)
           // printf("%d",r);
           if(a=='=')
           {
            
            printf(lcd_putc "%ld",r);
 
            delay_ms(200);
            }
          break;    
   case '-':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x-y;
          
           //z=itoa(r)
           
           if(a=='=')
           {
            
            printf(lcd_putc "%ld",r);
             delay_ms(200);
            }
          break;    
  
 
  
   case '*':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x*y;
          
           //z=itoa(r)
            //printf("%d",r);
           if(a=='=')
           {
            
            printf(lcd_putc "%ld",r);
             delay_ms(200);
            }
          break; 
  
   case '/':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x/y;
          
           //z=itoa(r)
            //printf("%d",r);
           if(a=='=')
           {
            
            printf(lcd_putc "%ld",r);
             delay_ms(200);
            }
          break;   
   case  'c':
            lcd_putc("\f");
            break;
  
  }
 
}
}
char get_key()
{
char x;
int i=0;
while(1)
{
x='n';
  while(x=='n')
  {
  output_bit( PIN_B0, 1);
  output_bit( PIN_B1, 0);
  output_bit( PIN_B2, 0);
  output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
   x='1';
   lcd_putc('1');break;
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   x='4';
   lcd_putc('4');break;
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='7';
   lcd_putc('7');break;
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='c';
    break;
   } 
   //lcd_putc('c');
 
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 1);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
    x='2';
   lcd_putc('2');break;
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
    x='5';
   lcd_putc('5');break;
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='8';
   lcd_putc('8');break;
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='0';
   lcd_putc('0');break;
   }
  
  
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 1);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==1)
   {
   while(input(pin_b4));
    x='3';
   lcd_putc('3');break;
   }
   else if(input(PIN_B5)==1)
   { 
   while(input(pin_b5));
    x='6';
   lcd_putc('6');break;
   }
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='9';
   lcd_putc('9');break;
   }
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
    x='=';
    lcd_putc('=');
   break;
   }
 output_bit( PIN_B0, 0);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 1);
   if(input(PIN_B4)==1)
    {
   while(input(pin_b4));
    x='+';
    lcd_putc('+');
    break;
   //lcd_putc('a');
   }
   else if(input(PIN_B5)==1)
   {
   while(input(pin_b5));
   x='-';
  
    lcd_putc('-');
     break;
   }  
   else if(input(PIN_B6)==1)
   {
   while(input(pin_b6));
    x='/';
   
   lcd_putc('/');
    break;
   }  
   else if(input(PIN_B7)==1)
   {
   while(input(pin_b7));
   x='*';
   lcd_putc('*');
   break;
   }
  }
   if(x=='+'||x=='-'||x=='*'||x=='/'||x=='='||x=='c')
   {
   q[i]='\0';
   return x;
   }
   else
   {
  q[i]=x;
  i++;
  
  }
  

}
}
 
 
 
   



