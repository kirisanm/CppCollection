// Circular Singly Linked List.cpp : 

// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Linkedlist pp;

	pp.add_front(2);
	pp.add_front(5);
	pp.add_front(6);
	pp.add_front(1);
	pp.add_front(3);			// first in list

	pp.add_back(20);
	pp.add_back(30);
	pp.add_back(40);

	pp.remove_front();

	cout << "All data:" << endl;
	pp.print_all();

	cout << endl;

	cout << "6 times loop:" << endl;
	pp.print_loop();


	char ch; cin >> ch;			// Keep_window_open();

	return 0;
}