#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	//Sets initial signals for Port1
	    P1SEL &= ~BIT0;

	    //Sets Bit 0 of Port1 to an output
	    P1DIR |= BIT0;

	    while (1)
	    {
	        //toggles Bit0 on and off
	        P1OUT ^= BIT0;

	        //delays while loop for approximately one second
	        __delay_cycles(1000000);
	}
	return 0;
