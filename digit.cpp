
#include "digit.h"

Digit::Digit()
{
	Matrix();
}

void Digit::Matrix()
{
	char* Molecule = "█";
	char* Space = "  ";

	for (int x = 0; x<5; x++)  //设定数字0
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 || x == 2 || x == 3) && (y == 1))
			{
				Zero[x][y] = Space;
			}
			else
			{
				Zero[x][y] = Molecule;
			}
		}
	}

	for (int x = 0; x<5; x++)//设定数字1
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 0 && y == 1) || (x == 1 && y == 1) || (x == 2 && y == 1) || (x == 3 && y == 1) || (x == 4 && y == 1))
				One[x][y] = Molecule;
			else
				One[x][y] = Space;
		}
	}

	for (int x = 0; x<5; x++)//设定数字2
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 0) || (x == 1 && y == 1) || (x == 3 && y == 1) || (x == 3 && y == 2))
				Two[x][y] = Space;
			else
				Two[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定数字3
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 0) || (x == 1 && y == 1) || (x == 3 && y == 0) || (x == 3 && y == 1))
				Three[x][y] = Space;
			else
				Three[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定数字4
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 0 && y == 0) || (x == 1 && y == 0) || (x == 2) || (y == 2))
				Four[x][y] = Molecule;
			else
				Four[x][y] = Space;
		}
	}

	for (int x = 0; x<5; x++)//设定数字5
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == 2) || (x == 3 && y == 0) || (x == 3 && y == 1))
				Five[x][y] = Space;
			else
				Five[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定数字6
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == 2) || (x == 3 && y == 1))
				Six[x][y] = Space;
			else
				Six[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定数字7
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 0) || (y == 2))
				Seven[x][y] = Molecule;
			else
				Seven[x][y] = Space;
		}
	}

	for (int x = 0; x<5; x++)//设定数字8
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 1) || (x == 3 && y == 1))
				Eight[x][y] = Space;
			else
				Eight[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定数字9
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 1) || (x == 3 && y == 0) || (x == 3 && y == 1))
				Nine[x][y] = Space;
			else
				Nine[x][y] = Molecule;
		}
	}

	for (int x = 0; x<5; x++)//设定冒号：
	{
		for (int y = 0; y<3; y++)
		{
			if ((x == 1 && y == 1) || (x == 3 && y == 1))
				colon[x][y] = Molecule;
			else
				colon[x][y] = Space;
		}
	}
}

void Digit::ShowMatrix()
{
	int	posx = 12;
	int posy = 11;
	time.GETtime();
	Matrix();
	for (int i = 0; i<8; i++)
	{
		Conversion(time.Time[i], posx, posy);
		posx = posx + 7;
	}
}

void Digit::Conversion(char t, int posx, int posy)
{
	posy = 10;
	if (t == '1')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << One[x][y];
			}
			posy++;
		}
	}
	else if (t == '2')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Two[x][y];
			}

			posy++;
		}
	}
	else if (t == '3')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Three[x][y];
			}

			posy++;
		}
	}
	else if (t == '4')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Four[x][y];
			}

			posy++;
		}
	}
	else if (t == '5')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Five[x][y];
			}

			posy++;
		}
	}
	else if (t == '6')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Six[x][y];
			}

			posy++;
		}
	}
	else if (t == '7')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Seven[x][y];
			}

			posy++;
		}
	}
	else if (t == '8')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Eight[x][y];
			}

			posy++;
		}
	}
	else if (t == '9')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Nine[x][y];
			}

			posy++;
		}
	}
	else if (t == '0')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << Zero[x][y];
			}

			posy++;
		}
	}
	else if (t == ':')
	{
		for (int x = 0; x<5; x++)//打印数字
		{
			concle.SetCoord(posx, posy);
			for (int y = 0; y<3; y++)
			{
				cout << colon[x][y];
			}

			posy++;
		}
	}
}