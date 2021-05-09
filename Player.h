#pragma once
#include <string>
#include <iostream>
#include <cstdlib>  // tu jest funkcja rand()
#include <ctime> // tu jest funcja time

class Player
{
	std::string name;
	int move;

public:
	std::string get_name() const;
	Player(std::string x_firstname);
	virtual void make_move();
	void set_move(int cal);
	int get_move();
	int random(int begin, int end);
};

