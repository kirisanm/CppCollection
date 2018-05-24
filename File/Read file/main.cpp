// Coded & developed by Kirisan Manivannan

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	ifstream MyFile("example.txt");		// Read the file

	int id;
	string name;
	double money;

	while (MyFile >> id >> name >> money) {
		cout << id << " " << name << " " << money << endl;
	}

	char ch; cin >> ch;			// Keep window open();
    return 0;
}

