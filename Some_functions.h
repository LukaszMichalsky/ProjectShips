#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>


class Some_functions
{
public:
	int randDirection()
	{
		srand(time(NULL));
		return rand() % 2;
	}



	int randPosition()
	{
		srand(time(NULL));
		return rand() % 10;
	}
};