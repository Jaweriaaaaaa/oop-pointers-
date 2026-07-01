#include<iostream>
using namespace std;
int main() {


	char str[50];
	cout << "enter line";
	cin.getline(str, 50);
	char* p;
	p = str;
	while (*p != 0) {
		p++;
		
	}
	p--; //move to last character;
		while (p >= str) {
			cout << *p;
			p--;
		}

	system("pause");
}

