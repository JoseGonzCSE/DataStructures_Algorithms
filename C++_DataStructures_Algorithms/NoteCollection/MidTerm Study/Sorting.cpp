/*

4.1 Sorting Algoriths and Efficiency Intro:

	Good algorithim:
		-speed
		-resource usage
		-ease of use
		-bugs
		-structure
		-cost
		-development time/human
	
	Algorithims analysis
		gives us tools to contrasst the effiecciency
		focus:gross difference in algorithm efficiency
		efficiency: execution time and usage space

-------------------------------------------------------------------
4.2 Algorithms efficiency examples

	Execution time:

		1)Node<ItemType>star curPtr=headPtr;     One Assignment: assin cur to head
		2)while (curPtr!= nullPtr)				 n+1 comparisons (while loop)
		3){
		4)	cout<<curPtr->getItem()<<endl;       n outputs: in loop
		5)	curPtr= curPtr->getNext();			 n assignments: in loop
		6)}

		a= cost of assignment
		c= cost of comparrison
		o= cost of output
		(n+1)*a + (n+1)*c +n*o
	

	where time =1 second [n*t]
	for(i=1 through n)				n*n*n (for loop does k)
		for(j=1 through n)			n*n seconds ( for loop does k)
			for(k=1 through n)		n*1 = n seconds (for loops)			
				task T

	for (i=1 through n)           n*t*5* (n+1)/2 [Sumation] ( (n*(n+1))/2 )
		for(j=1 through i)		  i*5*t
			for(k=1 through 5)    5*t
				task T
		



		 for (j = 2; j <= n; j = j * 2)
		 = nlog n due to the  j = j * 2 ending 


		 int a = 0, i = N;
while (i > 0) {
	a += i;
	i /= 2;
}
=log n
------------------------------------------------------------------------
4.3 Growth rate, Big O

	GrowthRate:
		
		Algorithm A = n^2/5 seconds
		Algorithm B= 5*n seconds

		n=5   a= 5  b=25
		n=10  a=20  b=50
		n=100 a=2000 b=500
		
		n= small,a=faster
		n=big, b=faster


	Order

		Algorithm A =n^2
		Algorithm B= n
		Algorithm C= f(n)  AKA O(fn) growth rate function

		O(a) = n^2 , O(b)=n, B is better than A
		
	Growth rate orders:

		O(1)= constant
		Fastest                                                 Slowest
		O(1)< O (log n)< O(n) < O(n*log_2 n)< O(n^2) < O(n^3) < O(2^n)

	Determining Order:
		1. Ignore low terms [ n^2 +n = n^2]
		2. Igonore Constants O(3n^2) = n^2
		3. Can combine growthrate functions O(n^2)+O(n) = O(n^2 +n) =n^2
		
	Worst Case:
		Maximum amount of time required to solve a problem
	Avg Case:
		Avg amount of time to solve a problem
----------------------------------------------------------------------------
4.4 Bubble Sort and Selection Sort

	Bubble sort:
		Sweep through the elements of array, swap if out of order
		Two elements at a time, each pass moves something

		Left to Right 
		7 2 3 8 1 
		2 7 3 8 1 
		2 3 7 8 1

		2 3 7 1 8
		2 3 1 7 8
		2 1 3 7 8
		1 2 3 7 8
		
		Efficiency= O(n^2)
		
	Selection Sort:
		Find the lowest element in an aray, swap with position 0
		find second lowed element, swap with position 1 , repeat

		7 8 3 2 1
		1 8 3 2 7 
		1 2 3 8 7 
		1 2 3 7 8
		
		Efficiency= O(n^2)
-------------------------------------------------------------------------
4.5 Insertion Sort

	Take first item and insert it into correct space in the region
	Begin at n=1 not n=0

	29 10 14 37 13
	10 29 14 37 13
	10 14 29 37 13
	10 14 29 37 13
	10 13 14 29 37
		
	Efficiency= O(n^2)	
--------------------------------------------------------------------------
4.6 Merge Sort(divide and conquer)

	Take array in half, sort each half,
	merge each half into temp arrays 
	coppy values from temp array back into origional
	
			8 1 4 3 2

		8 1 4      3 2
		/    \     / \
		81    4    2 3

		1 4 8      2  3  Analyis first digit of each half [1 or 2?]
						Then [4 or 2]? then [4 or 3]?

		1 2 3 4 8
		
		Merge step= O(n) [only one]

		Efficiency= O(n log n)
---------------------------------------------------------------------------
4.7 Quick Sort
	
	o(n^2)=worst
	0(n log n)= best

	doesn't need extra storage 
	has worst worst case compared to merge 
	Partition array into two parts around piviot P

	left<p right>p

	Better to look at this rather than explaining it here

	https://www.youtube.com/watch?v=znSLmoAZiGw&list=PLDZbdaQ3OIMDmZ8_4P9NLCc2bRr8z9sPD&index=8






*/


const int MAX_SIZE = 100;
int bubbleCount = 0;
int mergeCount = 0;










#include<iostream>

using namespace std;

//SWAP FUNCTION
void swapper(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}


// BUBBLE SORT
void sortArray(int array[], int size) {
	bool swapped;
	

	do {
		swapped = false;
		for (int i = 0; i < (size - 1); i++) {
			if (array[i] > array[i + 1]) {
				swapper(array[i], array[i + 1]);
				swapped = true;
			}if (swapped == true)
				bubbleCount += 2;
		}
	} while (swapped);
}


// SELECTION SORT
void SelectionSort(int array[], int size) {
	int lowestValue, lowestPosition;

	for (int i = 0; i < size - 1; i++) {
		lowestValue = array[i];
		lowestPosition = i;

		for (int j = i + 1; j < size; j++) {
			if (array[j] < lowestValue) {
				lowestPosition = j;
				lowestValue = array[j];
			}
		}swapper(array[i], array[lowestPosition]);
	}
}

//INSERTION SORT textbook

// Merge Sort
	// Merge first



template<class ItemType>
void merge(ItemType theArray[], int first, int mid, int last) {
	
	ItemType tempArray[MAX_SIZE];

	int first1 = first;
	int last1 = mid;
	int first2 = mid + 1;
	int last2 = last;

	int index = first1;
	while ((first1 <= last1) && (first2 <= last2)) {
		if (theArray[first1] <= theArray[first2]) {
			tempArray[index] = theArray[first1];
			first1++;
			mergeCount += 3;
		}
		else {
			tempArray[index] = theArray[first2];
			first2++;
			mergeCount += 1;
		}index++;
	}
	while (first1 <= last1) {
		tempArray[index] = theArray[first1];
		first1++;
		index++;
		mergeCount += 1;
	}
	while (first2 <= last2) {
		tempArray[index] = theArray[first2];
		first2++;
		index++;
		mergeCount += 1;
	}
	for (index = first; index <= last; index++) {
		theArray[index] = tempArray[index];
		mergeCount + 1;
	}
	
}

//actual merge sort

template<class ItemType>
void mergeSort(ItemType theArray[], int first, int last) {
	if (first < last) {
		int mid = first + (last - first) / 2;
		mergeSort(theArray, first, mid);
		mergeSort(theArray, mid + 1, last);
		merge(theArray, first, mid, last);
	}
}


// Quick sort
	//partitioning
/*
template<class ItemType>
int partition(ItemType theArray[], int first, int last) {

	int pivotIndex = sortFirstMidddle Last(theArray, first, last);

	std::swap(theArray[pivotIndex], theArray[last - 1]);
	pivotIndex = last - 1;
	ItemType pivot = theArray[pivotIndex];

	int indexFromLeft = first + 1;
	int indexFromRight = last - 2;

	bool done = false; 
	while (!done) {
		while (theArray[indexFromLeft] < pivot)
			indexFromLeft = indexFromLeft + 1;
		while (theArray[indexFromRight] > pivot)
			indexFromRight = indexFromRight - 1;
		if (indexFromLeft < indexFromRight) {
			std::swap(theArray[indexFromLeft], theArray[indexFromRight]);
			indexFromLeft = indexFromLeft + 1;
			indexFromRight = indexFromRight - 1;
		}
		else
		{
			done = true;
		}
	}
	std::swap(theArray[pivotIndex], theArray[indexFromLeft]);
	pivotIndex = indexFromLeft;
	return pivotIndex;
}

//QuickSort
int MIN_SIZE = 1;
template<class ItemType>
void quickSort(ItemType theArray[], int first, int last) {
	if ((last - first + 1) < MIN_SIZE) {
		insertionSort(theArray, first, last);
	}
	else {
		int pivotIndex = partition(theArray, first, last);

		quickSort(theArray, first, pivotIndex - 1);
		quickSort(theArray, pivotIndex + 1, last);
	}
}
*/
template <class ItemType>
void printArray(ItemType array[], ItemType size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}


int main(){
	int const size = 5;
	int array[size] = { 3,2,1,5,4 };
	int array2[8] = { 31,21,80,9,80,56,11,78 };

	cout << "BubbleSort:" << endl;
	printArray(array, size);
	cout << endl;
	sortArray(array, size);
	printArray(array, size); 
	cout << " \nCount Tracker: " << bubbleCount << endl;

	cout << "\nX sort:" << endl;
	printArray(array2, 8);
	cout << endl;
	mergeSort(array2, 0, 8-1);
	printArray(array2, 8); 
	cout << " \nCount Tracker: " << mergeCount << endl;

 
	return 0;
}