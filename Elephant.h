#pragma once
#include "Player.h"


class Elephant : public Player
{

public:
	Elephant(std::string x_name);
	void make_move() override;
};

