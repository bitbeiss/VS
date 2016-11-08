#include "AntColonyOptimization.h"
#include <string>
#include <iostream>

//Erzeugt ein Area-Element mit NULL-Pointer in alle Richtungen
//Die übergebenen Werte werden als Position in Zeile und Spalte eingetragen
Area::Area(int Zeile, int Spalte)
{
	Area::Nord = NULL;
	Area::Sued = NULL;
	Area::West = NULL;
	Area::Ost = NULL;

	Area::Zeile = Zeile;
	Area::Spalte = Spalte;

}


Area::~Area()
{
}


void Area::setRichtung(Area* ein, std::string Richtung){
	if (Richtung == "Nord") {
		Nord = ein;
	}
	else if (Richtung == "Sued") {
		Sued = ein;
	}
	else if (Richtung == "Ost") {
		Ost = ein;
	}
	else if (Richtung == "West") {
		West = ein;
	}
}

//Übergeben wird die gewünschte Richtung ("Nord, Sued, Ost, West")
//Zurückgegeben wird der Pointer auf die angeforderte Richtung
Area* Area::getRichtung(std::string ein){

	if(ein=="Nord"){
		return Nord;
	}
	else if(ein=="Sued"){
		return Sued;
	}
	else if(ein=="Ost"){
		return Ost;
	}
	else if(ein=="West"){
		return West;
	}
	else return 0;
}

