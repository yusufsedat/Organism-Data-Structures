/** 
* @file queue.cpp
* @description   Kuyrugun oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/



#include "../include/queue.hpp"

	Queue::Queue() {
		first = nullptr;
		last = nullptr;
	}

	Queue::~Queue() {
		
		Node *curr = first;
		while (curr != nullptr) {
			Node *temp = curr;
			curr = curr->next;
			delete temp;
		}
	}

	void Queue::enqueue(int value) {
		
		Node *newNode = new Node;
		newNode->data = value;
		newNode->next = nullptr;

		
		if (first == nullptr) {
			first = newNode;
			last = newNode;
		}
		
		else {
			last->next = newNode;
			last = newNode;
		}
	}

	int Queue::dequeue() {
		if (first == nullptr) {
			throw "Queue is empty";
		}

		int data = first->data;

		Node *temp = first;
		first = first->next;

		if (first == nullptr) {
			last = nullptr;
		}

		delete temp;
		return data;
	}

	bool Queue::isEmpty() {
		return first == nullptr;
	}