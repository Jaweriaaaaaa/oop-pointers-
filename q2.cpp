#include<iostream>
using namespace std;
int main() {
	int arr[3] = { 40,60,80 };
	int* p;
	p = arr;
	for (int i = 0; i < 3; i++) {
		cout << *(p++) << endl;

	}
	system("pause");
}