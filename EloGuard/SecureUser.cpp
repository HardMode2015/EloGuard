#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <cstddef>
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
//#include <WinInet.h>
#include <tchar.h>
//#pragma comment (lib, "wininet.lib")
#include "md5.h"
#include "definations.h"
#include "Conn.h"

using namespace std;
using namespace joyee;

/*const std::string currentDateTime(const char* format) {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), format, &tstruct);
	return buf;
}
const std::string getNakedEncryption() {
	int minute;
	istringstream(currentDateTime("%M")) >> minute;
	std::string val1 = (minute > 10 && minute <= 20 ? "1" : "0");
	std::string val2 = (minute > 20 && minute <= 30 ? "1" : "0");
	std::string val3 = (minute > 30 && minute <= 40 ? "1" : "0");
	std::string val4 = (minute > 40 && minute <= 50 ? "1" : "0");
	std::string val5 = (minute > 50 && minute <= 60 ? "1" : "0");
	return currentDateTime("%d-%H") + "hi" + val1 + val2 + val3 + val4 + val5;
}
std::string getmyURL() {
	return SERVER_AC_DIRECTORY + "uc.php?pkey=" + md5(getNakedEncryption());
}*/
std::string getExpiredTime() {
	time_t		now = time(0);
	time_t newTime = now + (3 * 60);

	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&newTime);
	strftime(buf, sizeof(buf), "%Y/%m/%d %X", &tstruct);
	return buf;
}

string getHWID(){  
  HW_PROFILE_INFO hwProfileInfo;
  GetCurrentHwProfile(&hwProfileInfo);
  wstring hwidWString = hwProfileInfo.szHwProfileGuid;  
  string hwid(hwidWString.begin(), hwidWString.end());
  return hwid;
}

void SendInfo() {
	Execute("delete from ANTI_CHEAT_INFO where hwid='" + getHWID() + "';");
	Execute("insert into ANTI_CHEAT_INFO values ('" + real_ip() + "', '" + getHWID() + "');");
}

void AddSecure() {
	//LPCWSTR accept[2] = { _T("*/*"), NULL };
	/*std::string s = getmyURL();
	std::wstring stemp = std::wstring(s.begin(), s.end());
	LPCWSTR sw = stemp.c_str();
	DWORD_PTR dwContext = 1;
	HINTERNET hInternet = InternetOpen(_T("SetSec"), INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
	HINTERNET hConnect = InternetConnect(hInternet, SERVER_IP, INTERNET_DEFAULT_HTTP_PORT, NULL, _T("HTTP/1.1"), INTERNET_SERVICE_HTTP, 0, dwContext);
	HINTERNET hRequest = HttpOpenRequest(hConnect, _T("GET"), sw, _T("HTTP/1.1"), NULL, accept, INTERNET_FLAG_DONT_CACHE, dwContext);
	HttpSendRequest(hRequest, NULL, 0, NULL, NULL);*/

	Execute("delete from ANTI_CHEAT where strClientIP='" + real_ip() + "';");
	Execute("insert into ANTI_CHEAT values ('" + real_ip() + "', '" + getExpiredTime() + "');");
}