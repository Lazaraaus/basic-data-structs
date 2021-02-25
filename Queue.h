#pragma once
#include "LinkedList.h"

class Queue
{
public: 
	Queue();

	~Queue();

	LinkedList queueList; 

	void Enqueue(int);

	int Dequeue(); 

	int peekFront();

	int peekBack(); 

	int size(); 

	bool isEmpty();
};

