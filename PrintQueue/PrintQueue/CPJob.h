#ifndef CPJOB_HEADER
#define CPJOB_HEADER

//
// class CPJob defines a simple printjob with id and text
//
class CPJob {
private:
	long lPid;
	char *szText;

	CPJob *next;
	CPJob *previous;

public:
	// constructor
	CPJob(char *, long);	// inits text-field and  process-id

	// destructor
	~CPJob(void);

	// accessors
	void setText(char *);	// sets text-field
	char* getText(void);	// returns text-field
	long getPid(void);		// returns process-id
	
	// queue pointer getter & setter methods
	void set_next(CPJob *);			// set next element pointer
	void set_previous(CPJob *);		// set previous element pointer
	CPJob *get_next(void);				// get next element pointer
	CPJob *get_previous(void);			// get previous element pointer

};

#endif