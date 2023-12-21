#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
private:
	// Define a Node struct to hold the data and a pointer to the next Node
	struct Node {
		int data;
		Node *next;
	};

	// Initialize pointers to the first and last nodes in the queue
	Node *first;
	Node *last;

public:
	// Constructor
	Queue();

	// Destructor
	~Queue();

	// Enqueue an element
	void enqueue(int value);

	// Dequeue an element
	int dequeue();

	// Check whether the queue is empty
	bool isEmpty();
};


#endif