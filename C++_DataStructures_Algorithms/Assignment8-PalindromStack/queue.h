#pragma once
#ifndef QUEUE
#define QUEUE

class Queue {
private:
	char que[100];
public:
	int max;
	int count;
	int front;
	int back;
	Queue() {
		front = back = count = 0;
	}
	Queue(const int  num) {
		front = 0;
		max = num;
		back = max - 1;
		count = 0;
	}
	bool isEmpty() {
		return count == 0;
	}
	bool enqueue(char input);
	bool dequeue();
	char peekFront() {
		return que[front];
	}








};


#endif // !QUEUE
