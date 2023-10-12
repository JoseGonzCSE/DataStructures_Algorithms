/*
Module 11: Heaps

	Complete Binary Tree that is either empty or the ROOT SATISFIES:

		MaxHeap:
			Root is greater than or equal to children
			Subtrees are also Heaps

		MiniHeap:
			Same but root has the smallest Basically Reversed 

	MAX HEAP:            MIN HEAP:
	(0)	10                      2
	   /   \                  /   \
(1)  9   (2) 6                3     5 
	/  \    /               / \    /
(3)	3(4) 2  5 (5)          9   6  10


	isEmpty() boolean
		return true if empty false if not 

	getHight() int 
		returns hight

	getNumNodes() int 
		returns number of nodes

	add( ItemType newData) boolean
		inserts newData into heap. must still be a heap after insertion, return true if success

	peekTop() ItemType
		return data in root node. Max= largest value, Min= smallest Value
		return items[0]  (item is an array)

	clear():void
		removes all nodes in heap.


--------------------------------------------------------------------------------------------------------------
11.2 Heap Implementation:

	Array based implementation due to it being a Complete Binary Tree
		
		root is at item[0]

		children of root art at items[1],[2]

		For any node items [i]:
			
			left child is at item[2i+1] if it exist 
			Right Child is at item[2i+2] if it exist 
			Parent is at	  item[(i-1)/2] if it exists


---------------------------------------------------------------------------------------------------------------
11.3 Heap Removal and Rebuild (you will NOT fail)

	Remove needs to get rid of root AND REBUILD heap or there will be a SPLIT

		1) copy last item in heap to the root node then delete last item (last item is the right most in tree)
		2) Still a complete binary tree but MAY NOT BE A HEAP it may be a SEMIHEAP (left and right sub trees still heaps but root is not)
		3)Trickle this item down the semi heap unil it reaches a node where the whole this is a heap again.
			look at right and left child, swap with the BIGGER one (root becomes child, child becomes root)


		PSUDO CODES 

		heapRebuild(int rootIndex, ArrayType item, int ItemCount)
			if(root not leaf)
				largerChildIndex = 2*rootIndex+1 // left child

				if(root has a right child)
					RightChildIndex=2*rootIndex+2 // right child
					if(items[RightCHildIndex] > Items[LargeCHilldINdex])
					largerChildIndex=rightChildIndex

				if(items[rootIndex]<items[largerCHildIndex]
					Swap items [rootIndex] and items [largerChild Index]
					heapRebuild(largerCHildIndex, items, Itemcount)

-------------------------------------------------------------------------------------------------------------
11.4 Heap Add

	Basically reverse removal: insert at the end and trickle it up
		If parent is less than item, swap


		Psudo Code

		boolean add(ItemType newData)
			if(itemCount==maxItems)
				return false;

			items[itemCount]=newData

			newDataIndex= itemCount
			inPlace= false

			while((newDataIndex>0)&& !inPlace)
				parentIndex= (newDataIndex-1)/2
				if (items[newDataIndex] < items[parentIndex)
					inPlace=true
				else
					swap(items[newDataIndex],items[parentIndex])
					newDataIndex=parentIndex

			itemCount++
			return true

--------------------------------------------------------------------------------------------------------------
11.5 HEAP EFFICIENCY 

	Add/ Remove = O(1) both O logn is real answer
	Tricle up/down = O logn 









	[5,1,2,8,6,10,3,9,4,7]



	Max:
			 5
		   /     \
		  1       2
		/  \     / \
	   8    6   10   3
	  / \   /
	 9  4  7






*/