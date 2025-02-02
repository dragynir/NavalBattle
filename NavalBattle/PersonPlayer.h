#pragma once
#include"Gamer.h"

class PersonPlayer:public Gamer
{
public:
	PersonPlayer();

	void arrangeShips(GameField& field, ships::Ship* ship_set[]);

	std::pair<u_char, u_char> play(GameField* field, char* data);

	~PersonPlayer();
};

