
// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Linkedlist pp;

	pp.add_front(2);
	pp.add_front(5);
	pp.add_front(1);
	pp.add_front(9);

	pp.add_back(20);
	pp.add_back(30);
	pp.add_back(50);

	cout << "All data:" << endl;
	pp.print_all();

	char ch; cin >> ch;			// Keep_window_open();
    return 0;
}
