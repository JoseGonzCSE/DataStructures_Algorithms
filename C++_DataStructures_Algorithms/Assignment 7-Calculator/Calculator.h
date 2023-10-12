#pragma once
#ifndef Calculator
#define Calculator
#include"Stack.h"

class calculator : public Stack {	
	private:
		char stack[100];
	public:
		int max;
		int count;
		int lead;
		

		calculator() {
			lead = -1;
		}
		calculator(const int num) {
			lead = -1;
			count = 0;
			max = num;
		}
		bool push(const char input);
		bool isEmpty() const {
			return count == 0;
		}
		bool pop();
		char peek() const  {
			return stack[lead];
		}
};
#endif // !Calculator


