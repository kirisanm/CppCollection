// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num = 10;
	int* ptr_num = &num;

	cout << num << endl;		// answer: 10
	cout << ptr_num << endl;	// answer: num's adress
	cout << *ptr_num << endl;	// answer: 10

	char ch; cin >> ch;			// Keep_window_open();
    return 0;
}

