// Coded & developed by Kirisan Manivannan

#include <iostream>

using namespace std;

class Queue {
public:
	//Queue();
	//~Queue();

	void enqueue(int);
	bool is_empty();
	int dequeue();
	int front();
	int back();
	int get_size();
	int get_space();


private:
	int queue_space[100];
	int size = 0;
	int head = 0;
	int tail = 0;
};