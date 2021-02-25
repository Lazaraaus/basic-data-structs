#include "Node.h"


Node::Node(int value, Node* n) {
	data = value;
	next = n; 
}

Node::Node() {
	next = nullptr; 
}