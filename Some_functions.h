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
		//pos = char(rand() % 10 + 65);
		//pos += char(rand() % 10 + 49);
		return rand() % 10;
	}
};