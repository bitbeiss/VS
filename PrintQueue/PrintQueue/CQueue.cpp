#include "stdafx.h"
#include "CQueue.h"
#include <iostream>


CQueue::CQueue() {
	first_element = NULL;
	last_element = NULL;
	tmp_element = NULL;
	length = 0;
}

CQueue::~CQueue() {
	while (this->last_element != NULL) {
		this->pop();
	}
}

void CQueue::printJobs() {
	// Fehlerfall: kein Job mehr in der Queue
	if (last_element == NULL) {
		std::cout << "Drucken nicht moeglich: Keine Jobs mehr in der Warteschlange!" << "\n";
		return;
	}
	std::cout << this->last_element->getText() << "\n";
	return;
}

void CQueue::pop() {
	// Fehlerfall: kein Job mehr der in Queue
	if (this->last_element == NULL) {
		// Sichergehen dass die gespeicherte Laenge der Queue gleich 0 ist.
		this->length = 0;
		// Erstes vorhandenes Element ebenfalls NULL setzen.
		this->first_element = NULL;
		// Ausgabe Status
		std::cout << "Pop nicht moeglich: Keine Jobs mehr in der Warteschlange!" << "\n";
		return;
	}

	// Zeiger der Queue auf des letzte Element um eines nach links (vorher) verbiegen,
	// dabei den bisherigen Zeiger temoraer speichern.	
	this->tmp_element = this->last_element;
	this->last_element = this->last_element->get_previous();
	if (this->last_element == NULL) {
		// Fehlerfall: letztes vorhandenes Element.
		// Bisher letztes Element loeschen.
		delete tmp_element;
		// Laenge der Queue anpassen
		this->length--;
		// Erstes vorhandenes Element ebenfalls NULL setzen.
		this->first_element = NULL;
		// Nichts mehr weiter tun...
		return; 
	}

	// Element next Zeiger des nunmehr letzten Elementes auf NULL setzen.
	this->last_element->set_next(NULL);

	// Wenn nich nicht geschehen, bisher letztes Element loeschen.
	delete tmp_element;
}

void CQueue::push(CPJob* pPJob) {
	// Element von links (="vorne") in die Warteschlange (FIFO) einreihen:
	// Erstes Element noch nicht vorhanden
	if (first_element == NULL) {
		// Header Zeiger fuer das 1. und letzte Element zeigen nun auf das bisher einzige, nun eingefuegte Element.
		first_element = pPJob;
		last_element = pPJob;
		// Sicherstellen dass der Vorgaengerzeiger des neuen 1. Elements NULL ist.
		pPJob->set_previous(NULL);
		this->length += 1;
	}

	// Weitere Elemente einfuegen
	else {
		// Den Nachfolger-Zeiger des neuen Elements auf das bisher 1. Element verbiegen.
		pPJob->set_next(this->first_element);
		// Vorgaenger-Zeiger des bisher 1. Elements auf das einzuguegende Job-Element verbiegen.
		this->first_element->set_previous(pPJob);
		// Schliesslich den Verweis im Header auf bisher 1. Element auf das neue 1. Element korrigieren.
		this->first_element = pPJob;
		this->length += 1;
	}
	return;
}

long CQueue::get_length() {
	return(this->length);
}
