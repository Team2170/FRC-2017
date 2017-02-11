// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef AUTONOMOUS_MOTION_PROFILE_H
#define AUTONOMOUS_MOTION_PROFILE_H


#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "../ProfileData.h"


/**
 *
 *
 * @author ExampleAuthor
 */

class AutonomousMotionProfile: public Command {
public:
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	AutonomousMotionProfile();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	AutonomousMotionProfile(const ProfileData* Profile, bool ResetGyro = true);
	AutonomousMotionProfile(const std::string& ProfileName, bool ResetGyro = true);
	AutonomousMotionProfile(const std::string& LProfileName, const std::string& RProfileName, bool ResetGyro = true);
	AutonomousMotionProfile(const ProfileData* LeftWheel, const ProfileData* RightWheel, bool ResetGyro = true);

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES
	std::shared_ptr<const ProfileData> mLeftWheel;	// Pointer to left side motion profile data
	std::shared_ptr<const ProfileData> mRightWheel;	// Pointer to right side motion profile data

	static void PeriodicTask();
	static int Notifier_counter;
	Notifier talonService;

	ProfileData mLeftProfile;
	ProfileData mRightProfile;
	bool bResetGyro = true;
};

#endif
