#pragma once
#include <iostream>

#include "AI.cpp"
#include "Ships.cpp"
#include "Board.cpp"
//O - ship,X - hit
int main()
{

    //creating boards begin the game for player and AI
    Board PlayerBoardOwn = Board(), PlayerBoardEnemy = Board(), AIBoard = Board();
    Ships bs = Ships(1,2,2,4);
    Ships bs0 = Ships(1,3,2,2);
    Ships bs1 = Ships(0, 5, 9, 1);
    Ships bs2 = Ships(1, 9, 4, 3);
   // AI SI;
    PlayerBoardOwn.setShip(&bs);
    PlayerBoardOwn.setShip(&bs0);
    PlayerBoardOwn.setShip(&bs1);
    PlayerBoardOwn.setShip(&bs2);


    PlayerBoardOwn.Drawboard();
   // PlayerBoardEnemy.Drawboard();
    

    //  system("cls");
    system("PAUSE");
    return 0;
}