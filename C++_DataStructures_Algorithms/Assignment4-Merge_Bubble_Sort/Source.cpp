// Jose Gonzalez Assignment 4-Sort Efficiency
//using MergeSort and Bubble 
#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
const int MAX_SIZE = 150;
int bubbleCount = 0;
int mergeCount = 0;
int countingCount = 0; //nice


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

//Merge sort
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


template<class ItemType>
void mergeSort(ItemType theArray[], int first, int last) {
	if (first < last) {
		int mid = first + (last - first) / 2;
		mergeSort(theArray, first, mid);
		mergeSort(theArray, mid + 1, last);
		merge(theArray, first, mid, last);
	}
}

//Counting Sort
void countingSort(int theArray[], int size) {

	int const tempSize = 101;
	int initialze = 0;
	int arraySize = size;
	int temp[tempSize];

	for (int i = 0; i < tempSize; i++)
		temp[i] = 0;
	for (int i =0 ; i < arraySize; i++) {
		temp[theArray[i]]++;
		countingCount += 1;
	}
	for (int i = 0; i < tempSize; i++) {
		for (int j = temp[i]; j > 0; j--) {
			theArray[initialze] = i;
			countingCount += 1;
			initialze++;
		}
	}
}

template <class ItemType>
void printArray(ItemType array[], ItemType size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void randArray(int array[],int max, int size) {
	for (int i = 0; i < size; i++)
		array[i] = (rand()%(max+1));

}


int main() {
	unsigned seed = time(0);
	srand(seed);

	//Buble Sort L8
	cout << "Buble sort with a length of 8 :" << endl;
	for (int start = 1; start <= 3; start++) {
		bubbleCount = 0;
		cout << "\nBubbleSort:" << endl;
		int bubble8[8];
		randArray(bubble8, 100, 8);
		printArray(bubble8, 8);
		cout << endl;
		sortArray(bubble8, 8);
		printArray(bubble8, 8);
		cout << " \nCount Tracker: " << bubbleCount << endl;
	}

	cout << "-----------------------------------------------------" << endl;
	//Buble Sort L32
	cout << "Bubble sort with length 32: " << endl;

	for (int start = 1; start <= 3; start++) {
		bubbleCount = 0;
		cout << "\nBubbleSort:" << endl;
		int bubble32[32];
		randArray(bubble32, 100, 32);
		printArray(bubble32, 32);
		cout << endl;
		sortArray(bubble32, 32);
		printArray(bubble32, 32);
		cout << " \nCount Tracker: " << bubbleCount << endl;
	}

	cout << "-----------------------------------------------------" << endl;
	//Buble Sort L128
	cout << "Bubble sort with length 128: " << endl;

	for (int start = 1; start <= 3; start++) {
		bubbleCount = 0;
		cout << "\nBubbleSort:" << endl;
		int bubble128[128];
		randArray(bubble128, 100, 128);
		printArray(bubble128, 128);
		cout << endl;
		sortArray(bubble128, 128);
		printArray(bubble128, 128);
		cout << " \nCount Tracker: " << bubbleCount << endl;
	}

	// Begining of Merge Sort
	cout << "/////////////////////////////////////////////////////" << endl;
	cout << "Merge sort with a length of 8 :" << endl;
	for (int start = 1; start <= 3; start++) {
		mergeCount = 0;
		cout << "\nMergeSort:" << endl;
		int merge8[8];
		randArray(merge8, 100, 8);
		printArray(merge8, 8);
		cout << endl;
		mergeSort(merge8,0,7);
		printArray(merge8, 8);
		cout << " \nCount Tracker: " << mergeCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	//Merge Sort L32
	cout << "Merge sort with a length of 32 :" << endl;
	for (int start = 1; start <= 3; start++) {
		mergeCount = 0;
		cout << "\nMergeSort:" << endl;
		int merge32[32];
		randArray(merge32, 100, 32);
		printArray(merge32, 32);
		cout << endl;
		mergeSort(merge32, 0, 31);
		printArray(merge32, 32);
		cout << " \nCount Tracker: " << mergeCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	//Merge Sort L128
	cout << "Merge sort with a length of 128 :" << endl;
	for (int start = 1; start <= 3; start++) {
		mergeCount = 0;
		cout << "\nMergeSort:" << endl;
		int merge128[128];
		randArray(merge128, 100, 128);
		printArray(merge128, 128);
		cout << endl;
		mergeSort(merge128, 0, 127);
		printArray(merge128, 128);
		cout << " \nCount Tracker: " << mergeCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	//Begining of the Counting Sort:
	cout << "/////////////////////////////////////////////////////" << endl;
	cout << "Counting sort with a length of 8 :" << endl;
	for (int start = 1; start <= 3; start++) {
		countingCount = 0;
		cout << "\nCountingSort:" << endl;
		int counting8[8];
		randArray(counting8, 100, 8);
		printArray(counting8, 8);
		cout << endl;
		countingSort(counting8, 8);
		printArray(counting8, 8);
		cout << " \nCount Tracker: " << countingCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	//Counting L32
	cout << "Counting sort with a length of 32 :" << endl;
	for (int start = 1; start <= 3; start++) {
		countingCount = 0;
		cout << "\nCountingSort:" << endl;
		int counting32[32];
		randArray(counting32, 100, 32);
		printArray(counting32, 32);
		cout << endl;
		countingSort(counting32, 32);
		printArray(counting32, 32);
		cout << " \nCount Tracker: " << countingCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;
	//Counting L128
	cout << "Counting sort with a length of 128 :" << endl;
	for (int start = 1; start <= 3; start++) {
		countingCount = 0;
		cout << "\nCountingSort:" << endl;
		int counting128[128];
		randArray(counting128, 100, 128);
		printArray(counting128, 128);
		cout << endl;
		countingSort(counting128, 128);
		printArray(counting128, 128);
		cout << " \nCount Tracker: " << countingCount << endl;
	}
	cout << "-----------------------------------------------------" << endl;

	return 0;
}

/* SAMPLE RESPONSE
Buble sort with a length of 8 :

BubbleSort:
14 98 98 59 0 54 59 73

0 14 54 59 59 73 98 98

Count Tracker: 48

BubbleSort:
13 31 0 73 13 95 76 62

0 13 13 31 62 73 76 95

Count Tracker: 32

BubbleSort:
7 22 7 37 12 83 37 9

7 7 9 12 22 37 37 83

Count Tracker: 46
-----------------------------------------------------
Bubble sort with length 32:

BubbleSort:
30 92 13 23 26 7 21 14 10 16 96 45 11 22 32 93 90 76 98 0 30 92 47 24 9 26 55 22 82 57 24 47

0 7 9 10 11 13 14 16 21 22 22 23 24 24 26 26 30 30 32 45 47 47 55 57 76 82 90 92 92 93 96 98

Count Tracker: 1242

BubbleSort:
91 99 96 65 2 31 47 50 54 100 1 21 45 79 23 72 89 32 34 40 59 24 90 100 74 83 54 39 100 67 45 92

1 2 21 23 24 31 32 34 39 40 45 45 47 50 54 54 59 65 67 72 74 79 83 89 90 91 92 96 99 100 100 100

Count Tracker: 1034

BubbleSort:
58 79 90 83 13 59 94 81 13 24 49 11 80 16 40 0 38 78 41 38 71 52 78 24 53 50 92 40 93 93 97 99

0 11 13 13 16 24 24 38 38 40 40 41 49 50 52 53 58 59 71 78 78 79 80 81 83 90 92 93 93 94 97 99

Count Tracker: 982
-----------------------------------------------------
Bubble sort with length 128:

BubbleSort:
32 22 98 54 1 74 23 59 69 96 63 93 81 75 45 12 31 41 61 50 37 37 4 99 24 65 19 42 95 77 21 83 69 57 84 40 56 6 98 69 92 18 33 51 32 40 75 0 55 81 65 82 64 22 72 62 43 36 93 70 26 53 77 72 64 25 78 81 83 34 6 80 69 46 12 65 51 49 61 74 11 65 11 51 86 66 99 43 81 28 4 13 12 56 2 97 35 25 70 37 75 28 52 50 65 78 90 50 84 69 37 85 81 61 53 35 13 61 15 100 99 44 70 0 81 44 26 47

0 0 1 2 4 4 6 6 11 11 12 12 12 13 13 15 18 19 21 22 22 23 24 25 25 26 26 28 28 31 32 32 33 34 35 35 36 37 37 37 37 40 40 41 42 43 43 44 44 45 46 47 49 50 50 50 51 51 51 52 53 53 54 55 56 56 57 59 61 61 61 61 62 63 64 64 65 65 65 65 65 66 69 69 69 69 69 70 70 70 72 72 74 74 75 75 75 77 77 78 78 80 81 81 81 81 81 81 82 83 83 84 84 85 86 90 92 93 93 95 96 97 98 98 99 99 99 100

Count Tracker: 29012

BubbleSort:
26 6 31 24 32 47 96 9 86 53 32 46 38 74 52 58 12 5 22 71 90 34 69 8 30 42 20 84 75 7 13 70 49 49 10 22 98 12 68 78 89 7 99 87 68 85 10 64 50 60 56 82 18 89 61 56 31 65 55 18 59 41 22 71 9 40 6 59 77 80 100 1 29 32 41 71 87 57 43 45 49 58 69 46 47 89 22 92 39 68 66 75 39 16 46 58 82 70 9 77 75 51 5 27 28 45 60 48 98 6 40 31 2 99 57 50 41 18 83 51 15 16 49 71 29 82 24 11

1 2 5 5 6 6 6 7 7 8 9 9 9 10 10 11 12 12 13 15 16 16 18 18 18 20 22 22 22 22 24 24 26 27 28 29 29 30 31 31 31 32 32 32 34 38 39 39 40 40 41 41 41 42 43 45 45 46 46 46 47 47 48 49 49 49 49 50 50 51 51 52 53 55 56 56 57 57 58 58 58 59 59 60 60 61 64 65 66 68 68 68 69 69 70 70 71 71 71 71 74 75 75 75 77 77 78 80 82 82 82 83 84 85 86 87 87 89 89 89 90 92 96 98 98 99 99 100

Count Tracker: 26696

BubbleSort:
8 50 0 22 47 66 3 51 89 74 20 93 21 26 3 38 59 66 33 61 41 96 57 56 49 16 66 78 85 90 82 55 70 8 86 64 49 77 77 94 82 48 94 12 7 72 7 11 74 87 62 9 20 85 47 15 51 32 41 43 83 40 26 16 71 98 17 41 39 17 15 23 16 64 44 0 86 32 26 16 59 39 30 66 69 0 94 98 71 50 65 56 70 23 55 4 42 95 42 53 82 24 44 8 26 100 14 81 11 0 16 27 48 44 43 78 20 89 83 99 26 28 30 69 29 22 73 65

0 0 0 0 3 3 4 7 7 8 8 8 9 11 11 12 14 15 15 16 16 16 16 16 17 17 20 20 20 21 22 22 23 23 24 26 26 26 26 26 27 28 29 30 30 32 32 33 38 39 39 40 41 41 41 42 42 43 43 44 44 44 47 47 48 48 49 49 50 50 51 51 53 55 55 56 56 57 59 59 61 62 64 64 65 65 66 66 66 66 69 69 70 70 71 71 72 73 74 74 77 77 78 78 81 82 82 82 83 83 85 85 86 86 87 89 89 90 93 94 94 94 95 96 98 98 99 100

Count Tracker: 25210
/////////////////////////////////////////////////////
Merge sort with a length of 8 :

MergeSort:
36 49 97 55 28 24 34 46

24 28 34 36 46 49 55 97

Count Tracker: 38

MergeSort:
57 35 38 5 62 4 80 82

4 5 35 38 57 62 80 82

Count Tracker: 40

MergeSort:
72 64 57 88 14 14 73 92

14 14 57 64 72 73 88 92

Count Tracker: 46
-----------------------------------------------------
Merge sort with a length of 32 :

MergeSort:
61 94 27 100 73 67 48 56 90 63 42 6 91 95 72 22 4 1 43 61 43 31 91 16 29 70 62 92 81 20 45 89

1 4 6 16 20 22 27 29 31 42 43 43 45 48 56 61 61 62 63 67 70 72 73 81 89 90 91 91 92 94 95 100

Count Tracker: 278

MergeSort:
40 99 64 3 74 34 58 49 7 23 43 79 97 100 12 96 21 16 34 28 95 48 45 71 28 49 85 64 19 40 71 80

3 7 12 16 19 21 23 28 28 34 34 40 40 43 45 48 49 49 58 64 64 71 71 74 79 80 85 95 96 97 99 100

Count Tracker: 282

MergeSort:
70 52 100 17 95 5 52 65 29 42 1 49 51 10 24 11 38 92 23 9 15 82 90 57 31 25 46 13 20 23 5 36

1 5 5 9 10 11 13 15 17 20 23 23 24 25 29 31 36 38 42 46 49 51 52 52 57 65 70 82 90 92 95 100

Count Tracker: 264
-----------------------------------------------------
Merge sort with a length of 128 :

MergeSort:
68 44 84 69 28 39 38 94 67 87 98 63 76 32 35 0 26 98 0 92 8 94 48 30 9 38 99 77 23 44 16 79 43 94 3 10 72 0 37 69 54 53 15 44 36 74 98 27 82 30 91 93 20 93 38 18 15 80 45 81 24 90 87 85 19 72 80 76 81 99 96 43 18 59 20 11 60 35 23 82 53 52 68 72 47 92 69 38 29 27 69 78 67 72 43 88 1 78 84 32 60 36 6 24 90 38 68 17 8 6 80 44 43 40 43 9 57 81 39 92 53 39 44 55 53 18 7 84

0 0 0 1 3 6 6 7 8 8 9 9 10 11 15 15 16 17 18 18 18 19 20 20 23 23 24 24 26 27 27 28 29 30 30 32 32 35 35 36 36 37 38 38 38 38 38 39 39 39 40 43 43 43 43 43 44 44 44 44 44 45 47 48 52 53 53 53 53 54 55 57 59 60 60 63 67 67 68 68 68 69 69 69 69 72 72 72 72 74 76 76 77 78 78 79 80 80 80 81 81 81 82 82 84 84 84 85 87 87 88 90 90 91 92 92 92 93 93 94 94 94 96 98 98 98 99 99

Count Tracker: 1656

MergeSort:
17 82 64 89 58 62 44 24 45 5 95 86 12 84 63 67 76 69 62 80 49 12 76 55 71 17 36 37 78 91 35 25 32 77 63 28 40 75 29 68 75 76 97 75 53 9 12 59 34 96 4 82 72 29 18 47 92 59 91 73 49 44 76 21 70 25 58 76 49 4 7 83 6 45 38 91 41 4 6 32 5 20 58 49 46 21 63 61 5 16 16 48 67 91 69 87 1 48 30 20 56 44 98 11 36 38 31 98 20 6 69 1 77 65 31 53 24 12 34 18 14 13 27 97 31 23 22 48

1 1 4 4 4 5 5 5 6 6 6 7 9 11 12 12 12 12 13 14 16 16 17 17 18 18 20 20 20 21 21 22 23 24 24 25 25 27 28 29 29 30 31 31 31 32 32 34 34 35 36 36 37 38 38 40 41 44 44 44 45 45 46 47 48 48 48 49 49 49 49 53 53 55 56 58 58 58 59 59 61 62 62 63 63 63 64 65 67 67 68 69 69 69 70 71 72 73 75 75 75 76 76 76 76 76 77 77 78 80 82 82 83 84 86 87 89 91 91 91 91 92 95 96 97 97 98 98

Count Tracker: 1642

MergeSort:
55 3 29 1 22 20 58 43 85 89 22 20 7 87 52 7 29 9 81 90 18 90 100 100 14 55 48 52 4 95 29 36 96 63 7 84 0 7 35 93 54 59 64 93 96 53 4 81 55 62 43 45 2 14 55 31 13 2 47 8 38 34 13 95 69 66 55 22 12 27 75 53 85 66 20 1 65 29 7 10 0 53 61 34 25 68 66 9 58 100 4 85 44 92 37 70 93 24 96 99 73 48 92 11 13 68 69 42 100 17 95 58 5 70 99 2 8 8 41 78 16 45 76 23 34 91 66 23

0 0 1 1 2 2 2 3 4 4 4 5 7 7 7 7 7 8 8 8 9 9 10 11 12 13 13 13 14 14 16 17 18 20 20 20 22 22 22 23 23 24 25 27 29 29 29 29 31 34 34 34 35 36 37 38 41 42 43 43 44 45 45 47 48 48 52 52 53 53 53 54 55 55 55 55 55 58 58 58 59 61 62 63 64 65 66 66 66 66 68 68 69 69 70 70 73 75 76 78 81 81 84 85 85 85 87 89 90 90 91 92 92 93 93 93 95 95 95 96 96 96 99 99 100 100 100 100

Count Tracker: 1654
-----------------------------------------------------
/////////////////////////////////////////////////////
Counting sort with a length of 8 :

CountingSort:
3 15 91 71 100 31 60 36

3 15 31 36 60 71 91 100

Count Tracker: 16

CountingSort:
87 32 15 17 30 80 59 28

15 17 28 30 32 59 80 87

Count Tracker: 16

CountingSort:
7 40 24 37 77 41 74 35

7 24 35 37 40 41 74 77

Count Tracker: 16
-----------------------------------------------------
Counting sort with a length of 32 :

CountingSort:
85 80 82 74 13 62 33 63 23 1 4 38 54 85 79 17 50 43 53 96 47 56 78 87 68 47 75 2 89 78 16 12

1 2 4 12 13 16 17 23 33 38 43 47 47 50 53 54 56 62 63 68 74 75 78 78 79 80 82 85 85 87 89 96

Count Tracker: 64

CountingSort:
84 97 34 38 2 70 89 66 98 57 26 91 17 51 6 39 97 63 69 39 43 49 72 67 16 100 46 89 75 61 30 71

2 6 16 17 26 30 34 38 39 39 43 46 49 51 57 61 63 66 67 69 70 71 72 75 84 89 89 91 97 97 98 100

Count Tracker: 64

CountingSort:
100 61 83 69 67 83 94 57 9 11 93 84 0 33 58 54 35 69 30 34 58 93 88 52 20 75 59 33 100 97 40 85

0 9 11 20 30 33 33 34 35 40 52 54 57 58 58 59 61 67 69 69 75 83 83 84 85 88 93 93 94 97 100 100

Count Tracker: 64
-----------------------------------------------------
Counting sort with a length of 128 :

CountingSort:
73 19 36 43 62 72 69 73 42 93 62 13 34 81 74 30 96 66 8 61 34 27 30 82 60 21 95 42 43 11 92 3 97 30 15 41 75 90 61 69 39 24 12 67 93 24 98 25 5 25 53 21 17 70 77 96 50 13 43 71 33 93 37 63 45 23 44 46 10 89 60 88 91 59 87 97 54 95 41 12 1 75 50 55 44 70 1 21 91 79 13 87 85 30 95 72 33 98 84 41 91 15 97 98 77 87 78 52 86 73 31 79 46 39 93 83 20 25 7 4 90 42 25 61 44 96 54 39

1 1 3 4 5 7 8 10 11 12 12 13 13 13 15 15 17 19 20 21 21 21 23 24 24 25 25 25 25 27 30 30 30 30 31 33 33 34 34 36 37 39 39 39 41 41 41 42 42 42 43 43 43 44 44 44 45 46 46 50 50 52 53 54 54 55 59 60 60 61 61 61 62 62 63 66 67 69 69 70 70 71 72 72 73 73 73 74 75 75 77 77 78 79 79 81 82 83 84 85 86 87 87 87 88 89 90 90 91 91 91 92 93 93 93 93 95 95 95 96 96 96 97 97 97 98 98 98

Count Tracker: 256

CountingSort:
28 75 30 95 96 19 91 60 63 85 57 60 30 87 67 55 83 86 36 3 46 67 12 73 97 17 59 77 79 60 8 77 49 48 84 52 99 84 44 5 66 24 43 29 4 98 44 47 36 32 43 67 64 2 90 16 83 66 73 24 69 89 73 69 70 25 12 85 74 99 73 21 13 48 48 59 55 29 88 60 99 87 69 34 36 31 86 12 89 9 76 2 58 93 24 99 59 93 31 11 97 41 35 0 29 99 64 20 63 40 24 2 3 48 90 14 55 69 100 64 48 79 99 4 76 33 96 56

0 2 2 2 3 3 4 4 5 8 9 11 12 12 12 13 14 16 17 19 20 21 24 24 24 24 25 28 29 29 29 30 30 31 31 32 33 34 35 36 36 36 40 41 43 43 44 44 46 47 48 48 48 48 48 49 52 55 55 55 56 57 58 59 59 59 60 60 60 60 63 63 64 64 64 66 66 67 67 67 69 69 69 69 70 73 73 73 73 74 75 76 76 77 77 79 79 83 83 84 84 85 85 86 86 87 87 88 89 89 90 90 91 93 93 95 96 96 97 97 98 99 99 99 99 99 99 100

Count Tracker: 256

CountingSort:
97 97 5 76 48 83 78 35 76 10 74 72 9 77 6 96 91 75 32 41 76 8 5 23 9 89 76 61 59 15 2 97 44 18 21 1 55 98 100 91 97 33 52 57 38 48 100 23 85 6 14 29 67 37 33 99 43 82 66 81 44 83 60 13 0 42 72 50 60 50 15 76 3 75 10 53 82 43 72 66 47 39 45 85 75 55 82 14 1 41 90 98 72 79 45 37 77 32 71 17 40 99 55 72 90 21 7 5 77 7 16 67 7 51 58 38 17 30 66 95 75 1 90 38 42 97 0 32

0 0 1 1 1 2 3 5 5 5 6 6 7 7 7 8 9 9 10 10 13 14 14 15 15 16 17 17 18 21 21 23 23 29 30 32 32 32 33 33 35 37 37 38 38 38 39 40 41 41 42 42 43 43 44 44 45 45 47 48 48 50 50 51 52 53 55 55 55 57 58 59 60 60 61 66 66 66 67 67 71 72 72 72 72 72 74 75 75 75 75 76 76 76 76 76 77 77 77 78 79 81 82 82 82 83 83 85 85 89 90 90 90 91 91 95 96 97 97 97 97 97 98 98 99 99 100 100

Count Tracker: 256
-----------------------------------------------------
*/