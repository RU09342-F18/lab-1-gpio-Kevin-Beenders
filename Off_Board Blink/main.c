#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
  //selects BIT0 as 0 and BIT6 as 1
	P1SEL &= ~BIT0 | BIT6;
  
  //selects BIT0 and BIT6 as an output
	P1DIR |= BIT0 | BIT6;


	while(1)
	{
      //toggles output of BIT 0 and 6
	    P1OUT ^= BIT0 | BIT6;

	    __delay_cycles(150000);
	}
	return 0;
}
