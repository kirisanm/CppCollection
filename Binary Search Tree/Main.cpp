// Coded & Developed by Kirisan Manivannan

#include <iostream>
#include "BT.h"

using namespace std;


int main()
{
	BT mytree;
	mytree.insert(5);
	mytree.insert(15);
	mytree.insert(51);
	mytree.insert(2);
	mytree.insert(1);
	mytree.insert(7);
	mytree.printPrefix();

	BTNode* b1 = mytree.search(20);
	if (b1 != nullptr) {
	cout << b1->value << endl;
	mytree.remove(b1);
}


	keep_window_open();
    return 0;
}

