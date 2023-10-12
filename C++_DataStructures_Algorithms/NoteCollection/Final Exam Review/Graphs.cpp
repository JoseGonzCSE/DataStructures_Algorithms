/*
MODULE 13, THE LAST FUCKING MODULE WAOAOOOWOW!!!

13.1 Graphs

	Verticies = points
	Edges = connections 

	SubGraph= sub set of a graphs verticies and subset of its edges
	Path= sequence of edges that begins at one vertex and ends at another 
		Simple Path - cant pass vertex twice 

	Cycle= a Path that starts and ends at the same Vertex 
		Simple Cycle- cant pass vertex twice except for the root 

	Connected - all vertex have an edge
	Complete- each pair has an edge

	Multigrapg = a graph that can have duplicate edges, NO LOOPS 

	Weighted Graph= edges have some numerical or text meaning behind them 
	Directed Graph/ Diagraph = has a direction usually in the form of arrows
		Successor = child 
		Predecessor = root node

-------------------------------------------------------------------------------------------
13.2 Graph Implementations

	Truth Table for a graph, related to nodes 
		0= NO Connections 
		1= YES Connections 

		IF  THE  GRAPH IS WEIGHTED 
		
		TRUTH TABLE UNITS USE THE EDGES VALUES
			INFINITE = NO

			

---------------------------------------------------------------------------------------------
13.3 Graph Traversal  


	Traversal = one vertex to another 

	ITERATIVE DEPTH -FIRST SEARCH 

		dfs(Vertex v)
			s= new empty stack 

			s.push(v)
			mark v as visited 

			while (!s.isEmpty()){
				if ( no unvisited vertices adjacent to vertex on top of stack)
					s.pop()
				else{
					select an unvisited vertex u adjacent to vertex on top of stack
					s.puush(u)
					mark u as visited
				}
			}

			will pick the less than node to traverse 
	
	Breadth-first search 
		- visits all adjecent verticies first 

-----------------------------------------------------------------------------------------------

13.4 Topological order 

	Directed graph without cycles has a natural order [ class structure for school/ prereq]

-----------------------------------------------------------------------------------------------
13.5 Spanning Tree

	Tree is a graph, it is connected and has NO cycles 

	Spanning Tree = connected, undirected graph G is a saubgraph of G that contains ALL of G's 
		verticies and exactly enough of its edges to form a tree. 

	Basically looks like family tree but could be side ways or  horizontal 

	Connected, undirected graph with N verticies must have AT LEAST N-1 EDGES
	NO CYCLES 

	Connected, undirected graph with  n verticies and more that n-1 edges must have at least one cycle

----------------------------------------------------------------------------------------------------------
13.6 Dijkstra's Algorithm= Finds the  shortest path to some thing

	Shortest Path = smallest edge weighted sum

	Go to x to Y using the less amount of edge cost 



	Adjcency Matrix:
			 0 SFO|  1 LAX  2 LAS  3 PHX  4 DEN  5 JFK

0 SFO|       infi       120    150    infi       infi         500

1 LAX|       120    infi       infi       75     infi       350

 2 LAS|      150    infi       infi       infi       250    infi 

 3 PHX|      infi      75      infi       infi       150    infi 

 4 DEN|      infi      infi        250    150    infi       infi 

 5 JFK|       500  350      infi       infi       infi       infi 

 Tracing Maxtrix 
	Step  V       Vertex Set     Weight: [0SFO]   [1LAX]   [2LAS]   [3PHX]   [4DEN]   [5JFK]

	1	  -          0                    0         120    150       infi       infi     500 

	2     1          0,1                 0       120    150       195       infi    470

	3     2          0,1,2               0        120    150       195      400    470

	4     3          0,1,2,3             0        120     150       195     345    470

	5     4          0,1,2,3,4           0        120     150       195      345   470

	6    5          0,1,2,3,4,5          0        120    150       195     345    470     







*/