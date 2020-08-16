#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x01;
	PORTB = 0x02;
	
	while(1)
	{
		if(!(PINB & 0x02))
		{
			
			
				PORTB |= 0x01;
				_delay_ms(100);
				PORTB &=0xFE;
				_delay_ms(100);
				
			
			
		}
		else
		{
			
			PORTB &= 0xFE;
		}
	}
}