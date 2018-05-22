// Coded & Developed by Kirisan Manivannan

#include <iostream>
#include <vector>

using namespace std;

// Format: vector<DataType> NameOfVector

int main()
{
	vector<int> myVector;								
	// vector greier å tilpasse seg størrelsen, utifra hvor mye vi pusher inn. 
	// For å sette noe inn i et vektor, så bruker vi: 

	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(1);
	myVector.push_back(8);
	myVector.push_back(0);
	
	// Alltid pop ut de to bakerste tallene.
	for (int i = 0; i < 2; i++) {						
		myVector.pop_back();
	}

	// printer ut kun de positive tallene i vektoren.
	for (unsigned int i = 0; i < myVector.size(); i++) {	 
		cout << "Vector: " << myVector[i] << endl;
	}
	
	char ch; cin >> ch;
    return 0;
}

