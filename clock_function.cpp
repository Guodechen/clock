
#include "clock_class.h"

void SystemTime::GETtime()
{
	time_t t = time(0);
	strftime(Date, sizeof(Date), "%Y �� %m �� %d ��", localtime(&t));		//��ȡ����
	strftime(Week, sizeof(Week), "%A", localtime(&t));						//��ȡ��123456
	strftime(Time, sizeof(Time), "%X", localtime(&t));						//��ȡ׼ȷʱ��
}

void SystemTime::Showtime()
{
	concle.SetCoord(30, 5);
	if (strcmp(Week, "Monday") == 0)
	{
		strcpy(Week, "����һ");
	}
	if (strcmp(Week, "Thursday") == 0)
	{
		strcpy(Week, "���ڶ�");
	}
	if (strcmp(Week, "Wednesday") == 0)
	{
		strcpy(Week, "������");
	}
	if (strcmp(Week, "Thursday") == 0)
	{
		strcpy(Week, "������");
	}
	if (strcmp(Week, "Friday") == 0)
	{
		strcpy(Week, "������");
	}
	if (strcmp(Week, "Saturday") == 0)
	{
		strcpy(Week, "������");
	}
	if (strcmp(Week, "Sunday") == 0)
	{
		strcpy(Week, "������");
	}
	cout << Date;
	concle.SetCoord(32, 7);
	cout << Week << " " << Time << endl;
}

