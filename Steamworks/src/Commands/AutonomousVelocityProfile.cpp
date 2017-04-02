// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousVelocityProfile.h"


AutonomousVelocityProfile::AutonomousVelocityProfile(): Command(), kPGain(0.0) {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	mErrorSource = nullptr;
	mTime = 0.0;
	mCount = 0;
}

// Called just before this Command runs the first time
void AutonomousVelocityProfile::Initialize() {
	Robot::driveTrain->SetChassisMode(CANTalon::TalonControlMode::kSpeedMode);
	VelocityTimer.Reset();
	VelocityTimer.Start();
}

// Called repeatedly when this Command is scheduled to run
void AutonomousVelocityProfile::Execute() {
	double ErrorValue = 0.0;

	if (mErrorSource != nullptr) {
		ErrorValue = *mErrorSource * kPGain;
	}

	mCount = GetVelocityOffset();
	if (mCount >= mLeftWheel->size()) {
		mCount = mLeftWheel->size() - 1;
	}
	printf("Error Value %f\n", ErrorValue);
	Robot::driveTrain->SetChassisWheelVelocity(mLeftWheel->at(mCount).at(1) + ErrorValue,
			mRightWheel->at(mCount).at(1) - ErrorValue);
	Robot::driveTrain->TelemetryUpdate();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousVelocityProfile::IsFinished() {
    return (mCount >= mLeftWheel->size() - 1);
}

// Called once after isFinished returns true
void AutonomousVelocityProfile::End() {
	Robot::driveTrain->SetChassisVelocity(0.0);
	Robot::driveTrain->SetChassisMode(CANTalon::TalonControlMode::kThrottleMode);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousVelocityProfile::Interrupted() {
	End();
}

AutonomousVelocityProfile::AutonomousVelocityProfile(
		const ProfileData* LeftWheel, const ProfileData* RightWheel,
		double time, int* error) :
		Command(), kPGain(
				Preferences::GetInstance()->GetDouble("VisionPGain", 0.75)) {
	Requires(Robot::driveTrain.get());

	mLeftWheel.reset(LeftWheel);
	mRightWheel.reset(RightWheel);
	mErrorSource = error;
	mTime = time;
	mCount = 0;
}

unsigned int AutonomousVelocityProfile::GetVelocityOffset(void) {
//	double MoveTime = mTime + VelocityTimer.Get();
	double MoveTime = mTime + Robot::BlendTimer->Get();

	return ((unsigned int)(MoveTime / (mLeftWheel->at(0).at(2) / 1000)));
}
