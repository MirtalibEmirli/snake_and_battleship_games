#pragma once
void printFirstarr(int row)
{
	char* str1 = new char[9] {"New Game"};
	char* str2 = new char[5] {"Exit"};
	char** str = new char* [2] {str1, str2};
	for(int i=0;i<2;i++)
	{
		if (row == i)
			cout << RED << str[i] << endl;
		else
			cout << WHITE << str[i] << endl;
	}
	   
}
void printLastarr(int& row)   //oyuna davam?
{
	char* str1 = new char[9] {"YES"};
	char* str2 = new char[5] {"NO"};
	char** str = new char* [2] {str1, str2};
	for (int i = 0; i < 2; i++)
	{
		if (row == i)
			cout << RED << str[i] << endl;
		else
			cout << WHITE << str[i] << endl;
	}
}
char** creat2Darray(int size)
{
	char** arr = new char* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new char[size];
	}
	return arr;
}
void firstMenu(int size,int& row,direction(dir))
{

	switch (dir)
	{
	case UP:
		if (row > 0)
			row--;
		else
			row = size - 1;
		break;
	case DOWN:
		if (row < size - 1)
			row++;
		else
			row = 0;
		break;
	case LEFT:
		break;
	case RIGHT:
		break;
    default:
		break;
	}
}
void init2Darray(char** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0 || i == size - 1)
				arr[i][j] = 186;
			else if (j == 0 || j == size - 1)
				arr[i][j] =205;
			else
				arr[i][j] = ' ';
		}
	}
}
void print2Darray(char** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout <<WHITE<<arr[i][j] << " ";
		}
		cout << endl;
	}
}

void moveinTable(char** arr, int size,direction direct, int& row, int& colm,int count)
{
	switch (direct)
	{   
	    case UP:
			if (row >= 1)
			{
				swap(arr[row][colm], arr[row - 1][colm]);
				row--;
			}
			
            break;
		case LEFT:
			if (colm >= 1)
			{
				swap(arr[row][colm], arr[row][colm - 1]);
				colm--;
			 }
			
			break;
		case RIGHT:
			if (colm<= size - 2)
			{
				swap(arr[row][colm], arr[row][colm + 1]);
				colm++;
			}
			
			break;
		case DOWN:
			if (row <= size-2)
			{
				swap(arr[row][colm], arr[row+1][colm]);
				row++;
			}
			
	       break;
	default:
		break;
	}
}
 

void randomChiyelek(char** arr,int size, int& MeyveRow, int& MeyveColm,int row,int colm)
{
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] == 'F') {
				arr[i][j] = ' ';
			}
		}
	}
	while(true)
	{
		MeyveRow = 1 + rand() % (size - 3);
		MeyveColm = 1 + rand() % (size - 3);
		if (MeyveColm != colm && MeyveRow != row)
		{
			arr[MeyveRow][MeyveColm] = 'F';
			break;
		}
	}
}

void eatChiyelek(char** arr, int size, int& MeyveRow, int& MeyveColm, int row, int colm, int& count)
{
	if (row == MeyveRow && colm == MeyveColm)
	{
		randomChiyelek(arr, size, MeyveRow, MeyveColm,row,colm);
		count+=10;
		

	}
}
bool playGame(bool& repeatplay,int& max)
{
	cout << "Oyun basladi" << endl;
	Sleep(1000);
	system("cls");
	srand(time(NULL));
	int row, colm;
	int MeyveRow = 5, MeyveColm = 5;
	row = 1, colm = 1;
	bool isCheak;
	int size = 10;
	char** arr = creat2Darray(size);
	init2Darray(arr, size);
	arr[row][colm] = '*';
	randomChiyelek(arr, size, MeyveRow, MeyveColm, row,colm);
	print2Darray(arr, size);
	int count = 0;
	
	bool Cheak = false;
	while (true)
	{

		isCheak = false;
		int num = _getch();
		if (num == 224)
		{
			num = _getch();
			moveinTable(arr, size, direction(num), row, colm, count);
			eatChiyelek(arr, size, MeyveRow, MeyveColm, row, colm, count);


		}
		system("cls");
		print2Darray(arr, size);
		GameOver(count, row, colm, size, isCheak);
		cout << endl;
		if(repeatplay == false)
		cout <<"Hazirki Xal:" << count;
		else if (repeatplay == true)
		{
			if(max>count)
				cout <<GREEN<<"Hazirki Xal:" << count;
			else
				cout << RED << "Hazirki Xal:" << count;
		}
		if (isCheak)
		{
			system("cls");
			cout << "." << endl;
			Sleep(500);
			cout << ".." << endl;
			Sleep(500);
			cout << "..." << endl;
			Sleep(500);
			cout << "Uduzdunuz!" << endl;
			Sleep(1500);
			cout << "Qazandiginiz xal:" << count << endl;
			cout << "." << endl;
			Sleep(500);
			cout << ".." << endl;
			Sleep(500);
			cout << "..." << endl;
			Sleep(1500);
			system("cls");
			cout << WHITE << "Yeniden oynamaq isteyersiniz?" << endl;
			int lrow = 0;
			printLastarr(lrow);
			while (true)
			{



				int lastnum = _getch();
				if (lastnum == 224)
				{

					lastnum = _getch();
					firstMenu(2, lrow, direction(lastnum));
				}
				system("cls");
				cout << WHITE << "Yeniden oynamaq isteyersiniz?" << endl;
				printLastarr(lrow);
				if (lastnum == 13)
				{
					if (lrow == 0)
					{
						if (count > max)
						{
							max = count;
							repeatplay = true;
						}
						return 1;
					}

					else if (lrow == 1)
						return 0;
				}
			}



		}

	}
}

void GameOver(int count, int row, int colm,int size,bool& isCheak)
{
	if (row <1 || colm < 1 || colm > size - 2 || row > size - 2)
	{
		isCheak = true;
	}
}

