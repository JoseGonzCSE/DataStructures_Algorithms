/*

Module 9 = tress 

	Binary Tree: Up to 2 children max!

	Binary search tree: Everything left of node = less, everything right = greater

	Hight: INclude starting node

	Full Binary tree: 2 children max, NO LEAVES

	Complete binary tree: full but last level = left to right partial filled

	Ballanced= symetrical with deviance of 1 and no more in terms of hight in relation to left and right sub tree

	Pre Order: start at root, Do left subtree then right 

	In Order: Google search it , its easier that way

	Post Order: start at left and display the least, go up tree left to right

	--------------------------------------------------------------------------------------
	BINARY TREE OPERATIONS:

		isEmpty(): boolean
			returns true if tree is empty

		getHeight(): int
			returns Highet of tree


		getNumberOfNodes():int
			returns number of nodes

		getRootData():ItemType
			returns Data in the root

		setRootData(newData:Itemtype):void
			replace the data item in root of tree with newData. If tree=empt,
			insert a new root node 

		add(newData:ItemType):boolean [THIS WILL PUT INPUT AT RANDOM LOCATION]
			adds a new node containing newData to tree, returns turer if success

		remove(data:Itemtype): boolean
			removes node containing data from tree. returns true if success.

		clear():void
			removes alll nodes

		getEntry(anEntry:ItemType):ItemType
			gets a given entry; in the treee that matches anEntry and returnsit.
			throws exception if entry not found.

		contains(anEntry:ItemType):boolean
			ret;urn true if tree contains anEntr;y, false if not 

		preorderTraverse(visit(item:Itemtype):void):void
			traverse in preorder and calls the function visit once for each node.
			visit is a client-defined function tha preforms an operation on or with 
			the data in each visited node

		inorderTraverse(visit(item:Itemtype):void):void
			inorder traverse
			
		postorderTraverse(visit(item:Itemtype):void):void
			postorder traverse

		On efficiency
--------------------------------------------------------------------------------------------
	BINARY SEARCH TREE OPERATIONS: BST= BINARY SEARCH TREE

		ALL SAME BUT NO MORE setRootData()

		ADJUSTED:
			add(newEntry:ItemType):boolean
				inserts newEntry into bionary search tree such that the propertioes
				of a binary search tree is mainainted 
			
			remove(anEntry:ItemType):boolean
				Removes but keepy binary search tree maintained

	SEARCH PSUDO CODE FOR BINARY SEARCH TREE

	search(bstTree: BinarySearchTree, target: Itemtype):boolean{
		
		if(bstTree.isEmpty())
			return false
		else if(target==bstTree.getRootData())
			return true

		else if(target<bstTree.getRootData())
			return search(left subtree of bstTree, target)

		else
			return search(right subtree of bstTree, target)


	Height of binary tree with n nodes = minimum (log_2(n+1))

	EFFICIENCY OF BINARY SEARCH TREE 
				best		worse
	retrieve	log n		n
	insert		log n		n
	remove		log n		n
	traverse	n			n

-----------------------------------------------------------------------------------------------
GET HIGHT HELPER
	template<class Itemtype>
	int BinaryNodeTree<ItemType>::getHeightHelper(BinaryNode<ItemType>*subTreePtr)const{
		if(subTreePtr==nullPtr)
			return false
		else
			return 1+max(getHightHelper(subTreePtr->getLeftChildPtr()),getHightHelper(subTreePtr->getRightChildPtr()));
	}

ADD
	template<class ItemType>bool BinaryNodeTree <ItemType>::add(const ItemType & newData){
		BinaryNode<ItemType> *newNodePtr= new BinaryNode<ItemType> (newData);

		rootPtr=balancedAdd(rootPtr, newNodePtr);
		return true;
	}
		
		
BALANCED ADD: @7:54
https://www.youtube.com/watch?v=OsQmXP-UUkM&list=PLDZbdaQ3OIMCKFbenn4b6z114HtZwv3FQ&index=6 
		
		
		
		
	
	

	
	
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int x= (rand() % 10) + 1;

	cout << x;

	return 0;
}
