#include "stdafx.h"
#include <cstring>
#include "CPJob.h"

// constructor ::sets text-field and process-id
CPJob::CPJob(char *_szText, long _lPid) {
	lPid = _lPid;
	szText = new char[std::strlen(_szText) + 1];
	strcpy_s(szText, std::strlen(_szText) + 1, _szText);
}

// destructor ::deletes allocated mem for text-field
CPJob::~CPJob(void) {
	delete[] szText;
}

// accessor::sets text-field
void CPJob::setText(char * _szText) {
	strcpy_s(this->szText, std::strlen(_szText) + 1, _szText);
}

// accessor::returns text-field
char * CPJob::getText(void) {
	return this->szText;
}

//accessor::returns process id
long CPJob::getPid(void) {
	return this->lPid;
}

void CPJob::set_next(CPJob *next_job){
	this->next = next_job;
}

void CPJob::set_previous(CPJob *prev_job) {
	this->previous = prev_job;
}

CPJob *CPJob::get_next(void) {
	return this->next;
}

CPJob *CPJob::get_previous(void) {
	return this->previous;

}
