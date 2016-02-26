// ensure this library description is only included once
#ifndef StepperDriver_h
#define StepperDriver_h

// library interface description
class StepperDriver {
  public:
    // constructors:
    StepperDriver(int number_of_steps, int step_division, int en_pin, int cw_pin, int clk_pin);

    // speed setter method:
    void setSpeed(float rpm);

    void powerEnable(bool ena);

    void positioning();

    // mover method:
    void step(long steps_to_move);

    void step(long steps_to_move, long steps_acc, long steps_dec);

  private:
    void setDirection(long steps_to_move);

    void move();

    void dynamicMove(int s1, int s2);

    void moveInterval(unsigned long target_delay);
    

    int number_of_steps;
    int step_division;
    unsigned long step_interval;
    unsigned long last_step_time;
    unsigned long target_step_time1;
    unsigned long target_step_time2;
    
    // motor pin numbers:
    int en_pin;
    int cw_pin;
    int clk_pin;
          
};

#endif
