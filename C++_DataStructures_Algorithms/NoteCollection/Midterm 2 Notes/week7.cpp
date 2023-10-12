/*
Module 7 notes:

Stacks:

	Reading a line of text from user input that allows backspace 

	while ( not at the end of input){
		read in a charcter c
		if( c is not backspace)
			add c to the adt
		else if(ADT is not empty)
			remove last charcter from adt
		else
			ignore backspace
		}
		Print out result

		Stack ADT Operatioons[4]
		-Is the stack empty?
		- add a new item to the stack
		- remove the item that was added most recently to the stack
		- get the item that was added most recently to the stack( with out actually affecting the stack itself)
		Last in - first out

		Stack Methods:
		Is empty(): boolean
			returns true if stack is empty false if not 

		push(newEntry:ItemType):boolean
			puts newEntry on the top of the stack
			returns true if successful
		
		peek()Itemtype
			return the entry at the top of the stack
		
		pop():boolean
			remove the entry at the top of the stack
			return true if successful
----------------------------------------------------------------
7.2 Stack Example
	
	stack1= new empty stack
	stack2= new empty stack
	stackTop= 0

	stack 1.push(1)                         stack1 =1                   stack 2=0
	stack 1.push(2)                         stack 1= 1 2                stack 2= 0
	stack 2.push(3)							stack 1= 1 2 				stack 2= 3
	stack 2.push(4)							stack 1= 1 2 				stack 2= 3 4
	stack1.pop()							stack 1= 1					stack 2= 3 4
	stackTop=stack2.peek()	StackTop=4
	stack 1.push(stackTop)					stack 1= 1 4				stack 2= 3 4
	stack 1.push(5)							stack 1= 1 4 5	
	stack 2.pop()														stack 2= 3 
	stack 1.push(6)							stack 1= 1 4 5 6					

------------------------------------------------------------------
7.3 Braces

	Problem:Balanced braces
		C++ uses {} to delimit groups of statements 

		{abc{de}fg{hij}k} = Balanced [closed]
		{abc{de}fg{hijk}  = Balanced [open]

		Conditions: each brace must have an ending brace
					when you get to the end all { have been matched

					read string, { = push to stack }=pop

		boolean balancedSoFar= true
		For( each character c in the string {
			if (c is a '{')
				aStack.push('{')
			else if (c is a  '}')
			{ if aStack.isEmpty()
				balancedSoFar=false
			  else
				aStack.pop('}')
				}
			}
			if ( balancedSoFar and aStack.isEmpty())
				string is balanced
			else 
				string is not balanced

			Example: {a{b}c}
			Algorithm start( charcter by charcter) 
			1) { stack= {
			2) a stack= {
			3) { stack= {{
			4) b stack={{
			5)} stack = {
			6) c stack = {
			7) } stack = 0
---------------------------------------------------------------
7.4 Algebraic expressions

	We will use + - * / and ()

	Infix: operators are BETWEEN OPERANDS
		a+(b*c)
	
	Prefix: Operators are BEFORE operands
		+a*bc == (b*c) +a
	
	Postfix: Operators are AFTER Operands
		abc*+ == (b*c) +a

	
	Distrubutive Poperty algorithm? 
	
	Example 2:

	Infix: (a+b)*c

	Prefix: *+ abc

	Postfix: ab+c*
	
	Calculator :
		STRAT 2-step:
			- Convert string from infix to postfix
			-compute expression using a postfix calculator

	Example 3:
		Prefix      Postfix
		2*(3+4) == 234+*
		steps: (3+4) first == 34+
				2*result   == 234+*


	Postfix calculator:

	for (each character ch in string){
		if (ch is an operand)
			stack.push(ch)
		else {
			operand2=stack.peek()
			stack.pop()
			operand1=stack.peek()
			stack.pop()
			result=operand1 op operand2
			stack.push(result)
	

	Computer Example bot from top  
	234+*                             34+*                  4+*            +*                              *
                                                                             	                                
	                                                         4             
	                                    3                    3              3                              7
	2                                   2                    2              2                              2
	stack                             stack                stack           stack                          stack   
 
	Result:  Operand1=0  Operand2=0                                  op1=3    +   Operand 2 =4             op1=2 *op2=7

--------------------------------------------------------------------------------------------------------------------------------
7.5 Infix to Postfix

	1) OPERAND, postfixExp+= operand

	2) "(" push to stack

	3) Operator
		If stack= empty, push on stack
		else= peak stack, place higher precedence
	
	4) ")"=pop and append to post fix until you find "(" then pop ")"

	5) end string, pop remaining stack and append then to post fix

	*/

/*
WEEK 8 NOTES

	Queues:
		First in, First out, like a line to a convention or something

		ADT:
			QUE EMPTY?
			ADD NEW ITEM TO END 
			LOOK AT ENTRY IN FRONT
			REMOVE FRONT ITEM

			isEmpty()
			enque(newEntry:ItemType):boolean 
				New Entry to the back
			dequeue():Boolean
				removes first entry of que
			PeekFront
				returns entry at front 
	
	Priority Que
		each entry has a priortity
		isEmpty()
		add(new entry:Item Type):boolean
		remove() boolean
		peek():ItemType


		GetLength= isEmpty
		insert= push =enque
		remove= pop =deque
		getentry= peek =peekFront


		Question One

		Palindrome( string: input ):boolean{
			stack= new stack
			queue= new que
			length =input length

			for(i=1;i<length){
				nextChar = i 
				queue.enqueue(nextChar)
				stack.push(nextChar)
			}

			Equal=true

			while (queue not empty and are equal){
				frontQueue= queue.peekFront()
				topStack=sttack.peek()
				if(frontQueue = topStack){
					queue.dequeue()
					stack.pop()
				}else
					Equal=false
			}
			return Equal
		}




*/