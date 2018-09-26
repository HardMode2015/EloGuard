#include <Windows.h>
#include <fstream>

void TxtCheckWindow() {
	POINT p;
	HWND DebugerFound = 0;
	for (int qy = 0; qy < 100; qy++)
	{
		for (int qx = 0; qx < 100; qx++)
		{
			p.x = qx * 20;
			p.y = qy * 20;
			DebugerFound = WindowFromPoint(p);
			char t[255];
			GetWindowTextA(DebugerFound, t, 225);
			if (
				strstr(t, "BYPASS") ||
				strstr(t, "ByPass") ||
				strstr(t, "CHEAT") ||
				strstr(t, "CHEATER") ||
				strstr(t, "CHEATS") ||
				strstr(t, "CR4CK3R") ||
				strstr(t, "Cr4ck3r") ||
				strstr(t, "Debug") ||
				strstr(t, "HACK") ||
				strstr(t, "HIDETOOLZ") ||
				strstr(t, "Hack") ||
				strstr(t, "Hacker") ||
				strstr(t, "HideToolz") ||
				strstr(t, "INJECT") ||
				strstr(t, "INJECTOR") ||
				strstr(t, "Inject") ||
				strstr(t, "Injector") ||
				strstr(t, "Olly") ||
				strstr(t, "Ollydbg") ||
				strstr(t, "SUSPEND") ||
				strstr(t, "Suspend") ||
				strstr(t, "TOOLZ") ||
				strstr(t, "Toolz") ||
				strstr(t, "WPE PRO") ||
				strstr(t, "Wpe Pro") ||
				strstr(t, "WpePro") ||
				strstr(t, "bypass") ||
				strstr(t, "hack") ||
				strstr(t, "hacker") ||
				strstr(t, "hidetoolz") ||
				strstr(t, "inject") ||
				strstr(t, "injector") ||
				strstr(t, "olly") ||
				strstr(t, "ollydbg") ||
				strstr(t, "toolz") ||
				strstr(t, "leads.ru") ||
				strstr(t, "lalaker") ||
				strstr(t, "lalaker1") ||
				strstr(t, "ads.exe") ||
				strstr(t, "wpe pro") ||
				strstr(t, "Ads.exe") ||
				strstr(t, "musicinstructor") ||
				strstr(t, "Python Modules") ||
				strstr(t, "LevelBot") ||
				strstr(t, "Level Bot") ||
				strstr(t, "3 Saniye içinde PVP'ye geçin") ||
				strstr(t, "€RCÝYESLÝM") ||
				strstr(t, "M2 PVP : Yardýmcý Trainer") ||
				strstr(t, "LAG YAP") ||
				strstr(t, "Ultmate x") ||
				strstr(t, "Yaþýyor/Ölü") ||
				strstr(t, "Böylelikle kimse oyununu normal þekilde") ||
				strstr(t, "wpe-pro.spt") ||
				strstr(t, "wpepro") ||
				strstr(t, "Bot") ||
				strstr(t, "AutoIt") ||
				strstr(t, "timer_inject") ||
				strstr(t, "c_injectClick") ||
				strstr(t, "prodamage") ||
				strstr(t, "Module loaded!") ||
				strstr(t, "Process") ||
				strstr(t, "Kernel Module") ||
				strstr(t, "Kernel Module") ||
				strstr(t, "Okcu Hilesi") ||
				strstr(t, "Okçu Hack") ||
				strstr(t, "Saldýrý Hýzý") ||
				strstr(t, "Hareket Hýzý") ||
				strstr(t, "Okçu Hack") ||
				strstr(t, "Level Bot") ||
				strstr(t, "Balýk Botu") ||
				strstr(t, "Auto Damage") ||
				strstr(t, "Auto Damage on Attack") ||
				strstr(t, "PC Hunter 32 BÝT.exe") ||
				strstr(t, "acelera") ||
				strstr(t, "Acelerador") ||
				strstr(t, "acelerador") ||
				strstr(t, "[F?Ø???] [???]") || //Black box
				strstr(t, "Black Box") ||
				strstr(t, "BYPASS") ||
				strstr(t, "ByPass") ||
				strstr(t, "byPass") ||
				strstr(t, "Bypass") ||
				strstr(t, "CAPOTE") ||
				strstr(t, "Capote") ||
				strstr(t, "capote") ||
				strstr(t, "CATASTROPHE") ||
				strstr(t, "Catastrophe") ||
				strstr(t, "catastrophe") ||
				strstr(t, "CHEAT") ||
				strstr(t, "Cheat") ||
				strstr(t, "cheat") ||
				strstr(t, "CHEATER") ||
				strstr(t, "Cheater") ||
				strstr(t, "cheater") ||
				strstr(t, "CHEATS") ||
				strstr(t, "Cheats") ||
				strstr(t, "cheats") ||
				strstr(t, "DUPAR") ||
				strstr(t, "Dupar") ||
				strstr(t, "dupar") ||
				strstr(t, "DUPER") ||
				strstr(t, "Duper") ||
				strstr(t, "duper") ||
				strstr(t, "ENGINE") ||
				strstr(t, "Engine") ||
				strstr(t, "engine") ||
				strstr(t, "PROCESS") ||
				strstr(t, "Process") ||
				strstr(t, "process") ||
				strstr(t, "FREEZE") ||
				strstr(t, "Freeze") ||
				strstr(t, "freeze") ||
				strstr(t, "SPEED") ||
				strstr(t, "Speed") ||
				strstr(t, "Speed") ||
				strstr(t, "HACK") ||
				strstr(t, "Hack") ||
				strstr(t, "hack") ||
				strstr(t, "HACKER") ||
				strstr(t, "Hacker") ||
				strstr(t, "hacker") ||
				strstr(t, "HIDE") ||
				strstr(t, "Hide") ||
				strstr(t, "hide") ||
				strstr(t, "TOOLZ") ||
				strstr(t, "Toolz") ||
				strstr(t, "toolz") ||
				strstr(t, "INJECT") ||
				strstr(t, "Inject") ||
				strstr(t, "inject") ||
				strstr(t, "INJECTOR") ||
				strstr(t, "Injector") ||
				strstr(t, "injector") ||
				strstr(t, "KILL") ||
				strstr(t, "Kill") ||
				strstr(t, "kill") ||
				strstr(t, "MUPIE") ||
				strstr(t, "MuPie") ||
				strstr(t, "MuPie") ||
				strstr(t, "OLLY") ||
				strstr(t, "Olly") ||
				strstr(t, "olly") ||
				strstr(t, "PACKAGER") ||
				strstr(t, "Packager") ||
				strstr(t, "Packager") ||
				strstr(t, "PACOTES") ||
				strstr(t, "Pacotes") ||
				strstr(t, "Pacotes") ||
				strstr(t, "SUSPEND") ||
				strstr(t, "Suspend") ||
				strstr(t, "suspend") ||
				strstr(t, "WILDPROXY") ||
				strstr(t, "Wildproxy") ||
				strstr(t, "wildproxy") ||
				strstr(t, "WPE PRO") ||
				strstr(t, "Wpe Pro") ||
				strstr(t, "wpe pro") ||
				strstr(t, "XELERATOR") ||
				strstr(t, "Xelerator") ||
				strstr(t, "xelerator") ||
				strstr(t, "XTRAP") ||
				strstr(t, "XTrap") ||
				strstr(t, "xtrap") ||
				strstr(t, "XSPEED") ||
				strstr(t, "XSpeed") ||
				strstr(t, "xSpeed") ||
				strstr(t, "xspeed") ||
				strstr(t, "FUNNYZHYPER") ||
				strstr(t, "FunnyZhyper") ||
				strstr(t, "funnyzhyper") ||
				strstr(t, "AUTOSKILL") ||
				strstr(t, "AutoSkill") ||
				strstr(t, "autoskill") ||
				strstr(t, "AUTOKILL") ||
				strstr(t, "Autokill") ||
				strstr(t, "autokill") ||
				strstr(t, "AGILITY") ||
				strstr(t, "Agility") ||
				strstr(t, "agility") ||
				strstr(t, "TRADE") ||
				strstr(t, "Trade") ||
				strstr(t, "trade") ||
				strstr(t, "PACKET") ||
				strstr(t, "Packet") ||
				strstr(t, "packet") ||
				strstr(t, "AUTOIT") ||
				strstr(t, "AutoIt") ||
				strstr(t, "autoit") ||
				strstr(t, "AUTOKEYBOARD") ||
				strstr(t, "AutoKeyboard") ||
				strstr(t, "autokeyboard") ||
				strstr(t, "SMOLL") ||
				strstr(t, "Smoll") ||
				strstr(t, "smoll") ||
				strstr(t, "SANDBOX") ||
				strstr(t, "Sandbox") ||
				strstr(t, "sandbox") ||
				strstr(t, "SANDBOXED") ||
				strstr(t, "Sandboxed") ||
				strstr(t, "sandboxed") ||
				strstr(t, "DEFALTBOX") ||
				strstr(t, "DefaltBox") ||
				strstr(t, "defaltbox") ||
				strstr(t, "HXD") ||
				strstr(t, "HxD") ||
				strstr(t, "hxd") ||
				strstr(t, "BVKHEX") ||
				strstr(t, "Bvkhex") ||
				strstr(t, "bvkhex") ||
				strstr(t, "bvkhex") ||
				strstr(t, "bvkhex") ||
				strstr(t, "PAUSE") ||
				strstr(t, "Pause") ||
				strstr(t, "pause") ||
				strstr(t, "PAUSA") ||
				strstr(t, "Pausa") ||
				strstr(t, "pausa") ||
				strstr(t, "resume") ||
				strstr(t, "Real Server:") ||               //SolidProxy Stealth mode
				strstr(t, "FREE PUBLIC VERSION!") ||       //SolidProxy Stealth mode
				strstr(t, "44405") ||               //SolidProxy Stealth mode
				strstr(t, "55901") ||               //SolidProxy Stealth mode
				strstr(t, "Connect Server Emulator:") ||   //SolidProxy Stealth mode
				strstr(t, "Button Classname Detecta") ||
				strstr(t, "AutoClicker") ||
				strstr(t, "Autoclicker") ||
				strstr(t, "autoclicker") ||
				strstr(t, "(Elite)") ||
				strstr(t, "Elite") ||
				strstr(t, "Style30_Theme1") || //darkterro gamehacks
				strstr(t, "DEBUG") ||
				strstr(t, "DEBUG") ||
				strstr(t, "PC Hunter 64 BÝT.exe") ||
				strstr(t, "Chestille Metin2 PvP Bot") ||
				strstr(t, "Spambot") ||
				strstr(t, "Wallhack") ||
				strstr(t, "Zoom hack") ||
				strstr(t, "ThunderRT6FormDC") ||
				strstr(t, "Cheat Engine 6.7") ||
				strstr(t, "Koxps") ||
				strstr(t, "bot") ||
				strstr(t, "hile") ||
				strstr(t, "multiclient") ||
				strstr(t, "multi") ||
				strstr(t, "hack") ||
				strstr(t, "devilcrafty") ||
				strstr(t, "Steam") ||
				strstr(t, "koplugin") ||
				strstr(t, "Zedbot") ||
				strstr(t, "Speedhack") ||
				strstr(t, "Speed") ||
				strstr(t, "Yarim el") ||
				strstr(t, "kodevelopers.com") ||
				strstr(t, "onlinehile") ||
				strstr(t, "Debug"))
			{
				unsigned char * hack = (unsigned char*)GetProcAddress(GetModuleHandleA("kernel32.dll"), "OpenProcess");
				if (*(hack + 6) == 0xEA) {
				}
				else
				{
					{
						using namespace std;
						fstream textfile;
						textfile.open("EloGuard/log.txt", ios::out | ios::app);
						textfile << "----------------------------------------------------------------- " << endl;
						textfile << "A suspicious program was detected." << endl;
						ShellExecuteA(NULL, "open", "EloGuard\\EloGuard GUI.exe", "-openlog log.txt", NULL, SW_SHOWNORMAL);
						exit(0);
						TerminateProcess(GetCurrentProcess(), 0);
					}
				}
			}
		}
	}
}

void ScanAllString() {
	while (true) {
		TxtCheckWindow();
		Sleep(1000);
	}
}

void ScanString()
{
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(ScanAllString), NULL, 0, 0);
}