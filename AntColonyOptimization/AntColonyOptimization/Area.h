#pragma once
#include "AntColonyOptimization.h"
#include <string>
#include <iostream>
#include <list>
#include "Item.h"

class Area : public Item
{
public:
	Area(int Zeile=-1, int Spalte=-1);
	~Area();
	Area* getRichtung(std::string);
	void setRichtung(Area*, std::string);

private:
	long long Duft_Markierungs_Zaheler;
	Area* Nord;
	Area* Sued;
	Area* Ost;
	Area* West;
	int Zeile;
	int Spalte;

	std::list<Item*> ItemList;

};

