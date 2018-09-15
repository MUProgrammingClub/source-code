#pragma once
#include <string>
class Item
{
private:
	std::string name;
	double price;
	int quantity;
public:
	Item(std::string itemName, double cost, int totalAmount = 0);
	std::string getName();
	void setName(std::string newName);
	void setPrice(double newPrice);
	void increasePrice(double increaseAmt);
	void decreasePrice(double decreaseAmt);
	double getPrice();
	int getQuantity();
	void setQuantity(int newQuantity);
	void increaseQuantity(int amount);
	void decreaseQuantity(int amount);
	~Item();
};

