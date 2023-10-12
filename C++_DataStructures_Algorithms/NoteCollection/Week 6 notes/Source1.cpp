/*

Week 6 notes: Chapter 12

Sorted Lists:
	
	sorted list are sorted at all times
	- name, date, age, ethnicity, color etc.

	-set entry and insert need to be updated 

	sorted list ADT 

	is emtpy():bool
	getLength():int
	insertSorted(newEntry: ItemType):void

	removeSorted(entry:ItemType):Bool
		removes first or only occurence from list
		true if located and remove, false if not in list

	remove(position:int):bool
	getEntry(position:int): itemType

	getPositon(entyry:ItemType):Int
		return positon of item, if not there return position of would be but negative

	clea():void

	------------------------------------------------------------------------------------------

	Sort List Implemetation:


	Containment- "has  a"

	sorted list has a list inside 

	template<class ItemType>
	class SortedListHasA :public  SortedListInterface<ItemType>
	{
	private:
		ListInterface<ItemType>* listPtr;
	public:
		SortedListHasA();
		SortedListHasA (const SortedListHasA<ItemType>& sList);
		virtual ~SortedListHasA();
		
		//new
		void insertSorted(const ItemType& newEntry);
		bool removeSorted(const ItemType& anEntry);
		int getPosition(const ItemType& anEntry);

		//same as ListInterface
		bool getLength() const;
		int getLength() const;
		bool remove(int position);
		void clear();
	}

	fabs=absolute value
	template<class ItemType>
	void SortedListHasA<ItemType>::insertSorted(const ItemType&newEntry)
	{
		int newPostion= fabs(getPosition(newEntry));
		listPtr->insert(newPosition,newEntry);
	}

	efficiency= getPosition
	linked=n^2
	array=n

	smart pointers

	= std::unqique_ptr<ListInterface<ItemType>> listPtr;
-----------------------------------------------------------------
Discussion

 +combineLists(listOne, listTwo): void

  for(position 1 to position length of listOne)
    insert sorted listOne to combinedList

  for(position 1 to position length of listTwo)
    insert sorted listTwo to combinedList


















*/



int main() {

	
	return 0;
}