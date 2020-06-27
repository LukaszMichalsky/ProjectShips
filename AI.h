#pragma once
#include "Board.h" 
#include "Ships.h"
#include "Some_functions.h"

class AI : public Some_functions
{
protected:
	int lastX;//last shoting coords
	int lastY;
	int newX;
	int newY;

public:
	//contructor setting ships on board
	AI(Board*board);

	void shot();

	
};