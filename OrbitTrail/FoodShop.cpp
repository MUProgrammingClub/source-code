#include "pch.h"
#include "FoodShop.h"


FoodShop::FoodShop()
{
}

void FoodShop::initializeShop()
{
	shopInventory.push_back(Item("Freeze Dried Beef", 4.00));
}


FoodShop::~FoodShop()
{
}
