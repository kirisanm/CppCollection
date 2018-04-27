// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

void Queue::enqueue(int d) {
	if (size == 100) {
		cout << "Queue is full" << endl;
	}
	else {
		queue_space[size] = d;
		size++;
		tail++;
		return;
	}
}

bool Queue::is_empty() {
	if (size == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Queue::dequeue() {
	if (is_empty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		int element = queue_space[head++];
		size--;
		return element;
	}
}

int Queue::get_size() {
	return size;
}

int Queue::front() {
	if (is_empty()) {
		cout << "Queue is empty" << endl;
	}
	else{
		int element = queue_space[head];
		return element;
	}
}


int Queue::back() {
	if (is_empty()) {
		cout << "Queue is empty" << endl;
	}
	else {
		int element = queue_space[tail - 1];
		return element;
	}
}


int Queue::get_space(){
	return queue_space[100];
}