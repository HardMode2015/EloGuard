#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <tchar.h>
#include <fstream>

using namespace std;

RETCODE returnCode;
SQLHENV handleEnvironment;
SQLHDBC handleConnection;
SQLHSTMT handleStatement;
SQLRETURN retcode;


extern SQLRETURN Execute(string query) {
	int len;
	int slength = (int)query.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, query.c_str(), slength, 0, 0); 
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, query.c_str(), slength, buf, len);
	std::wstring r(buf);
	 std::wstring stemp = r.c_str();
	LPCWSTR result = stemp.c_str();
	SQLWCHAR* mQuery = (SQLWCHAR*)result;
	retcode = SQLExecDirect(handleStatement, mQuery, SQL_NTS);
	return retcode;
}

void Connect() {
	SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &handleEnvironment);
	SQLSetEnvAttr(handleEnvironment,SQL_ATTR_ODBC_VERSION,(void *)SQL_OV_ODBC3, 0);
	SQLAllocHandle(SQL_HANDLE_DBC, handleEnvironment, &handleConnection);
	SQLRETURN ret;
	// Edit this
	ret = SQLDriverConnect(handleConnection, NULL, (SQLWCHAR*)TEXT("DRIVER={SQL Server Native Client 11.0};SERVER=localhost;DATABASE=kn_online;Trusted_Connection=yes;"), SQL_NTS, NULL, 0, NULL, SQL_DRIVER_NOPROMPT);
	// ---------
	SQLAllocHandle(SQL_HANDLE_STMT, handleConnection, &handleStatement);
	if(!SQL_SUCCEEDED(ret)) {
		fstream textfile;
		textfile.open("EloGuard/log.txt", ios::out | ios::app);
		if(textfile.is_open()) {
			textfile << "----------------------------------------------------------------- " << endl;
			textfile << "EloGuard couldn't connect to update service." << endl;
			textfile.close();
			ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
		}
		TerminateProcess(GetCurrentProcess(), 0);
		return;
	}
}