/*
ADT Shifts when new info added
Linked list AKA pointer- based list

-uses nodes, it contains data and pointer to next element
- several nodes strung together, one way left to right like a train
-head PTR tells us where the begging node, the rest points to the next

INSERTION:
	at the end: make the last known point to the new addition
	Middle:  previous nodes points to new node, new node points to after node, rename positions


	
Linked List getNodeat, deletion:
	getNodeat: have to start at headPtr and move n-1 times

	Deletion: Delete node and make privous node = after node
	
Doubly linked list:
	Two way linked list, Nextptr, prevPtr, tailPtr

	To reverse order, go one by one and make NextPtr=PrevPtr and PrevPtr=NextPtr
		Swap TailPtr and HeadPr


Linked list vs array based list winners
	Insertion/delete= linked
	Insertion into full list = list
	Random access= array
	Sequential access= array
	Storage efficiency= array


Linked List Recursion:

	Insirt:Base case = replace headPtr

template<class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry) {
	bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1);
	if (ableToInsert) {
		Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);
		headPtr = insertNode(newPostion, newNodePtr, headPtr);
	}
	return ableToInsert;
}

*/
