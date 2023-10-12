#include <iostream>
using namespace std;

class BinaryNode {
public:
	string item;
	BinaryNode* leftChildPtr;
	BinaryNode* rightChildPtr;
};

int shortName(BinaryNode* nodePtr) {
	int temp = 0;
	if (nodePtr == NULL)
		return temp;
	if (nodePtr.length() <= 3)
		temp += 1;
	return temp = temp + shortName(nodePtr->leftChildPtr()) + shortName(nodePtr->rightChildPtr());
}


doubleStack(aStack:stack) {

	aStack: tempstack;

	while (!stack.isEmpty()) {
		int x = stack.peak() * 2;
		tempstack.push(x);
		stack.pop();
	}

	while (!tempstack.isEmpty()) {
		int y = tempstack.peak();
		stack.push(y);
		tempstack.push();
	}

	delete tempstack 
}

int main() {

	





	return 0;
}