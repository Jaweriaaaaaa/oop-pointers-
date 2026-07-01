#include<iostream>
using namespace std;
void traspose(int** arr, int rows, int col) {
	cout << "transpose is";
	for (int j = 0; j < col; j++) {
		for (int i = 0; i < rows; i++) {
			cout << *(*(arr + i) + j);
		}
		cout << endl;
	}
}
int main() {
	int rows, cols;
	cout << "enter rows";
	cin >> rows;
	cout << "enter column";
	cin >> cols;
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; i++) {
		*(matrix + i) = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(*(matrix + i) + j);
		}
	}
	traspose(matrix, rows, cols);
	system("pause");

}