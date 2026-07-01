#include<iostream>
using namespace std;
int main() {
	int x, y;
	int* p;
	p = &x;
	cout << "enter value of x";
	cin >> x;
	*p = x;
	cout << *p;
	*p = 15;
	cout << "updated valu of x is " << *p;
	p = &y;
	cout << "enter valu of y";
	cin >> y;
	*p = y;
	cout << *p;
	*p = 0;
	cout << "updated valu of y" << *p;
	system("pause");

}