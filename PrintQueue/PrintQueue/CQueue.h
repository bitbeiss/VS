#ifndef CQueue_HEADER
#define CQueue_HEADER

#include "CPJob.h"

class CQueue {
public:
	
private:
	CPJob *first_element;
	CPJob *last_element;
	CPJob *tmp_element;
	long length;

public:
	CQueue();
	~CQueue();

	// Den Text eines Jobs ausgeben. (Ohne sonst etwas zu tun.)
	void printJobs();

	//Einen Job rechts (=hinten) aus der Warteschlange loeschen.
	void pop();

	// Einen Job von links (=vorne) in die Warteschlange schieben.
	void push(CPJob *pPJob);

	// Momentane Laenge der Warteschlange abfragen.
	long get_length();
};

#endif

