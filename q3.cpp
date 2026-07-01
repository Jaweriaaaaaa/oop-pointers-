#include<iostream>
using namespace std;
int main() {
	int arr[5];
	cout << "enter elements of array";
	for (int i = 0; i < 5; i++) {
		cin >> *(arr + i);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum = sum + *(arr + i);
	}
	cout << sum;
	system("pause");
}