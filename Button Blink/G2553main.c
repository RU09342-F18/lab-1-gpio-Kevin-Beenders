#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR = BIT0;              //Sets BIT 0 to be an output
	P1REN = BIT3;              //enables pull-up resistor so its normally high voltage
	P1OUT = BIT3;              //Assigngs connection to BIT3

	while (1)
	{
	//if  (P1 is an output, and BIT3 is true) and is NOT BIT3
	if ((P1IN & BIT3) != BIT3)
	{
	    //BIT0 is toggles
	    P1OUT ^= BIT0;           
	    __delay_cycles(500000); //Delays 1000000 cycles to slow down loop speed
	}
	}
	return 0;
}
