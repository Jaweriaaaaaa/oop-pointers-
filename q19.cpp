#include<iostream>
using namespace std;

void inputmarks(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);

	}
}
int highest(int* arr, int size) {
	int largest = -1;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > largest) {
			largest = *(arr + i);
		}
	}
	return largest;

}
int main() {
	int* array, sizee;
	cout << "enter size";
	cin >> sizee;
	array = new int[sizee];
	inputmarks(array, sizee);
	int result = highest(array, sizee);
	cout << result;
	system("pause");

}