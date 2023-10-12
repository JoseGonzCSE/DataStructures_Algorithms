#include "Heap.h"
#include <iostream>
#include<string>
using namespace std;

//from lecture video/textbook
void Heap::heapRebuild(int root,int total) {
	if (2*root+ 1 < total)
	{
		
		int largestChildIndex = root * 2 + 1;
		int rightChildIndex = root * 2 + 2;

		if (rightChildIndex < total)
			if (patients[rightChildIndex] > patients[largestChildIndex])
				largestChildIndex = rightChildIndex;

		if (patients[root] < patients[largestChildIndex])
		{
			swap(patients[root], patients[largestChildIndex]);
			heapRebuild(largestChildIndex,total);
		}

	}
}
//from lecture video/textbook but using patient rather than string
bool Heap::add(Patient newData) {
	if (total == max)
		return false;
	else {
		patients[total] = newData;
		int newDataIndex = total;
		bool inPlace = false;

		while ((newDataIndex > 0) && !inPlace) {
			int parentIndex = (newDataIndex - 1) / 2;
			if (patients[newDataIndex] < patients[parentIndex]) {
				inPlace = true;
			}
			else {
				swap(patients[newDataIndex], patients[parentIndex]);
				newDataIndex = parentIndex;
			}
		}total++;
	}return true;

}

//from lecture video/textbook
bool Heap::remove() {

	if (!isEmpty()) {
		patients[0] = patients[total - 1];
		total--;
		heapRebuild(0, total);
		return true;
	}
	else
		return false;
}