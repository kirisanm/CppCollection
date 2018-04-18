
// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

Node::Node(int d, Node* n) {
	data = d;
	next = n;
}

int Node::get_data() {
	return data;
}

Node* Node::get_next() {
	return next;
}

void Node::set_next(Node* n) {
	next = n;
}

//---------------------------------

Linkedlist::Linkedlist() {
	head = nullptr;
	tail = nullptr;
	size = 0;
}

Linkedlist::~Linkedlist(){
	// destructor
}

bool Linkedlist::is_empty() {
	if (size == 0) return true;
	return false;
}

void Linkedlist::add_front(int d) {
	if (is_empty()) {
		Node* newNode = new Node(d, nullptr);
		head = newNode;
		tail = newNode;
		size++;
	}
	else {
		Node* newNode = new Node(d, head);
		Node* temp = head;
		if (temp != tail) {
			temp = temp->get_next();
		}
		else {
			temp->set_next(newNode);
		}
		head = newNode;
		size++;
	}
}

void Linkedlist::add_back(int d) {
	if (is_empty()) {
		add_front(d);
	}
	else {
		Node* newNode = new Node(d, head);
		Node* temp = head;

		for (int i = 0; i < size; i++) {
			if (temp != tail) {
				temp = temp->get_next();
			}
			else {
				temp->set_next(newNode);
			}
		}
		tail = newNode;
		size++;
	}

}

void Linkedlist::remove_front() {
	if (is_empty()) {
		cout << "Empty list" << endl;
	}
	else {
		Node* temp = head->get_next();
		delete head;
		head = temp;
		tail->set_next(head);
		size--;
	}
}

void Linkedlist::print_all() {
	if (is_empty()) {
		cout << "Empty list" << endl;
	}
	else {
		Node* temp = head;
		for (int i = 0; i < size; i++) {
			cout << temp->get_data() << " ";
			temp = temp->get_next();
		}
		cout << endl;
	}
}

void Linkedlist::print_loop() {
	for (int i = 0; i < 6; i++) {
		print_all();
	}
}