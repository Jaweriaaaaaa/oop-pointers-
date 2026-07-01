#include<iostream>
using namespace std;
int main() {
	int score = 85;
	int* p;
	p = &score;
	*p = 95;
	cout << score;
	system("pause");
}