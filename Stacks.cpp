#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {

}

Stack::~Stack() {
}

int Stack::size() {
	return stackList.size(); 
}

bool Stack::isEmpty() {
	return (size() == 0);
}

void Stack::push(int data) {
	stackList.insertFront(data); 
}

int Stack::pop() {
	if (stackList.isEmpty()) {
		cout << "Stack is empty";
	}

	else { 
		return stackList.deleteFirst();
	}
}

int Stack::peek() {
	return stackList.peekFirst(); 
}
