#pragma once
//Node Class Definition
//Member functions defined in Node.cpp

class Node
{
public: 
	Node(int, Node*); 

	Node(); 

	Node* next; 
	int data; 
};

