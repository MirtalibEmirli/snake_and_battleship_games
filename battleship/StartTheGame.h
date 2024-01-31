#pragma once

#pragma region GAME
#include<time.h>
#include"sade_funksiyalar.h"

bool player1Turn = true;

void StartTheGame(int** p1, int** p2) {
	int count1 = 0; int count2 = 0;
	while (true)
	{
		if (player1Turn) {
			int row = 0; int col = 0;
			cout << "P L A Y E R    1    T U R N " << endl;
			cout << "enter row which you wanna hit : "; cin >> row;
			cout << "enter column which you wanna hit : "; cin >> col;
			if (p2[row][col] == 1) {
				p2[row][col] = 5;
				player1Turn = true;
				++count1;
				if (count1 == 20) {
					cout << "P L A Y E R   1   W O N   T H E    G A M E   ! ! ! ! ! ! " << endl << endl;
					break;
				}
				system("cls");
				ShowArea(p1, 10);
				ShowArea2(p2, 10);
				continue;
			}
			else {
				player1Turn = false;
				cout << "Missed" << endl;
				Sleep(500);
				system("cls");
				ShowArea(p1, 10);
				ShowArea2(p2, 10);
				continue;
			}
		}
		else if (!player1Turn) {
			srand(time(0));
			cout << "P L A Y E R   2    T U R N " << endl;
			int row = 1 + rand() % 10;
			int col = 1 + rand() % 10;
			if (p1[row][col] == 1) {
				p1[row][col] = 5;
				cout << "COMPUTER HITTED YOUR SHIP ! " << endl;
				Sleep(1000);
				player1Turn = false;
				++count2;
				if (count2 == 20) {
					cout << "P L A Y E R   2    W O N   T H E    G A M E   !  !!  ! ! " << endl << endl;
					break;
				}
				system("cls");
				ShowArea(p1, 10);
				ShowArea2(p2, 10);
				continue;
			}
			else {
				player1Turn = true;
				cout << "Missed" << endl;
				Sleep(500);
				system("cls");
				ShowArea(p1, 10);
				ShowArea2(p2, 10);
				continue;
			}
		}
	}

}
#pragma endregion 