#include <io.h>
#include <delay.h>
#define SS PORTB.2
char data;
char cnt,flag_led1,flag_led2;
void main(void)
{
    DDRB=0x2c; 
    SPCR=(1<<MSTR)|(1<<SPE);
    SPSR=(1<<SPI2X);
while (1)
    { 
      SS=0;
      delay_ms(100);
      SPDR=data;
      while(!(SPSR & (1<<SPIF)));//wait untill transfer is finished
       SS=1;
        
       flag_led1=!flag_led1;
       delay_ms(500);
       cnt++;
       if(cnt>=2)
       {  cnt=0;
         flag_led2=!flag_led2;
         delay_ms(100);
       }
       data=(flag_led1<<0)|(flag_led2<<1);
    }
}
