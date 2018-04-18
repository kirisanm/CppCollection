
// Coded and developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

Node::Node(int d, Node* n, Node* p) {
	data = d;
	next = n;
	prev = p;
}

Linkedlist::Linkedlist() {
	head = nullptr;
	size = 0;
}

Linkedlist::~Linkedlist(){
	for (int i = 0; i < size; i++) {
		remove_front();
	}
}

bool Linkedlist::is_empty() {
	if (size == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Linkedlist::add_front(int d) {
	if (is_empty()) {
		Node* newNode = new Node(d, head, nullptr);
		head = newNode;
	}
	else {
		Node* newNode = new Node(d, head, nullptr);
		head->prev = newNode;
		head = newNode;
	}
	size++;
}

void Linkedlist::add_back(int d) {
	if (is_empty()) {
		Node* newNode = new Node(d, head, nullptr);
		head = newNode;
	}
	else {
		Node* temp = head;
		for (int i = 0; i < size; i++) {
			if (temp->next != nullptr) {
				temp = temp->next;
			}
			else {
				Node* newNode = new Node(d, nullptr, temp);
				temp->next = newNode;
			}
		}

	}
	size++;
}

void Linkedlist::remove_front() {
	if (is_empty()) {
		cout << "Empty list" << endl;
	}
	else {
		Node* temp = head->next;
		delete head;
		head = temp;
		size--;
	}
}

void Linkedlist::print_all(){
	Node* temp = head;
	for (int i = 0; i < size;i++) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

