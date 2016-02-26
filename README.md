#StepperDriver

StepperDriver is an Arduino library for A4988 or DRV8825 stepper motor driver carrier.
This library provides smooth acceleration and deceleration during the beginning and end of the stepper rotation.

## Usage

Define the stepper.

	StepperDriver stepper(motor_steps, step_divisition, en_pin, cw_pin, clk_pin);

Then set the speed (rmp) and power on.

	stepper.setSpeed(120);
	stepper.powerEnable(true);

We can rotate the stepper.
Positive step is clockwise rotation, and negative step is anti-clockwise rotation.

	stepper.step(400);
	stepper.step(-400);

Adding second and third parameters to define accelerating steps and decelerating steps.

	ss.step(1200, 144, 160);
	ss.step(-1200, 144, 160);
