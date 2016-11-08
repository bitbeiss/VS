#pragma once
#include "AntColonyOptimization.h"
#include <vector>
#include "Area.h"

class Simulation
{
public:
	Simulation(int, int);
	~Simulation();
private:
	std::vector<std::vector<Area*>> Spielfeld;
};

