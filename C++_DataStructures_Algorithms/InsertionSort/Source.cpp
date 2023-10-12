// Jose Gonzalez Lab 01 Insertion sort
#include <iostream>

using namespace std;

void Merge(int Array[], int left, int mid, int right) {

    // p= left, q=mid, r= right ]

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* lArray = new int[n1 + 1]; // plus 1 here?
    int* rArray = new int[n2 + 1];  // plus 1 here?

    for (int i = 1; i <= n1; i++) { // might be <=
        lArray[i] = Array[left + i - 1];
    }
    for (int j = 1; j <= n2; j++) { // might be <=
        rArray[j] = Array[mid + j];
    }

    lArray[n1 + 1] = 2147483647;
    rArray[n2 + 1] = 2147483647;

    int i = 1;
    int j = 1;

    for (int k = left; k <= right; k++) {
        if (lArray[i] <= rArray[j]) {
            Array[k] = lArray[i];
            i = i + 1;
        }
        else {
            Array[k] = rArray[j];
            j = j + 1;
        }
    }
}

void MergeSort(int Array[], int start, int last) {
    if (start < last) {
        int mid = (start + last) / 2;
        MergeSort(Array, start, mid);
        MergeSort(Array, mid + 1, last);
        Merge(Array, start, mid, last);
    }
}





int main(int argc, char** argv) {

    //setting up the array for insertion sort
    int* Array;
    int size = 1;
    cin >> size;
    Array = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> Array[i];
    }

    MergeSort(Array, 0, size - 1);

    //print results
    for (int k = 0; k < size; k++) {
        cout << Array[k] << ";";
    }

    delete[] Array;
}