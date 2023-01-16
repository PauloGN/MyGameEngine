#pragma once


namespace GNSEngine::Core::TimeUtil
{

	//This function starts the stop watch time.
	void Initialize();

	// This function return the time since you called initialize.
	float GetTime();

	// This function returns the difference sinsce you last called it.
	float GetDeltaTime();

}