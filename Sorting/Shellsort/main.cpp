// Coded & Developed by Kirisan Manivannan

#include <iostream>


void shell_sort(int[], int);
void insertion_sort(int[], int, int);


int main{
	const int length = 100;
	int array[length];
	shell_sort(array, length);
	
	char ch; cin >> ch; 		// Keep window open();
	return 0;
}

void shell_sort(int arr[], int len){
	int gap = len / 2;
	while(gap > 0){
		insertion_sort(arr, len, gap);
		gap = gap / 2;
	}
}

void insertion_sort(int arr[], int len, int gap) {
	for (int i = gap; i < len; i++) {
		int j = i;
		while (j >= gap && arr[j] < arr[j - gap]) {
			swap(arr[j], arr[j - gap]);
			j= j-gap;
		}
	}
}