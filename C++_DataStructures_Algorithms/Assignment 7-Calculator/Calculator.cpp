#include"Calculator.h"
#include<iostream>

using namespace std;

bool calculator::push(const char input) {
	bool push = false;
	if (count == max) {
		return push;
	}else {
		lead++;
		stack[lead] = input;
		count++;
		push = true;
		return push;
	}
}

bool calculator::pop() {
	bool pop = false;
	if (isEmpty()) {
		return pop;
	}else {
		lead--;
		pop = true;
		count--;
		return pop;
	}
}