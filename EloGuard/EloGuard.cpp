#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <ShellAPI.h>
#include <fstream>
//#include <Urlmon.h>
#include <iostream>
#include <iomanip>
//#include <wininet.h>
#include "SecureUser.h"
#include "Splash.h"
#include "Functions.h"
#include "base64.h"
#include "EloEnc.h"
#include <tchar.h>



/*#pragma comment(lib, "urlmon.lib")
#ifdef WIN32
#pragma comment(lib, "ws2_32.lib")
#define strcasecmp _stricmp
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#endif
*/
using namespace std;


void addMeSecure() {
	Sleep(3 * SECOND);
	while (true) {
		AddSecure();
		Sleep(3 * MINUTE);
	}
}

/*int lcs(LPCSTR pUrl) {
	int ret = 0;
	HINTERNET hInternet = InternetOpen(TEXT("EloGuard"), INTERNET_OPEN_TYPE_DIRECT, 0, 0, 0);
	if (hInternet)
	{
		HINTERNET hFile = InternetOpenUrl(hInternet, pUrl, NULL, NULL, INTERNET_FLAG_DONT_CACHE || INTERNET_FLAG_NO_COOKIES || INTERNET_FLAG_NO_CACHE_WRITE, 0);
		if (hFile)
		{
			
			int code = 0;
			DWORD length = sizeof(int);

			HttpQueryInfoA(hFile, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &code, &length, NULL);
			ret = code;

			InternetCloseHandle(hFile);
		}

		InternetCloseHandle(hInternet);
	}
	return ret;
}*/
void userInterface() {
	int pressed = 0;
	while (true) {
		if (GetAsyncKeyState(VK_INSERT) & 1) {
			if (pressed < 2) {
				pressed++;
			}
			else {
				ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openreport", NULL, SW_SHOWNORMAL);
				exit(0);
			}
		}
	}
}

void ReadData() {
	
	std::ifstream ifs("EloGuard.dat");
	std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
	string decoded = EloDecode(content, "Stifler9305");
	cout << decoded << endl;
}

void Start() {
	Connect();
	SendInfo();
	Initialize();
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)DumpTBL, 0, 0, 0);
	//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)DumpFiles, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)addMeSecure, 0, 0, 0);
	//ScanClass();
	//ScanDump();
	//ScanString();
	//ScanWindow();
	
	//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)userInterface, 0, 0, 0);
	fstream textfile;
	textfile.open("EloGuard/log.txt", ios::out | ios::app);
	textfile << "----------------------------------------------------------------- " << endl;
	textfile << "EloGuard started successfully." << endl;
}

void Start_NoConnection() {
	//ReadData();
	Initialize();
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)DumpTBL, 0, 0, 0);
	
	//ScanClass();
	//ScanDump();
	//ScanString();
	//ScanWindow();
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)userInterface, 0, 0, 0);
	fstream textfile;
	textfile.open("EloGuard/log.txt", ios::out | ios::app);
	textfile << "----------------------------------------------------------------- " << endl;
	textfile << "EloGuard started successfully." << endl;
}

extern  "C"  __declspec(dllexport) void __cdecl Init() {
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Start, 0, 0, 0);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpvReserved)
{
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		Init();
		break;
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}