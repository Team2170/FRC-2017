// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

#include "vision/GearThree.h"
#include "vision/BBoilerPipeline.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousTestGroup.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Dumper.h"
#include "Subsystems/Payload.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"

class Robot : public IterativeRobot {
private:
	static void VisionThread();
	static void VisionThreadBBoiler();
	bool mVisionEnabled;
public:
	std::unique_ptr<Command> autonomousCommand;
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();

	//cs::CvSink GearCameraSink;

	// MK 2/4 8:47pm static grip::GearTargetPipeline GearPipeline;

	// MK 2/4/8:26pm
	grip::GearThree GearPipeline;
	grip::BBoilerPipeline BBoilerPipeline;

	NetworkTable *table;

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    static std::shared_ptr<DriveTrain> driveTrain;
    static std::shared_ptr<Payload> payload;
    static std::shared_ptr<Dumper> dumper;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();

	void UpdateSmartDash();

	bool isVisionEnabled() const {
		return mVisionEnabled;
	}
	static std::shared_ptr<frc::Timer> BlendTimer;
	frc::SendableChooser<frc::Command*> chooser;
};
#endif
