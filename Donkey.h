#pragma once
#include "Player.h"


class Donkey : public Player
{

public:
	void make_move() override;
	Donkey(std::string x_name);
};

