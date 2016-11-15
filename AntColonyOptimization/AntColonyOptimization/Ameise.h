#pragma once
#include "AntColonyOptimization.h"
#include "Item.h"

class Ameise : public Item
{
public:
	Ameise();
	~Ameise();
	virtual void whoAmI();

private:
	//Status
//	Position momentane_Position;
	bool futter_aufgenommen;
	
	//Soziales
	//Rang Rang;

	//Methoden

/*
	int markieren(Position pos);
	int bewegen(Position pos);
	int futter_aufnehmen(Position pos);
	Position staerkste_Duftspur_finden(Position pos);
*/


};

