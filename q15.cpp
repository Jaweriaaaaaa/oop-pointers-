#include<iostream>
using namespace std;
int main() {
	int* p1 = new int[3];
	*(p1 + 0) = 10;
	*(p1 + 1) = 20;
	*(p1 + 2) = 30;
	int* pr = new int[3];
	for (int i = 0; i < 3; i++) {
		*(pr + i) = *(p1 + i);
	}
	delete[]pr;
	cout << p1;
	cout << *(p1 + 0);
	system("pause");
}

