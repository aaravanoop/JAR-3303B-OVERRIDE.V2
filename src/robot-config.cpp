#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor leftMotor1 = motor(PORT1, ratio18_1, false);
motor leftMotor2 = motor(PORT2, ratio18_1, false);
motor rightMotor1 = motor(PORT3, ratio18_1, true);
motor rightMotor2 = motor(PORT4, ratio18_1, true);

pneumatic piston1 = pneumatic(Brain.ThreeWirePort.A);
pneumatic piston2 = pneumatic(Brain.ThreeWirePort.C);

motor intakeMotor = motor(PORT5, ratio18_1, false);

motor up1 = motor(PORT6, ratio18_1, false);
motor up2 = motor(PORT7, ratio18_1, false);

motorgroup lifting(up1, up2);
motorgroup leftDrive(leftMotor1, leftMotor2);
motorgroup rightDrive(rightMotor1, rightMotor2);


void vexcodeInit( void ) {
  // nothing to initialize
}