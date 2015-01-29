#include "E:\exam\ex2\ex2.h"
#include"string.h"
int a=0,j=0;
#int_TIMER1
void  TIMER1_isr(void) 
{
set_timer1(500);
j++;
if(j==2)
{
a=~a;
OUTPUT_a(a);
j=0;

}
}



void main()
{
char b[10],p1[]="ram1",p2[]="ram2",p3[]="ram3",p4[]="ram4";

int i=0,l=0,c1=0,c2=0,c3=0,c4=0,l1,l2,l3,l4;

   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2(T2_DISABLED,0,1);
   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);

   // TODO: USER CODE!!
SET_TRIS_A( 0x00 );
SET_TRIS_B( 0xf0 );


set_timer1(100);



WHILE(1)
{
WHILE(i!=3)
{
b[i]=getc();
i++;

}
b[i]='\0';

//PRINTF("%S",b);
//printf("%s",p1);
DELAY_MS(100);
//printf("%d",strcmp(p1,b));
l1=strcmp(p1,b);
l2=strcmp(p2,b);
l3=strcmp(p3,b);
l4=strcmp(p4,b);


if(l1==0)
{
c1=~c1;
output_bit( PIN_B0, c1);
}
else if(l2==0)
{
c2=~c2;
output_bit( PIN_B1, c2);
}
else if(l3==0)
{
c3=~c3;
output_bit( PIN_B2, c3);

}
if(l4==0)
{
c4=~c4;
output_bit( PIN_B3, c4);
}




i=0;



}

}



