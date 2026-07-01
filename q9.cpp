#include<iostream>
using namespace std;
void addarray(int* arr1, int* arr2, int* arr3, int size) {
	for (int i = 0; i < size; i++) {
		*(arr3 + i) = *(arr1 + i) + *(arr2 + i);

	}
}
int main() {
	int size = 3;
	int array1[3];
	cout << "enter elements of array";
	for (int i = 0; i < 3; i++) {
		cin >> *(array1 + i);
	}

	int array2[3];
	cout << "enter elements of array2";
	for (int i = 0; i < 3; i++) {
		cin >> *(array2 + i);
	}

	int array3[3];
	addarray(array1, array2, array3, 3);
	cout << "sum of array 1 and 2 is ";
	for (int i = 0; i < 3; i++) {
		cout << *(array3 + i);
	}
	system("pause");
}