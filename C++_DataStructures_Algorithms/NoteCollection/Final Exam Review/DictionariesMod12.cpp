/*

MODULE 12: Dictionaries and Hashes

	-Collection of data based on a SEARCH KEY


	bool isEmpty()
		return true if dictionary is empty

	int getNumberofNodes()
		returns number of entries in dictionary

	bool add(searchKey newEntry)
		insert newEntry to dictionary according to search key

	bool remove(searchKey)
		removes entry search kew form dictionary

	void clear()
		removes all entries 

	ItemType getItem(searchKey)
		gets entry associated from searchKey

	bool contains(searchKey)
		return true if dictionary contains item

	void traverse(visit)
		traverse dictionary and alls client function visit once per item

---------------------------------------------------------------------------------------------------------------------
12.2 Dictionary Implementations

	-Sorted/Unsorted array
	-Sorted/Unsorted Link
	-Binary Search Tree (log n) base search avg| |adding and removing worst case =On

	entry: SearchKey, Data Item

	Senario A : Brainstorming
		add to dictionary
		no removing 
		print out report when done all
		order doesnt mater

		= LINEAR OR ARRAY

	Scenario B: Thesaurus
		No Adding 
		No Removing
		Retrieve() is done frequently

		=Binary Search / sorted Array

	Scenario C: Catalogue
		inset= Librarians
		Remove= Librarians
		Retrieve= Patrions
		
		Sorted array based Binary Search

-----------------------------------------------------------------------------------------------------------------------------------------
12.3 Hashes:

	Hash function: recieves a search key and instantly tells you where it is in memory/ array
		Constant time  search

		hopefully everything is unque

		fast to compute and spread throught the hash table (array)

		Digit select: pick certain locatoin

		Folding : add all of templates

		Modulo: mod it with the table size

---------------------------------------------------------------------------------------------------------------------------------------------
12.4 Collisions

	same output or same location in hash table (overload)
	 [linear probing 
	Open Adresssing
		go to next spot if location is in use

	Chaining:
		each entry can hold muiltiple inputs using linked entry 



















*/