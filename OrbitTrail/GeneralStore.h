#pragma once
#include "Shop.h"
#include <vector>
#include <iostream>
class GeneralStore : public Shop
{
public:
	GeneralStore();
	void initializeShop();
	virtual int getLongestStringSize();
	void displayShop();
	~GeneralStore();
};