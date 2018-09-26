#include <Windows.h>
#include <iostream>
#include <fstream>
using namespace std;
void ClasseWindow(LPCSTR WindowClasse)
{
	HWND WinClasse = FindWindowExA(NULL, NULL, WindowClasse, NULL);
	if (WinClasse > 0)
	{
		{
			using namespace std;
			fstream textfile;
			textfile.open("EloGuard/log.txt", ios::out | ios::app);
			textfile << "----------------------------------------------------------------- " << endl;
			textfile << "Suspicious: " << WindowClasse << endl;
			ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
			exit(0);
		}
	}
}
void ClasseCheckWindow()
{
	ClasseWindow("WindowsForms10.Window.8.app.0.378734a");
	ClasseWindow("WindowsForms10.Window.8.app.0.2bf8098_r15_ad1");
	ClasseWindow("WindowsForms10.Window.8.app.0.141b42a_r14_ad1");
	ClasseWindow("WindowsForms10.Window.8.app.0.3b95145_r14_ad1");
	ClasseWindow("ThunderRT6FormDC");
	ClasseWindow("Somethin"); // Process Hax
	ClasseWindow("AutoIt v3 GUI");
	//ClasseWindow("(ThunderRT6CommandButton) Job:(17) hWnd:264942");
	//ClasseWindow(" (ThunderRT6Frame) Job:(74) hWnd:2491766");
	//ClasseWindow(" (ThunderRT6CommandButton) Job:(24) hWnd:330630");
	//ClasseWindow("ThunderRT6");
	ClasseWindow("(Window) Job:(8) hWnd:658196");
}
void ScanAll()
{
	while (true) {
		ClasseCheckWindow();
		Sleep(1000);
	}
}
void ScanClass()
{
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(ScanAll), NULL, 0, 0);
}