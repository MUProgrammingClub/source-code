#include "pch.h"
#include "Ship.h"


Ship::Ship()
{
	health = 100;
}

int Ship::getHealth()
{
	return health;
}

void Ship::setHealth(int hp)
{
	health = hp;
}


Ship::~Ship()
{
}
