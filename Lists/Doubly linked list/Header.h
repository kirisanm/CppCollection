
// Coded and developed by Kirisan Manivannan

#include <iostream>

using namespace std;

struct Node {
	Node(int, Node*, Node*);
	int data;
	Node* next;
	Node* prev;
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

private:
	Node* head;
	int size = 0;
};

