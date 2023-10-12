// This is assembly lab 6 assignment in c++, need to convert to assembly poggers!

#include<iostream>
using namespace std;

int add4(int one, int two, int three, int four) {
	
	// put sum in regester $v0
	int final;
	return final = ((one + two) + (three + four));
}






int main() {

	int one, two, three, four;

	one = 1;
	two = 2;
	three = 3;
	four = 4;

	//put return adress into $s1
   int FINAL=add4(one, two, three, four);
   cout << FINAL;
	return 0;
}