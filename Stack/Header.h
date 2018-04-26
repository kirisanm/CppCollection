// Coded & developed by Kirisan Manivannan

#include <iostream>

using namespace std;

class Stack {
public:
	void push(int);
	int top();			// Using int to return the value
	int pop();			// Using int to return the value
	int get_size();
	bool is_empty();


private:
	int stck_space[100];
	int size = 0;
};