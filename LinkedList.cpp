#include "LinkedList.h"
#include <iostream>
using namespace std; 

LinkedList::LinkedList() {
	head = nullptr; 
	tail = nullptr; 
	length = 0; 
}

LinkedList::~LinkedList() {
	if (head == nullptr) {
		cout << "List Deleted";
	}
	else {
		Node* next = head;
		Node* cur = nullptr;
		while (next->next != nullptr) {
			cur = next;
			next = next->next;
			delete cur;
		}
		cout << "List Deleted";
	}
};

void LinkedList::insertNode(int data) {				//Code to insert Node into a linked list when there is no tail pointer
	
													
	if (isEmpty()) {								//Check if head is Null
		head = tail = new Node(data, nullptr);		//if so, creates a new node containing data
													//sets head & tail to point to the new node
		length++;									//increments length by 1
	}
	else											//2nd Case (Head doesn't point to NULL)
	{	
		Node* travNode;								//create a pointer to a node 'travNode'
		travNode = head;							//set 'travNode' equal to head
		while (travNode->next != nullptr) {			//While loop to check if the next node exists or not
			travNode = travNode->next;				//If it exists, increment travNode down the LinkedList to 2nd to Last position
		}
													//When arriving at the end of the list create new Node containing data
		travNode->next = new Node(data, nullptr);    //Set the next pointer of the previous last node to the new last node
		tail = travNode->next; 						//Set the tail data member to the Node we just inserted 
		length++;									//increment length 
		free(travNode); 
	} 
}

void LinkedList::insertLast(int data) {
	if (isEmpty()) {
		head = tail = new Node(data, nullptr);
		length++;
	}

	else {
		tail->next = new Node(data, nullptr);
		tail = tail->next;
		length++; 
	}
}

void LinkedList::insertFront(int data) {
	if (isEmpty()) {
		head = tail = new Node(data, nullptr); 
		length++; 
	}

	else {
		Node* tempNode; 
		tempNode = new Node(data, head);
		head = tempNode;  
		length++;
	}
}

void LinkedList::deleteNode(int data) {

	if (isEmpty()) {							    //Check if head is NULL
		cout << "There are no nodes to delete";		//if so, print out error message
	}

	else {

		Node* travNode = head;						//If not, create a pointer to a node 'travNode' and set it head
		while (travNode->next->data != data) {		//while loop to loop through the structure until we reach the node before the one to be delted
			travNode = travNode->next;				//Increment through linked list
		}

		travNode->next = travNode->next->next;		//Set the next pointer of the current node (the node before the node to be deleted) to the next pointer of the
													//next node
		length--;									//decrement length 
		free(travNode); 
	}
}

int LinkedList::deleteFirst() {
	if (isEmpty()) {
		cout << "The List is empty";
	}


	else {
		Node* tempNode = head;
		head = head->next;
		int data = tempNode->data;
		free(tempNode); 
		length--;

		//if list after deletion is empty, set tail to null
		if (isEmpty()) {
			tail = nullptr;
		}
		
		return data;
	}
}

int LinkedList::deleteLast() {							//If this was a doubly linked list, we could have O(1) to delete last node; 
	if (isEmpty()) {
		cout << "The list is empty";
	}

	else if (size() == 1) {
		int data = head->data; 
		head = tail = nullptr; 
		length--; 
		return data; 
	}

	else { 
		Node* travNode = head;
		int data = tail->data; 
		while (travNode->next->next != nullptr) {
			travNode = travNode->next;
		}

		travNode->next = nullptr; 
		tail = travNode; 
		free(travNode);  
		length--; 

		return data; 
	}
}

int LinkedList::peekFirst() {
	if (isEmpty()) {
		cout << "There are no nodes to peek";
	}

	else {
		return head->data; 
	}
}

int LinkedList::peekLast() {
	if (isEmpty()) {
		cout << "There are no nodes to peek";
	}

	else {
		return tail->data; 
	}
}

void LinkedList::reverseList() {
	if (isEmpty())
	{
		cout << "There is no List to reverse";
	}
	else {
		
		//	In:  A --> B --> C --> D --> nullptr
		//  Out: D --> C --> B --> A --> nullptr

		Node* Prev = nullptr;		//Pointer to a node : Holds pointer to previous node (curr) 
		Node* Next = nullptr;		//Pointer to a node : Holds pointer to next node     (curr.next)
		Node* Curr = head;			//Pointer to a node : Points to current Node         (Next)

		while (Curr != nullptr) {
 			Next = Curr->next;		//Holds the pointer to the next node in the Linked List  
			
			Curr->next = Prev;     //Sets the value of the Current Nodes next pointer to the Previous node

			Prev = Curr;		   //Sets the value of the pointer to the Previous Node to the current node

			Curr = Next;		   //Sets the value of the current node pointer to the next node pointer before re-loop  
		}

		tail = head;				//swap head (which now points to the end of the list) with tail
		head = Prev;				//Assign head to the Prev pointer which now points to the front of the lis
 
	}
}

void LinkedList::displayNode(int data) {
	if (isEmpty()) {
		cout << "There are no nodes to display"; 
	}

	else {
		Node* travNode = head; 
		int counter{ 0 };
		while (travNode != nullptr) {
			if (travNode->data == data)
			{
				cout << "Node at position: " << counter << "Contains data: " << data << endl; 
			}
			travNode = travNode->next; 
			counter++;
		}

		free(travNode); 
	}
}

void LinkedList::printList() {
	if (isEmpty()) {
		cout << "There are no nodes to print"; 
	}
	
	else {
		Node* travNode = head;
		int counter{ 0 }; 
		while (travNode != nullptr) {
			cout << "Node at position: " << counter << "   Contains data: " << travNode->data << endl; 
			travNode = travNode->next; 
			counter++; 
		}
		free(travNode); 
	}
}

int LinkedList::size() {
	return length; 
}

bool LinkedList::isEmpty() {
	return size() == 0; 
}
