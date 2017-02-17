// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVE_TRAIN_H
#define DRIVE_TRAIN_H
#include "Commands/Subsystem.h"
#include "../ProfileData.h"
#include "../MaxSonarEZ1.h"
#include "WPILib.h"
#include "AHRS.h"
#include <cmath>
#include "../CANTalonLogger.h"

#define DEADBAND(val, limit)	((fabs(val) < limit) ? 0.0 : val)

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrain: public Subsystem {
private:
	const unsigned short int kCountsPerRev;	// 360 count encoder, x4 sampling
	const double kDefaultVoltageRamp;
	double mAutoVelocity = 0.5;
	double kYawGain = -0.10;
	bool bDriveStraight = false;

	bool mMotionProcessingActive = false;

	Preferences *prefs;

	const double kProportionalGain = 0.75;
	const double kDerivativeGain = 2.5;
	const double kFeedForwardGain = 0.75;

	void SetVelocityMode();
	void SetClosedLoopMode();
	void SetMotionProfileMode();

	double AxisPower(double axis, double exponent);
	void InitTalons(void);
	void SetRampRate(double ramp);
	void SetMotorGains();

	double chassis_pitch = 0.0;

	CANTalon::MotionProfileStatus LeftStatus;
	CANTalon::MotionProfileStatus RightStatus;

	std::shared_ptr<MaxSonarEZ1> FrontSonar;
	std::shared_ptr<AHRS> gyro;
	std::shared_ptr<CANTalonLogger>	LeftLog;
	std::shared_ptr<CANTalonLogger>	RightLog;


	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> cANTalonLeft;
	std::shared_ptr<CANTalon> cANTalonRight;
	std::shared_ptr<RobotDrive> robotDrive;
	std::shared_ptr<CANTalon> cANTalonSlaveLeft;
	std::shared_ptr<CANTalon> cANTalonSlaveRight;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	DriveTrain();
	void InitDefaultCommand();
	void SetChassisPosition(double position);
	void SetChassisVelocity(double velocity);
	void SetChassisVelocity(double velocity, double error);
	void FillProfileBuffer(std::shared_ptr<const ProfileData> LeftWheel);
	void FillProfileBuffer(std::shared_ptr<const ProfileData> LeftWheel,
			std::shared_ptr<const ProfileData> RightWheel);
	void ServiceMotionProfile();
	bool MotionProfileComplete();
	CANTalon::TalonControlMode GetChassisMode();
	void SetChassisMode(CANTalon::TalonControlMode mode);
	double GetChassisPosition();

	void ArcadeDriveWithJoysticks(double moveVal, double rotateVal);
	void TankDriveWithTriggers(double Left, double Right, double Trigger);
	void TankDrive(float Left, float Right);
	void DriveStraight(bool Backwards = false);
	void DriveStraight(double magnitude);

	void Rotate(float position);

	void ResetChassisYaw();
	double ReadChassisYaw();
	double ReadChassisDistance();
	void StopMotors();
	void SetBrakeMode( CANSpeedController::NeutralMode);
	void SetMotionProfileState(CANTalon::SetValueMotionProfile mode);

	double ReadPositionError();

	const double InchesPerRotation;

	void setAutoVelocity(double autoVelocity = 0.5) {
		mAutoVelocity = autoVelocity;
	}

	void TelemetryFlush();
	void TelemetryUpdate();
	void SetVoltagePercentMode();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
