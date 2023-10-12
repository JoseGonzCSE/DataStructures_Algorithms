// Assignment 11 Emergency Room Jose Gonzalez
// 5/2/2021

#include "Heap.h"
#include<iostream>
using namespace std;

//updated main so Patient can work
//other than that, everthing is the same
int main() {

	Heap ER;

	ER.add(Patient(5,"Bob"));
	ER.add(Patient(9, "Mary"));
	ER.add(Patient(1, "Max"));
	cout << ER.peekTop().getName() << " will now see the doctor.\n";
	ER.remove();
	ER.add(Patient(3, "Julio"));
	ER.add(Patient(7, "Stacy"));
	ER.add(Patient(4, "Paul"));
	ER.add(Patient(2, "Reiko"));
	ER.add(Patient(6, "Jennifer"));
	ER.add(Patient(5, "Chang"));
	cout << ER.peekTop().getName() << " will now see the doctor.\n";
	ER.remove();
	cout << ER.peekTop().getName() << " will now see the doctor.\n";
	ER.remove();
	cout << ER.peekTop().getName() << " will now see the doctor.\n";
	ER.remove();

	return 0;
}

/*
OUTPUT SAMPLE:

Mary will now see the doctor.
Stacy will now see the doctor.
Jennifer will now see the doctor.
Chang will now see the doctor.

*/