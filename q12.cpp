#include<iostream>
using namespace std;
int main() {


	int size = 5;
	char* arr[5] = { "apple","banana","berry","straw","cherry" };
	
	for (int i = 0; i < 5; i++) {
		cout << *(arr + i);
	}
	system("pause");
}

