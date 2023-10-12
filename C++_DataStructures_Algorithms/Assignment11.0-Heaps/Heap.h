#ifndef HEAP
#define HEAP
#include "Patient.h"
#include<string>
class Heap
{
private:
	Patient* patients;
	int total;//size of the heap
	int max;//max number of heap
	void heapRebuild(int root,int total); //needed for remove
public:
	Heap()
	{
		total = 0;
		max = 50;
		patients = new Patient[max];
	}
	Heap(int num)
	{
		total = 0;
		max = num; 
		patients = new Patient[max];
	}
	
	bool isEmpty()
	{
		return total == 0;
	}
	
	bool add(Patient newData);

	Patient peekTop() {
		return patients[0];
	}

	bool remove();
	//deconstructor 
	~Heap()
	{
		delete[] patients;
	}
};

#endif
