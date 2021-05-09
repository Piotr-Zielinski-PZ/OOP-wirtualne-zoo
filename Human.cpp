#include "Human.h"
#include "Player.h"


Human::Human(std::string x_surname, std::string x_firstname) : Player(x_firstname)
{
	surname = x_surname;
}

std::string Human::get_surname() const
{
	return surname;
}

void Human::make_move()
{
	int choice;
	std::cout << "Wybierz ruch: 1 - papier, \n2 - kamien, \n3 - nozyce" << std::endl;
	std::cin >> choice;
	set_move(choice);
}
