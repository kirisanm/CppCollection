// Coded & developed by Kirisan Manivannan

#include <iostream>
#include <stack>
#include "Header.h"

using namespace std;

int main()
{
	Stack st;
	st.push(50);
	st.push(40);
	st.push(60);
	st.pop();

	int i = st.top();
	int k = st.get_size();

	cout << "top: " << i << endl;
	cout << "size: " << k << endl;

	char ch; cin >> ch;			// keep_window_open();
    return 0;
}
