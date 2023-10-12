// Jose Gonzalez Assignment 12 Birthdays 5/8/21
#include"Person.h"
#include"Dictionary.h"
#include<iostream>
using namespace std;

int main() {

	Person entry("Andrew", "August 10, 2001");
	Person entry1("Aysha", "October 21,2000");
	Person entry2("Mama", "Janurary 2,3222");
	Person entry3("Joe", "Janurary 4,3222");
	Person entry4("Jose", "March 4,2222");
	Person entry5("Levi", "March 2,4555");

	Dictionary temp;

	temp.addEntry(entry);
	temp.addEntry(entry1);
	temp.addEntry(entry2);
	temp.addEntry(entry3);
	temp.addEntry(entry4);
	temp.addEntry(entry5);

	cout << "Testing display all " << endl;
	temp.displayAll();
	cout << endl;

	cout << "searching dictionary for the birthday of Mama" << endl;
	temp.searchEntry("Mama");
	cout << endl;
	cout << "Searching for someone not on list (David)" << endl;
	temp.searchEntry("David");
	cout << endl;

	cout << "Testing to display all who have birthdays on Janurary" << endl;
	temp.searchMonth("Janurary");
	cout << endl;

	cout << " Removing Jose:" << endl;
	temp.removeEntry(entry4);
	cout << endl;
	temp.displayAll();
	cout << endl;
	cout << " Finally, removing someone thats not there" << endl;
	Person temp2("Alegria", "April 1,1992");
	temp.removeEntry(temp2);
	return 0;
}

/*
Testing display all
Andrew: Remember August 10, 2001
Aysha: Remember October 21,2000
Mama: Remember Janurary 2,3222
Joe: Remember Janurary 4,3222
Jose: Remember March 4,2222
Levi: Remember March 2,4555

searching dictionary for the birthday of Mama
Mama's birthday is on Janurary 2,3222

Searching for someone not on list (David)
The given Name: David is not on the list.

Testing to display all who have birthdays on Janurary
Mama is born on the Month Janurary
Joe is born on the Month Janurary

 Removing Jose:

Andrew: Remember August 10, 2001
Aysha: Remember October 21,2000
Mama: Remember Janurary 2,3222
Joe: Remember Janurary 4,3222
Levi: Remember March 2,4555




*/