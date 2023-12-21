/** 
* @file BST.cpp
* @description   BST'nin oluşturulduğu yer.
* @course   1.Öğretim B grubu
* @assignment   2.Ödev
* @date   23.12.2022
* @author   Yusuf Sedat Sağaltıcı  yusuf.sagaltici@ogr.sakarya.edu.tr
*/


#include "../include/BST.hpp"

bool BST::getBalance() { return lHeight == rHeight; }

void BST::operator= (const BST &other) {
	root = other.root;
	lHeight = other.lHeight;
	rHeight = other.rHeight;
}


void BST::insert(Doku doku) {
	if (root == nullptr) {
		root = new Node(doku);
	} else {
		insert(root, doku);
	}
}
void BST::insert(Node* node, Doku doku) {
	if (doku.getMedian() <= (node->data).getMedian()) {
		if (node->left == nullptr) {
			node->left = new Node(doku);
			++lHeight;
		} else {
			insert(node->left, doku);
		}
	} else if (doku.getMedian() > (node->data).getMedian()) {
		if (node->right == nullptr) {
			node->right = new Node(doku);
			++rHeight;
		} else {
			insert(node->right, doku);
		}
	}
}

void BST::postOrderTraversal(Node* root) {
	if (root == nullptr) return;
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	root->data.mutate();	// DNAlar yarıya düşürülüyor
	insert(root->data);
}