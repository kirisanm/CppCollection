// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

void Stack::push(int n) {
	if(size == 100){
		cout << "Stack is full!" << endl;
	}
	else {
		stck_space[size] = n;
		size++;
		return;
	}
}

int Stack::top() {
	if (is_empty()) {
		cout << "Stack is empty!" << endl;
	}
	else {
		int element = stck_space[size - 1];
		return element;
	}
}

int Stack::pop() {
	if (is_empty()) {
		cout << "Stack is empty!" << endl;
	}
	else {
		int element = stck_space[size - 1];
		size--;
		return element;
	}
}

int Stack::get_size() {
	return size;
}

bool Stack::is_empty() {
	if (size == 0) {
		return true;
	}
	else {
		return false;
	}
}
