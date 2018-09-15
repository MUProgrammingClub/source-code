#include "pch.h"
#include "Item.h"


Item::Item(std::string itemName, double cost, int totalAmount)
{
	name = itemName;
	price = cost;
	quantity = totalAmount;
}

std::string Item::getName()
{
	return name;
}

void Item::setName(std::string newName)
{
	name = newName;
}

void Item::setPrice(double newPrice)
{
	price = newPrice;
}

void Item::increasePrice(double increaseAmt)
{
	price += increaseAmt;
}

void Item::decreasePrice(double decreaseAmt)
{
	price -= decreaseAmt;
}

double Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}

void Item::setQuantity(int newQuantity)
{
	quantity = newQuantity;
}

void Item::increaseQuantity(int amount)
{
	quantity += amount;
}

void Item::decreaseQuantity(int amount)
{
	quantity -= amount;
}


Item::~Item()
{
}
