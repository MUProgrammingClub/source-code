#pragma once
#include <vector>
#include <string>
#include "Person.h"
#include "Item.h"
class Crew
{
private:
	unsigned int money;
	std::vector<Person> crewMembers;
	std::vector<Item> inventory;
	bool hasCrewSpace();
public:
	Crew();
	unsigned int getMoney();
	void setMoney(unsigned int value);
	void addAmount(unsigned int value);
	void subtractAmount(unsigned int value);
	void addMember(Person member);
	// remove crew member
	void listCrew();
	void checkInventory();
	~Crew();
};

