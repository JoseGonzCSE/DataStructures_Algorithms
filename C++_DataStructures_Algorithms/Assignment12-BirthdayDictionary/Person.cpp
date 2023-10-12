#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
	name = "";
	birthday = "";
	month = "";
}

Person::Person(string Name, string Birthday) {

	name = Name;
	birthday = Birthday;

	int i = birthday.find(' ');
	string temp = Birthday.substr(0, i);
	month = temp;


}


bool Person::operator>(const Person& temp) {
	return (name > temp.name);
}

bool Person::operator<(const Person& temp) {
	return (name < temp.name);
}

bool Person::operator==(const Person& temp) {
	if (name == temp.name && birthday == temp.birthday)
		return true;
}

bool Person::operator!=(const Person& temp) {
	if (name != temp.name && birthday != temp.birthday)
		return true;
}

