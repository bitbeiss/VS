// AntColonyOptimization.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "AntColonyOptimization.h"
#include <list>

int main(void) {

	Simulation* Welt = new Simulation(4, 4);

	// 15.11.2016 - die 4 versch. Typen als Listenelemente anlegen und die vererbte Funktion
	// whoAmI() aufrufen!
	std::list<Item*>list;
	list.push_back(new Item);
	list.push_back(new Ameise);
	// list.push_back(new Pheromone); Pheromone noch nicht inkludiert!
	list.push_back(new Futter);
	list.push_back(new Ameisenhuegel);



	std::list<Item*>::iterator it;
	for (it = list.begin(); it != list.end(); it++) {
		(*it)->whoAmI();
	}

	return 0;
}

/*
	std::list<Ameise> Ameisen_Registrierung;
	std::list<Area> Area_Registrierung;
*/	


