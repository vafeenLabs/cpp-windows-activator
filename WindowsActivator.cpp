#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	// Custom console 
	system("MODE CON COLS=45 LINES=19");

	// Point that can be used if user types the wrong number
Start:
	system("cls");

	// UI - Choosing a windows 10 version
	cout << "Choose your Windows 10 version: \n\n";
	cout << "(1)  Home \n";
	cout << "(2)  Home N \n";
	cout << "(3)  Home Single Language \n";
	cout << "(4)  Home Country Specific \n";
	cout << "(5)  Professional \n";
	cout << "(6)  Professional N \n";
	cout << "(7)  Education \n";
	cout << "(8)  Education N \n";
	cout << "(9)  Enterprise \n";
	cout << "(10) Enterprise N \n\n";
	cout << "(0)  Exit \n\n";

	int WindowsKey;
	cout << "Windows 10 : ";
	cin >> WindowsKey;

	if (WindowsKey < 0 || WindowsKey > 10) goto Start;

	// Declearing the Windows Keys for their versions
	string Home = "TX9XD-98N7V-6WMQ6-BX7FG-H8Q99",
		HomeN = "3KHY7-WNT83-DGQKR-F7HPR-844BM",
		HomeSL = "7HNRX-D7KGG-3K4RQ-4WPJ4-YTDFH",
		HomeCS = "PVMJN-6DFY6-9CCP6-7BKTT-D3WVR",
		Pro = "W269N-WFGWX-YVC9B-4J6C9-T83GX",
		ProN = "MH37W-N47XK-V7XM9-C7227-GCQG9",
		Edu = "NW6C2-QMPVW-D7KKK-3GKT6-VCFB2",
		EduN = "2WH4N-8QGBV-H22JP-CT43Q-MDWWJ",
		Ent = "NPPR9-FWDCX-D2C8J-H872K-2YT43",
		EntN = "DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4",
		WindowsKeyChoice, WindowsName;

	switch (WindowsKey) {
	case 0: exit(0);
	case 1: WindowsKeyChoice = Home; WindowsName = "Home"; break;
	case 2: WindowsKeyChoice = HomeN; WindowsName = "Home N"; break;
	case 3: WindowsKeyChoice = HomeSL; WindowsName = "Home SL"; break;
	case 4: WindowsKeyChoice = HomeCS; WindowsName = "Home CS"; break;
	case 5: WindowsKeyChoice = Pro; WindowsName = "Pro"; break;
	case 6: WindowsKeyChoice = ProN; WindowsName = "Pro N"; break;
	case 7: WindowsKeyChoice = Edu; WindowsName = "Edu"; break;
	case 8: WindowsKeyChoice = EduN; WindowsName = "Edu N"; break;
	case 9: WindowsKeyChoice = Ent; WindowsName = "Ent"; break;
	case 10: WindowsKeyChoice = EntN; WindowsName = "Ent N"; break;
	default: exit(1); break;
	}

	// Entering the key
	system("cls");
	cout << "Activating Windows 10 " << WindowsName << "\n\n";

	cout << "Entering the key to the system \n";
	system(("slmgr /ipk" + WindowsKeyChoice).c_str());

	// Switching to the server
	cout << "Getting connections with the server \n";
	system("runas /user:Administrator@domain slmgr /skms kms8.msguides.com");

	// Activating Windows
	cout << "Activating Windows \n";
	system("slmgr /ato");

	// Done
	system("cls");
	cout << "You successfully activated Windows 10 " << WindowsName << "! \n";
}

