#pragma once
#include "Node.h"

class LinkedList
{
public:
	int length; 
	Node* head;
	Node* tail; 
	
	LinkedList();

	~LinkedList(); 

	void insertNode(int);

	void insertLast(int); 

	void insertFront(int); 

	void deleteNode(int); 

	int deleteFirst(); 

	int deleteLast(); 

	void displayNode(int); 

	void printList(); 

	void reverseList(); 
	
	int size(); 

	bool isEmpty();

	int peekFirst();

	int peekLast(); 

	Node* findNthElement(Node*, int); 

	bool deleteMiddleNode(Node*);

	void deleteDuplicates();

};

