/**
 * robot-config.h - header file for VRC V5
 * written for Northern Middle School Robotics Team 650P
 * VRC 2018-19 "Turning Point"
 */
 
 using namespace vex;
 vex::brain Brain;
 
//drive motors
vex::motor leftMotor (vex::PORT1, vex::gearSetting::ratios18_1, false);
vex::motor rightMotor (vex::PORT10,  vex::gearSetting::ratio18_1, true);

//claw motor
vex::motor clawMotor (vex::PORT3, vex::gearSetting::ratio18_1,true);

//arm motor
vex::motor armMotor (vex::PORT8, vex::gearSetting::ratio18_1,true);

//collector
????
 
//flywheel (shooter mechanism)
????
 
//V5 vision sensor
????
