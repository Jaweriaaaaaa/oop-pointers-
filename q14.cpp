#include<iostream>
using namespace std;
int main() {
	int* p, size;
	cout << "enter size";
	cin >> size;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(p + i);
	}
		for (int i = 0; i < size; i++) {
			cout << *(p + i);

		}
		delete[] p;
		p = NULL;
		system("pause");
		  
}