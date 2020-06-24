#pragma once
#include "Board.h" 
#include "Ships.h"
#include "Some_functions.h"

class AI : public Some_functions
{
public:
	//dodac konstruktor, algorytm losujacy funcje do loskierunku i polozenia
	AI(Board*board);
};