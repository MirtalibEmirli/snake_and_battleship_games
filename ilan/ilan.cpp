// ilan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
enum direction
{
	UP = 72,
	RIGHT = 77,
	LEFT = 75,
	DOWN = 80
};

#define RED "\033[31m"
#define WHITE "\033[37m"
#define GREEN   "\033[32m"  
#include "Prototype.h";
#include "allfunction.h";

int main()
{
	int row_ = 0;  
	int size = 2;  

    printFirstarr(row_);
	while (true)
	{
		

		int n = _getch();
		if (n == 224)
		{
			
			n = _getch();
			firstMenu(size, row_, direction(n));
		}
		system("cls");
		printFirstarr(row_);
		bool repeatplay = false;
		int bestScore = 0;
		if (n == 13)
		{
				system("cls");
				if (row_ == 0)
				{ 
					while(true)
					{
						bool oyun = playGame(repeatplay, bestScore);
						if (oyun == 1)
							oyun = playGame(repeatplay, bestScore);

						if (oyun == 0)
						{
							int newRow = 0;
							system("cls");
							printFirstarr(newRow);
							break;
						}
					}
				}
				else if (row_ == 1)
				{
					cout << WHITE << "Oyundan chixis verildi!" << endl;
					Sleep(1000);
					break;
				}
			
		}
	}
	

}


