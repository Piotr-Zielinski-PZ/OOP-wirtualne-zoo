#include "GameManager.h"

GameManager::GameManager(Player *u1, Player *u2)
{
	p1 = u1;
	p2 = u2;
}

void GameManager::play()
{
	int go;

	do
	{
		std::cout << "Gra teraz " << p1->get_name() << std::endl;
		p1->make_move();

		std::cout << "Gra teraz " << p2->get_name() << std::endl;
		p2->make_move();

		if (p1->get_move() == 1)
		{
			std::cout << "Gracz pierwszy wybral papier." << std::endl;
		}
		else if (p1->get_move() == 2)
		{
			std::cout << "Gracz pierwszy wybral kamien." << std::endl;
		}
		else
		{
			std::cout << "Gracz pierwszy wybral nozyce." << std::endl;
		}

		if (p2->get_move() == 1)
		{
			std::cout << "Gracz drugi wybral papier." << std::endl;
		}
		else if (p2->get_move() == 2)
		{
			std::cout << "Gracz drugi wybral kamien." << std::endl;
		}
		else
		{
			std::cout << "Gracz drugi wybral nozyce." << std::endl;
		}

		if ((p1->get_move() == 1 and p2->get_move() == 1) or (p1->get_move() == 2 and p2->get_move() == 2) or (p1->get_move() == 3 and p2->get_move() == 3))
		{
			std::cout << "--REMIS--" << std::endl;
		}
		else if (p1->get_move() == 1 and p2->get_move() == 2)
		{
			std::cout << "Wygrywa " << p1->get_name() << std::endl;
		}
		else if (p1->get_move() == 1 and p2->get_move() == 3)
		{
			std::cout << "Wygrywa " << p2->get_name() << std::endl;
		}
		else if (p1->get_move() == 2 and p2->get_move() == 1)
		{
			std::cout << "Wygrywa " << p2->get_name() << std::endl;
		}
		else if (p1->get_move() == 2 and p2->get_move() == 3)
		{
			std::cout << "Wygrywa " << p1->get_name() << std::endl;
		}
		else if (p1->get_move() == 3 and p2->get_move() == 1)
		{
			std::cout << "Wygrywa " << p1->get_name() << std::endl;
		}
		else if (p1->get_move() == 3 and p2->get_move() == 2)
		{
			std::cout << "Wygrywa " << p2->get_name() << std::endl;
		}

		std::cout << "Jeszcze raz? [1-tak, 2-nie]" << std::endl;
		std::cin >> go;

	}while (go == 1);
}
