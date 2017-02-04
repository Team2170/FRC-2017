// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef PAYLOAD_H
#define PAYLOAD_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "CANTalon.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class Payload: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Servo> doorServo;
	std::shared_ptr<CANTalon> cANTalonElevator;
	std::shared_ptr<CANTalon> cANTalonIntake;
	std::shared_ptr<SpeedController> speedControllerClimber;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	void InitPayload();

	const unsigned short int kElevatorCountsPerRev=360;
public:
	Payload();
	void InitDefaultCommand();
	void SetIntakeSpeed(double speed);
	void SetBackDoorPosition(double position);
	void SetClimberSpeed(double speed);


	const double kDoorOpenPosition=1.0;
	const double kDoorClosePosition=0.0;
	const double kIntakeOnSpeed=1.0;
	const double kIntakeOffSpeed=0.0;
	const double kClimberDownSpeed=-1.0;
	const double kClimberUpSpeed=1.0;
	const double kClimberStopSpeed=0.0;

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
