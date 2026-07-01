#include<iostream>
using namespace std;
void mycopy(char* p, const char* pr) {
	while (*pr) {
		*p++ = *pr++;
		
	}
	*p = '\0';
}
int main() {
	char str1[50];
	cout << "enter line";
	cin.getline(str1, 50);
	char str2[60];
 mycopy(str2, str1);
 cout << str2;
 system("pause");

}