#pragma once
#include "AntColonyOptimization.h"

class Area
{
public:
	Area(int Zeile=-1, int Spalte=-1);
	~Area();
	Area* getRichtung(char);
	void setRichtung(Area*);

private:
	long long Duft_Markierungs_Zaheler;
	Area* Nord;
	Area* Sued;
	Area* Ost;
	Area* West;
	int Zeile;
	int Spalte;

};

