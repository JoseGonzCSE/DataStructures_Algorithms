

#include<iostream>


using namespace std;

//Question1
void first(int theArray[], int size)
{
    if (size == 1)
        cout << theArray[0];
    else {
        first(theArray, size-1);
    }
}
//Question2

void max1(int array[], int size) {
    if (size == 1)
        cout << array[0];
    else {
        max1(array+1, size-1);
    }
    
}
//actual answer to the question problem 
int max0(int array[], int size) {
    int final;
    if (size == 1) {
        return final = array[0];
    }
    else {
        max0(array + 1, size - 1);
    }
}
//Question 3 one Itteration, quick sort, first =pivot
/*5 1 8 2 9 3 1

1 2 3 1   5    8 9   

1  2 3 1  5     8   9

1  2  3 1  5    8   9

1 2 1 3  5  8 9 


*/


/*
Question 4: 

Array- based list > linked

Array is better at random access due to its immediete ability to get anything. Linked list has to start from the beggining
array is bettern at swqentiual; and storage efficeincy


Question 5:

to insert at the begining of an ADT LIST you do
insert(1,item);

Question 6: 
1-10
removing item at 5 WILL result in the item at 7 now be at position 6

Question 7a??:  

removeEntry(the list : list, enty: Itemtype){
    
 }


Question 7b: 
It would remove the first encounter of the specific number

Question 8: False, set entyry is faster inan ADT due to its abilty to get at the postion instantly rather than going
though the nodes

Question 9: Array of length n
    Worst  case :
    
    Quick: O(n^2)
    Bubble: O(n^2)

Question 10: Best cases of n length 5 using bubble sort
    O(n)

Question 11: Worst case of swaps in selection sort=5
    O(n^2)

Question 12: Worst case of a linear search that is sorted 
    O(1);

    Question 13:

    void printReverse (Node *tail){
        if (&next==&prev){
        cout<< tail->data;
        }else {
            printReverse( *tail-1)







    void reverse(Node **head_ref) 
    { 
    Node *temp = NULL; 
    Node *current = *head_ref;

    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    if(temp != NULL ) 
        *head_ref = temp->prev; 
} 











*/


int main() {
    int const max = 5;

    int array[max] = { 2,4,5,6,3 };

    first(array, max);
    cout<<max0(array, max);

	return 0;
}