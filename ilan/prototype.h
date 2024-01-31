#pragma once
void printFirstarr(int);
void printLastarr(int&);
char** creat2Darray(int);
void firstMenu(int, int&, direction(dir));
void init2Darray(char**, int);
void print2Darray(char**, int);
void moveinTable(char**, int, direction, int& , int&, int);
void randomChiyelek(char**, int, int&, int&,int,int);
void eatChiyelek(char**, int, int&, int&, int, int, int&);
bool playGame(bool&, int&);
void GameOver(int, int, int, int, bool&);