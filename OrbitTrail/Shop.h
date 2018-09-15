#pragma once
#include <vector>
#include "Item.h"
// Abstract Base Class - cannot be instantiated!
// Only to be used as a base class for different shops
class Shop
{
protected:
	std::vector<Item> shopInventory;
public:
	Shop();
	virtual void initializeShop() = 0;
	virtual ~Shop() = 0;
};