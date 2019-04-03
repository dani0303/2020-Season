#include <kipr/botball.h>
#include <stdbool.h>

//notes
//

  //VARIABLES
  //creates global variables to hold the ports of the servos, motors and ir sensors
  int m_port_l = 0;
  int m_port_r = 1;
  int upper_servo_port = 1;
  int lower_servo_port = 0;
  
  //the current values needed to turn approximately 90 degrees
  int turn_power = 1200;
  int turn_time = 900;
  
  //speeds for the line follower
  int reg_speed = 1200;
  int fast_speed = 1600;
  int slow_speed = 800;

  //speeds for the reverse line follower
  int r_reg_speed = (0-1200);
  int r_fast_speed = (0-1600);
  int r_slow_speed = (0-800);

  //the values for the claw and arm positions
  int claw_open = 1400;
  int claw_close = 550;
  int arm_up = 800;
  int arm_down = 250;
  int claw_slightly_open = 1200;
  int arm_very_high = 1100;
  
  //variables to store data collected by the bot
  int center_on_fire;
  int safe_center;

int main()
{
  opening_sequence();
  first_row();
  second_row();
  third_row();
  fourth_row();
  return 0;
}
