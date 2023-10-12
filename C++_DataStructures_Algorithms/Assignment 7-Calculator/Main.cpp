// Jose Gonzalez 3/21/21 Assignment 7 Calculator
/*
Unfortunatly I couldn't get this to work, I had to focus on other mid terms :(
I'll just take the L on this assignment since he drops the lowest one.

*/


//using stack
// Part one, Convert infix to post fix and calculate
#include "Calculator.h"
#include<iostream>

using namespace std;



int main() {

	//using stack
// Part one, Convert infix to post fix and calculate
	const int value = 10;
	calculator stack(value);
	calculator postFix(10);

	string calculate = "1*(5+3)";
	char input;
	for (int i = 0; i < calculate.size(); i++) {
		//operand
		input = calculate[i];
		if (isdigit(input)) {
			postFix.lead++;
			postFix.push(input);
		}
		// Opening '('
		else if (input == '(') {
			stack.lead++;
			stack.push(input);
		}
		// Operators
		// if stack is empty
		else if (input == '+' || input == '-' || input == '*' || input == '/') {
			if (stack.count == 0) {
				stack.lead++;
				stack.push(input);
			}//when stack is not empty Notes: peak stack, place higher precedence
			else {
				if ((stack.peek() == '+' || stack.peek() == '-' || stack.peek() == '*' || stack.peek() == '/') && stack.peek() >= input) {
					postFix.lead++;
					postFix.push(stack.peek());
					stack.pop();
					while ((!(stack.peek() < input) || (stack.peek() != '(') && (stack.peek() == '+' || stack.peek() == '-' || stack.peek() == '*' || stack.peek() == '/'))) {
						postFix.lead++;
						postFix.push(stack.peek());
						stack.pop();
					}
				}
				else {
					stack.lead++;
					stack.push(input);
				}
			}
		}// closing ')'
		else if (input == ')') {
			while (stack.peek() != '(') {
				postFix.lead++;
				postFix.push(stack.peek());
				stack.pop();
			}stack.pop();
		}
		else {
			for (int i = 0; i < stack.lead; i++) {
				postFix.lead++;
				postFix.push(stack.peek());
				stack.pop();
			}
		}
	}

	//Calculating value:
	/*
	for (each character ch in string){
		if (ch is an operand)
			stack.push(ch)
		else {
			operand2=stack.peek()
			stack.pop()
			operand1=stack.peek()
			stack.pop()
			result=operand1 op operand2
			stack.push(result)
	
	
	*/
	int test;
	int result;
	for (int i = 0; i < calculate.size(); i++) {
		if (input == '+' || input == '-' || input == '*' || input == '/') {
			stack.push(input);
		}
		else {
			int operand2 = stack.peek()-'0';
			stack.pop();
			int operand1 = stack.peek()-'0';
			stack.pop();
			if (input == '+') {
				result = (operand1 + operand2);
				stack.push(result);
			}
			else if (input == '-') {
				result = (operand1 - operand2) ;
				stack.push(result);
			}
			else if (input == '*') {
				result = (operand1 * operand2);
				stack.push(result);
			}
			else if (input == '/') {
				result = (operand1 / operand2) ;
				stack.push(result);
			}
			else
				stack.push(input);
		}
	}if (!stack.isEmpty()) {
		test = stack.peek();
		cout << test;
		stack.pop();
	}else
		cout << "something went wrong";
	return (test);

	return 0;
}
