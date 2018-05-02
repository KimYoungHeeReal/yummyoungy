/*
 * LCD_HELLO.cpp
 *
 * Created: 2018-05-02 오후 2:20:47
 * Author : stc_160
 */ 
#define F_CPU16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd_display.h"

lcd_display mylcd;
char buffer[20];
int main(void)
{
	
    while (1) 
    {
		sprintf(buffer,"Hello YoungHee");
		mylcd.LCD_goto_XY(0,0);
		mylcd.LCD_write_string(buffer);
		_delay_ms(300);
    }
}

