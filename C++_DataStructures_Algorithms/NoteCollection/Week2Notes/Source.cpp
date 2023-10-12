/*
Module 2 Notes:

Templates: Write one function and use ALL data types.

	template<class swapType>
	void swapAnything(swapType &x, swapType &y){
		
		swap Type temp=x;
		x=y;
		y=temp;
	}
Main: swapAnything(a, b);

Class Templates:

	template<class ItemType>
	class Box{
		private: 
			ItemType item;
		public:
			void setItem( const ItemType& i)
			{ item =i;}
			ItemType getItem() const
			{return item;}
	};
Main: Box<int> int bOX; Box<string> stringBox;

*/

/*
Exceptions: Indicates something is wrong and we can fix it maybe.
Statement: throw logic_error(something here); [after everything, before return] 

Box<string> findBox(Box<string> boxes[], int size, string target) {
		int i = 0;
		bool found = false;
		while (!found && (i < size)) {
			if (target == boxes[i].getItem())
				found = true;
			else i++
		}
		if(!found)
			throw logic_error("Target not found in any box!")
		return boxes[i];
	}
Main:
	try {
		searBox = findBox(list, 2, "Dodgers");
	}
	catch (logic_error logErr) {
		cout << logErr.what() << endl;
		searchBox.setItem("Nothing");
	}

*/

/*
Object Orianted Programming Review:
  : = Derived
  &= adress
  *= new
  Virtual= can be changed 
  Virtual void printStats() const =0;  = needs to be stated in ALL derived classes [Pure Virtual]


class Base {
public:
	void printName() {       or Virtual void printName()
		cout << "Base\n";
	}
};

class Derived : public Base {
public:
	void printName() {
		cout << "Derived\n";
	}
};

MAIN:
int main() {
	Base b;
	Derived d;

	Base* ptr = &b;
	ptr->printName();
	ptr = &d;
	ptr->printName();

	[Both return B if no Virtual]

	return 0;
}

EXTRA:

AbstractBase Class-> Can't be instantiated, buth other classes can derive from it

Pure virtual Function -> Virtual member function of a base class taht must be overridden 





*/

#include <stdexcept>
#include<iostream>

using namespace std;

//Box Copied frome Slides
template<class ItemType>
class Box {
	private:
		ItemType item;
	public:
		void setItem(const ItemType& i) {
			item = i;
		}
		ItemType getItem() const {
			return item;
		}
};
// Find Box modified for Ints
Box<int> findBox(Box<int> boxes[], int size, int target) {
	int i = 0;
	bool found = false;
	while (!found && (i < size)) {
		if (target == boxes[i].getItem())
			found = true;
		else
			i++;
	}
	if (target < 0)
		throw logic_error("Target number Can not be Negative!\n");
	if (!found)
		throw logic_error("Target was not found in any box!\n");
	return boxes[i];
}

	


int main() {
	
	// Numbers in list are 2 and 4.
	//User searches for 6 and -3.
	Box<int> list[10];
	Box<int> searchBox;
	list[0].setItem(2);
	list[1].setItem(4);
	
	// Number not in array
	try {
		searchBox = findBox(list, 2, 6);
		
	}
	catch (logic_error logErr) {
		cout << logErr.what() << endl;

	}
	//Number is negative
	try {
		searchBox = findBox(list, 2, -3);
	}
	catch (logic_error logErr) {
		cout << logErr.what() << endl;

	}

	return 0;
}

/* SAMPLE OUTPUT:
Target was not found in any box!

Target number Can not be Negative!
*/