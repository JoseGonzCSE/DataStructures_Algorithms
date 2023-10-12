#pragma once
#ifndef PERSON
#define PERSON
#include <iostream>
using namespace std;

class Person {
	private:
		string name;
		string birthday;
		string month;
	public:
		Person();
		Person(string Name, string Birthday);

		string getBirthday() {
			return birthday;
		}

		string getMonth() {
			return month;
		}
		
		string getName() {
			return name;
		}


		bool operator >(const Person& temp);
		bool operator <(const Person& temp);
		bool operator ==(const Person& temp);
		bool operator !=(const Person& temp);

};
#endif