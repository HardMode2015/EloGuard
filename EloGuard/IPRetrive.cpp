#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#pragma comment (lib, "wininet.lib")

using namespace std;

std::string real_ip() { 

    HINTERNET net = InternetOpenA("svchost",
        INTERNET_OPEN_TYPE_PRECONFIG,
        NULL,
        NULL,
        0);

    HINTERNET conn = InternetOpenUrlA(net, "http://127.0.0.1/anticheat/lookup.php", NULL, 0, INTERNET_FLAG_RELOAD, 0);
    char buffer[4096];
    DWORD read;
    InternetReadFile(conn, buffer, sizeof(buffer)/sizeof(buffer[0]), &read);
    InternetCloseHandle(net);    
    return std::string(buffer, read);
}