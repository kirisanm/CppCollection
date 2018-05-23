// Coded & Developeed by Kirisan Manivannan

#include <iostream>

using namespace std;

void insertion_sort(int[], int);

int main()
{
	const int length = 10;
	int array[length];
	insertion_sort(array, length);

	char ch; cin >> ch;				// Keep window open();
    return 0;
}

void insertion_sort(int arr[], int len) {		
	for (int i = 1; i < len; i++) {
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1]) {
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}