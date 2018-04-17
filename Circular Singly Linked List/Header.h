
// Coded & developed by Kirisan Manivannan

#include <iostream>

using namespace std;

class Node {
public:
	Node(int d, Node* n);
	int get_data();
	Node* get_next();
	void set_next(Node*);

private:
	int data;
	Node* next;
};

class Linkedlist {
public:
	Linkedlist();
	~Linkedlist();

	bool is_empty();
	void add_front(int);
	void add_back(int);
	void remove_front();

	void print_all();
	void print_loop();

private:
	Node* head;
	Node* tail;
	int size;
};