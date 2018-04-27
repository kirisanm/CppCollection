// Coded & developed by Kirisan Manivannan

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Queue Q;

	Q.enqueue(6);
	Q.enqueue(3);
	Q.enqueue(8);
	Q.enqueue(10);
	Q.enqueue(15);

	Q.dequeue();
	Q.dequeue();
	Q.dequeue();

	int f = Q.front();
	int b = Q.back();
	int s = Q.get_size();
	int sp = Q.get_space();
	
	cout << "front: " << f << endl;
	cout << "back: " << b << endl;
	cout << endl;
	cout << "size: " << s << endl;
	cout << "space used: " << sp << endl;

	char ch; cin >> ch;			// Keep_window_open();
    return 0;
}

