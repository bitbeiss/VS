#include "Simulation.h"
#include "Area.h"
#include <vector>
#include <string>
#include <iostream>


// Erzeugt eine Zeilen*Spalten Matrix aus Area-Elementen
Simulation::Simulation(int Zeilen, int Spalten)
{
	if(Zeilen<2 || Spalten <2){
		std::cout << "Die Matrix muss aus mind. 2 Zeilen und 2 Spalten bestehen!" << std::endl;
		EXIT_FAILURE;
	}

	//Erzeugt eine Zeilen*Spalten Matrix (durch verschachtelte Area-Element Vektoren)
	std::vector<std::vector<Area*>> Spielfeld(Zeilen);
	for(int v = 0; v <= Zeilen; v++){
		Spielfeld[v].resize(Spalten);
	}

	//Allokiert Area's in der Matrix
	for (int z = 1; z <= Zeilen; z++) {
		for (int s = 1; s <= Spalten; s++) {
			Spielfeld[z][s] = new Area(z, s);
		}
	}

	//Setzt die Pointer in der Matrix
	for (int z = 1; z <= Zeilen; z++) {
		for (int s = 1; s <= Spalten; s++) {
			//Nord
			if(z!=1){
				*Spielfeld[z][s]->getRichtung('Nord') = *Spielfeld[z - 1][s];
			}
			//Sued
			if(z!=Zeilen){
				*Spielfeld[z][s]->getRichtung('Sued') = *Spielfeld[z + 1][s];
			}
			//Ost
			if(s!=Spalten){
				*Spielfeld[z][s]->getRichtung('Ost') = *Spielfeld[z][s + 1];
			}
			//West
			if(s!=1){
				*Spielfeld[z][s]->getRichtung('West') = *Spielfeld[z][s - 1];
			}			
		}
	if(z=Zeilen){
		std::cout << Zeilen << " mal "  <<Spalten << " Matrix wurde erstellt!"<< std::endl;
	}
	}
}


Simulation::~Simulation()
{
}
