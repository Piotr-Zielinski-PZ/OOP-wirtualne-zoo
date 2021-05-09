#include "Player.h"

Player::Player(std::string x_firstname)
{
	name = x_firstname;
}

std::string Player::get_name() const
{
	return name;
}

void Player::make_move()
{

}

void Player::set_move(int cal)
{
	move = cal;
}

int Player::get_move()
{
	return move;
}

int Player::random(int begin, int end)
{
	return begin + rand() % (end - begin + 1);
}