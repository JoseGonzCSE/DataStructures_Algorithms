#ifndef CLIENTS	
#define CLIENTS

#include "HeapInterface.h"
#include <iostream>
using namespace std;

class Client {

	private:
		int urgency;
		string patient;

	public:
		Client() {
			Nodes = 0;
			patient = "";
			urgency = 0;
		};

		Client(int Preurgency, string Prepatient) {
			urgency = Preurgency;
			patient = Prepatient;
		};

		bool add(string data);

		bool remove();

		bool isEmpty() {
			return Nodes == 0;
		};

		string peekTop() {
			return items[0];
		};

		void heapRebuild(int root, int ItemCount);

		string getClient() {
			return patient;
		};


		bool operator>(const Client&);

		bool operator<(const Client&);
};
#endif // !Clients

