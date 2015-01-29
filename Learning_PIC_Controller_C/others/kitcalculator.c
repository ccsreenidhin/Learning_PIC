#include "E:\JIJU\pic c\sample\kitcalculator.h"

#include<stdlib.h>
#define LCD_TYPE 2
#include <lcd.c>
char get_key();
char q[10];
char z[10];
void main()
{
int32 w[10],r,i,x,y,z,k=1000000000;
char a;
   lcd_init();



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
    delay_ms(1000);
    lcd_putc("\f");
   l:a=get_key();
   


switch(a)
  {
  case '+':
          { x=atoi32(q);
           a=get_key(); 
           y=atoi32(q);
           r=x+y;
          
           //z=itoa(r)
           // printf("%d",r);
          while(1)
          {
          if(a=='=')
           {
             printf(lcd_putc "%ld",r);
            
          delay_ms(1000);
           // while(get_key()!='c');
          //  goto l;
          break;
            }
         
          else
          {
          x=0;
          y=0;
           a=get_key();
            x=atoi32(q);
            r=r+x;
         } 
         
  }
        goto l;  }
  
   case '-':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x-y;
          
           //z=itoa(r)
           while(1)
          {
           if(a=='=')
           {
             printf(lcd_putc "%ld",r);
          
             delay_ms(2000);
               break;
            }
         
          else
          {
          x=0;
          y=0;
           a=get_key();
            x=atoi32(q);
            r=r-x;
         }   
    goto l; }
 
  
   case '*':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x*y;
          
           //z=itoa(r)
            //printf("%d",r);
            while(1)
            {
           if(a=='=')
           {
             printf(lcd_putc "%ld",r);
            
             delay_ms(2000);
               break;
            }
           else
          {
          x=0;
          y=0;
           a=get_key();
            x=atoi32(q);
            r=r*x;
         }   
   goto l;  }
  
   case '/':
           x=atoi32(q);
           //printf("%u",x);
           a=get_key();
           y=atoi(q);
          
           r=x/y;
          
           //z=itoa(r)
            //printf("%d",r);
            while(1)
            {
           if(a=='=')
           {
             printf(lcd_putc "%ld",r);
            
             delay_ms(2000);
              break; 
            }
           
          
           else
          {
          x=0;
          y=0;
           a=get_key();
            x=atoi32(q);
            r=r/x;
         }   
           goto l;    }
   case  'c':
            lcd_putc("\f");
            break;
  
   goto l;  }
 
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
  output_bit( PIN_B0, 0);
  output_bit( PIN_B1, 1);
  output_bit( PIN_B2, 1);
  output_bit( PIN_B3, 1);
   if(input(PIN_B4)==0)
   {
   while(input(pin_b4)==0);
   x='1';
   lcd_putc('1');break;
   }
   else if(input(PIN_B5)==0)
   {
   while(input(pin_b5)==0);
   x='4';
   lcd_putc('4');break;
   }
   else if(input(PIN_B6)==0)
   {
   while(input(pin_b6)==0);
    x='7';
   lcd_putc('7');break;
   }
   else if(input(PIN_B7)==0)
   {
   while(input(pin_b7)==0);
    x='c';
    break;
   } 
   //lcd_putc('c');
 
  
 output_bit( PIN_B0, 1);
 output_bit( PIN_B1, 0);
 output_bit( PIN_B2, 1);
 output_bit( PIN_B3, 1);
   if(input(PIN_B4)==0)
   {
   while(input(pin_b4)==0);
    x='2';
   lcd_putc('2');break;
   }
   else if(input(PIN_B5)==0)
   {
   while(input(pin_b5)==0);
    x='5';
   lcd_putc('5');break;
   }
   else if(input(PIN_B6)==0)
   {
   while(input(pin_b6)==0);
    x='8';
   lcd_putc('8');break;
   }
   else if(input(PIN_B7)==0)
   {
   while(input(pin_b7)==0);
    x='0';
   lcd_putc('0');break;
   }
  
  
 output_bit( PIN_B0, 1);
 output_bit( PIN_B1, 1);
 output_bit( PIN_B2, 0);
 output_bit( PIN_B3, 1);
   if(input(PIN_B4)==0)
   {
   while(input(pin_b4)==0);
    x='3';
   lcd_putc('3');break;
   }
   else if(input(PIN_B5)==0)
   { 
   while(input(pin_b5)==0);
    x='6';
   lcd_putc('6');break;
   }
   else if(input(PIN_B6)==0)
   {
   while(input(pin_b6)==0);
    x='9';
   lcd_putc('9');break;
   }
   else if(input(PIN_B7)==0)
   {
   while(input(pin_b7)==0);
    x='=';
    lcd_putc('=');
   break;
   }
 output_bit( PIN_B0, 1);
 output_bit( PIN_B1, 1);
 output_bit( PIN_B2, 1);
 output_bit( PIN_B3, 0);
   if(input(PIN_B4)==0)
    {
   while(input(pin_b4)==0);
    x='+';
    lcd_putc('+');
    break;
   //lcd_putc('a');
   }
   else if(input(PIN_B5)==0)
   {
   while(input(pin_b5)==0);
   x='-';
  
    lcd_putc('-');
     break;
   }  
   else if(input(PIN_B6)==0)
   {
   while(input(pin_b6)==0);
    x='/';
   
   lcd_putc('/');
    break;
   }  
   else if(input(PIN_B7)==0)
   {
   while(input(pin_b7)==0);
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
 

