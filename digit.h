
#include "clock_class.h"

class Digit
{
public:
	//	char *Big_digit[5][3];		Êý×Ö¾ØÕó
	SystemTime time;
	CConsole concle;
	char *Zero[5][3];
	char *One[5][3];
	char *Two[5][3];
	char *Three[5][3];
	char *Four[5][3];
	char *Five[5][3];
	char *Six[5][3];
	char *Seven[5][3];
	char *Nine[5][3];
	char *Eight[5][3];
	char *colon[5][3];
public:
	Digit();
	void Conversion(char t, int posx, int posy);
	void Matrix();
	void ShowMatrix();
};
