
#include <stdlib.h>
#include "CConsole.h"
//#include "clock_class.h"
#include "digit.h"
int main()
{
	CConsole concle;
	concle.SetTitle(" ±÷”≥Ã–Ú");
	concle.SetColor("34");
	concle.SetSize(80, 23);
	concle.HideCursor(true);
	SystemTime myclock;
	Digit Mine;
	while (1)
	{
		myclock.GETtime();
		myclock.Showtime();
		Mine.ShowMatrix();
		Sleep(100);
		system("cls");
	}
	return 0;
}
