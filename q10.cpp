#include<iostream>
#include<string>
using namespace std;

int countchars(char* p) {
	int count = 0;
	

	while (*p) {
		count++;
		*p++;
		  

	}
	return count;
}
int main() {
	char str[50];
	cout << "enter line";
	cin.getline(str, 50);
	cout<<countchars(str);
	
	system("pause");
}