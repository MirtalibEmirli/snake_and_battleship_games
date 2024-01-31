#pragma once

#pragma region Area
#include"sade_funksiyalar.h"
using namespace std;

int** SettingManualAreaForP1() {
	int count = 0;
	int s = 15;
	int** p1 = CreateArray(s);
	int** p2 = CreateArray(s);
	int row = 0, col = 0;
	while (true)
	{
		ShowArea(p1, 10);
		cout << endl;
		cout << "row for 4 length ship : "; cin >> row;
		cout << "column for 4 length ship : "; cin >> col;
		if ((row < 1 || row >= 10) && (col < 1 || col >= 10)) {
			SetColor(4);
			cout << "Row or Column ERROR " << endl;
			SetColor(7);
			Sleep(1000);
			system("cls");
			continue;
		}
		while (true) {
			char direction = ' ';
			cout << "direction for 4 length ship ['r';'l';'d';'u'] : "; cin >> direction;
			if (IsEmpty(p1, row, col, direction, 4)) {
				SetShips(p1, row, col, direction, 4);
				system("cls");
				ShowArea(p1, 10);
				cout << endl;
				for (size_t i = 0; i < 2; i++)
				{
					cout << "row for 3 length ship : "; cin >> row;
					cout << "column for 3 length ship : "; cin >> col;
					if ((row < 1 || row >= 10) && (col < 1 || col >= 10)) {
						SetColor(4);
						cout << "Row or Column ERROR " << endl;
						SetColor(7);
						Sleep(1000);
						system("cls");
						ShowArea(p1, 10);
						cout << endl;
						cout << endl;
						i = 0;
						continue;
					}
					while (true)
					{
						cout << "direction for 3 length ship : ['r';'l';'d';'u'] : "; cin >> direction;
						if (IsEmpty(p1, row, col, direction, 3)) {
							SetShips(p1, row, col, direction, 3);
							system("cls");
							ShowArea(p1, 10);
							cout << endl;
							if (i == 0) {
								break;
							}
							else {
								// 2 deneli gemi duzulur begin
								for (size_t i = 0; i < 3; i++)
								{
									cout << "row for 2 length ship : "; cin >> row;
									cout << "column for 2 length ship : "; cin >> col;
									if ((row < 1 || row >= 10) && (col < 1 || col >= 10)) {
										SetColor(4);
										cout << "Row or Column ERROR " << endl;
										SetColor(7);
										Sleep(1000);
										system("cls");
										ShowArea(p1, 10);
										cout << endl;
										cout << endl;
										i = 0;
										continue;
									}
									while (true)
									{
										cout << "direction for 2 length ship: ['r';'l';'d';'u'] : "; cin >> direction;
										if (IsEmpty(p1, row, col, direction, 2)) {
											SetShips(p1, row, col, direction, 2);
											system("cls");
											ShowArea(p1, 10);
											cout << endl;;
											if (i < 2) {
												break;
											}
											else {
												//1 deneli gemi duzulur begin
												for (size_t i = 0; i < 4; i++)
												{
													cout << "row for 1 length ship : "; cin >> row;
													cout << "column for 1 length ship : "; cin >> col;
													if ((row < 1 || row >= 10) && (col < 1 || col >= 10)) {
														SetColor(4);
														cout << "Row or Column ERROR " << endl;
														SetColor(7);
														Sleep(1000);
														system("cls");
														ShowArea(p1, 10);
														cout << endl;
														i = 0;
														continue;
													}
													while (true)
													{
														if (IsEmpty(p1, row, col, 'r', 1)) {
															SetShips(p1, row, col, 'r', 1);
															system("cls");
															ShowArea(p1, 10);
															cout << endl;
															if (i == 3) {
																return p1;
															}
															if (i < 4) {
																break;
															}

														}
														else {
															cout << "ERROR" << endl;
															system("pause");
															i--;
															break;
														}
													}
												}
												//end
											}
										}
										else {
											cout << "ERROR" << endl;
											system("pause");
											i--;
											break;

										}
									}
								}
								//end
							}
						}
						else {
							cout << "ERROR" << endl;
							system("pause");
							i--;
							break;
						}
					}
				}

			}
			else {
				cout << "ERROR " << endl;
				system("cls");
				break;
			}
		}
	}
}

#include"StartTheGame.h"

void ManualGame() {
	int** player1 = SettingManualAreaForP1();
	int** player2 = SettingManualAreaForP1();
	ShowArea(player1, 10);
	ShowArea(player2, 10);

	StartTheGame(player1, player2);
}
#pragma endregion
