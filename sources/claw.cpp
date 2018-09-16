/**
 * claw.cpp - claw control program
 *
 * This code has been created for VEX650 "NMS Robotics" Turning Point
 * This example program shows how to program the V5 Clawbot to use remote
 *  control values to move your robot's claw.
 * @TODO:
 * @TODO:
 */

void clawControl( void ){
 if(Controller1.ButtonA.pressing()) {
        clawMotor.spin(directionType::fwd, clawSpeedPCT, velocityUnits::pct);
    }
    else if(Controller1.ButtonY.pressing()) {
        clawMotor.spin(directionType::rev, clawSpeedPCT, velocityUnits::pct);
    }
    else {
        clawMotor.stop(brakeType::brake);
    }
}
