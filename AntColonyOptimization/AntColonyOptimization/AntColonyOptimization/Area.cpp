#include "Area.h"
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


void Area::setRichtung(Area* ein){

}

//Übergeben wird die gewünschte Richtung ("Nord, Sued, Ost, West")
//Zurückgegeben wird der Pointer auf die angeforderte Richtung
Area* Area::getRichtung(char ein){

	if(ein=='Nord'){
		return Area::Nord;
	}
	else if(ein=='Sued'){
		return Area::Sued;
	}
	else if(ein=='Ost'){
		return Area::Ost;
	}
	else if(ein=='West'){
		return Area::West;
	}
	else return 0;
}