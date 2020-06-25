#pragma once
#include "Board.h" 
#include "Ships.h"
#include "Some_functions.h"

class AI : public Some_functions
{
public:
	//dodac konstruktor, algorytm losujacy funcje do loskierunku i polozenia
	AI(Board*board);

	bool is_place(Board* board, int x, int y);//search place on 1lenght boat if yes return true

};