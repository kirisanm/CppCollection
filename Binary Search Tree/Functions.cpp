// Coded & Developed by Kirisan Manivannan

#include <iostream>
#include "BT.h"

using namespace std;

BT::BT()		// Konstruktør
{
	root = nullptr;
}


BT::~BT()		// dekonstruktør
{
	destroy_tree(root);
}

void BT::destroy_tree(BTNode* n) {
	if (n == nullptr) return;
	destroy_tree(n->left);
	destroy_tree(n->right);
	delete n;
}

void BT::insert(int v) {
	root = insert(root, v);
}

BTNode* BT::insert(BTNode* n, int v) {
	if (n == nullptr) return new BTNode(v);
	if (v <= n->value) n->left = insert(n->left, v);
	else n->right = insert(n->right, v);
	return n;
}

BTNode* BT::search(int v) {
	return search(root, v);
}

BTNode* BT::search(BTNode* n, int v) {
	if (n == nullptr) return nullptr;
	if (v == n->value) return n;
	if (v < n->value) return search(n->left, v);
	return search(n->right, v);
}

void BT::remove(BTNode* rem){
	if (rem == nullptr) {
		cout << "remove nullptr from tree" << endl;
	} // error
	else {
		root = remove(root, rem);
	}
}

BTNode* BT::remove(BTNode* n, BTNode* rem) {
	if (n == nullptr) {
		cout << "Node not in tree" << endl;
	}// error
	if (n == rem) {
		// har funnet noden som skal slettes
		if (n->left == nullptr) {
			BTNode* tmp = n->right;
			delete n;
			return tmp;
		}
		if (n->right == nullptr) {
			BTNode* tmp = n->left;
			delete n;
			return tmp;
		}
		BTNode* minimum = findMinimum(n->right);
		n->value = minimum->value;
		n->right = remove(n->right, minimum);
	}
	else if (rem->value <= n->value) {
		n->left = remove(n->left, rem);
	}
	else {
		n->right = remove(n->right, rem);
	}
	return n;
}

BTNode* BT::findMinimum(BTNode* n) {
	if (n->left == nullptr) return n;
	return findMinimum(n->left);
}

void BT::printPrefix() {
	printPrefix(root);
	cout << endl;
}

void BT::printPrefix(BTNode* n) {
	if (n == nullptr) return;
	cout << n->value << " ";
	printPrefix(n ->left);
	printPrefix(n->right);
}

void BT::printPostfix() {
	printPrefix(root);
}

void BT::printPostfix(BTNode* n) {
	// gjør resten selv.
}