// Coded & developed by Kirisan Manivannan

#include <iostream>

using namespace std;

void selectionsort(int[], int);

int main(){

	const int length = 100;
	int array[length];
	selectionsort(array, length);

	char ch; cin >> ch;		//Keep window open;
    return 0;
}

void selectionsort(int arr[], int len){
	for (int i = 0; i < len - 1; i++) {
		int small = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[small]) {
				small = j;
			}
			else {
				swap(arr[small], arr[i]);
			}
		}
	}

}

