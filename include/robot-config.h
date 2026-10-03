using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
motor leftMotor1 = motor(PORT1, ratio18_1, false);
motor leftMotor2 = motor(PORT2, ratio18_1, false);
motor rightMotor1 = motor(PORT3, ratio18_1, true);
motor rightMotor2 = motor(PORT4, ratio18_1, true);

pneumatic piston1 = pneumatic(Brain.ThreeWirePort.A);

motor intakeMotor = motor(PORT5, ratio18_1, false);
pneumatic piston2 = pneumatic(Brain.ThreeWirePort.B);

motor up1 = motor(PORT6, ratio18_1, false);
motor up2 = motor(PORT7, ratio18_1, false);

motorgroup lifting(up1, up2);
motorgroup leftDrive(leftMotor1, leftMotor2);
motorgroup rightDrive(rightMotor1, rightMotor2);





void  vexcodeInit( void );