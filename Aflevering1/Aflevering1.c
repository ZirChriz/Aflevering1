/*
 * Aflevering1.c
 *
 * Created: 2/2/2017 13:33:17
 * Author : Christian
 */ 


#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>

void delay(long val);

void init(void){

	DDRB |=(1<<DDB7);
	
}


int main(void)
{
	long int i, val;
	char Opgave;
	
	init();
	
//Vælg opgave
	Opgave = '3';
	
	switch(Opgave)
	{
	
		case '1'://Opgave 1
			while (1)
			{

				PORTG |=(1<<PG5);
				for(i=0;i<=1500000;i++)
				{
				}
		
				PORTG &=~(1<<PG5);
				for(i=0;i<=1500000;i++)
				{
				}

			}
		case '2'://Opgave 2
			
			val=1500000;
			
			while (1)
			{
				PORTG |=(1<<PG5);
				delay(val);
				
				PORTG &=~(1<<PG5);
				delay(val);
			}
		

		case '3': //Opgave 3
			while (1)
			{
				PORTB ^=(1<<PB7);
				_delay_ms(200);
			}
	}
}


void delay(long val)
{
	long int i;
	for(i=0;i<=val;i++){}
}


