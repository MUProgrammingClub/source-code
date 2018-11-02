#include "pch.h"
#include "GeneralStore.h"

using namespace std;


GeneralStore::GeneralStore() {}

void GeneralStore::initializeShop()
{
	shopInventory.push_back(Item("Freeze Dried Beef", 4.00));
	shopInventory.push_back(Item("Freeze Dried Pot Pie", 5.00));
	shopInventory.push_back(Item("Freeze Dried Soup", 4.00));
	shopInventory.push_back(Item("Freeze Dried Ice Cream", 3.00));
	shopInventory.push_back(Item("Holographic Meatloaf", 10.00));
	shopInventory.push_back(Item("Rocket Fuel (1 gallon)", 0.00));
	shopInventory.push_back(Item("Scrap Metal", 0.00));
	shopInventory.push_back(Item("Copper Wire", 0.00));
	shopInventory.push_back(Item("Tool Kit", 0.00));
	shopInventory.push_back(Item("Space Blaster", 0.00));
	shopInventory.push_back(Item("Space Blaster Ammo (12 Shots)", 0.00));
	shopInventory.push_back(Item("Space Rifle", 0.00));
	shopInventory.push_back(Item("Space Rifle Ammo (24 Shots)", 0.00));
	shopInventory.push_back(Item("Beam Sword", 0.00));
	shopInventory.push_back(Item("Bandage", 0.00));
	shopInventory.push_back(Item("Antidote", 0.00));
	shopInventory.push_back(Item("Oxygen Tank", 0.00));
	shopInventory.push_back(Item("First Ait Kit", 0.00));
}

int GeneralStore::getLongestStringSize()
{
	int longestSize = 0;

	for (int x = 0; x < shopInventory.size(); x++)
	{
		if (shopInventory[x].getName().size() > longestSize)
			longestSize = shopInventory[x].getName().size();
	}

	return longestSize;
}

void GeneralStore::displayShop()
{
	cout << "Welcome to the General Store! Make sure to buy all the supplies you need before heading out!" << endl << endl;

	cout << "Item\t\tPrice" << endl << endl;

	for (int x = 0; x < shopInventory.size(); x++)
	{
		cout << shopInventory[x].getName() << "\t" << shopInventory[x].getPrice() << endl;
	}
}

GeneralStore::~GeneralStore() {}