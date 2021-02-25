//
//		Implementing a Stack using Linked Lists 
//
#pragma once
#include "Node.h"
#include "LinkedList.h"

class Stack
{
public: 
	LinkedList stackList; 

	Stack();
	~Stack();
	void push(int); 
	int pop();
	int peek(); 
	bool isEmpty(); 
	int size(); 
};

