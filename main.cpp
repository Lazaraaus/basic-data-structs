#include "Stack.h"
#include "LinkedList.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main() {

	Stack newStack = Stack(); 
	/*LinkedList newList = LinkedList(); 


	newList.insertFront(1);
	newList.insertFront(2);
	newList.insertFront(3); 
	newList.printList();

	*/

	cout << "Is the new stack empty?    " << newStack.isEmpty() << "\n";

	cout << "Let's add some values \n"; 
	
	newStack.push(1);

	cout << "Let's look at the top of the stack: " << newStack.peek() << "\n"; 

	newStack.pop(); 
	newStack.pop(); 

	cout << "Is the new stack empty now?   " << newStack.isEmpty() << "\n"; 

	Queue newQueue = Queue(); 

	cout << "Let's see if our Queue is empty: " << newQueue.isEmpty() << "\n";

	cout << "Let's add some values \n"; 
	newQueue.Enqueue(1);
	newQueue.Enqueue(2);
	newQueue.Enqueue(3); 

	cout << "Let's look at the front of the Queue: " << newQueue.peekFront() << "\n"; 

	cout << "Let's look at the back of the Queue: " << newQueue.peekBack() << "\n"; 

	newQueue.Dequeue(); 
	newQueue.Dequeue(); 
	newQueue.Dequeue(); 

	cout << "Let's see if our Queue is empty: " << newQueue.isEmpty() << "\n";

	


	

	/*
	cout << "Let's look at the top of the stack: " << newStack.peek() << "\n"; 

	cout << "Let's pop the top of the stack" << newStack.pop() << "\n"; 

	cout << "Let's take one final look at the stack" << newStack.peek(); 
	*/


}
