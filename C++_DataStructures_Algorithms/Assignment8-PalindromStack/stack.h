#pragma once
#ifndef STACK
#define STACK


class Stack {
	private:
		char stack[100];
	public:
		int max;
		int count;
		int lead;

		Stack() {
			lead = -1;
		}
		Stack(const int num) {
			lead = -1;
			count = 0;
			max = num;
		}
		bool push(char input);
		bool isEmpty() {
			return count == 0;
		}
		bool pop();
		char peek() {
			return stack[lead];
		}
};


#endif // !Stack