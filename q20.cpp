#include<iostream>
using namespace std;
void inputprice(double* price, double size) {
	for (int i = 0; i<size; i++) {
		cin >> *(price + i);
	}
}
double totalprice(double* price, int size) {
	double bill = 0;
	for (int i = 0; i < size; i++) {
		bill += *(price + i);
	}
	return bill;

}
void increase(double* price, double size, double percent) {
	
}
int main() {
	double* array;
	double size;
	cout << "enter size";
	cin >> size;
	array = new double[size];
	inputprice(array, size);
	int result = totalprice(array, size);
	cout << result;
	system("pasue");
}