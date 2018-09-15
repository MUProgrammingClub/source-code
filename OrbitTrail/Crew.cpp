#include "pch.h"
#include "Crew.h"

#include <iostream>
#include <limits>

const int MAX_CREW_SIZE = 5;

bool Crew::hasCrewSpace()
{
	bool hasSpace;
	if (crewMembers.size() <= MAX_CREW_SIZE)
	{
		hasSpace = true;
	}
	else {
		hasSpace = false;
	}
	return hasSpace;
}

Crew::Crew()
{
	money = 1000;
}

unsigned int Crew::getMoney()
{
	return money;
}

void Crew::setMoney(unsigned int value)
{
	unsigned int max_unsigned_int_size = std::numeric_limits<unsigned int>::max();

	if ((money = value) < 0) { // if result is less than zero
		money = 0;
	}
	else if ((money = value) > max_unsigned_int_size) { // if result is beyond data type capacity
		std::cerr << "Unable to set amount that high! Added as much as possible instead!" << std::endl;
	}
	else {
		money = value;
	}
}

void Crew::addAmount(unsigned int value)
{
	unsigned int max_unsigned_int_size = std::numeric_limits<unsigned int>::max();

	if ((money += value) > max_unsigned_int_size) { // if result is beyond data type capacity
		std::cerr << "Unable to set amount that high! Added as much as possible instead!" << std::endl;
	}
	else {
		money += value;
	}
}

void Crew::subtractAmount(unsigned int value)
{
	unsigned int min_unsigned_int_size = std::numeric_limits<unsigned int>::min();

	if ((money -= value) > min_unsigned_int_size) { // if result is beyond data type minimum
		std::cerr << "Unable to set amount that low! Subtracting as much as possible instead!" << std::endl;
	}
	else {
		money -= value;
	}
}

void Crew::addMember(Person member)
{
	if (hasCrewSpace()) {
		crewMembers.push_back(member);
		std::cout << member.getName() << " added!\n" << std::endl;
	}
	else {
		std::cerr << "Unable to add crew member!" << std::endl;
	}
}

void Crew::listCrew()
{
	for (std::vector<Person>::iterator it = crewMembers.begin(); it != crewMembers.end(); ++it) {
		std::cout << "Name: " << it->getName() << "\t";
		std::cout << "Health: " << it->getHealth() << std::endl;
	}
}

void Crew::checkInventory()
{
	for (std::vector<Item>::iterator it = inventory.begin(); it != inventory.end(); ++it) {
		std::cout << "Name: " << it->getName() << " Qty: " << it->getQuantity() << std::endl;
	}
}

Crew::~Crew()
{
}
