#include<iostream>
using namespace std;
int findlargest(int* arr, int size) {
	int largest = -1;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > largest) {
			largest = *(arr + i);
		}
	}
	return largest;

}
int main() {
	int* array, size;
	cout << "enter size";
	cin >> size;
	array = new int[size];
	cout << "enter elements of array";
	for (int i = 0; i < size; i++) {
		cin >> *(array + i);
	}
	int result =findlargest(array, size);
	cout << result;
	system("pause");

}