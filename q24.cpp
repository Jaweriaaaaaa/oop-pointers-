#include<iostream>
using namespace std;
void sum(int** matrix1, int row1, int col1, int** matrix2, int row2, int col2) {
	int** matrix3;
	if (row1 != row2 || col1 != col2) {
		cout << "addition not posssible";

	}
	else {
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col1; j++) {
				*(*(matrix3 + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);

			}
		}
	}
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {

			cout << *(*(matrix3 + i) + j) << " ";
		}
		cout << endl;
	}
}
int main() {
	int** arr1;
	int row1;
	cin >> row1;
	int col1;
	cin >> col1;
	arr1 = new int* [row1];
	for (int i = 0; i < row1; i++) {
		*(arr1 + i) = new int[col1];
	}
	for (int i = 0; i< row1; i++) {
		for (int j = 0; j < col1; j++) {
			cin >> *(*(arr1 + i) + j);
		}
	}

	int** arr2;
	int row2;
	cin >> row2;
	int col2;
	cin >> row2;
	int col2;
	cin >> col2;
	arr2 = new int* [row2];
	for (int i = 0; i < row2; i++) {
		*(arr2 + i) = new int[col2];
	}
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			cin >> *(*(arr2 + i) + j);
		}
	}
	sum(arr1, row1, col1, arr2, row2, col2);
	system("pause");
}