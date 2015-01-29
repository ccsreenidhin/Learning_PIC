#include <avr\io.h>
#include <string.h>
void u0init(void);
void u0putc(char);
char u0getc(void);
void u0puts(char*);
void main()
{
int i=0,c,j=0,d,e,f,k=0,l=0,m=0;
char pw1[4]="123",pw2[10]="456",pw3[10]="789",pw4[10]="0ab";
char p[20];

	u0init();
	DDRB=0X0F;
	while(1)
	{
	i=0;
	u0puts("enter the password\n\r");
		while(1)
		{
		p[i]=u0getc();
		if(p[i]==13)
		{
		break;
		}
		u0putc(p[i]);
		i++;
		}
		p[i]='\0';
		
		
		c=strcmp(p,pw1);
		if(c==0)
		{
		if(j==0)
		{
		PORTB|=0x01;
		j++;
		}
		else
		{
		PORTB&=0x0e;
		j=0;
		}
		}
		
		
		d=strcmp(p,pw2);
		if(d==0)
		{
		if(k==0)
		{
		PORTB|=0x02;
		k++;
		}
		else
		{
		PORTB&=0x0d;
		k=0;
		}
		}
		
		
		e=strcmp(p,pw3);
		if(e==0)
		{
		if(l==0)
		{
		PORTB|=0x04;
		l++;
		}
		else
		{
		PORTB&=0x0b;
		l=0;
		}
		}
		
		
		f=strcmp(p,pw4);
		if(f==0)
		{
		if(m==0)
		{
		PORTB|=0x08;
		m++;
		}
		else
		{
		PORTB&=0x07;
		m=0;
		}
		}
		
	}
}




void u0init()
{
UCSR0B=0X18;

UBRR0L=103;
}


char u0getc()
{
char a;
while(!(UCSR0A&0X80));
a=UDR0;
return a;
}


void u0puts(char *b)
{
while(*b)
u0putc(*b++);
}


void u0putc(char c)
{
UDR0=c;
while(!(UCSR0A&0X20));
}