// PrintQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CPJob.h"
#include "CQueue.h"

// fills queue with CPJob objects
void fillQueue(CQueue *pQueue, int num) {
	CPJob *pPJob;
	char text[50];
	for (int i = 0; i < num; i++) {
		sprintf_s(text, sizeof(text), "text - printjob#:%i", i + 1);
		pPJob = new CPJob(text, i);
		pQueue->push(pPJob);
	}
}

// driver: simple testing
int main(int argc, char* argv[]) {
	CQueue *pQueue;
	pQueue = new CQueue();
	fillQueue(pQueue, 3);
	pQueue->printJobs();
	pQueue->pop();
	pQueue->printJobs();

	// Bitte einkommentieren zum Testen der Schutzmechanismen (kein Job mehr in der Warteschlange)
	/*
	pQueue->pop();
	pQueue->printJobs();
	pQueue->pop();
	pQueue->printJobs();
	pQueue->pop();
	pQueue->printJobs();
	*/

	delete pQueue;
	return 0;
}

