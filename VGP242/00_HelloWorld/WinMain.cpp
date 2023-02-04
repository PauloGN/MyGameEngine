
#include <Core/Inc/Core.h>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	GNSEngine::Core::TimeUtil::Initialize();
	LOG("Hello I am %s", "Paulo");
	Sleep(1000);
	LOG("I am still here after %d seconds", 1);

	int n = 7;
	ASSERT(n == 7, "Not seven..");

	return 0;
}