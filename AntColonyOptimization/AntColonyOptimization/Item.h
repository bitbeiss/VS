#pragma once
#include "AntColonyOptimization.h"

class Area;

class Item
{
public:
	Item();
	~Item();
	virtual void whoAmI();

private:
	Area* positioin;

};

