#include <16F73.h>
#device adc=8

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES LP                       //Low power osc < 200 khz
#FUSES NOPUT                    //No Power Up Timer
#FUSES NOPROTECT                //Code not protected from reading
#FUSES NOBROWNOUT               //No brownout reset

#use delay(clock=4000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)

