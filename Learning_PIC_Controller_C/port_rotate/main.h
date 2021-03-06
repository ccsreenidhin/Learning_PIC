#include <16C73.h>
#device adc=8

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES LP                    	//Low power osc < 200 khz
#FUSES NOPUT                 	//No Power Up Timer
#FUSES PROTECT               	//Code protected from reads

#use delay(clock=20000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)

