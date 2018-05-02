/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오전 10:51:59
 * Author : stc_160
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRD =0xff;
	PORTD=0xff;
    while (1) 
    {
		PORTD=0xff;
		_delay_ms(500);
		PORTD=0x00;
		_delay_ms(500);
		
		for(int i=0;i<8;i+=2)
		{
			PORTD=~(1<<i);
			_delay_ms(100);
		}
    }
}

