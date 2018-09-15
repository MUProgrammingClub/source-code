#include "pch.h"
#include "Person.h"


Person::Person()
{
	name = "CrewMember";
	health = 10;
}

Person::Person(std::string pName, unsigned int pHealth)
{
	name = pName;
	health = pHealth;
}

std::string Person::getName()
{
	return name;
}

void Person::setName(std::string mName)
{
	name = mName;
}

unsigned int Person::getHealth()
{
	return health;
}

std::string Person::getHealth(std::string)
{
	return std::to_string(health);
}

void Person::setHealth(unsigned int hp)
{
	health = hp;
}


Person::~Person()
{
}
