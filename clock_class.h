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
	char Date[50];	//����
	char Week[10];	//��123456��
	char Time[20];	//׼ȷʱ��
public:
	void GETtime();
	void Showtime();
};
