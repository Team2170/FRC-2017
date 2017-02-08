// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Payload.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Payload::Payload() : Subsystem("Payload"),
kSlewSpeed(Preferences::GetInstance()->GetDouble("ElevSlewSpeed", .3)),
kSlewDeltaPosition(Preferences::GetInstance()->GetDouble("ElevSlewDeltaPos", 10.0)),
kIntakeSpeed(Preferences::GetInstance()->GetInt("IntakeSpeed", 0.3)),
kDoorOpenPosition(Preferences::GetInstance()->GetDouble("PayloadDoorOpenPos", 1.0)),
kDoorClosePosition(Preferences::GetInstance()->GetDouble("PayloadDoorClosePos", 0.0)){
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    doorServoA = RobotMap::payloadDoorServoA;
    cANTalonElevator = RobotMap::payloadCANTalonElevator;
    cANTalonIntake = RobotMap::payloadCANTalonIntake;
    speedControllerClimber = RobotMap::payloadSpeedControllerClimber;
    limitSwitchHome = RobotMap::payloadLimitSwitchHome;
    doorServoB = RobotMap::payloadDoorServoB;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Payload::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Payload::SetIntakeSpeed(IntakeSpeed speed) {
	switch (speed) {
	case kIntakeStop:
		cANTalonIntake->Set(0.0);
		break;
	case kIntakeOut:
		cANTalonIntake->Set(kIntakeSpeed);
		break;
	case kIntakeIn:
		cANTalonIntake->Set(-kIntakeSpeed);
		break;
	}

}

void Payload::SetBackDoorPosition(DoorPosition position) {
	switch (position) {
	case kDoorOpen:
		doorServoA->Set(kDoorOpenPosition);
		doorServoB->Set(kDoorOpenPosition);
		break;
	case kDoorClosed:
		doorServoA->Set(kDoorClosePosition);
		doorServoB->Set(kDoorClosePosition);
		break;
	}
}



void Payload::SetClimberSpeed(ClimberSpeed speed) {
	switch (speed) {
	case kUpFast:
		speedControllerClimber->Set(kClimberSpeedFast);
		break;
	case kUpSlow:
		speedControllerClimber->Set(kClimberSpeedSlow);
		break;
	case kUpStop:
		speedControllerClimber->Set(kClimberSpeedStop);
		break;
	}
}


void Payload::InitPayload() {
	cANTalonElevator->SetFeedbackDevice(CANTalon::QuadEncoder);
	cANTalonElevator->ConfigEncoderCodesPerRev(kElevatorCountsPerRev);
	cANTalonElevator->SetSensorDirection(true);
	SetElevatorMode(LoopMode::kOpenLoop);
	cANTalonElevator->SelectProfileSlot(0);
	cANTalonElevator->Set(0);

}

void Payload::SetElevatorMode(LoopMode mode) {
	switch (mode) {
	case kClosedLoop:
		cANTalonElevator->SetControlMode(CANTalon::ControlMode::kPosition);
		break;
	case kOpenLoop:
		cANTalonElevator->SetControlMode(CANTalon::ControlMode::kVoltage);
		break;
	}
	mCurrentMode = mode;
}

void Payload::SetElevatorPosition(ElevatorPos position) {
}

void Payload::SlewElevator(ElevatorDir direction) {
	double CurrentPosition=cANTalonElevator->GetPosition();
	if (mCurrentMode == LoopMode::kOpenLoop) {
		switch (direction) {
		case kSlewDown:
			cANTalonElevator->Set(kElevatorOpenLoopDownSpeed);
			break;
		case kSlewUp:
			cANTalonElevator->Set(kElevatorOpenLoopUpSpeed);
			break;
		case kSlewStop:
			cANTalonElevator->Set(kElevatorStopSpeed);
			break;
		}
	} else if (mCurrentMode == LoopMode::kClosedLoop) {
		switch (direction) {
		case kSlewDown:
			cANTalonElevator->Set(fmax(CurrentPosition-kElevatorClosedLoopDownSpeed,0));
			break;
		case kSlewUp:
			cANTalonElevator->Set(fmin(CurrentPosition+kElevatorClosedLoopUpSpeed,kElevatorMaxPosition));
			break;
		case kSlewStop:
			cANTalonElevator->Set(kElevatorStopSpeed);
			break;
		}
	}
}

bool Payload::HomeSwitchActive() {
	return limitSwitchHome->Get();
}
// Put methods for controlling this
// here. Call these from Commands.

