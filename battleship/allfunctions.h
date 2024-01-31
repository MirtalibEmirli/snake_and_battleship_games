#pragma once

#pragma region Allfunction 
#include <iostream>
using namespace std;
#define BLUE "\033[34m" 
#define ab "\033[0;92m" 
#define red " \033[31m"
#define white "\033[37m"
#define green "\x1B[32m"
#define purple "\x1B[35m"
char pointer = '#';
char hit_sign = 'H';
char downed_sign = 'H';
char  ship_sign = '$';
char  miss_sign = 'M';

int num;


#include <conio.h>
#include <Windows.h>
int c;

#include "sekiller.h"     
enum direct {
	up = 72,
	down = 80,
	right = 77,
	left = 75,
	enter = 13,
};
#include "FOR AUTO.h"
#include "StartTheGame.h"
#include "FOR MANUAL.h"
#include "HEader1.h"
 #pragma endregion  
