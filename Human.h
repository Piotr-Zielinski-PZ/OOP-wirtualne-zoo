#pragma once
#include "Player.h"

class Human : public Player
{
	std::string surname;
public:
	Human(std::string x_surname, std::string x_firstname);
	std::string get_surname() const;
	void make_move() override;
};

