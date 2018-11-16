#include "MainWindow.h"
#include <Windows.h>

using namespace hackathon;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MainWindow^ mainWindow = gcnew MainWindow();
	Application::Run(mainWindow);

	return 0;
}