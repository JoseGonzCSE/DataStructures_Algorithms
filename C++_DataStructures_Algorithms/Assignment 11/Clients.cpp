#include"Clients.h"
#include "HeapInterface.h"
#include <iostream>
using namespace std;

bool Client::add(string Data) {
	if (Nodes == Max) {
		return false;
	}
	urgency = Data[0];
	int index = 0;
	while (!isalpha(Data[index]))
		index++;

	string patient = Data.substr(index);
	items[Nodes] = patient;
	int newDataIndex = Nodes;
	bool InPlace = false;

	while ((newDataIndex) > 0 && !InPlace) {
		int parentIndex = (newDataIndex - 1) / 2;
		if (items[newDataIndex] < items[parentIndex]) {
			InPlace = true;
		}
		else {
			swap(items[newDataIndex], items[parentIndex]);
			newDataIndex = parentIndex;
		}
	}
	Nodes++;
	return true;
}

bool Client::remove() {
	if (!isEmpty()) {
		items[0] = items[Nodes - 1];
		Nodes--;
		heapRebuild(0, nodes);
		return true;
	}
	else
		return false;
}

void Client::heapRebuild(int root, int ItemCount) {
	if ((2 * root + 1) < ItemCount) {
		int largerChildIndex = 2 * root + 1;
		if ((2 * root + 2) < ItemCount) {
			int rightChildIndex = largerChildIndex + 1;
			if (items[rightChildIndex] > items[largerChildIndex]) {
				largerChildIndex = rightChildIndex;
			}
		}
		if (items[root] < items[largerChildIndex]) {
			swap(items[root], items[largerChildIndex]);
			heapRebuild(largerChildIndex, ItemCount);
		}
	}
}

bool Client::operator>(const Client& c)
{
	
	bool result = false;

	int leftClient = urgency;
	int rightClient = c.urgency;

	
	if (leftClient > rightClient)
	{
		result = true;
	}
	else
	{
		return result;
	}
}


bool Client::operator<(const Client& c)
{
	bool result = false;

	int leftClient = urgency;
	int rightClient = c.urgency;

	
	if (leftClient < rightClient)
	{
		result = true;
	}
	else
	{
		return result;
	}
}