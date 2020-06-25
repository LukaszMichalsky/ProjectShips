#pragma once
#include <iostream>

#include "AI.cpp"
#include "Ships.cpp"
#include "Board.cpp"

using namespace std;

//O - ship,X - hit
int main()
{

    //creating boards begin the game for player and AI
    //Own - plansza gracza z jego statkami, tutaj strzela bot,enemy plansza ai tutaj strzela gracz,ai rozmieszczenie statkow bota
    Board PlayerBoardOwn = Board(), PlayerBoardEnemy = Board(), AIBoard = Board();
    cout << "Game is loading: " << endl;
    AI SI = AI(&AIBoard);
   // AI Player = AI(&PlayerBoardOwn);


    //PlayerBoardOwn.Drawboard();
    //PlayerBoardEnemy.Drawboard();
  

    

    //  system("cls");
    system("PAUSE");
    return 0;

}