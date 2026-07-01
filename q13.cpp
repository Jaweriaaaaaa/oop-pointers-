#include<iostream>
using namespace std;
int main() {
	int* p;
	p = new int;
	cin >> *p;
	cout << *p;
	delete p;
	p = NULL;
	if (p != NULL) {
		cout << *p;
	}
	system("pause");
}