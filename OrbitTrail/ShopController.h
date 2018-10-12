#pragma once
#include "GeneralStore.h"
#include "FoodShop.h"
#include "PartsShop.h"
#include "GunShop.h"
#include "FirstAidShop.h"
#include "Crew.h"
class ShopController
{
private:
	static GeneralStore* generalStore;
	static FoodShop* foodShop;
	static PartsShop* partsShop;
	static GunShop* gunShop;
	static FirstAidShop* firstAidShop;
public:
	enum ShopType { GENERAL, FOOD, PARTS, GUN, FIRSTAID, INV };
	ShopController();
	void getShop(ShopType type);
	~ShopController();
};
