#include<iostream>
using namespace std;
void triple(int& x) {
	x = x * x * x;

}
int main() {
	int num;
	cout << "enter number";
	cin >> num;
	triple(num);
	cout << num;
	system("pause");


}