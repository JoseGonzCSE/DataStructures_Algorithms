/*
Recurssions: Used to solve problems that requre the same amount of steps [Dictionary]

- Calls about itself in its code (Repeats)
-passes a smaller pool of possible answers
-Guareteed Base Case in all situations [No Base case = Infinite loop]

Factorial:
int fact(int n){
	if (n==0) return 1;
	else return n*fact(n-1);
}

Reverse String:

void reverseString(string s){
	int length= s.size();
	if (length>0)
	{
	cout<< s[length-1];
	reverseString(s.substr(0,length-1));

	// last part gives string without last char
	}
}


Array:

void writeArrayBackwards (int anarray[], int firstPos, int lastPos){

	if (firstPos<=lastPos){
	
	cout<<anArray[lastPos]<<endl;
	writeArrayBackwards(anArray,firstPos,lastPos-1);
	}
}
*/

//Fibonacci
#include<iostream>

using namespace std;
// Recurssive

int rabbit(int n) {
	if ((n == 1) || (n == 2))
		return 1;
	else
		return rabbit(n - 1) + rabbit(n - 2);
}

//for loop

int rabbitIterative(int n) {
	int current = 1, next = 1, previous = 1;
	for (int i = 3; i <= n; i++) {
		next = current + previous;

		previous = current;
		current = next;
	}
	return next;
}

int main() {
	int value;
	cout << "Enter a value for the Recursive solution ";
	cin >> value;
	cout << rabbit(value);
	cout << "\nNow we will take the same value but use the Iterative solution" << endl;
	cout << rabbitIterative(value);

	return 0;
}