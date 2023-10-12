/*
Final Exam Practice Problmes:


1.  A heap whose root contains the item with the smallest search key is called a

		-Mini Heap

2.  In an array-based implementation of a heap with root at index 0, the left child of the node at index i is always stored in index
	
		- in index one
		- left child is at item[2i+1] if it exist 

3.  True/False: In a maxheap, the search key of a node’s left child is always less than the search key of the right child

		- I believe this is true


5.  What is an advantage that a heap implementation of a priority queue has over a binary search tree implementation?

		- It is implemented using arrays so its easier to manipulate/ get things 
		- it also has faster time constants

6.  True/False: In an array-based heap, insert is less efficient than remove (in the worst case).

		- add and remove have the same efficiency 
		-O(1) both O logn is real answer

7.  True/False: all graphs have more than one spanning tree.

		- false, minimum is one 

8.  You have a graph which is undirected and connected with n vertices.  If it has n edges, it

	a) cannot contain a cycle 
	b) must contain a cycle
	c) may contain multiple cycles 
	d) none of these

		- answer is B???????????


9.	 True/False:  We have a hash table of size 100 and are not using chaining (each table entry contains one entry).  
	We insert 101 elements into the hash table.  We are guaranteed to have a collision.

		- I think this is true but then the algorithm will immedietly increase the size of itself to insert the new entry.

10.  You are given a hash function which takes the modulo 100 of a three digit integer search key.  For example h(123) = 23, h(025) = 25, and h(999) = 99.[keeps last two]
	True/False:  Assuming the search keys are random, and the hash table is size 100, this hash function will favor positions towards the beginning of the hash table.

	- maybe?

11.  Describe the difference between a stack and a queue.

	- a queue is like a resturant reservation, it is a first in first out basis
	- a stack on the other hand is the opposite, it checks the top of the stack first 
		meaning, it is a last one in first one out or, first in last out 

12.  Given two initially empty queues, queue1 and queue2, what will the contents of queue2 be after the following commands:

		queue1.enqueue(1)
		queue1.enqueue(2)
		int queueFront = queue1.peekFront()
		queue2.enqueue(queueFront)
		queue2.enqueue(5)

	- int queue front = 1
	queue 2 = 1,5


13.  You have a sorting algorithm available to use and tested which is O(n2) worst case efficiency.  Your n will not be large in the problem you are solving.  
	True/False: it is a bad idea to use this algorithm; you should instead implement a O(n log n) sort algorithm.


	false, since n is not large enough it won't matter too much, but n logn is naturally beter. n^2 is a bit faster at lower n <100

14.  What happens if you have a recursive algorithm and your base case is ill-defined (i.e. you might not hit your base case)

	- it is possible that the entire program will fuck up, as in become infinate or not start, or crash

15. What does the following recursive algorithm display? ???

writeBack(s : string)
  if (s is empty)
	return
  else
  {
	writeBack(the string s with its first character removed)
	write the first character of s
  }

  Jose

  ose or Jose?


	- Base case: If string is empty the program stops 
	-either returns the name with the first string removed or returns the full name 

  16.  You have an algorithm which processes a string containing an algebraic expression.  
  Every time it sees open parenthesis ‘(‘ it pushes it on a stack.  Every time it sees close parenthesis ‘)’ it pops one element off the stack.  
  What would happen while processing the following expression:

(3+2) * 5)

	The expression is unbalaced, there will still be 1 ) element in the stack. 

17.  Provide a reason you might be better off using merge sort instead of quick sort.

	- Merge sort is best with any amount of n while quick sort is better at lower n
	- quick sort is better for arrays, merge beter for linked list
	- quick sort is better for recieveing 

18. You have a maxheap which is tracking patients in an emergency department waiting room.  
Each entry has a string containing the priority followed by the name, where 5 is the highest priority and 1 is the lowest.  
For example, "5 Max" means patient Max is waiting with the highest priority 5. 

[5 = max priortity, 1= lowest priority]


You are called by the hospital CEO who tells you that his niece is in the waiting room and needs to be seen next, regardless of priority.[no this is fucked up fuck you] 
In other words, her entry needs to be removed from the heap but you do not know where this entry is in the heap.  Is this possible?  What would it entail?

	- Using peak top you and a new function you may be able to find a specific entry on the heap and remove it. If peektop()= name then remove/ rebuild.


19.  Write a pseudocode function called topFive which takes a maxheap containing integers as a parameter.  
It should print out the largest five elements in the heap.  If there are fewer than five elements in the heap, it should print out all of the elements in the heap.  
It is ok if the heap changes as a result of this function.

topFive(heap: Heap)
Assume you have a class Heap implemented which implements the following standard heap functions as discussed in our videos and textbook (and only these functions):

+isEmpty(): boolean
+getNumberOfNodes(): integer
+add(newEntry: integer): boolean
+peek(): integer
+remove(): boolean





*/