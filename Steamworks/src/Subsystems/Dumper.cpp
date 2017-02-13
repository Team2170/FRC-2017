// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Dumper.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Dumper::Dumper() : Subsystem("Dumper"),
kDumperSpeedForward(Preferences::GetInstance()->GetDouble("DumperSpeed", 1.0)){
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    speedControllerDumper = RobotMap::dumperSpeedControllerDumper;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Dumper::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Dumper::DumperSetSpeed(DumperSpeed speed) {
	switch (speed) {
	case kDumperOff:
		speedControllerDumper->Set(0.0);
		DumperMoving = false;
		break;
	case kDumperForward:
		speedControllerDumper->Set(kDumperSpeedForward);
		DumperMoving = true;
		break;
	case kDumperBackward:
		speedControllerDumper->Set(-kDumperSpeedForward);
		DumperMoving = true;
		break;
	}

}

bool Dumper::IsDumperMoving() {
	return DumperMoving;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

