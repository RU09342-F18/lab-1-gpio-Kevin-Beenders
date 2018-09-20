#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= BIT0 | BIT6;       //assigns bit0 and bit6 to be outputs
	P1SEL &= ~(BIT0 + BIT6);     //assigns 0s to bit0 and bit6
	int a;
	int b;
	a = 0;
	b = 0;


	while(1)
	{

	    if (a < 5)
	    {
	    P1OUT ^= BIT0;
	    a += 1;
	    }
	    else
	    {
	        a = 0;
	    }

	    if (b < 3)
	    {
	    P1OUT ^= BIT6;
	    b += 1;
	    }
	    else
	    {
	        b = 0;
	    }
	    __delay_cycles(1000000);
	}

	
	return 0;
}
