#include <StepperDriver.h> 

int motor_steps = 200;  //定義步進馬達每圈的步數  
int step_divisition = 16;
int en_pin = 5;
int cw_pin = 6;
int clk_pin = 7;

StepperDriver ss(motor_steps, step_divisition, en_pin, cw_pin, clk_pin);  

void setup() { 
	ss.setSpeed(160);
	ss.powerEnable(true);
	ss.positioning();
	delay(1600);
}

void loop() {
	ss.setSpeed(160);
	ss.step(400);
	delay(100);
	ss.step(-400);
	delay(100);
	ss.step(1200, 144, 160);
	delay(100);
	ss.step(-1200, 144, 160);
	delay(100);
	ss.setSpeed(200);
	ss.step(400, 32, 40);
	delay(100);
	ss.step(-400, 32, 40);
	delay(200);
}