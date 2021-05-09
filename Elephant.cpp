#include "Elephant.h"


Elephant::Elephant(std::string x_name) : Player(x_name)
{

}

void Elephant::make_move()
{
	int temp_rand = random(1, 10);

	if (temp_rand <= 4)
	{
		set_move(1);
	}
	else if (temp_rand >= 5 and temp_rand <= 8)
	{
		set_move(3);
	}
	else
	{
		set_move(2);
	}
}
