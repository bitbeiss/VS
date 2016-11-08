#pragma once
#include "AntColonyOptimization.h"
#include <string>
#include <iostream>

class Area
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

};

