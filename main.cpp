#pragma once
#include <iostream>
#include <conio.h>
#include "AI.cpp"
#include "Ships.cpp"
#include "Board.cpp"

using namespace std;

int enterX()
{
    int x;
    do
    {
        cout << "Enter X cordinate(0-9): ";
        cin >> x;
    } while (x < 0 && x > 9);
    return ++x;
}

int enterY()
{
    int y;
    do
    {
        cout << "Enter Y cordinate(0-9): ";
        cin >> y;
    } while (y < 0 && y > 9);
    return ++y;
}

//O - ship,X - hit, M - miss
int main()
{
    //creating boards begin the game for player and AI
    //Own - plansza gracza z jego statkami, tutaj strzela bot,enemy plansza ai tutaj strzela gracz,ai rozmieszczenie statkow bota
    Board PlayerBoardOwn = Board(), PlayerBoardEnemy = Board(), AIBoard = Board();
    cout << "Game is loading: " << endl;
    AI SI = AI(&AIBoard);
    AI Player = AI(&PlayerBoardOwn);

    int AISscore = 0, PlayerScore = 0;

    while (AISscore != 10 || PlayerScore != 10)
    {

        cout << "-=YOUR SCORE: "<<PlayerScore<<"=-  -=OPPONENT SCORE: "<<AISscore<< "=-"<<endl;
        cout << "==YOUR BOARD==" << endl;
        PlayerBoardOwn.Drawboard();
        cout << "==SI BOARD==" << endl;
        PlayerBoardEnemy.Drawboard();
        int x =enterX();
        int y=enterY();
        if (AIBoard.boardtab[y][x]=='O')//if hit 
        {
            PlayerScore++;
            PlayerBoardEnemy.boardtab[y][x] = 'X';
            if (SI.cheat(x, y, &PlayerBoardEnemy))
                cout << "Enemy ship on fire!" << endl;
            else
                cout << "Enemy ship destroy!" << endl;
        }
        else
        {
            PlayerBoardEnemy.boardtab[y][x] = 'M';
        }
        
        SI.shotingsystem(&PlayerBoardOwn,AISscore);

        

        system("cls");
    }
    

    


    return 0;

}