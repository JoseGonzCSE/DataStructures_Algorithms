#pragma once
#ifndef PATIENT
#define PATIENT
#include<iostream>
#include<string>
using namespace std;

class Patient {
	private:
		string client;
		int urgency;
	public:
		Patient(){
			client = "";
			urgency = 0;
		}
		// int first to better align itself if the " *number* *name*" format given in the sample output assignment page
		Patient(int priority,string name) {
			client = name;
			urgency = priority;
		}
		//needed for peekTop()
		string getName() {
			return client;
		}
		
		// overloaded > and <
		bool operator>(Patient priority)
		{
			return (urgency > priority.urgency);
		}
		bool operator<(Patient priority)
		{
			return (urgency < priority.urgency);
		}
		
};

#endif // !PATIENT
