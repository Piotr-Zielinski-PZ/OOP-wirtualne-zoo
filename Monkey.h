#pragma once
#include "Player.h"
class Monkey : public Player
{
public:
	void make_move() override;
	Monkey(std::string x_name);
};

