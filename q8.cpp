#include<iostream>
using namespace std;
void swap(int* x, int* y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main() {
	int a, b;
	cout << "enter number you want to swap";
	cin >> a >> b;
	swap(&a, &b);
	cout << a << b;
	system("pause");
}