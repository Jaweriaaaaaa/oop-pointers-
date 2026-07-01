#include<iostream>
#include<string>
using namespace std;
int length(char* str) {
	int count = 0;
	while (*str) {
		count++;
		*str++;

	}
	return count;
}
void copy(char* d, char* s) {
	while (*s) {
		*d++ = *s++;

	}
	*d = '\0';
}
int main() {
	char str[30];
	cin.getline(str, 30);
	char v[40];
	length(str);
	copy(v, str);
	cout << v;






}