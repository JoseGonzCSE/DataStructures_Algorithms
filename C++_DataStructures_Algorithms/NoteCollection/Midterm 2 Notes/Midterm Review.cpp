/*

1.
I think this is true. Because the list is already in order, causing everything to be list-1

2.
False insertSorted(x) will insert x in the sorted position of the adt list, not always at the end.

3.
O(N) is the worst case for insert Sorted for n unsorted integers.

4.
False, a stake is not a first in first out system, it is a last in first out system.


5.

In order to test if the expression has balabced parenthesis you would use the balanced funtion
you would push the ( into a stack, and pop ) if their is one. If Balanced= true and the stack is empty,
then the expression has balanced Parenthesis.

6.
What would peek() return after using push() to add these three items to it in order: 2 4 3?

using peek ALWAYS returns the number highest on the list, in other words, the last one in.
peek will return 3


7.
TRUE a queue is a first in first out system


8.
You've implemented a queue for a concierge phone line for customers of a Las Vegas casino in which customers are served in the order they called in.
Your boss tells you that customers with higher VIP status levels should be served before customers of lower VIP status levels.
What ADT could you use to accomplish this?


In order to achieve this scenario for the base we will uise a Queue. This ensures that the first people in will be the first ones out
Additionally, we can set up a Priority Queue Type which will take care of the VIPs situation.

2 priorities

1= normal
2=vip

if 1 , insert regularly into the adt list
if 2, insert at the begining of the adt list.


9.
You enqueue the following items into a queue of integers: 5 2 3.  What will peekFront() return?

peekFront() will return the first number added.
PeekFront will return 5.


10.
True/False: each node in a binary tree has exactly two children.

False, the maximum number of children is two, but this does not mean every node has two children
that would be a Full Binary Tree.



11.
Traveral:
	Binary Tree- o(n)
	Binary Search Tree-o(n)


12.

False: the include tree is not balanced, Left= H=4 right= H=2

13.

 Height of binary tree with n nodes = minimum (log_2(n+1))


14.

If we insert the element 45 into the tree, it would be the left child of parent 50.
this is because 45 is greater than 40 but less then 50.

15
enqueue(9)
dequeue()

Before circle: 2,4,1,7
After the operations: 4,1,7,9


16.

int sum(BinaryNode* nodePtr){
	
	if( nodePtr==NULL)
		return 0;
	else
		( sum(root.getleftChildPtr()) + sum(root.getRightChildPtr()) ) 
}

17.

int sumPositive(Queue aQueue ){
	
	for(i=0;i<aQueue.length();i++)
		while(!aQueue.isEmpty())
			if(aQueue(i)<0)
				dequeue()
			else
				int sum += aqueue(i)

		return sum;
----------------------------------------------------

	while(!aQueue.isEmpty())
		if ( aQueue.peekFront()<0)
			aQueue.dequeue();
		else                          [int is positive]
		{
			int sum+= aQueue.peekFront();
			aQueue.dequeue();
		}
		return sum;
}

























*/