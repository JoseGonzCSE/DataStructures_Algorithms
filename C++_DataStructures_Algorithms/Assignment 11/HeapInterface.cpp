#include "HeapInterface.h"
#include <iostream>
using namespace std;

HeapInterface::HeapInterface() {
	Nodes = 0;
}

bool HeapInterface::add(string Data) {
	if (Nodes == Max)
		return false;

	patient[Nodes] = Data;
	int newDataIndex = Nodes;
	bool inPlace = false;

	while ((newDataIndex > 0) && !inPlace) {
		int parentIndex = (newDataIndex - 1) / 2;
		if (patient[newDataIndex] < patient[parentIndex]) {
			inPlace = true;
		}
		else {
			swap(patient[newDataIndex], patient[parentIndex]);
			newDataIndex = parentIndex;
		}
	}
	Nodes++;
	return true;
}

bool HeapInterface::remove() {

	if (!isEmpty()) {
		items[0] = items[Nodes - 1];
		Nodes--;
		heapRebuild(0, Nodes);
		return true;
	}
	else
		return false;
}


void HeapInterface::heapRebuild(int root, int ItemCount) {

	if ((2 * root + 1) < ItemCount) {
		int largerChildIndex = 2 * root + 1;
		if ((2 * root + 2) < ItemCount) {
			int rightChildIndex = largerChildIndex + 1;
			if (clients[rightChildIndex] > clients[largerChildIndex]) {
				largerChildIndex = rightChildIndex;
			}
		}

		if (clients[root] < clients[largerChildIndex]) {
			swap(clients[root], clients[largerChildIndex]);
			heapRebuild(largerChildIndex, ItemCount);
		}
	}
}


