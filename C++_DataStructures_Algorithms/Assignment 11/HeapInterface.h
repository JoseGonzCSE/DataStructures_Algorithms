#ifndef HEAP_INTERFACE
#define HEAP_INTERFACE

#include "Clients.h"
#include <iostream>
using namespace std;

class HeapInterface {
	private:
		int Max = 10;
		Client* patient = new string[Max];
		int Nodes;

	public:

		HeapInterface();
			
		int getNodes() {
			return Nodes;
		};

		bool isEmpty() {
			return Nodes == 0;
		};

		bool add(string data);
		
		
		bool remove();

		string peekTop() {
			return clients[0].getClient();
		};

		void heapRebuild(int root, int itemCount);

};
#endif
