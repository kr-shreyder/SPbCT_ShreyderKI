#include "Auth.h"
#include <Windows.h>
using namespace EdPract;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Auth);
	return 0;
}