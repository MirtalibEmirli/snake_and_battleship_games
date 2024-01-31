#pragma once 
#include<conio.h>   
#include<iomanip>
#include "iostream"        
#pragma region Board   
#include "allfunctions.h"
void SetColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}  
 
int** CreateArray(int size) {
	int** Game = new int* [size] {};
	for (size_t i = 0; i < size; i++)
	{
		Game[i] = new int[size] {};
	}

	return Game;
} 
  

void ShowArea(int** game, int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (i == 0) {
				cout << setw(2) << char(48+k) << " ";  //boardin yuxarisi kordinat
			}
			else if (k == 0) {
				cout << setw(2) << (char)(48 + i) << " ";
			}
			else if (game[i][k] == 0) {
				SetColor(9);
				cout << setw(2) << pointer << " "; //board
				SetColor(7);
			}
			else if (game[i][k] == 1) {
				SetColor(4);
				//cout << setw(2) << (char)254 << " ";//gemi var
				cout << setw(2) << ship_sign  << " ";//gemi var
				SetColor(7);
			}
			else if (game[i][k] == 5) {
				SetColor(4);
				cout << setw(2) << downed_sign << " ";// vuruldu gemi partladi
				SetColor(7);
			}
		}cout << endl;
	}cout << endl << endl << endl;
}

 
void ShowArea2(int** game, int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (i == 0) {
				cout << setw(2) << char(48+k) << " ";  //boardin yuxarisi kordinat
			}
			else if (k == 0) {
				cout << setw(2) << (char)(48 + i) << " ";
			}
			else if (game[i][k] == 0) {
				SetColor(9);
				cout << setw(2) << pointer << " "; //board
				SetColor(7);
			}
			else if (game[i][k] == 1) {
				SetColor(9);
				cout << setw(2) << pointer<< " ";//gemi var
				//cout << setw(2) << ship_sign  << " ";//gemi var
				SetColor(7);
			}
			else if (game[i][k] == 5) {
				SetColor(4);
				cout << setw(2) << downed_sign << " ";// vuruldu gemi partladi
				SetColor(7);
			}
		}cout << endl;
	}cout << endl << endl << endl;
} 
  
  
 
bool IsEmpty(int** arr, int Y, int X, char direction, int sizeofship) {
	int count = 0;
	if (direction == 'l') {// left
		for (size_t i = 0; i <= sizeofship; i++)
		{
			if (arr[Y][X - i] == 0 && arr[Y + 1][X - i] == 0 && arr[Y - 1][X - i] == 0 && arr[Y][X + 1] == 0 && arr[Y + 1][X + 1] == 0 && arr[Y - 1][X + 1] == 0) {
				count++;
			}
		}
	}
	else if (direction == 'r') {// right
		for (size_t i = 0; i <= sizeofship; i++)
		{
			if (arr[Y][X + i] == 0 && arr[Y + 1][X + i] == 0 && arr[Y - 1][X + i] == 0 && arr[Y][X - 1] == 0 && arr[Y + 1][X - 1] == 0 && arr[Y - 1][X - 1] == 0) {
				count++;
			}
		}
	}
	else if (direction == 'd') {// down
		for (size_t i = 0; i <= sizeofship; i++)
		{
			if (arr[Y + i][X] == 0 && arr[Y + i][X + 1] == 0 && arr[Y + i][X - 1] == 0 && arr[Y - 1][X] == 0 && arr[Y - 1][X + 1] == 0 && arr[Y - 1][X - 1] == 0) {
				count++;
			}
		}
	}
	else if (direction == 'u') {// up
		for (size_t i = 0; i <= sizeofship; i++)
		{
			if (arr[Y - i][X] == 0 && arr[Y - i][X + 1] == 0 && arr[Y - 1][X - 1] == 0 && arr[Y + 1][X] == 0 && arr[Y + 1][X - 1] == 0 && arr[Y + 1][X + 1] == 0) {
				count++;
			}
		}
	}
	if (count == sizeofship + 1) {
		return true;
	}
	return false;
} 
 
 
void SetShips(int** arr, int row, int col, char direction, int sizeofship) {
	if (direction == 'l') {
		for (size_t i = 0; i < sizeofship; i++)
		{
			arr[row][col - i] = 1;
		}
	}
	else if (direction == 'r') {
		for (size_t i = 0; i < sizeofship; i++)
		{
			arr[row][col + i] = 1;
		}
	}
	else if (direction == 'd') {
		for (size_t i = 0; i < sizeofship; i++)
		{
			arr[row + i][col] = 1;
		}
	}
	else if (direction == 'u') {
		for (size_t i = 0; i < sizeofship; i++)
		{
			arr[row - i][col] = 1;


		}
	}
	else {
		cout << "Please enter true direction ! " << endl;
	}
} 
  
#pragma endregion
 