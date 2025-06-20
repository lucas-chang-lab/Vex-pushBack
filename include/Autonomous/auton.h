#pragma once

namespace auton {
	/* Enums */

	enum autonomousType {
		RedUp, RedDown,
		BlueUp, BlueDown,
		RedUpSafe, RedDownSafe,
		BlueUpSafe, BlueDownSafe,
		AutonSkills, DrivingSkills,
		AllianceWallStake,
		Test,
		None
	};

	/* Functions */

	/// @brief Set the type of autonomous to run at the start of the match.
	/// @param allianceId A number representing the alliance (Red: 1, Blue: 2, Neutral: 0).
	/// @param autonType The type of autonomus to run.
	void setAutonRunType(int allianceId, autonomousType autonType);

	/// @brief Show the current autonomous run type on the controller.
	void showAutonRunType();

	/// @brief Get the type of autonomous that is selected.
	/// @return The type of autonomous currently selected.
	autonomousType getAutonRunType();

	/// @brief Return whether autonomous code should run when user control begins.
	/// @return Whether auton will run when user control begins.
	bool isUserRunningAuton();

	/// @brief Run the autonomous set by setAutonRunType().
	void runAutonomous();

	/// @brief Run the intro of the autonomous skills. Can be used for driving skills.
	void autonSkillsIntro();

}
