#pragma warning (disable:4996)
#include <iostream>
#include <time.h>
#include <string.h>
#include "CConsole.h"
using namespace std;

class SystemTime
{
public:
	CConsole concle;
	char Date[50];	//日期
	char Week[10];	//周123456日
	char Time[20];	//准确时间
public:
	void GETtime();
	void Showtime();
};
