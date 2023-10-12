#include "Dictionary.h"
#include <iostream>
using namespace std;


Dictionary::Dictionary() {
	entries = 0;
}

bool Dictionary::addEntry(Person Entry) {

	bool success = false;

	if(entries != Max) {
		array[entries] = Entry;
		entries += 1;
		success = true;
	}
	return success;
}

bool Dictionary::removeEntry(Person Entry) {

	int temp = 0;
	Person tempArray = array[temp];

	while (tempArray != Entry && temp != getEntries() - 1){
		temp++;
		tempArray = array[temp];
	}

	if (array[temp] == Entry){
		for (int i = temp; i < getEntries() - 1; i++){
			array[i] = array[(i + 1)];
		}
		entries--;
		return true;
	}
		else {
		cout << "Person is not in list";
			return false;
		}
	}
	

bool Dictionary::searchEntry(string Name) {

	int temp = binarySearch(array, 0, entries-1 , Name);
	if (temp == -1) {
		cout << "The given Name: " << Name << " is not on the list." << endl;
		return false;
	}
	else {
		cout << Name << "'s birthday is on " << array[temp].getBirthday() << endl;
		return true;
	}
}

void Dictionary::searchMonth(string Month) {
	for (int i = 0; i < entries; i++) {
		if (array[i].getMonth() == Month) {
			cout << array[i].getName() << " is born on the Month " << array[i].getMonth() << "\n";

		}
	}
}

void Dictionary::displayAll() {
	for (int i = 0; i < entries; i++) {
		cout << array[i].getName() << ": Remember " << array[i].getBirthday() << "\n";
	}
}

int Dictionary::binarySearch(Person arr[], int left, int right, string temp) {
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (arr[mid].getName() == temp)
			return mid;

		if (arr[mid].getName() > temp)
			return binarySearch(arr, left, mid-1, temp);

		return binarySearch(arr, mid + 1, right, temp);
	}
	return-1;
	
		
}