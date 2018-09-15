#pragma once
#include <string>
class Person
{
private:
	std::string name;
	unsigned int health;
public:
	Person();
	Person(std::string pName, unsigned int pHealth = 10);
	std::string getName();
	void setName(std::string mName);
	unsigned int getHealth();
	std::string getHealth(std::string);
	void setHealth(unsigned int hp);
	~Person();
};

