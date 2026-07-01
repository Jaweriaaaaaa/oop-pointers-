#include<iostream>
using namespace std;
void triple(int* p) {
	*p *= 3;
}
int main() {
	int num;
	cout << "enter num";
	cin >> num;
	triple(&num);
	cout << num;
	system("pause");
}