//Assignment 8- Palindrom Jose Gonzalez 3/22/2021

#include<iostream>
#include "stack.h"
#include "queue.h"

using namespace std;
//test if the string is palindrom
bool isPalindrom(string someString) {

	int length = someString.size();
	Queue queue(length);
	Stack stack(length);

	char currentChar;

	for (int i = 0; i < length; i++) {
		currentChar = someString[i];
		queue.enqueue(currentChar);
		stack.push(currentChar);
	}
	bool Equal = true;
	while (!queue.isEmpty() && Equal == true) {
		char queueFront = queue.peekFront();
		char stackTop = stack.peek();
		if (queueFront == stackTop) {
			queue.dequeue();
			stack.pop();
		}
		else {
			Equal = false;
		}
	}
	return Equal;
}

// just a quick easy test function
void test1(string input) {
	if (isPalindrom(input)) {
		cout << "This is a palindrom\n";
	}
	else {
		cout << "This is NOT a Palindrom\n";
	}
}

int main() {
	
	string palindrom = "mom";
	string notPalindrom = "hello";
	string test = "solos";
	string test2 = "level";
	string test3 = "keyboard";

	cout << "We are going to test Palindroms\n";
	cout << "The word is mom\n";
	test1(palindrom);
	cout << "\nThe word is hello\n";
	test1(notPalindrom);
	cout << "\nThe word is solos\n";
	test1(test);
	cout << "\nThe word is level\n";
	test1(test2);
	cout << "\nThe word is keyboard\n";
	test1(test3);

	

	
	return 0;
}
/*

We are going to test Palindroms
The word is mom
This is a palindrom

The word is hello
This is NOT a Palindrom

The word is solos
This is a palindrom

The word is level
This is a palindrom

The word is keyboard
This is NOT a Palindrom




*/