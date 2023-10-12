#pragma once
#ifndef DICTIONARY
#define DICTIONARY
#include "Person.h"
#include <iostream>
using namespace std;

const int Max = 30;
class Dictionary {
	private:
		Person array[Max];
		int entries;

	public:
		Dictionary();

		bool addEntry(Person Entry);
		bool removeEntry(Person Entry);
		bool searchEntry(string Name);
		void searchMonth(string Month);
		void displayAll();
		int getEntries() {
			return entries;
		}


		int binarySearch(Person arr[],int left, int right, string temp);

		
};








#endif // !DICTIONARY
