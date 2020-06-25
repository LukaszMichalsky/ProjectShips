#pragma once
#include "AI.h"

AI::AI(Board*board)
{
	int f=1;
	cout << "Ustwaiono statki o rozmiarze: ";
	for(int i=4;i>1;i--)//size
	{ 
		for(int j=0;j<f;j++)//how
		{ 
			
			Ships warship = Ships(i);
			while (board->isColision(&warship))
			{
				warship.set_negativevertical();

				if (board->isColision(&warship))
					warship = Ships(i);
			}
			board->setShip(&warship);
			cout << i <<" ";
		}
		f++;
	}//set 1 4-length, 2 3-length ships

	int h = 0;
	while (h < 3)
	{
		for (int x = 11; x > 1; x-=2)
		{
			for (int y = 1; y < 11; y+=2)
			{
				Ships warship = Ships(0, x, y, 1);
				if (!board->isColision(&warship))
				{
					board->setShip(&warship);
					h++;
					cout << "1 ";
					break;
				}
			}
		}
	}
	cout << endl;
	//system("cls");
}

bool AI::is_place(Board*board,int x,int y)
{
	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++)
			if (board->boardtab[y + i][x + j] == 'O')
				return false;
	return true;
}
