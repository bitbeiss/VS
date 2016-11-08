#include "Simulation.h"
#include <iostream>


// Erzeugt eine dynamische Zeilen*Spalten Matrix aus Area-Elementen
Simulation::Simulation(int Zeilen, int Spalten) : Spielfeld(Zeilen, std::vector<Area*>(Spalten))
{
	if(Zeilen<2 || Spalten <2){
		std::cout << "Die Matrix muss aus mind. 2 Zeilen und 2 Spalten bestehen!" << std::endl;
		EXIT_FAILURE;
	}

	
	/*
	//Erzeugt eine Zeilen*Spalten Matrix (durch verschachtelte Area-Element Vektoren)
	std::vector<std::vector<Area*>> Spielfeld(Zeilen);
	for(int v = 0; v < Zeilen; v++){
		Spielfeld[v].resize(Spalten);
	}
	*/

	//Allokiert Area's in der Matrix
	for (int z = 0; z < Zeilen; z++) {
		for (int s = 0; s < Spalten; s++) {
			Spielfeld[z][s] = new Area(z, s);
		}
	}

	//Setzt die Pointer in der Matrix
	for (int z = 0; z < Zeilen; z++) {
		for (int s = 0; s < Spalten; s++) {
			//Nord
			if(z!=0){
				Spielfeld[z][s]->setRichtung(Spielfeld[z - 1][s], "Nord");
			}
			//Sued
			if(z!=Zeilen-1){
				Spielfeld[z][s]->setRichtung(Spielfeld[z + 1][s], "Sued");
			}
			//Ost
			if(s!=Spalten-1){
				Spielfeld[z][s]->setRichtung(Spielfeld[z][s + 1], "Ost");
			}
			//West
			if(s!=0){
				Spielfeld[z][s]->setRichtung(Spielfeld[z][s - 1], "West!");
			}			
		}	
	}
}


Simulation::~Simulation()
{
}
