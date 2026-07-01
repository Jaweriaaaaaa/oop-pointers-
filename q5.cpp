#include<iostream>
using namespace std;
int main() {
	int arr[5];
	cout << "enter elements of array";
	for (int i = 0; i < 5; i++) {
		cin >> *(arr + i);
	}
	int* p;
	p = arr;
	int product = 1;

	for (int i = 0; i < 5; i++) {
		product *= *(p++);

}
	cout << product;
	system("pause");
}