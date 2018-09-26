#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#pragma comment (lib, "wininet.lib")

using namespace std;

string EloEncode(string input, string key) { 

    HINTERNET net = InternetOpenA("svchost",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
	string url = "http://127.0.0.1/anticheat/aes.php?i=" + input + "&k=" + key + "&m=en";

    HINTERNET conn = InternetOpenUrlA(net, url.c_str(), NULL, 0, INTERNET_FLAG_RELOAD, 0);
    char buffer[4096];
    DWORD read;
    InternetReadFile(conn, buffer, sizeof(buffer)/sizeof(buffer[0]), &read);
    InternetCloseHandle(net);    
    return std::string(buffer, read);
}
string EloDecode(string input, string key) { 

    HINTERNET net = InternetOpenA("svchost",INTERNET_OPEN_TYPE_PRECONFIG,NULL,NULL,0);
	string url = "http://127.0.0.1/anticheat/aes.php?i=" + input + "&k=" + key + "&m=de";

    HINTERNET conn = InternetOpenUrlA(net, url.c_str(), NULL, 0, INTERNET_FLAG_RELOAD, 0);
    char buffer[4096];
    DWORD read;
	ZeroMemory(buffer, sizeof(buffer));
    InternetReadFile(conn, buffer, sizeof(buffer)/sizeof(buffer[0]), &read);
    InternetCloseHandle(net);

	

    return std::string(buffer, read);
}