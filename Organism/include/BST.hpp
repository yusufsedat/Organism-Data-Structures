#ifndef BST_HPP
#define BST_HPP

#include "doku.hpp"

class Node {

	public:
	Doku data;
	Node* left;
	Node* right;

	Node(Doku data) : data(data), left(nullptr), right(nullptr) {}
};

class BST
{
	private:
		
	public:
		int lHeight = 1, rHeight = 0;
			Node* root;

	BST() : root(nullptr) {}

	void operator= (const BST &other);

	void insert(Doku data);

	void insert(Node* node, Doku data);

	bool getBalance();
	
	void postOrderTraversal(Node* root);
};

#endif