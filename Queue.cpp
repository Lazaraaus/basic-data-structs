#include "Queue.h"
#include <iostream>
using namespace std; 
Queue::Queue() {

}

Queue::~Queue() {

}

void Queue::Enqueue(int data) {
	queueList.insertLast(data); 
}

int Queue::Dequeue() {
	//Remove node at the end (aka tail)
	if (isEmpty()) {
		cout << "Queue is empty";
	}
	else {
		return queueList.deleteFirst();
	}
}

bool Queue::isEmpty() {
	return (queueList.size() == 0);
}

int Queue::size() {
	return queueList.size(); 
}

int Queue::peekFront() {
	//Look at front of the queue aka the tail (first ever node inserted)
	return queueList.peekFirst(); 
}

int Queue::peekBack() {
	//Look at the back of the queue aka the head (last node inserted)
	return queueList.peekLast(); 
}