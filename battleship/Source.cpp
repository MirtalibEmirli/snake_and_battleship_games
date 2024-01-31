#include"allfunctions.h"
#include"start.h"
using namespace std;

void main() {
#pragma region Menu
	int secim = 0;


	while (true) {
		num = _getch(); 
		if (num == 224) {
			num = _getch();

			switch (direct(num)) {

			case down:
				if (secim == 1 || secim == 2 || secim == 0) {
					secim++;
				}
				else if (secim == 3) {
					secim = 0;

				}
				break;

			case up:
				if (secim == 1 || secim == 2 || secim == 3) {
					secim--;


				}
				else if (secim == 0) {
					secim = 3;
				}
				break;


			}


			system("cls");
			firstmenu(secim);


		}






		if (num == enter && secim == 3) {
			Sleep(500);
			system("cls");
			cout << "Bye";
			Sleep(500);
			cout << ".";
			Sleep(500);
			cout << ".";
			Sleep(500);
			cout << "." << white;
			cout << endl;
			Sleep(1000);

			break;
		}
		else  if (num == enter) {
			enter1(num, secim);
		}
	}
#pragma endregion

}
