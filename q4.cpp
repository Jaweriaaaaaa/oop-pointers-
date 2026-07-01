#include<iostream>
using namespace std;
int main() {
	int arr1[4];
	cout << "enter elements of array 1";
	for (int i = 0; i < 4; i++) {
		cin >> *(arr1 + i);
	}
	int arr2[4];
	cout << "enter elements of array 2";
	for (int i = 0; i < 4; i++) {
		cin >> *(arr2 + i);
	}
	int arr3[4];
	for (int i = 0; i < 4; i++) {
		*(arr3 + i) = *(arr1 + i) + *(arr2 + i);
	}

	cout <<"sum of arr1 and arr2 is";
	for (int i = 0; i < 4; i++) {
		cout << *(arr3 + i);
	}
	system("pause");

}