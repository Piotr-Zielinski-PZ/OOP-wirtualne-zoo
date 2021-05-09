#include "Donkey.h"


Donkey::Donkey(std::string x_name) : Player(x_name)
{

}

void Donkey::make_move()
{
	set_move(2);
}
