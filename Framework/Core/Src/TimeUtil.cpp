#include "Precompiled.h"
#include "TimeUtil.h"

namespace
{
	std::chrono::high_resolution_clock::time_point startTime;
	std::chrono::high_resolution_clock::time_point lastCalltTime;
}

void GNSEngine::Core::TimeUtil::Initialize()
{
	//Record the start time
	startTime = std::chrono::high_resolution_clock::now();
}

float GNSEngine::Core::TimeUtil::GetTime()
{	
	// Get the time difference since the start time
	const auto currentTime = std::chrono::high_resolution_clock::now();
	const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();

	return milliseconds / 1000.0f;
}

float GNSEngine::Core::TimeUtil::GetDeltaTime()
{
	//Get the time difference since the last time we called this function
	const auto currentTime = std::chrono::high_resolution_clock::now();
	const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastCalltTime).count();

	return milliseconds /1000.0f;
}
