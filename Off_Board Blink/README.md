# Off Board Blink
The off board blink was implemented similarly to the way the simple blink was implemented. on the G2253 for example, the signal for the LED to blink was sent through pin 1.0. The only difference is that the signal for the off board blink was sent through a wire attached through pin 1.0 to a breadbaord with a simple RC circuit. The blinking LED is connected in series to a 330 Ohm resistor and a 10 microfarad capacitor is attached to the positive node of the LED to the ground node. The purpose of this capacitor is to allow any AC noise to pass through the capacitor while the DC signal flows through the resistor. This means increased noise reduction and a more smoothed out power signal to the LED. 


