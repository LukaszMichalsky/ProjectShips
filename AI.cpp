#pragma once
#include "AI.h"

AI::AI(Board*board)
{
	int f=1;
	cout << "Great Armada is launching... "<<endl;
	cout << "Seting ships :";
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
	while (h < 4)
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
	system("cls");
}

