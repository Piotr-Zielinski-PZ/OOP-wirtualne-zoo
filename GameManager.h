#pragma once
#include "Player.h"
#include "Human.h"
#include "Donkey.h"
#include "Monkey.h"
#include "Elephant.h"

class GameManager
{
	Player *p1;
	Player *p2;

public:
	GameManager(Player *u1, Player *u2);
	void play();
};

