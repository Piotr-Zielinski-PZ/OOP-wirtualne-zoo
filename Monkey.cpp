#include "Monkey.h"

Monkey::Monkey(std::string x_name) : Player(x_name)
{

}

void Monkey::make_move()
{
	int temp_rand = random(1,3);
	set_move(temp_rand);
}