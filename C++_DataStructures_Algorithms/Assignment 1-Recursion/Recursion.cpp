// Jose Gonzalez 1/31/2021
// Assignment 1 - Recursion


#include <iostream>
using namespace std;

// First part of the assignment, reverses a positive int:

void reverse(int n) {

	if (n < 10 && n>=0)
		cout << n;
	else if (n < 0)
		cout << "Please enter a positive integer";
	else {
		cout << n % 10;
		reverse(n / 10);
	}

}

//Second part, Rewrites writeBackward and writeBackward2(From textbook)

//Begins with the final char in a string.
void writeBackward(string s) {
	int length = s.size();
	cout << "Enter writeBackward with string : " << s << endl;
	
	if (length == 0)
		return;
	else {
		cout << "About to write last character of string: " << s << endl;
		cout << s[length - 1];
		writeBackward(s.substr(0, length - 1));
	}
	cout << "Leave writeBackward with string: " << s << endl;
}
//Begins with the first char in string.
void writeBackward2(string s) {
	int length = s.size();
	cout << "Enter writeBackward2 with string: " << s << endl;
	
	if (length == 0)
		return;
	else {
		writeBackward2(s.substr(1, length - 1));
		cout << "About to write first character of string: " << s << endl;
		cout << s[0];
	}
	cout << "Leave writeBackwar2 with string: " << s << endl;
}

//Part 3, "Returns the sum of ints from start through end inclusively"

int recursiveSum(int start, int end) {
	int final;
	if (start > end)
		return 0;
	else {
		final= start + recursiveSum(start + 1, end);
		return final;
	}
}



int main() {
	int part1,part3_start,part3_end;
	string part2;

	//Question one
	cout << "Part one: " << endl;
	cout <<"\n Please enter a Positive Int so that we may reverse it. ";
	cin >> part1;
	cout << "The reverse of " << part1 << " is: ";
	reverse(part1);

	//Question two
	cout << "\n\n Part two: " << endl;
	cout << "\n Please input a word, we will reverse it first by using the final charcter then the first. ";
	cin >> part2;
	writeBackward(part2);
	cout << "\n Next we will use the first character ";
	writeBackward2(part2);

	//Question Three
	cout << "\n\nPart three:  " << endl;
	cout << "\n We will now return the sum of a range from start to end" << endl;
	cout << "Please enter the start integer. ";
	cin >> part3_start;
	cout << "\nPlease enter the ending integer. ";
	cin >> part3_end;
	cout << "\n The sum is: " << recursiveSum(part3_start, part3_end);
	
	return 0;
}


/*
Supply Output:

[jgonz337@hills ~]$ ./a.out
Part one:

 Please enter a Positive Int so that we may reverse it. 2015
The reverse of 2015 is: 5102

 Part two:

 Please input a word, we will reverse it first by using the final charcter then the first. Dictionary
Enter writeBackward with string : Dictionary
About to write last character of string: Dictionary
yEnter writeBackward with string : Dictionar
About to write last character of string: Dictionar
rEnter writeBackward with string : Dictiona
About to write last character of string: Dictiona
aEnter writeBackward with string : Diction
About to write last character of string: Diction
nEnter writeBackward with string : Dictio
About to write last character of string: Dictio
oEnter writeBackward with string : Dicti
About to write last character of string: Dicti
iEnter writeBackward with string : Dict
About to write last character of string: Dict
tEnter writeBackward with string : Dic
About to write last character of string: Dic
cEnter writeBackward with string : Di
About to write last character of string: Di
iEnter writeBackward with string : D
About to write last character of string: D
DEnter writeBackward with string :
Leave writeBackward with string: D
Leave writeBackward with string: Di
Leave writeBackward with string: Dic
Leave writeBackward with string: Dict
Leave writeBackward with string: Dicti
Leave writeBackward with string: Dictio
Leave writeBackward with string: Diction
Leave writeBackward with string: Dictiona
Leave writeBackward with string: Dictionar
Leave writeBackward with string: Dictionary

 Next we will use the first character Enter writeBackward2 with string: Dictionary
Enter writeBackward2 with string: ictionary
Enter writeBackward2 with string: ctionary
Enter writeBackward2 with string: tionary
Enter writeBackward2 with string: ionary
Enter writeBackward2 with string: onary
Enter writeBackward2 with string: nary
Enter writeBackward2 with string: ary
Enter writeBackward2 with string: ry
Enter writeBackward2 with string: y
Enter writeBackward2 with string:
About to write first character of string: y
yLeave writeBackwar2 with string: y
About to write first character of string: ry
rLeave writeBackwar2 with string: ry
About to write first character of string: ary
aLeave writeBackwar2 with string: ary
About to write first character of string: nary
nLeave writeBackwar2 with string: nary
About to write first character of string: onary
oLeave writeBackwar2 with string: onary
About to write first character of string: ionary
iLeave writeBackwar2 with string: ionary
About to write first character of string: tionary
tLeave writeBackwar2 with string: tionary
About to write first character of string: ctionary
cLeave writeBackwar2 with string: ctionary
About to write first character of string: ictionary
iLeave writeBackwar2 with string: ictionary
About to write first character of string: Dictionary
DLeave writeBackwar2 with string: Dictionary


Part three:

 We will now return the sum of a range from start to end
Please enter the start integer. 3

Please enter the ending integer. 6

 The sum is: 18[jgonz337@hills ~]$

*/
