#pragma once
#ifndef STACK
#define STACK


class Stack {
	public:
		virtual bool push(const char input) = 0;
		virtual bool isEmpty() const = 0;
		virtual bool pop() = 0;
		virtual char peek() const = 0;
};


#endif // !Stack
