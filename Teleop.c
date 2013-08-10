#include "JoystickDriver.c"

task main() {
  while(true) {
    getJoystickSettings(joystick);
    
    motor[leftWheel] = joystick.joy1_y1;
    //add teleop code here
  }
}
