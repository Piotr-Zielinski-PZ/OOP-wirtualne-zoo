#include <iostream>
#include "GameManager.h"

int main()
{
	srand(time(0));

	Human Adam("Adamowicz", "Adam");
	Human Ewa("Ewanowicz", "Ewa");
	Donkey Klapouchy("Klapouchy");
	Monkey Kong("Kong");
	Elephant Dominik("Dominik");

	GameManager mgr (&Adam, &Ewa);
	mgr.play();
}
