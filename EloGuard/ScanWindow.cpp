#include <Windows.h>
#include <fstream>
#include <string>
void TitleWindow(LPCSTR WindowTitle) {
	HWND WinTitle = FindWindowA(NULL, WindowTitle);
	if (WinTitle > 0) {

		{
			using namespace std;
			fstream textfile;
			textfile.open("EloGuard\\log.txt", ios::out | ios::app);
			textfile << "----------------------------------------------------------------- " << endl;
			textfile << "Suspicious: " << WindowTitle << endl;
			ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
			exit(0);
		}
	}
}
void TitleCheckWindow() {
	TitleWindow("ArtMoney PRO v7.27");
	TitleWindow("ArtMoney SE v7.31");
	TitleWindow("ArtMoney SE v7.32");
	TitleWindow("lalaker1");
	TitleWindow("Bypass");
	TitleWindow("Sigma Engine");
	TitleWindow("Devilcrafty");
	TitleWindow("forumdc");
	TitleWindow("Forumdc");
	TitleWindow("ForumDC");
	TitleWindow("forumdc.org");
	TitleWindow("Forumdc.org");
	TitleWindow("ForumDC.org");
	TitleWindow("Gadget");
	TitleWindow("MyPacketTool");
	TitleWindow("Paket Yakala");
	TitleWindow("Cheat Engine 5.0");
	TitleWindow("Cheat Engine 5.1");
	TitleWindow("Cheat Engine 5.1.1");
	TitleWindow("Cheat Engine 5.2");
	TitleWindow("Cheat Engine 5.3");
	TitleWindow("Cheat Engine 5.4");
	TitleWindow("Cheat Engine 5.5");
	TitleWindow("Cheat Engine 5.6");
	TitleWindow("Cheat Engine 5.6.1");
	TitleWindow("Cheat Engine 6.0");
	TitleWindow("Cheat Engine 6.1");
	TitleWindow("Cheat Engine 6.3");
	TitleWindow("Cheat Engine 6.4");
	TitleWindow("Cheat Engine 6.5");
	TitleWindow("Cheat Engine 6.6");
	TitleWindow("Cheat Engine 6.7");
	TitleWindow("Cheat Engine 6.8");
	TitleWindow("Cheat Engine 6.9");
	TitleWindow("Cheat Engine 7.0");
	TitleWindow("Cheat Engine");
	TitleWindow("HiDeToolz");
	TitleWindow("HideToolz");
	TitleWindow("1nj3ct0r");
	TitleWindow("injector");
	TitleWindow("Injector");
	TitleWindow("Olly Debugger");
	TitleWindow("Process Explorer 11.33");
	TitleWindow("Process Explorer");
	TitleWindow("Process Hacker");
	TitleWindow("T Search");
	TitleWindow("WPE PRO");
	TitleWindow("WPePro 0.9a");
	TitleWindow("WPePro 1.3");
	TitleWindow("ZhyperMu Packet Editor");
	TitleWindow("hacker");
	TitleWindow("rPE - rEdoX Packet Editor");
	TitleWindow("7x");
	TitleWindow("wallhack");
	TitleWindow("hile");
	TitleWindow("7x , hile");
	TitleWindow("lalaker2");
	TitleWindow("lalaker hile");
	TitleWindow("injectör");
	TitleWindow("mt2 hileleri");
	TitleWindow("megadosya");
	TitleWindow("hileler");
	TitleWindow("baypass");
	TitleWindow("metin2mod");
	TitleWindow("bot");
	TitleWindow("hilesi indir");
	TitleWindow("megadosya.com");
	TitleWindow("Injector Gadget");
	TitleWindow("[BETA] Hack Loader v1.0.3");
	TitleWindow("[BETA] Hack Loader");
	TitleWindow("Module loaded!");
	TitleWindow("Okcu Hilesi");
	TitleWindow("Mobber Hack");
	TitleWindow("IrcRest Python Loader");
	TitleWindow("Python Loader");
	TitleWindow("CurrPorts");
	TitleWindow("Moo0 Connection Watcher");
	TitleWindow("Open Ports Scanner");
	TitleWindow("PortExpert v1.6.1.9");
	TitleWindow("ProcNetMonitor");
	TitleWindow("TcpLogView");
	TitleWindow("TCPMonitor");
	TitleWindow("System Explorer");
	TitleWindow("GhostMouse 3.2.3");
	TitleWindow("Windows Görev Yöneticisi");
	TitleWindow("[M24 Pro]");
	TitleWindow("MultiHack Injector");
	TitleWindow("N-Jector by NOOB");
	TitleWindow("Success!!");
	TitleWindow("Core hack 1.2");
	TitleWindow("Metin2 PServers Bypass by lalaker1");
	TitleWindow("Komut Ýstemi");
	TitleWindow("Shaiya Launcher");
	TitleWindow("Metin2 Launcher by NoviceHacker");
	TitleWindow("Chestille Metin2 PvP Bot");
	TitleWindow("[DF] Beta 2.0.0");
	TitleWindow("VMware vSphere Client");
	TitleWindow("Oto Tuþ V3");
	TitleWindow("Multi Macro Bot 1.0");
	TitleWindow("Extreme Injector v3.5 by master131");
	TitleWindow("PaidBot");
	TitleWindow("KoPluginGlobal_v7.0.8");
	TitleWindow("ThunderRT6FormDC");
	TitleWindow("Dll-Injectorv2 by Padmak");
	TitleWindow("SOACS_Yourko_2017");
	TitleWindow("Cheat Engine 6.7");
}
void ScanAllWindow()
{
	while (true) {
		TitleCheckWindow();
		Sleep(1000);
	}
}
void ScanWindow() {
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(ScanAllWindow), NULL, 0, 0);
}

