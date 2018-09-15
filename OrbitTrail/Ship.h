#pragma once
class Ship
{
private:
	int health;
public:
	Ship();
	int getHealth();
	void setHealth(int hp);
	~Ship();
};