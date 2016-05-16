
#include "clock_class.h"

void SystemTime::GETtime()
{
	time_t t = time(0);
	strftime(Date, sizeof(Date), "%Y 年 %m 月 %d 日", localtime(&t));		//获取日期
	strftime(Week, sizeof(Week), "%A", localtime(&t));						//获取周123456
	strftime(Time, sizeof(Time), "%X", localtime(&t));						//获取准确时间
}

void SystemTime::Showtime()
{
	concle.SetCoord(30, 5);
	if (strcmp(Week, "Monday") == 0)
	{
		strcpy(Week, "星期一");
	}
	if (strcmp(Week, "Thursday") == 0)
	{
		strcpy(Week, "星期二");
	}
	if (strcmp(Week, "Wednesday") == 0)
	{
		strcpy(Week, "星期三");
	}
	if (strcmp(Week, "Thursday") == 0)
	{
		strcpy(Week, "星期四");
	}
	if (strcmp(Week, "Friday") == 0)
	{
		strcpy(Week, "星期五");
	}
	if (strcmp(Week, "Saturday") == 0)
	{
		strcpy(Week, "星期六");
	}
	if (strcmp(Week, "Sunday") == 0)
	{
		strcpy(Week, "星期日");
	}
	cout << Date;
	concle.SetCoord(32, 7);
	cout << Week << " " << Time << endl;
}

