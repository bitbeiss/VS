#pragma once
#include "AntColonyOptimization.h"
#include <vector>


class Simulation
{
public:
	Simulation(int Zeilen = 2, int Spalten =2);
	~Simulation();
private:
	std::vector<std::vector<Area*>> Spielfeld;
};

