#include "queue.h"
#include<iostream>

using namespace std;

bool Queue::enqueue(char input) {
	bool enqueue = false;

	back = (back + 1) % max;
	que[back] = input;
	count++;
	return true;
}

bool Queue::dequeue() {
	bool dequeue = false;
	if (isEmpty()) {
		return dequeue;
	}
	else {
		front = front + 1 % max;
		count--;
		return true;
	}
}