// Coded & Developed by Kirisan Manivannan

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ofstream MyFile("example.txt");		// Write/Create file

	cout << "Enter ID, name & money balance" << endl;
	cout << "Press q to quit" << endl;

	int id;
	string name;
	double money;

	while (cin >> id >> name >> money) {
		MyFile << id << " " << name << " " << money << endl;

	}
	

	char ch; cin >> ch;					// Keep window open();	
    return 0;
}

