#pragma once

#pragma region Functions
void firstmenu(int secim) {
	char** menu = new char* [5];
	char* str1 = new char[11] {"New GAme"};
	char* str2 = new char[11] {"Settings"};
	char* str3 = new char[11] {"About"};
	char* str4 = new char[11] {"Exit"};
	menu = new char* [5] {str1, str2, str3, str4, str4};
	battlleship1();

	cout << endl;
	cout << endl;

	for (int i = 0; i < 4; i++)
	{

		if (i == secim) {

			cout << "\t\t\t" << ab << menu[i] << endl;
		}
		else {

			cout << "\t\t\t" << white << menu[i] << endl;
		}
	}
}


void fonttype() {
	int secim = 0;

	while (true) {


		cout << red << R"(		 =================================YOU SELECTED=================================)" << white << endl;
		cout << endl;
		battlleship1();

		int num2 = _getch();

		if (num2 == 224) {

			num2 = _getch();

			switch (num2) {

			case 77:
				if (secim == 0 || secim == 1 || secim == 2) {
					secim++;
				}
				else if (secim == 3) {
					secim = 0;

				}
				break;

			case 75:
				if (secim == 3 || secim == 1 || secim == 2) {
					secim--;
				}
				else if (secim == 0) {
					secim = 3;
				}
				break;


			}



			for (size_t i = 0; i < 4; i++)
			{
				if (i == secim) {
					c = secim;
					battlleship1();
					cout << endl;
					cout << endl; cout << endl;
					cout << endl;

					cout << green << "< your choice > " << i << endl;
				}
			}

		}


		if (num2 == enter) {
			c = secim;
			return;
		}

		Sleep(300);
		system("cls");

		//cout << red << "YOU seleceted -> " << purple << char(secim2) << endl;


	}



}


void settings(int secim) {
	char** settings = new char* [6] {};
	char* Logos = new char[20] {"Font Type "};
	char* shipsign = new char[20] {"Sign of ships"};
	char* Shipcount = new char[20] {"Downed ship sign "};
	char* Pointersign = new char[20] {"Pointersign "};
	char* Hitsign = new char[20] {"Hitsign"};
	char* Missign = new char[20] {"Miss sign"};

	settings = new char* [120] { Logos, shipsign, Shipcount, Pointersign, Hitsign, Missign};


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	for (int i = 0; i < 6; i++)
	{

		if (i == secim) {

			cout << "\t" << purple << "=>" << ab << settings[i] << purple << "<=" << endl;
		}
		else {

			cout << "\t" << white << settings[i] << endl;
		}
	}

}


#pragma region About    

void about()
{
	system("cls");
	const char* aboutTitle = " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ About Battleship Game ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
	const char* aboutText = R"(
Welcome to the Battleship game, a classic naval strategy game where your tactical skills are put to the test. 
Your mission is to sink your opponent's fleet before they sink yours. Here's what the signs mean in the game:
And there are cordinanats for locate ship =>  r - right ; l - left ; d - down ; u - up )";
	const char* str0 = " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Signs ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
	const char* pointerToHit = " Sign: Pointer to Hit - Marks a coordinate to hit an enemy ship.";
	const char* shipHit = " Sign: Ship Hit - Indicates a part of an enemy ship that has been hit.";
	const char* shipDowned = " Sign: Ship Downed - Shows a completely sunken enemy ship.";
	const char* missedHits = " Sign: Missed Hits - Marks coordinates where your shots missed.";
	const char* yourShip = " Sign: Your Ship - Represents the location of your own fleet.";
	const char* fonts = "Dear gamer if you  want change the <FONT> of Ships enter it and use keyboard\"s right and left knocks ";
	const char* instructions = "Use your strategic wit to eliminate your opponent's fleet \nwhile protecting your own. Fire your shots wisely, and may the best admiral win!";
	const char* sizeNote = " Battleship - By E.Mirtalib ";


	for (int i = 0; aboutTitle[i] != '\0'; i++)
	{
		cout << aboutTitle[i];
		if (_kbhit())
		{
			system("cls");
			cout << aboutTitle << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();

	for (int i = 0; aboutText[i] != '\0'; i++)
	{
		cout << aboutText[i];
		if (_kbhit())
		{
			system("cls");
			cout<<green << aboutTitle<<white << endl << endl;
			cout<<purple << aboutText << white << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << endl;

	for (int i = 0; str0[i] != '\0'; i++)
	{
		cout << str0[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << "\'" << pointer << '\'';

	for (int i = 0; pointerToHit[i] != '\0'; i++)
	{
		cout << pointerToHit[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << "\'" << hit_sign << '\'';

	for (int i = 0; shipHit[i] != '\0'; i++)
	{
		cout << shipHit[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << "\'" << downed_sign << '\'';

	for (int i = 0; shipDowned[i] != '\0'; i++)
	{
		cout << shipDowned[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << "\'" << miss_sign << '\'';

	for (int i = 0; missedHits[i] != '\0'; i++)
	{
		cout << missedHits[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			cout << endl << "\'" << miss_sign << '\'' << missedHits << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << "\'" << ship_sign << '\'';

	for (int i = 0; yourShip[i] != '\0'; i++)
	{
		cout << yourShip[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			cout << endl << "\'" << miss_sign << '\'' << missedHits << endl;
			cout << endl << "\'" << ship_sign << '\'' << yourShip << endl;
			break;
		}
		Sleep(40);
	}

	cin.ignore();
	cout << "\'" << "FONT" << "\'";
	for (size_t i = 0; fonts[i] != '\0'; i++)
	{
		cout << fonts[i];
		if (_kbhit()) {
			system("CLS");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			cout << endl << "\'" << miss_sign << '\'' << missedHits << endl;
			cout << endl << "\'" << ship_sign << '\'' << yourShip << endl;
			cout << endl << "\'" << "FONT " << '\'' << fonts << endl;

			break;

		}
		Sleep(40);
	}

	cin.ignore();

	for (int i = 0; instructions[i] != '\0'; i++)
	{
		cout << instructions[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			cout << endl << "\'" << miss_sign << '\'' << missedHits << endl;
			cout << endl << "\'" << ship_sign << '\'' << yourShip << endl;
			cout << endl << "\'" << "FONT " << '\'' << fonts << endl;
			cout << endl << instructions << endl;
			break;
		}
		Sleep(40);
	}
	cin.ignore();
	cout << " \n\t\t\t\t\t\t" << char(169);
	for (int i = 0; sizeNote[i] != '\0'; i++)
	{
		cout << sizeNote[i];
		if (_kbhit())
		{
			system("cls");
			cout << green << aboutTitle << white << endl << endl;
			cout << purple << aboutText << white << endl;
			cout << endl << str0 << endl;
			cout << endl << "\'" << pointer << '\'' << pointerToHit << endl;
			cout << endl << "\'" << hit_sign << '\'' << shipHit << endl;
			cout << endl << "\'" << downed_sign << '\'' << shipDowned << endl;
			cout << endl << "\'" << miss_sign << '\'' << missedHits << endl;
			cout << endl << "\'" << ship_sign << '\'' << yourShip << endl;
			cout << endl << "\'" << "FONT " << '\'' << fonts << endl;

			cout << endl << instructions << endl; 
			cout<<  BLUE<< endl << " \n\t\t\t\t\t\t "  << char(169) << purple << sizeNote << endl; 
			break;
		}
		Sleep(40);
	}
	cout << red << endl << "Press arrow button to exit' " << white << endl;
	if (_kbhit && num == 13) return;
	return;

}

#pragma endregion

char char1(char& symbol) {
	int secim2 = 33;
	while (true) {
		int num2 = _getch();

		if (num2 == 224) {

			num2 = _getch();

			switch (num2) {

			case 77:
				if (secim2 != 255) {
					secim2++;
				}
				else if (secim2 == 255) {
					secim2 = 0;

				}
				break;

			case 75:
				if (secim2 != 0) {
					secim2--;
				}
				else if (secim2 == 0) {
					secim2 = 255;
				}
				break;


			}



			for (size_t i = 30; i < 256; i++)
			{
				if (i == secim2)
					cout << green << "< your choice > " << char(i) << endl;
			}

		}


		if (num2 == enter) {
			symbol = (char)secim2;
			return secim2;
		}
		Sleep(200);
		system("cls");

		cout << red << "YOU seleceted -> " << purple << char(secim2) << endl;


	}

}

#pragma region  settigs1
void settings1(int num2, int secim2) {
	Sleep(600);
	system("cls");

	settings(secim2);

	while (true) {


		int num2 = _getch();
		if (num2 == 224) {

			num2 = _getch();

			switch (num2) {

			case 80:
				if (secim2 == 0 || secim2 == 1 || secim2 == 2 || secim2 == 3 || secim2 == 4 || secim2 == 5) {
					secim2++;
				}
				else if (secim2 == 6) {
					secim2 = 0;

				}
				break;

			case 72:
				if (secim2 == 1 || secim2 == 2 || secim2 == 3 || secim2 == 4 || secim2 == 5 || secim2 == 6) {
					secim2--;
				}
				else if (secim2 == 0) {
					secim2 = 6;
				}
				break;


			}			system("cls");

			cout << purple << " Press ESC and any key for return main menu" << white << endl;
			battlleship1();


			settings(secim2);




		}

		if (num2 == enter && secim2 == 0) {
			system("cls");
			
			fonttype();
			return;

		}

		else if (num2 == enter && secim2 == 1) {
			system("cls");

			char1(ship_sign);

			return;
		}
		else if (num2 == enter && secim2 == 2) {
			system("cls");

			char1(downed_sign);
			return;
		}
		else if (num2 == enter && secim2 == 3) {
			system("cls");

			char1(pointer);
			return;
		}
		else if (num2 == enter && secim2 == 4) {
			system("cls");

			char1(hit_sign);
			return;
		}
		else if (num2 == enter && secim2 == 5) {
			system("cls");

			char1(miss_sign);
			return;
		}
		else if (num2 == 27)
			return;

	}

}
#pragma endregion



void enter1(int num, int secim) {
	if (num == 13) {
		//settingse daxil olr

		if (secim == 1) settings1(num, secim);

		else if (secim == 0) {
			Sleep(100);

			system("CLS");
			
			shipst(); 
			ManualGame();

		}

		else if (secim == 2) 
			about();
	}

}

#pragma endregion
