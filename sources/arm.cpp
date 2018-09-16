/**
 * arm.cpp - arm control program
 *
 * This code has been created for VEX650 "NMS Robotics" Turning Point
 * This example program shows how to program the V5 Clawbot to use remote
 *  control values to move your robot's arm.
 * @TODO:
 * @TODO:
 */

void armControl( void ){
   if(Controller1.ButtonUp.pressing()) {
        armMotor.spin(directionType::fwd, armSpeedPCT, velocityUnits::pct);
    }
    else if(Controller1.ButtonDown.pressing()) {
        armMotor.spin(directionType::rev, armSpeedPCT, velocityUnits::pct);
    }
    else {
        armMotor.stop(brakeType::brake);
}
