#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	int nPosX = 0, nPosY = 0;
	for (; ;)
	{
		system("cls");
		for (size_t iY = 0; iY < 11; iY++)
		{
			for (size_t iX = 0; iX < 11; iX++)
			{
				if (iX == nPosX && iY == nPosY) //&& 必须同时满足条件  || 只需要满足一个条件
				{
					std::cout << "■";
				}
				else
				{
					std::cout << "□";
				}
			}
			std::cout << std::endl;
		}
		int iStep = _getch();
		if (iStep =='s' || iStep == 'S')
		{
			nPosY++;
		}
		if (iStep== 'w'|| iStep == 'W')
		{
			nPosY--;
		}
		if (iStep == 'a' || iStep == 'A')
		{
			nPosX--;
		}
		if (iStep == 'd' || iStep == 'D')
		{
			nPosX++;
		}
		if (nPosY >= 11)
		{
			nPosY--;
		}
		if (nPosY <0)
		{
			nPosY++;
		}
		if (nPosX >= 11)
		{
			nPosX--;
		}
		if (nPosX <0)
		{
			nPosX++;
		}
	}

}