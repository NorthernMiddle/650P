/**
 * tankDrive.cpp - implement tank drive for a VRC competition robot
 *
 * This code has been created for VEX650 "NMS Robotics" Turning Point
 * The leftMotor and rightMotor are set to spin forward using the controller
 * Axis values as the velocity value.
 *
 * @TODO: Compile in VEX Coding Studio
 * @TODO:
*/

void tankDrive( void ){

    // left motor
    leftMotor.spin(vex::directionType::fwd, (Controller1.Axis3.value()
        + Controller1.Axis4.value())/2, vex::velocityUnits::pct); //(Axis3+Axis4)/2

    // right motor
    rightMotor.spin(vex::directionType::fwd, (Controller1.Axis3.value()
        - Controller1.Axis4.value())/2, vex::velocityUnits::pct);//(Axis3-Axis4)/2
}
