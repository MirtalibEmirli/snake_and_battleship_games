//#pragma once
//#pragma once
//#include<iostream>
//#include"sade_funksiyalar.h"
//#include<time.h>
//#include<Windows.h>
//#include<conio.h>
//#include<iomanip>
//#include"StartTheGame.h"
//using namespace std;
//const int MAX_SIZE = 10;
////
////
////bool placeShip(int** game, int shipSize) {
////    int rows = MAX_SIZE;
////    int cols = MAX_SIZE;
////
////    // Generate random coordinates
////    srand(time(0));
////    int row = 1 + rand() % rows;
////    int col = 1 + rand() % cols;
////
////    // Check if ship can be placed
////    if (col + shipSize > cols) {
////        cout << "can not replace " << row << " and " << col << endl;
////        cout << "Cannot place ship in the given gaming ground.\n";
////        return false;
////    }
////
////    // Check if the positions are empty
////    for (int i = 0; i <= shipSize; i++) {
////        if (game[row][col + i] != 0 && game[row + 1][col + i] != 0 && game[row - 1][col + i] != 0 && game[row][col - 1] != 0 && game[row + 1][col - 1] != 0 && game[row - 1][col - 1] != 0) {
////            cout << "can not replace " << row << " and " << col << endl;
////            cout << "Cannot place ship in the given gaming ground.\n";
////            return false;
////        }
////    }
////
////    
////    // Place the ship right
////    
////    for (int i = 0; i < shipSize; i++) {
////        game[row][col + i] = 1;
////    }
////}
////
////
////
////void SetAuto4ShipsFor(int** p) {
////    int row = 1;
////    int col = 1 + rand() % 10;
////    placeShip(p, 4);
////}
//
//void SetAuto3ShipsFor(int** p) {
//    for (size_t i = 0; i < 2; i++)
//    {
//        srand(time(0));
//        int row = 3 + rand() % 6;
//        int col = 1 + rand() % 7;;
//        if (IsEmpty(p, row, col, 'r', 3)) {
//            SetShips(p, row, col, 'r', 3);
//            continue;
//        }
//        --i; continue;
//    }
//}
//
//void SetAuto2ShipsFor(int** p) {
//    for (size_t i = 0; i < 3; i++)
//    {
//        srand(time(0));
//        int row = 8 + rand() % 10;
//        int col = 1 + rand() % 8;
//        if (IsEmpty(p, row, col, 'r', 2)) {
//            SetShips(p, row, col, 'r', 2);
//            continue;
//        }
//        --i; continue;
//    }
//}
//
//void AutoGame() {
//    // Define the size of the gaming ground
//    int** p1 = CreateArray(15);
//    int** p2 = CreateArray(15);
//
//
//    //SetAuto4ShipsFor(p1);
//    SetAuto3ShipsFor(p1);
//    SetAuto2ShipsFor(p1);
//    ShowArea(p1, 10);
//
//    //SetAuto4ShipsFor(p2);
//    SetAuto3ShipsFor(p2);
//    SetAuto2ShipsFor(p2);
//    ShowArea(p2, 10);
//}
//
